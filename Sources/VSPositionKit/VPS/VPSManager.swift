//
// VPSManager
// VSTT2
//
// Created by Hripsime on 2022-01-31.
// Copyright Virtual Stores - 2021

import Combine
import CoreGraphics
import CoreLocation
import Foundation
import os.log
import UIKit
import VSFoundation
import VSSensorFusion
import vps

public let vpsVersion = VPSConfig.shared.VPS_VERSION
public let velocityModelInterfaceVersion = VPSConfig.shared.VELOCITY_MODEL_INTERFACE_VERSION

final class VPSManager: VPSWrapper {
  @Inject var sensor: VPSSensorManager

  var recordingPublisher: CurrentValueSubject<(identifier: String, data: String, sessionId: String, lastFile: Bool)?, Never> = .init(nil)
  var outputSignalPublisher: CurrentValueSubject<VPSOutputSignal?, Never> = .init(nil)
  var vpsParticleFilterSettings: [String:String] { particleFilterSettings.map() }

  private(set) var pathfinder: BasePathfinder?
  var vpsRunning: Bool = false

  /// vps properties
  private let serialDispatch = DispatchQueue(label: "TT2VPSMANAGERSERIAL")
  private let automaticSensorRecording: Bool
  private let recorder: VPSRecorder
  private let floorLevelHandler: FloorLevelHandler
  private let modelManager: VPSModelManager
  private let modelToEventParameters: ModelToEventParameters
  private let particleFilterSettings: ParticleFilterSettings
  private let positionServiceSettings: PositionServiceSettings?
  private let engine: PositionEngineSettings
  private var vps: VPS?
  private lazy var nlModel: NLModel? = {
    guard 
      #available(iOS 14.0, *),
      positionServiceSettings?.nlModelActivated ?? false,
      modelManager.nlParams != nil
    else { return nil }
    return VPSNLModel(manager: modelManager)
  }()

  var isRecording: Bool { recorder.isRecording }

  private var cancellable = Set<AnyCancellable>()
  private var particleFilterOffsetAngle: Float?

  init(floorHeightDiffInMeters: Double, trueNorthOffset: Double = 0.0, rtls: RtlsOptions, automaticSensorRecording: Bool, mapData: MapFence, positionServiceSettings: PositionServiceSettings?, converter: ICoordinateConverter, modelManager: VPSModelManager, engine: TT2Settings.TT2Engine) {
    self.automaticSensorRecording = automaticSensorRecording
    self.recorder = VPSRecorder(maxRecordingTimePerPartInMillis: positionServiceSettings?.intValues?["maxRecordingTimePerPartInMillis"]?.asLong)
    self.floorLevelHandler = FloorLevelHandler(floorLevels: [KotlinLong(value: rtls.id):FloorLevelData(data: FloorData(rtls: rtls, mapFence: mapData, metersToNextFloor: floorHeightDiffInMeters, converter: converter))], initialFloorLevelId: nil, debug: false)
    self.modelManager = modelManager
    self.modelToEventParameters = ModelToEventParameters(
      useSquareDriftFilter: positionServiceSettings?.useSquareDriftFilter ?? VPSModelToEventParameters.shared.default_.useSquareDriftFilter,
      squareDriftFilterGain: positionServiceSettings?.squareDriftFilterGain ?? VPSModelToEventParameters.shared.default_.squareDriftFilterGain
    )
    self.particleFilterSettings = Self.getParticleFilterSettings(settings: positionServiceSettings)
    self.positionServiceSettings = positionServiceSettings
    switch engine {
    case .gpsFusion:
      self.engine = .GPSFusion(mlAdjustmentActivated: true, useNoMapFilter: false)
    case .indoor:
      self.engine = .ParticleFilter(particleFilterSettings: particleFilterSettings)
    case .noMap:
      self.engine = .GPSFusion(mlAdjustmentActivated: false, useNoMapFilter: true)
    case .openTerrain:
      self.engine = .GPSFusion(mlAdjustmentActivated: false, useNoMapFilter: false)
    }
    self.bindPublishers()
    //Log.shared.outputHandler = self
  }

  deinit {
    cancellable.removeAll()
  }

  func bindPublishers() {
    sensor.dataPublisher
      .compactMap { $0 }
      .sink { [weak self] (data) in
        guard self?.vpsRunning ?? false else { return }
        let signal = InputSignal.SensorData(rawSensorData: data)
        self?.recorder.record(inputSignal: signal)
        self?.serialDispatch.async {
          //pthread_setname_np("VPSManager")
          self?.vps?.onInputSignal(signal: signal)
        }
      }.store(in: &cancellable)

    recorder.dataPublisher
      .compactMap { $0 }
      .sink { [weak self] in self?.recordingPublisher.send($0) }
      .store(in: &cancellable)

    BackgroundAccessManager.locationPublisher
      .compactMap { $0 }
      .sink { (result) in
        switch result {
        case .finished: break
        case .failure(let error): break
        }
      } receiveValue: { [weak self] (location) in
        guard let self = self else { return }
        if vpsRunning {
          let signal = InputSignal.LngLat(
            nanoTimestamp: .nanoTime,
            systemTimestamp: .currentTimeMillis,
            location: location.asLocation
          )
          recorder.record(inputSignal: signal)
          serialDispatch.async {
            self.vps?.onInputSignal(signal: signal)
          }
        } else {
          outputSignalPublisher.send(.gps(.init(
            latitude: location.coordinate.latitude,
            longitude: location.coordinate.longitude,
            accuracy: location.horizontalAccuracy,
            bearing: location.course,
            altitude: location.altitude
          )))
        }
      }.store(in: &cancellable)

    BackgroundAccessManager.locationHeadingPublisher
      .compactMap { $0 }
      .sink { (result) in
        switch result {
        case .finished: break
        case .failure(let error): break
        }
      } receiveValue: { [weak self] (heading) in
        guard let self = self else { return }
        //print("HEADING", 450 - heading.headingDirection)
        //print("START")
        //print("MagneticHeading", heading.magneticHeading)
        //print("TrueHeading", heading.trueHeading)
        //print("HeadingAccuracy", heading.headingAccuracy)
        //print("X", heading.x)
        //print("Y", heading.y)
        //print("Z", heading.z)
        //print("Timestamp", heading.timestamp.currentTimeMillis)
        //print("END")
        if vpsRunning {
          let signal = InputSignal.CompassHeading(
            nanoTimestamp: .nanoTime,
            systemTimestamp: .currentTimeMillis,
            magneticHeading: heading.magneticHeading.asFloat,
            trueHeading: heading.trueHeading.asFloat,
            headingAccuracy: heading.headingAccuracy.asFloat,
            x: heading.x.asFloat,
            y: heading.y.asFloat,
            z: heading.z.asFloat
          )
          recorder.record(inputSignal: signal)
          serialDispatch.async {
            self.vps?.onInputSignal(signal: signal)
          }
        } else {
          outputSignalPublisher.send(.rotation(heading: 450 - heading.headingDirection))
        }
      }.store(in: &cancellable)
  }

  var sessionId: String?
  func set(sessionId: String?) {
    self.sessionId = sessionId
  }

  func start() {
    if automaticSensorRecording {
      recorder.startRecording(sessionId: sessionId)
    }
    serialDispatch.async { [weak self] in
      guard let self = self else { return }
      pthread_setname_np("VPSManager")
      nlModel?.setFloorLevelHandler(floorLevelHandler: floorLevelHandler)
      vps = VPS(
        velocityModel: VPSVelocityModel(manager: modelManager),
        floorLevelHandler: floorLevelHandler,
        outputHandler: self,
        system: .ios,
        featureToTensorValueParams: FeatureToTensorValueParams(packageFrequency: 30),
        interpolationParams: IosInterpolationModuleParams.shared.default_,
        modelToEventParameters: modelToEventParameters,
        positionEngineSettings: engine,
        floorChangeInterpreterSettings: VPSFloorChangeHandlerSettings.shared.default_,
        rotationHandlerSettings: .init(rotationOutputLimit: 3),
        magnetometerDriftEstimatorParams: VPSMagnetometerDriftEstimatorParams.shared.iosMagnetometerDriftEstimatorParams,
        debugMode: false,
        extendedDebugMode: false,
        modelOutputHandler: nil,
        nlModel: nlModel,
        isRotationOutputActive: true
      )
    }
  }

  func startRecording(sessionId: String?) {
    guard !isRecording else { return }
    recorder.startRecording(sessionId: sessionId)
  }

  func stop() {
    let signal = InputSignal.Exit(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis)
    recorder.record(inputSignal: signal)
    serialDispatch.async {
      //pthread_setname_np("VPSManager")
      self.vps?.onInputSignal(signal: signal)
    }
    recorder.stopRecording()
    //vps = nil
    vpsRunning = false
    particleFilterOffsetAngle = nil
  }

  func stopRecording() {
    guard isRecording else { return }
    recorder.stopRecording()
  }

  func startNavigation(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool) {
    start()
    vpsRunning = true
    let signal = InputSignal.StartPosition(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, positions: positions.map({ $0.asCoordinateF }), syncPosition: syncPosition, syncAngle: syncAngle, angle: Float(angle), uncertainAngle: uncertainAngle)
    recorder.record(inputSignal: signal)
    serialDispatch.async {
      //pthread_setname_np("VPSManager")
      self.vps?.onInputSignal(signal: signal)
    }
  }

  func startLngLatFixedNorth(location: CLLocation) {
    start()
    vpsRunning = true
    let signal = InputSignal.StartLngLatFixedNorth(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, location: location.asLocation)
    recorder.record(inputSignal: signal)
    serialDispatch.async {
      self.vps?.onInputSignal(signal: signal)
    }
  }

  func syncPosition(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool) {
    let signal = InputSignal.SyncPosition(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, positions: positions.map({ $0.asCoordinateF }), syncPosition: syncPosition, syncAngle: syncAngle, angle: Float(angle), uncertainAngle: uncertainAngle)
    recorder.record(inputSignal: signal)
    serialDispatch.async {
      //pthread_setname_np("VPSManager")
      self.vps?.onInputSignal(signal: signal)
    }
  }

  func syncPosition(location: CLLocation) {
    let signal = InputSignal.SyncLngLat(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, location: location.asLocation)
    recorder.record(inputSignal: signal)
    serialDispatch.async {
      //pthread_setname_np("VPSManager")
      self.vps?.onInputSignal(signal: signal)
    }
  }

  func syncGNSS(isStartSequence: Bool) {
    let signal = InputSignal.SyncGNSSSync(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, isStartSequence: isStartSequence)
    recorder.record(inputSignal: signal)
    serialDispatch.async {
      self.vps?.onInputSignal(signal: signal)
    }
  }

  func syncManual(location: CLLocation?, isStartSequence: Bool) {
    let signal = InputSignal.SyncManualSync(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, location: location?.asLocation, isStartSequence: isStartSequence)
    recorder.record(inputSignal: signal)
    serialDispatch.async {
      self.vps?.onInputSignal(signal: signal)
    }
  }

  func forceSyncPosition(position: CGPoint, angle: Double) {
    //let signal = InputSignal.SyncForce(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, position: position.asCoordinateF, angle: angle.asFloat)
    //recorder.record(inputSignal: signal)
    //serialDispatch.async {
    //  self.vps?.onInputSignal(signal: signal)
    //}
  }

  func syncAngleCorrection(angle: Double, positions: [CGPoint]) {
    let syncPosition = InputSignal.SyncPosition(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, positions: positions.map({ $0.asCoordinateF }), syncPosition: true, syncAngle: false, angle: 0.0, uncertainAngle: false)
    let angleCorrection = InputSignal.AngleCorrection(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, angle: Float(angle))

    recorder.record(inputSignal: syncPosition)
    recorder.record(inputSignal: angleCorrection)
    serialDispatch.async {
      self.vps?.onInputSignal(signal: syncPosition)
      self.vps?.onInputSignal(signal: angleCorrection)
    }
  }

  func setPathfinder(pathfinder: BasePathfinder) {
    self.pathfinder = pathfinder
  }

  // why does this exist? is this not the same as sync?
  func setPosition(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool) {
    serialDispatch.async { [self] in
      //pthread_setname_np("VPSManager")
      if vpsRunning {
        self.syncPosition(positions: positions, syncPosition: syncPosition, syncAngle: syncAngle, angle: angle, uncertainAngle: uncertainAngle)
      } else {
        startNavigation(positions: positions, syncPosition: syncPosition, syncAngle: syncAngle, angle: angle, uncertainAngle: uncertainAngle)
      }
    }
  }

  func processMLPath(path: [CGPoint], pathEndPoint: CGPoint) -> VSFoundation.MLProcessedPath {
    MLPathProcessor().processPath(
      path: path.map({ $0.asKotlinDoubleArray }),
      pathEndPoint: pathEndPoint.asKotlinDoubleArray
    ).asMLProcessedPath
  }

  private var startAngleCached: Double?
  func prepareAngle() {
    //guard let lastQuat = vps?.getLastRotation() else { return }

    //let quatUtils = QuaternionUtils()
    //let newQuat = quatUtils.multiplyQuaternion(q: lastQuat, p: quatUtils.quaternionInverse(q: quatUtils.quaternionExtractPitch(q: lastQuat)))

    //let array: VSPositionKit.KotlinFloatArray = KotlinFloatArray(size: 3)
    //array.set(index: 0, value: 0)
    //array.set(index: 1, value: 1)
    //array.set(index: 2, value: 0)

    //startAngleCached = VectorUtils().radiansToDegrees(angRad: Double(VectorUtilsKt.getRotatedAxisAngleOnPlane(rotationVector: newQuat, axis: array)))
  }

  func delayedAngle() -> Double {
    //guard let lastQuat = vps?.getLastRotation(), let cachedAngle = startAngleCached else { return 0.0 }

    //let quatUtils = QuaternionUtils()
    //let newQuat = quatUtils.multiplyQuaternion(q: lastQuat, p: quatUtils.quaternionInverse(q: quatUtils.quaternionExtractPitch(q: lastQuat)))

    //let array: VSPositionKit.KotlinFloatArray = KotlinFloatArray(size: 3)
    //array.set(index: 0, value: 0)
    //array.set(index: 1, value: 1)
    //array.set(index: 2, value: 0)

    //startAngleCached = nil
    //return VectorUtils().radiansToDegrees(angRad: Double(VectorUtilsKt.getRotatedAxisAngleOnPlane(rotationVector: newQuat, axis: array))) - cachedAngle
    return 0.0
  }

  static func getDefaultParticleFilterSettings(settings: PositionServiceSettings?) -> ParticleFilterSettings {
    guard
      let option = settings?.stringValues?[.PARTICLE_FILTER_SETTINGS],
      let defaultEnum = VPSParticleFilterSettingsEnum.init(rawValue: option)
    else { return VPSParticleFilterSettings.shared.default_ }
    switch defaultEnum {
    case .´default´: return VPSParticleFilterSettings.shared.default_
    case .nl: return VPSParticleFilterSettings.shared.v2
    case .v1: return VPSParticleFilterSettings.shared.v1
    }
  }

  static func getParticleFilterSettings(settings: PositionServiceSettings?) -> ParticleFilterSettings {
    ParticleFilterSettings(
      version: getDefaultParticleFilterSettings(settings: settings).version,
      uxPositionActivated: settings?.boolValues?[.PARTICLE_FILTER_SETTINGS_UX_ACTIVATED] ?? getDefaultParticleFilterSettings(settings: settings).uxPositionActivated,
      mlPositionActivated: settings?.boolValues?[.PARTICLE_FILTER_SETTINGS_ML_ACTIVATED] ?? getDefaultParticleFilterSettings(settings: settings).mlPositionActivated,
      particlePositionActivated: settings?.boolValues?[.PARTICLE_FILTER_SETTINGS_POS_ACTIVATED] ?? getDefaultParticleFilterSettings(settings: settings).particlePositionActivated,
      particlesOutputActivated: settings?.boolValues?[.PARTICLE_FILTER_SETTINGS_PARTICLES_OUTPUT_ACTIVATED] ?? getDefaultParticleFilterSettings(settings: settings).particlesOutputActivated,
      particleFilterVersion: getParticleFilterVersion(settings: settings) ?? getDefaultParticleFilterSettings(settings: settings).particleFilterVersion,
      particleFilterParams: getParticleFilterParams(settings: settings, defaultParams: getDefaultParams(settings: settings)),
      randomNumberGeneratorSeed: nil,
      saveOutputSignals: false,
      saveWiFiStatusUpdate: false,
      saveWiFiScans: false,
      scoringParams: getScoringParams(settings: settings, defaultParams: getDefaultScoringParams(settings: settings)),
      clusterSwapOutputActivated: false,
      trustedPositionParams: getTrustedPositionParams(settings: settings, defaultParams: getDefaultTrustedPositionParams(settings: settings)),
      positionStdSettings: getPositionStdSettings(settings: settings)
    )
  }

  static func getParticleFilterVersion(settings: PositionServiceSettings?) -> ParticleFilterSettings.ParticleFilterVersion? {
    guard
      let option = settings?.stringValues?[.PARTICLE_FILTER_SETTINGS_VERSION],
      let defaultEnum = VPSParticleFilterSettingsVersionEnum(rawValue: option)
    else { return nil }
    switch defaultEnum {
    case .v1: return ParticleFilterSettings.ParticleFilterVersion.v1
    case .v2: return ParticleFilterSettings.ParticleFilterVersion.v2
    }
  }

  static func getDefaultParams(settings: PositionServiceSettings?) -> ParticleFilterParams {
    guard
      let option = settings?.stringValues?[.PARTICLE_FILTER_DEFAULT_PARAMS],
      let defaultEnum = VPSParticleFilterDefaultEnum(rawValue: option)
    else { return getDefaultParticleFilterSettings(settings: settings).particleFilterParams }
    switch defaultEnum {
    case .´default´: return VPSParticleFilterParams.shared.default_
    case .compass: return VPSParticleFilterParams.shared.compass
    case .v1: return VPSParticleFilterParams.shared.particleFilterV1
    case .v2: return VPSParticleFilterParams.shared.particleFilterV2
    case .v3: return VPSParticleFilterParams.shared.particleFilterV3
    case .mixedGauss: return VPSParticleFilterParams.shared.particleFilterMixedGauss
    case .sprinkle: return VPSParticleFilterParams.shared.sprinkleFilter
    }
  }

  static func getParticleFilterParams(settings: PositionServiceSettings?, defaultParams: ParticleFilterParams) -> ParticleFilterParams {
    ParticleFilterParams(
      version: defaultParams.version,
      maxNumParticles: settings?.maxNumParticles ?? defaultParams.maxNumParticles,
      minNumParticles: settings?.minNumParticles ?? defaultParams.minNumParticles,
      stepLengthStd: settings?.stepLengthStd ?? defaultParams.stepLengthStd,
      stepDirectionStd: settings?.stepDirectionStd ?? defaultParams.stepDirectionStd,
      biasStd: settings?.biasStd ?? defaultParams.biasStd,
      biasLimit: settings?.biasLimit ?? defaultParams.biasLimit,
      secondBiasStd: settings?.secondBiasStd ?? defaultParams.secondBiasStd,
      secondBiasMean: settings?.secondBiasMean ?? defaultParams.secondBiasMean,
      secondBiasLimit: settings?.secondBiasLimit ?? defaultParams.secondBiasLimit,
      mixingFactor: settings?.mixingFactor ?? defaultParams.mixingFactor,
      startMethod: settings?.startMethod ?? defaultParams.startMethod,
      startPositionStd: settings?.startPositionStd ?? defaultParams.startPositionStd,
      startDirectionStd: settings?.startDirectionStd ?? defaultParams.startDirectionStd,
      syncMethod: settings?.syncMethod ?? defaultParams.syncMethod,
      syncPositionStd: settings?.syncPositionStd ?? defaultParams.syncPositionStd,
      syncDirectionStd: settings?.syncDirectionStd ?? defaultParams.syncDirectionStd,
      rescuePositionStd: settings?.rescuePositionStd ?? defaultParams.rescuePositionStd,
      rescueDirectionStd: settings?.rescueDirectionStd ?? defaultParams.rescueDirectionStd,
      kldEpsilon: settings?.kldEpsilon ?? defaultParams.kldEpsilon,
      kldDelta: settings?.kldDelta ?? defaultParams.kldDelta,
      kldZ: settings?.kldZ ?? defaultParams.kldZ,
      binSize: settings?.binSize ?? defaultParams.binSize,
      uxPositionConfidence: settings?.uxPositionConfidence ?? defaultParams.uxPositionConfidence,
      angleOffsetGainDegPerMin: settings?.angleOffsetGainDegPerMin ?? defaultParams.angleOffsetGainDegPerMin,
      speedFactor: settings?.speedFactor ?? defaultParams.speedFactor,
      naiveOutputSyncMovement: settings?.naiveOutputSyncMovement ?? defaultParams.naiveOutputSyncMovement,
      useMLSyncSpeedFilter: settings?.useMLSyncSpeedFilter ?? defaultParams.useMLSyncSpeedFilter,
      sprinkleSyncThreshold: settings?.sprinkleSyncThreshold ?? defaultParams.sprinkleSyncThreshold,
      sprinklePercentage: settings?.sprinklePercentage ?? defaultParams.sprinklePercentage,
      useRayTraceSensorModel: settings?.useRayTraceSensorModel ?? defaultParams.useRayTraceSensorModel,
      nlThreshold: settings?.nlThreshold ?? defaultParams.nlThreshold,
      rescueOnNL: settings?.rescueOnNL ?? defaultParams.rescueOnNL,
      wiFiDistanceSyncCriteria: settings?.wiFiDistanceSyncCriteria ?? defaultParams.wiFiDistanceSyncCriteria,
      idleWiFiSecondsCriteria: settings?.idleWiFiSecondsCriteria ?? defaultParams.idleWiFiSecondsCriteria,
      wiFiPathLossCoefficient: settings?.wiFiPathLossCoefficient ?? defaultParams.wiFiPathLossCoefficient,
      wiFiMeasuredPower: settings?.wiFiMeasuredPower ?? defaultParams.wiFiMeasuredPower,
      swapSprinkleInterval: settings?.swapSprinkleInterval ?? defaultParams.swapSprinkleInterval,
      swapSprinkleEndCount: settings?.swapSprinkleEndCount ?? defaultParams.swapSprinkleEndCount,
      swapSprinkleRatio: settings?.swapSprinkleRatio ?? defaultParams.swapSprinkleRatio,
      mlStepHistorySize: settings?.mlStepHistorySize ?? defaultParams.mlStepHistorySize,
      idlePositionTimeThreshold: settings?.idlePositionTimeThreshold ?? defaultParams.idlePositionTimeThreshold,
      stdQuantile: settings?.stdQuantile ?? defaultParams.stdQuantile,
      uncertainThreshold: settings?.uncertainThreshold ?? defaultParams.uncertainThreshold,
      mlStepHistorySizeForOOBComeback: settings?.mlStepHistorySizeForOOBComeback ?? defaultParams.mlStepHistorySizeForOOBComeback,
      wiFiStatusTimeLimit: settings?.wiFiStatusTimeLimit ?? defaultParams.wiFiStatusTimeLimit,
      allowOutOfBounds: settings?.allowOutOfBounds ?? defaultParams.allowOutOfBounds,
      maxAllowedStd: settings?.maxAllowedStd ?? defaultParams.maxAllowedStd,
      rssiScanThreshold: defaultParams.rssiScanThreshold,
      bundleAPsInScan: defaultParams.bundleAPsInScan,
      scanGridResolution: defaultParams.scanGridResolution,
      scanErrorRatioThreshold: defaultParams.scanErrorRatioThreshold,
      wiFiSprinkleDirectionStd: defaultParams.wiFiSprinkleDirectionStd,
      scanErrorSprinkleLocationStdCoefficient: defaultParams.scanErrorSprinkleLocationStdCoefficient,
      rescueKDEAngRatio: defaultParams.rescueKDEAngRatio,
      rescueStartAngRatio: defaultParams.rescueStartAngRatio,
      rescueCompassAngRatio: defaultParams.rescueCompassAngRatio,
      wifiSprinkleDistanceCriteria: defaultParams.wifiSprinkleDistanceCriteria,
      floorSwapPositionStd: defaultParams.floorSwapPositionStd,
      floorSwapDirectionStd: defaultParams.floorSwapDirectionStd,
      floorSwapSprinklePositionStd: defaultParams.floorSwapSprinklePositionStd,
      floorSwapSprinkleDirectionStd: defaultParams.floorSwapSprinkleDirectionStd,
      idleWiFiSprinkle: defaultParams.idleWiFiSprinkle
    )
  }

  static func getDefaultScoringParams(settings: PositionServiceSettings?) -> ScoringParams {
    guard
      let option = settings?.stringValues?[.SCORING_PARAMS_VERSION],
      let defaultEnum = VPSScoringParamsVersionEnum(rawValue: option)
    else { return getDefaultParticleFilterSettings(settings: settings).scoringParams }
    switch defaultEnum {
    case .´default´: return VPSScoringParams.shared.default_
    }
  }

  static func getScoringParams(settings: PositionServiceSettings?, defaultParams: ScoringParams) -> ScoringParams {
    ScoringParams(
      version: defaultParams.version,
      dt: settings?.scoring_dt ?? defaultParams.dt,
      scoringIntervalSec: settings?.scoring_scoringIntervalSec ?? defaultParams.scoringIntervalSec,
      clusterSwapThreshold: settings?.scoring_clusterSwapThreshold ?? defaultParams.clusterSwapThreshold,
      beforeLimitRmSec: settings?.scoring_beforeLimitRmSec ?? defaultParams.beforeLimitRmSec,
      afterLimitRmSec: settings?.scoring_afterLimitRmSec ?? defaultParams.afterLimitRmSec,
      maxGapRmSec: settings?.scoring_maxGapRmSec ?? defaultParams.maxGapRmSec,
      beforeLimitCsSec: settings?.scoring_beforeLimitCsSec ?? defaultParams.beforeLimitCsSec,
      afterLimitCsSec: settings?.scoring_afterLimitCsSec ?? defaultParams.afterLimitCsSec,
      maxGapCsSec: settings?.scoring_maxGapCsSec ?? defaultParams.maxGapCsSec,
      beforeLimitFsSec: settings?.scoring_beforeLimitFsSec ?? defaultParams.beforeLimitFsSec,
      afterLimitFsSec: settings?.scoring_afterLimitFsSec ?? defaultParams.afterLimitFsSec,
      maxGapFsSec: settings?.scoring_maxGapFsSec ?? defaultParams.maxGapFsSec
    )
  }

  static func getDefaultTrustedPositionParams(settings: PositionServiceSettings?) -> TrustedPositionParams {
    guard
      let option = settings?.stringValues?[.TRUSTED_POSITION_PARAMS_VERSION],
      let defaultEnum = VPSTrustedPositionParamsVersionEnum(rawValue: option)
    else { return getDefaultParticleFilterSettings(settings: settings).trustedPositionParams }
    switch defaultEnum {
    case .´default´: return VPSTrustedPositionParams.shared.default_
    }
  }

  static func getTrustedPositionParams(settings: PositionServiceSettings?, defaultParams: TrustedPositionParams) -> TrustedPositionParams {
    .init(
      version: defaultParams.version,
      dt: settings?.trustedPosition_dt ?? defaultParams.dt,
      trustedLimitSec: settings?.trustedPosition_trustedLimitSec ?? defaultParams.trustedLimitSec,
      clusterSwapCoolDownSec: settings?.trustedPosition_clusterSwapCoolDownSec ?? defaultParams.clusterSwapCoolDownSec,
      rescueModeCoolDownSec: settings?.trustedPosition_rescueModeCoolDownSec ?? defaultParams.rescueModeCoolDownSec,
      stdLimit: settings?.trustedPosition_stdLimit ?? defaultParams.stdLimit,
      stdLimitLarge: settings?.trustedPosition_stdLimitLarge ?? defaultParams.stdLimitLarge,
      particleTrendLimit: settings?.trustedPosition_particleTrendLimit ?? defaultParams.particleTrendLimit,
      consistencyScoreLimit: settings?.trustedPosition_consistencyScoreLimit ?? defaultParams.consistencyScoreLimit,
      stepsSinceSprinkleLimit: defaultParams.stepsSinceSprinkleLimit
    )
  }

  static func getPositionStdSettings(settings: PositionServiceSettings?) -> PositionStdSettings {
    // TODO: Get from position service settings
    .init(
      strategy: PositionStdSettingsStrategyEnum(rawValue: settings?.positionStdSettings_strategy ?? "")?.toKotlin() ?? .reportActual,
      stdDefault: settings?.positionStdSettings_stdDefault ?? 2.0,
      isCapped: settings?.positionStdSettings_isCapped ?? false,
      minStd: settings?.positionStdSettings_minStd?.asKotlinFloat,
      maxStd: settings?.positionStdSettings_maxStd?.asKotlinFloat
    )
  }

  enum PositionStdSettingsStrategyEnum: String {
    case reportTescoSpecial
    case reportActual
    case reportActualOnlyWhenUntrusted
    case reportOnlyDefault

    func toKotlin() -> PositionStdSettings.Strategy {
      switch self {
      case .reportTescoSpecial: return .reportTescoSpecial
      case .reportActual: return .reportActual
      case .reportActualOnlyWhenUntrusted: return .reportActualOnlyWhenUntrusted
      case .reportOnlyDefault: return .reportOnlyDefault
      }
    }
  }

  enum VPSParticleFilterDefaultEnum: String {
    case ´default´ = "DEFAULT"
    case compass = "COMPASS"
    case v1 = "V1"
    case v2 = "V2"
    case v3 = "V3"
    case mixedGauss = "MIXED_GAUSS"
    case sprinkle = "SPRINKLE"
  }

  enum VPSParticleFilterSettingsEnum: String {
    case ´default´ = "DEFAULT"
    case nl = "V2"
    case v1 = "V1"
  }

  enum VPSParticleFilterSettingsVersionEnum: String {
    case v1 = "V1"
    case v2 = "V2"
  }

  enum VPSScoringParamsVersionEnum: String {
    case ´default´ = "DEFAULT"
  }

  enum VPSTrustedPositionParamsVersionEnum: String {
    case ´default´ = "DEFAULT"
  }
}

extension VPSManager: VPSOutputHandler {
  func onOutputSignal(outputSignal: OutputSignal) {
    switch outputSignal {
    case let output as OutputSignal.Position:
      let position = VPSOutputSignal.Position(
        point: output.position.asCGPoint,
        std: output.std.asDouble,
        status: output.status.asStatus,
        activityState: output.activityState.asActivityState,
        trustedPosition: output.trustedPosition,
        timestamp: Date()
      )
      outputSignalPublisher.send(.position(position: position))
    case let output as OutputSignal.LngLatLocation:
      outputSignalPublisher.send(
        .latLng(.init(
          mlLocation: output.mlLocation.asLocation,
          gpsLocation: output.gpsLocation.asLocation,
          reliableSource: output.reliableSource.asSource
        )))
    case let output as OutputSignal.UXPosition:
      let position = VPSOutputSignal.Position(
        point: output.position.asCGPoint,
        std: output.std.asDouble,
        status: output.status.asStatus,
        activityState: .active,
        trustedPosition: true,
        timestamp: Date()
      )
      outputSignalPublisher.send(.ux(position: position))
    case let output as OutputSignal.MLOutputPosition:
      let position = VPSOutputSignal.Position(
        point: output.position.asCGPoint,
        std: output.std.asDouble,
        status: .none,
        activityState: .active,
        trustedPosition: true,
        timestamp: Date()
      )
      outputSignalPublisher.send(.ml(position: position))
    case let output as OutputSignal.Rotation:
      //let rawDirection = signal.heading.asDouble
      let resultAngle = (output.heading + (particleFilterOffsetAngle ?? 0.0)).asDouble
      let heading = DoubleExtKt.radiansToDegrees(resultAngle)
      //print("Rotation", heading)
      outputSignalPublisher.send(.rotation(heading: heading))
    case let output as OutputSignal.RotationDeviationAngle:
      particleFilterOffsetAngle = output.angle
    case _ as OutputSignal.RescueModeSignal:
      outputSignalPublisher.send(.rescueMode)
    case let output as OutputSignal.ParticleSignal:
      var positions = [CGPoint]()
      (output.particles as? [KotlinFloatArray])?.forEach { (arr) in
        positions.append(CGPoint(
          x: arr.get(index: 0).asDouble,
          y: arr.get(index: 1).asDouble
        ))
      }
      outputSignalPublisher.send(.particles(positions: positions))
    case let output as OutputSignal.FloorChangeSignal: break
      //outputSignalPublisher.send(.floorChange(difference: Int(output.floorDifference), timestamp: Date()))
    case let output as OutputSignal.ClusterSwapSignal: break
    case let output as OutputSignal.ConsistencyScoreSignal:
      outputSignalPublisher.send(.consistencyScoreSignal(Int((output.score * 1000).rounded(.toNearestOrAwayFromZero))))
    default: Logger(verbosity: .warning).log(message: "\(#function) - Case not handled - \(outputSignal)")
    }
  }
}

extension VPSManager: VPSLogOutputHandler {
  func onLog(text: String, id: String?) {
    //print("Logger", text)
  }
}

extension OutputSignal.PositionStatus {
  var asStatus: VPSOutputSignal.Position.Status {
    switch self {
    case .confident: return .confident
    case .uncertain: return .uncertain
    case .outOfBounds: return .outOfBounds
    default: return .none
    }
  }
}

extension OutputSignal.PositionActivityState {
  var asActivityState: VPSOutputSignal.Position.ActivivtyState {
    switch self {
    case .active: return .active
    case .idle: return .idle
    default: return .active
    }
  }
}

extension OutputSignal.UXPositionStatus {
  var asStatus: VPSOutputSignal.Position.Status {
    switch self {
    case .confident: return .confident
    case .uncertain: return .uncertain
    default: return .none
    }
  }
}

private extension CLLocation {
  var asLocation: Location {
    var ca: KotlinDouble?
    if #available(iOS 13.4, *) {
      ca = .init(double: courseAccuracy)
    }
    var ea: KotlinDouble?
    if #available(iOS 15, *) {
      ea = .init(double: ellipsoidalAltitude)
    }
    return .init(
      longitude: coordinate.longitude,
      latitude: coordinate.latitude,
      accuracy: .init(double: horizontalAccuracy),
      bearing: .init(double: course),
      bearingAccuracy: ca,
      altitude: .init(double: altitude),
      verticalAccuracy: .init(double: verticalAccuracy),
      speed: .init(double: speed),
      speedAccuracy: .init(double: speedAccuracy),
      ellipsoidalAltitude: ea
    )
  }
}

private extension Location {
  var asLocation: VPSOutputSignal.LatLngPosition.Location {
    .init(
      latitude: latitude,
      longitude: longitude,
      accuracy: accuracy?.doubleValue,
      bearing: bearing?.doubleValue,
      altitude: altitude?.doubleValue
    )
  }
}

private extension OutputSignal.LngLatLocationSource {
  var asSource: VPSOutputSignal.LatLngPosition.Source {
    switch self {
    case .gps: return .gps
    case .undefined: return .undefined
    case .vpsMl: return .vpsML
    default: return .undefined
    }
  }
}

private extension PositionServiceSettings.VPSStartMethod {
  var asStartMethod: StartMethod {
    switch self {
    case .gauss: return .gauss
    case .global: return .global
    case .standard: return .standard
    }
  }
}

private extension PositionServiceSettings.VPSSyncMethod {
  var asSyncMethod: SyncMethod {
    switch self {
    case .gauss: return .gauss
    case .compassGauss: return .compassGauss
    case .standard: return .standard
    case .sprinkle: return .sprinkle
    }
  }
}

private extension PositionServiceSettings {
  var useSquareDriftFilter: Bool? { boolValues?[.MODEL_TO_EVENT_PARAMS_SQUARE_FILTER_ACTIVE] }
  var squareDriftFilterGain: Float? { floatValues?[.MODEL_TO_EVENT_PARAMS_SQUARE_FILTER_GAIN] }
  var nlModelActivated: Bool? { boolValues?[.NL_MODEL_ACTIVATED] }

  var maxNumParticles: Int32? { intValues?[.PARTICLE_FILTER_MAX_NUM_PARTICLES]?.asInt32 }
  var minNumParticles: Int32? { intValues?[.PARTICLE_FILTER_MIN_NUM_PARTICLES]?.asInt32 }
  var stepLengthStd: Float? { floatValues?[.PARTICLE_FILTER_STEP_LENGTH_STD] }
  var stepDirectionStd: Float? { floatValues?[.PARTICLE_FILTER_STEP_DIRECTION_STD] }
  var biasStd: Float? { floatValues?[.PARTICLE_FILTER_BIAS_STD] }
  var biasLimit: KotlinPair<KotlinFloat, KotlinFloat>? {
    guard
      let values = floatArrayValues?[.PARTICLE_FILTER_BIAS_LIMIT],
      values.count == 2
    else { return nil }
    return .init(first: .init(float: values[0]), second: .init(float: values[1]))
  }
  var secondBiasStd: Float? { floatValues?[.PARTICLE_FILTER_SECOND_BIAS_STD] }
  var secondBiasMean: Float? { floatValues?[.PARTICLE_FILTER_SECOND_BIAS_MEAN] }
  var secondBiasLimit: KotlinPair<KotlinFloat, KotlinFloat>? {
    guard
      let values = floatArrayValues?[.PARTICLE_FILTER_SECOND_BIAS_LIMIT],
      values.count == 2
    else { return nil }
    return .init(first: .init(float: values[0]), second: .init(float: values[1]))
  }
  var mixingFactor: Float? { floatValues?[.PARTICLE_FILTER_MIXING_FACTOR] }
  var startMethod: StartMethod? {
    guard let value = stringValues?[.PARTICLE_FILTER_START_METHOD] else { return nil }
    return VPSStartMethod(rawValue: value)?.asStartMethod
  }
  var startPositionStd: Float? { floatValues?[.PARTICLE_FILTER_START_POSITION_STD] }
  var startDirectionStd: Float? { floatValues?[.PARTICLE_FILTER_START_DIRECTION_STD] }
  var syncMethod: SyncMethod? {
    guard let value = stringValues?[.PARTICLE_FILTER_SYNC_METHOD] else { return nil }
    return VPSSyncMethod(rawValue: value)?.asSyncMethod
  }
  var syncPositionStd: Float? { floatValues?[.PARTICLE_FILTER_SYNC_POSITION_STD] }
  var syncDirectionStd: Float? { floatValues?[.PARTICLE_FILTER_SYNC_DIRECTION_STD] }
  var rescuePositionStd: Float? { floatValues?[.PARTICLE_FILTER_RESCUE_POSITION_STD] }
  var rescueDirectionStd: Float? { floatValues?[.PARTICLE_FILTER_RESCUE_DIRECTION_STD] }
  var kldEpsilon: Float? { floatValues?[.PARTICLE_FILTER_KLD_EPSILON] }
  var kldDelta: Float? { floatValues?[.PARTICLE_FILTER_KLD_DELTA] }
  var kldZ: Float? { floatValues?[.PARTICLE_FILTER_KLD_Z] }
  var binSize: KotlinTriple<KotlinFloat, KotlinFloat, KotlinFloat>? {
    guard
      let values = floatArrayValues?[.PARTICLE_FILTER_BIN_SIZE],
      values.count == 3
    else { return nil }
    return .init(first: .init(float: values[0]), second: .init(float: values[1]), third: .init(float: values[2]))
  }
  var uxPositionConfidence: Float? { floatValues?[.PARTICLE_FILTER_UX_POSITION_CONFIDENCE] }
  var angleOffsetGainDegPerMin: Float? { floatValues?[.PARTICLE_FILTER_ANGLE_OFFSET_GAIN_DEG_PER_MIN] }
  var speedFactor: Float? { floatValues?[.PARTICLE_FILTER_SPEED_FACTOR] }
  var naiveOutputSyncMovement: Bool? { boolValues?[.PARTICLE_FILTER_NAIVE_OUTPUT_SYNC_MOVEMENT] }
  var useMLSyncSpeedFilter: Bool? { boolValues?[.PARTICLE_FILTER_ML_SYNC_SPEED_FILTER] }
  var sprinkleSyncThreshold: Float? { floatValues?[.PARTICLE_FILTER_SPRINKLE_SYNC_THRESHOLD] }
  var sprinklePercentage: Float? { floatValues?[.PARTICLE_FILTER_SPRINKLE_PERCENTAGE] }
  var useRayTraceSensorModel: Bool? { boolValues?[.PARTICLE_USE_RAY_TRACE_SENSOR_MODEL] }
  var nlThreshold: Float? { floatValues?[.PARTICLE_FILTER_NL_THRESHOLD] }
  var rescueOnNL: Bool? { boolValues?[.PARTICLE_FILTER_RESCUE_ON_NL] }
  var wiFiDistanceSyncCriteria: Float? { floatValues?[.PARTICLE_FILTER_WIFI_DISTANCE_SYNC_CRITERIA] }
  var idleWiFiSecondsCriteria: Float? { floatValues?[.PARTICLE_FILTER_IDLE_WIFI_SECONDS_SYNC_CRITERIA] }
  var wiFiPathLossCoefficient: Float? { floatValues?[.PARTICLE_FILTER_WIFI_PATH_LOSS_COEFFICient] }
  var wiFiMeasuredPower: Int32? { intValues?[.PARTICLE_FILTER_WIFI_MESURED_POWER]?.asInt32 }
  var swapSprinkleInterval: Int32? { intValues?[.PARTICLE_FILTER_SWAP_SPRINKLE_INTERVAL]?.asInt32 }
  var swapSprinkleEndCount: Int32? { intValues?[.PARTICLE_FILTER_SWAP_SPRINKLE_END_COUNT]?.asInt32 }
  var swapSprinkleRatio: Float? { floatValues?[.PARTICLE_FILTER_SWAP_SPRINKLE_RATIO] }
  var mlStepHistorySize: Int32? { intValues?[.PARTICLE_FILTER_ML_STEP_HISTORY_SIZE]?.asInt32 }
  var idlePositionTimeThreshold: Int64? { intValues?[.PARTICLE_FILTER_IDLE_POSITION_TIME_THRESHOLD]?.asLong }
  var stdQuantile: Float? { floatValues?[.PARTICLE_FILTER_STD_QUANTILE] }
  var uncertainThreshold: Float? { floatValues?[.PARTICLE_FILTER_UNCERTAIN_THRESHOLD] }
  var mlStepHistorySizeForOOBComeback: Int32? { intValues?[.PARTICLE_FILTER_ML_STEP_HISTORY_SIZE_FOR_OOBCOMEBACK]?.asInt32 }
  var wiFiStatusTimeLimit: Float? { floatValues?[.PARTICLE_FILTER_WIFI_STATUS_TIME_LIMIT] }
  var allowOutOfBounds: Bool? { boolValues?[.PARTICLE_FILTER_ALLOW_OUT_OF_BOUNDS] }
  var maxAllowedStd: Float? { floatValues?[.PARTICLE_FILTER_MAX_ALLOWED_STD] }

  // SCORING PARAMS
  var scoring_dt: Float? { floatValues?[.FOR_IOS + .SCORING_PARAMS_DT] ?? floatValues?[.SCORING_PARAMS_DT] }
  var scoring_scoringIntervalSec: Int32? { (intValues?[.FOR_IOS + .SCORING_PARAMS_SCORING_INTERVAL_SEC] ?? intValues?[.SCORING_PARAMS_SCORING_INTERVAL_SEC])?.asInt32 }
  var scoring_clusterSwapThreshold: Float? { floatValues?[.FOR_IOS + .SCORING_PARAMS_CLUSTER_SWAP_THRESHOLD] ?? floatValues?[.SCORING_PARAMS_CLUSTER_SWAP_THRESHOLD] }
  var scoring_beforeLimitRmSec: Int32? { (intValues?[.FOR_IOS + .SCORING_PARAMS_BEFORE_LIMIT_RM_SEC] ?? intValues?[.SCORING_PARAMS_BEFORE_LIMIT_RM_SEC])?.asInt32 }
  var scoring_afterLimitRmSec: Int32? { (intValues?[.FOR_IOS + .SCORING_PARAMS_AFTER_LIMIT_RM_SEC] ?? intValues?[.SCORING_PARAMS_AFTER_LIMIT_RM_SEC])?.asInt32 }
  var scoring_maxGapRmSec: Int32? { (intValues?[.FOR_IOS + .SCORING_PARAMS_MAX_GAP_RM_SEC] ?? intValues?[.SCORING_PARAMS_MAX_GAP_RM_SEC])?.asInt32 }
  var scoring_beforeLimitCsSec: Int32? { (intValues?[.FOR_IOS + .SCORING_PARAMS_BEFORE_LIMIT_CS_SEC] ?? intValues?[.SCORING_PARAMS_BEFORE_LIMIT_CS_SEC])?.asInt32 }
  var scoring_afterLimitCsSec: Int32? { (intValues?[.FOR_IOS + .SCORING_PARAMS_AFTER_LIMIT_CS_SEC] ?? intValues?[.SCORING_PARAMS_AFTER_LIMIT_CS_SEC])?.asInt32 }
  var scoring_maxGapCsSec: Int32? { (intValues?[.FOR_IOS + .SCORING_PARAMS_MAX_GAP_CS_SEC] ?? intValues?[.SCORING_PARAMS_MAX_GAP_CS_SEC])?.asInt32 }
  var scoring_beforeLimitFsSec: Int32? { (intValues?[.FOR_IOS + .SCORING_PARAMS_BEFORE_LIMIT_FS_SEC] ?? intValues?[.SCORING_PARAMS_BEFORE_LIMIT_FS_SEC])?.asInt32 }
  var scoring_afterLimitFsSec: Int32? { (intValues?[.FOR_IOS + .SCORING_PARAMS_AFTER_LIMIT_FS_SEC] ?? intValues?[.SCORING_PARAMS_AFTER_LIMIT_FS_SEC])?.asInt32 }
  var scoring_maxGapFsSec: Int32? { (intValues?[.FOR_IOS + .SCORING_PARAMS_MAX_GAP_FS_SEC] ?? intValues?[.SCORING_PARAMS_MAX_GAP_FS_SEC])?.asInt32 }

  // TRUSTED POSITION PARAMS
  var trustedPosition_dt: Float? { floatValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_DT] ?? floatValues?[.TRUSTED_POSITION_PARAMS_DT] }
  var trustedPosition_trustedLimitSec: Int32? { (intValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_TRUSTED_LIMIT_SEC] ?? intValues?[.TRUSTED_POSITION_PARAMS_TRUSTED_LIMIT_SEC])?.asInt32 }
  var trustedPosition_clusterSwapCoolDownSec: Int32? { (intValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_CLUSTER_SWAP_COOLDOWN_SEC] ?? intValues?[.TRUSTED_POSITION_PARAMS_CLUSTER_SWAP_COOLDOWN_SEC])?.asInt32 }
  var trustedPosition_rescueModeCoolDownSec: Int32? { (intValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_RESCUE_MODE_COOLDOWN_SEC] ?? intValues?[.TRUSTED_POSITION_PARAMS_RESCUE_MODE_COOLDOWN_SEC])?.asInt32 }
  var trustedPosition_stdLimit: Float? { floatValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_STD_LIMIT] ?? floatValues?[.TRUSTED_POSITION_PARAMS_STD_LIMIT] }
  var trustedPosition_stdLimitLarge: Float? { floatValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_STD_LIMIT_LARGE] ?? floatValues?[.TRUSTED_POSITION_PARAMS_STD_LIMIT_LARGE] }
  var trustedPosition_particleTrendLimit: Float? { floatValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_PARTICLE_TREND_LIMIT] ?? floatValues?[.TRUSTED_POSITION_PARAMS_PARTICLE_TREND_LIMIT] }
  var trustedPosition_consistencyScoreLimit: Float? { floatValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_CONSISTENCY_SCORE_LIMIT] ?? floatValues?[.TRUSTED_POSITION_PARAMS_CONSISTENCY_SCORE_LIMIT] }

  // POSITION STD SETTINGS
  var positionStdSettings_strategy: String? { stringValues?[.FOR_IOS + .POSTION_STD_SETTINGS_STRATEGY] ?? stringValues?[.POSTION_STD_SETTINGS_STRATEGY] }
  var positionStdSettings_stdDefault: Float? { floatValues?[.FOR_IOS + .POSTION_STD_SETTINGS_STD_DEFAULT] ?? floatValues?[.POSTION_STD_SETTINGS_STD_DEFAULT] }
  var positionStdSettings_isCapped: Bool? { boolValues?[.FOR_IOS + .POSTION_STD_SETTINGS_IS_CAPPED] ?? boolValues?[.POSTION_STD_SETTINGS_IS_CAPPED] }
  var positionStdSettings_minStd: Float? { floatValues?[.FOR_IOS + .POSTION_STD_SETTINGS_MIN_STD] ?? floatValues?[.POSTION_STD_SETTINGS_MIN_STD] }
  var positionStdSettings_maxStd: Float? { floatValues?[.FOR_IOS + .POSTION_STD_SETTINGS_MAX_STD] ?? floatValues?[.POSTION_STD_SETTINGS_MAX_STD] }

  enum VPSStartMethod: String {
    case gauss = "GAUSS"
    case global = "GLOBAL"
    case standard = "STANDARD"
  }

  enum VPSSyncMethod: String {
    case gauss = "GAUSS"
    case compassGauss = "COMPASSGAUSS"
    case standard = "STANDARD"
    case sprinkle = "SPRINKLE"
  }
}

private extension String {
  static let FOR_IOS: String = "ios_"
  /**
   * SDK Settings
   */
  static let RECORDING_TIME_INTERVAL: String = "ios_sdk_maxRecordingTimePerPartInMillis"
  static let USE_PROXY: String = "ios_sdk_useProxyForReplayDataUpload"
  static let VALID_CONTINUOUS_POSITION_THRESHOLD: String = "ios_sdk_validContinuousPositionThreshold"
  static let REPORT_DEVICE_LOCATION_INTERVAL: String = "ios_sdk_reportDeviceLocationInterval"
  static let REPORT_DEVICE_LOCATION_RADIUS: String = "ios_sdk_reportDeviceLocationRadius"

  /**
   * VPS Settings
   */
  static let MODEL_TO_EVENT_PARAMS_SQUARE_FILTER_ACTIVE: String = "ios_vps_modelToEvent_squareFilterActive"
  static let MODEL_TO_EVENT_PARAMS_SQUARE_FILTER_GAIN: String = "ios_vps_modelToEvent_squareFilterGain"
  static let NL_MODEL_ACTIVATED: String = "ios_vps_nlModelActivated"

  /**
   * ParticleFilterSettings
   */
  static let PARTICLE_FILTER_SETTINGS: String = "ios_particleFilter_settings"
  static let PARTICLE_FILTER_SETTINGS_DEFAULT: String = "DEFAULT"
  static let PARTICLE_FILTER_SETTINGS_V2: String = "V2"
  static let PARTICLE_FILTER_SETTINGS_V1: String = "V1"

  static let PARTICLE_FILTER_SETTINGS_UX_ACTIVATED: String = "ios_particleFilterSettings_uxPositionActivated"
  static let PARTICLE_FILTER_SETTINGS_ML_ACTIVATED: String = "ios_particleFilterSettings_mlPositionActivated"
  static let PARTICLE_FILTER_SETTINGS_POS_ACTIVATED: String = "ios_particleFilterSettings_particlePositionActivated"
  static let PARTICLE_FILTER_SETTINGS_PARTICLES_OUTPUT_ACTIVATED: String = "ios_particleFilterSettings_particlesOutputActivated"
  static let PARTICLE_FILTER_SETTINGS_VERSION: String = "ios_particleFilterSettings_particleFilterVersion"

  /**
   * ParticleFilterParams
   */
  static let PARTICLE_FILTER_DEFAULT_PARAMS: String = "ios_particleFilter_defaultParams"
  static let PARTICLE_FILTER_PARAMS_DEFAULT: String = "DEFAULT"
  static let PARTICLE_FILTER_PARAMS_COMPASS: String = "COMPASS"
  static let PARTICLE_FILTER_PARAMS_V1: String = "V1"
  static let PARTICLE_FILTER_PARAMS_V2: String = "V2"

  static let PARTICLE_FILTER_MAX_NUM_PARTICLES: String = "ios_particleFilter_maxNumParticles"
  static let PARTICLE_FILTER_STEP_LENGTH_STD: String = "ios_particleFilter_stepLengthStd"
  static let PARTICLE_FILTER_STEP_DIRECTION_STD: String = "ios_particleFilter_stepDirectionStd"
  static let PARTICLE_FILTER_BIAS_STD: String = "ios_particleFilter_biasStd"
  static let PARTICLE_FILTER_BIAS_LIMIT: String = "ios_particleFilter_biasLimit"
  static let PARTICLE_FILTER_SECOND_BIAS_STD: String = "ios_particleFilter_secondBiasStd"
  static let PARTICLE_FILTER_SECOND_BIAS_MEAN: String = "ios_particleFilter_secondBiasMean"
  static let PARTICLE_FILTER_SECOND_BIAS_LIMIT: String = "ios_particleFilter_secondBiasLimit"
  static let PARTICLE_FILTER_MIXING_FACTOR: String = "ios_particleFilter_mixingFactor"
  static let PARTICLE_FILTER_START_METHOD: String = "ios_particleFilter_startMethod"
  static let PARTICLE_FILTER_START_POSITION_STD: String = "ios_particleFilter_startPositionStd"
  static let PARTICLE_FILTER_START_DIRECTION_STD: String = "ios_particleFilter_startDirectionStd"
  static let PARTICLE_FILTER_SYNC_METHOD: String = "ios_particleFilter_syncMethod"
  static let PARTICLE_FILTER_SYNC_POSITION_STD: String = "ios_particleFilter_syncPositionStd"
  static let PARTICLE_FILTER_SYNC_DIRECTION_STD: String = "ios_particleFilter_syncDirectionStd"
  static let PARTICLE_FILTER_RESCUE_POSITION_STD: String = "ios_particleFilter_rescuePositionStd"
  static let PARTICLE_FILTER_RESCUE_DIRECTION_STD: String = "ios_particleFilter_rescueDirectionStd"
  static let PARTICLE_FILTER_KLD_EPSILON: String = "ios_particleFilter_kldEpsilon"
  static let PARTICLE_FILTER_KLD_DELTA: String = "ios_particleFilter_kldDelta"
  static let PARTICLE_FILTER_KLD_Z: String = "ios_particleFilter_kldZ"
  static let PARTICLE_FILTER_BIN_SIZE: String = "ios_particleFilter_binSize"
  static let PARTICLE_FILTER_UX_POSITION_CONFIDENCE: String = "ios_particleFilter_uxPositionConfidence"
  static let PARTICLE_FILTER_ANGLE_OFFSET_GAIN_DEG_PER_MIN: String = "ios_particleFilter_angleOffsetGainDegPerMin"
  static let PARTICLE_FILTER_SPEED_FACTOR: String = "ios_particleFilter_speedFactor"
  static let PARTICLE_FILTER_NAIVE_OUTPUT_SYNC_MOVEMENT: String = "ios_particleFilter_naiveOutputSyncMovement"
  static let PARTICLE_FILTER_ML_SYNC_SPEED_FILTER: String = "ios_particleFilter_useMLSyncSpeedFilter"
  static let PARTICLE_FILTER_SPRINKLE_SYNC_THRESHOLD: String = "ios_particleFilter_sprinkleSyncThreshold"
  static let PARTICLE_FILTER_SPRINKLE_PERCENTAGE: String = "ios_particleFilter_sprinklePercentage"
  static let PARTICLE_FILTER_MIN_NUM_PARTICLES: String = "ios_particleFilter_minNumParticles"
  static let PARTICLE_FILTER_NL_THRESHOLD: String = "ios_particleFilter_nlThreshold"
  static let PARTICLE_FILTER_RESCUE_ON_NL: String = "ios_particleFilter_rescueOnNL"
  static let PARTICLE_FILTER_WIFI_DISTANCE_SYNC_CRITERIA: String = "ios_particleFilter_WiFiDistanceSyncCriteria"
  static let PARTICLE_FILTER_IDLE_WIFI_SECONDS_SYNC_CRITERIA: String = "ios_particleFilter_idleWiFiSecondsCriteria"
  static let PARTICLE_FILTER_WIFI_PATH_LOSS_COEFFICient: String = "ios_particleFilter_wiFiPathLossCoefficient"
  static let PARTICLE_FILTER_WIFI_MESURED_POWER: String = "ios_particleFilter_wiFiMeasuredPower"
  static let PARTICLE_FILTER_SWAP_SPRINKLE_INTERVAL: String = "ios_particleFilter_swapSprinkleInterval"
  static let PARTICLE_FILTER_SWAP_SPRINKLE_END_COUNT: String = "ios_particleFilter_swapSprinkleEndCount"
  static let PARTICLE_FILTER_SWAP_SPRINKLE_RATIO: String = "ios_particleFilter_swapSprinkleRatio"
  static let PARTICLE_FILTER_ML_STEP_HISTORY_SIZE: String = "ios_particleFilter_mlStepHistorySize"
  static let PARTICLE_FILTER_IDLE_POSITION_TIME_THRESHOLD: String = "ios_particleFilter_idlePositionTimeThreshold"
  static let PARTICLE_FILTER_STD_QUANTILE: String = "ios_particlefilter_stdQuantile"
  static let PARTICLE_FILTER_UNCERTAIN_THRESHOLD: String = "ios_particlefilter_uncertainThreshold"
  static let PARTICLE_FILTER_ML_STEP_HISTORY_SIZE_FOR_OOBCOMEBACK: String = "ios_particlefilter_mlStepHistorySizeForOOBComeback"
  static let PARTICLE_FILTER_WIFI_STATUS_TIME_LIMIT: String = "ios_particlefilter_wiFiStatusTimeLimit"
  static let PARTICLE_FILTER_ALLOW_OUT_OF_BOUNDS: String = "ios_particlefilter_allowOutOfBounds"
  static let PARTICLE_FILTER_MAX_ALLOWED_STD: String = "ios_particlefilter_maxAllowedStd"
  static let PARTICLE_USE_RAY_TRACE_SENSOR_MODEL: String = "ios_particleFilter_useRayTraceSensorModel"

  static let SCORING_PARAMS_VERSION: String = "scoringParams_version"
  static let SCORING_PARAMS_DT: String = "scoringParams_dt"
  static let SCORING_PARAMS_SCORING_INTERVAL_SEC: String = "scoringParams_scoringIntervalSec"
  static let SCORING_PARAMS_CLUSTER_SWAP_THRESHOLD: String = "scoringParams_clusterSwapThreshold"
  static let SCORING_PARAMS_BEFORE_LIMIT_RM_SEC: String = "scoringParams_beforeLimitRmSec"
  static let SCORING_PARAMS_AFTER_LIMIT_RM_SEC: String = "scoringParams_afterLimitRmSec"
  static let SCORING_PARAMS_MAX_GAP_RM_SEC: String = "scoringParams_maxGapRmSec"
  static let SCORING_PARAMS_BEFORE_LIMIT_CS_SEC: String = "scoringParams_beforeLimitCsSec"
  static let SCORING_PARAMS_AFTER_LIMIT_CS_SEC: String = "scoringParams_afterLimitCsSec"
  static let SCORING_PARAMS_MAX_GAP_CS_SEC: String = "scoringParams_maxGapCsSec"
  static let SCORING_PARAMS_BEFORE_LIMIT_FS_SEC: String = "scoringParams_beforeLimitFsSec"
  static let SCORING_PARAMS_AFTER_LIMIT_FS_SEC: String = "scoringParams_afterLimitFsSec"
  static let SCORING_PARAMS_MAX_GAP_FS_SEC: String = "scoringParams_maxGapFsSec"

  static let TRUSTED_POSITION_PARAMS_VERSION: String = "trustedPositionParams_version"
  static let TRUSTED_POSITION_PARAMS_DT: String = "trustedPositionParams_dt"
  static let TRUSTED_POSITION_PARAMS_TRUSTED_LIMIT_SEC: String = "trustedPositionParams_trustedLimitSec"
  static let TRUSTED_POSITION_PARAMS_CLUSTER_SWAP_COOLDOWN_SEC: String = "trustedPositionParams_clusterSwapCoolDownSec"
  static let TRUSTED_POSITION_PARAMS_RESCUE_MODE_COOLDOWN_SEC: String = "trustedPositionParams_rescueModeCoolDownSec"
  static let TRUSTED_POSITION_PARAMS_STD_LIMIT: String = "trustedPositionParams_stdLimit"
  static let TRUSTED_POSITION_PARAMS_STD_LIMIT_LARGE: String = "trustedPositionParams_stdLimitLarge"
  static let TRUSTED_POSITION_PARAMS_PARTICLE_TREND_LIMIT: String = "trustedPositionParams_particleTrendLimit"
  static let TRUSTED_POSITION_PARAMS_CONSISTENCY_SCORE_LIMIT: String = "trustedPositionParams_consistencyScoreLimit"

  static let POSTION_STD_SETTINGS_STRATEGY: String = "positionStdSettings_strategy"
  static let POSTION_STD_SETTINGS_STD_DEFAULT: String = "positionStdSettings_stdDefault"
  static let POSTION_STD_SETTINGS_IS_CAPPED: String = "positionStdSettings_isCapped"
  static let POSTION_STD_SETTINGS_MIN_STD: String = "positionStdSettings_minStd"
  static let POSTION_STD_SETTINGS_MAX_STD: String = "positionStdSettings_maxStd"
}

extension vps.MLProcessedPath {
  var asMLProcessedPath: VSFoundation.MLProcessedPath {
    .init(path: path.map({ $0.asCGPoint }), angleCorrection: angleCorrection, speedAdjustment: speedAdjustment)
  }
}
