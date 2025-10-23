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
import TT2SensorFusion
import vps

public let vpsVersion = VPSConfig.shared.VPS_VERSION
public let velocityModelInterfaceVersion = VPSConfig.shared.VELOCITY_MODEL_INTERFACE_VERSION

final class VPSManager: VPSWrapper, Disposable {
  @Inject var sensor: VPSSensorManager

  var recordingInputPublisher: CurrentValueSubject<(identifier: String, data: String, sessionId: String, lastFile: Bool)?, Never> { recorder.inputPublisher }
  var recordingOutputPublisher: CurrentValueSubject<(identifier: String, data: String, sessionId: String, lastFile: Bool)?, Never> { recorder.outputPublisher }
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
  private let particleFilterSettings: ParticleFilterSettings
  private let positionServiceSettings: PositionServiceSettings?
  private let engine: TT2Settings.TT2Engine
  private var vps: VPS?
  private var automaticMagMappingRecording: Bool {
    positionServiceSettings?.boolValues?["ios_sdk_magMappingRecordingActive"] ?? false
  }
  private lazy var nlModel: NLModel? = {
    guard 
      #available(iOS 14.0, *),
      positionServiceSettings?.nlModelActivated ?? false,
      modelManager.nlParams != nil
    else { return nil }
    return VPSNLModel(manager: modelManager)
  }()

  private let tag = "VPSManager"
  private var cancellable = Set<AnyCancellable>()
  private var particleFilterOffsetAngle: Float?

  init(floorHeightDiffInMeters: Double, trueNorthOffset: Double = 0.0, storeId: Int64, rtls: RtlsOptions, automaticSensorRecording: Bool, mapData: MapFence, positionServiceSettings: PositionServiceSettings?, converter: ICoordinateConverter, modelManager: VPSModelManager, engine: TT2Settings.TT2Engine) {
    self.automaticSensorRecording = automaticSensorRecording
    self.recorder = VPSRecorder(maxRecordingTimePerPartInMillis: positionServiceSettings?.intValues?["maxRecordingTimePerPartInMillis"]?.asLong, storeId: storeId)
    self.floorLevelHandler = FloorLevelHandler(floorLevels: [KotlinLong(value: rtls.id):FloorLevelData(data: FloorData(rtls: rtls, mapFence: mapData, metersToNextFloor: floorHeightDiffInMeters, converter: converter))], initialFloorLevelId: nil, debug: false)
    self.modelManager = modelManager
    self.particleFilterSettings = Self.getParticleFilterSettings(settings: positionServiceSettings)
    self.positionServiceSettings = positionServiceSettings
    self.engine = engine
    self.bindPublishers()
    //Log.shared.outputHandler = self
  }

  deinit {
    Logger(verbosity: .info).log(tag: tag, message: "deinit")
    dispose()
  }

  public func dispose() {
    Logger(verbosity: .info).log(tag: tag, message: "dispose")
    serialDispatch.async { [weak self] in
      self?.vps?.onDestroy()
      self?.vps = nil
    }
    recorder.dispose()
    nlModel = nil
    cancellable.removeAll()
  }

  func bindPublishers() {
    sensor.dataPublisher
      .compactMap { $0 }
      .sink { [weak self] (data) in
        guard self?.vpsRunning ?? false else { return }
        let signal = InputSignal.SensorData(rawSensorData: data)
        self?.recorder.record(signal: signal)
        self?.serialDispatch.async {
          //pthread_setname_np("VPSManager")
          self?.vps?.onInputSignal(signal: signal)
        }
      }.store(in: &cancellable)

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
          recorder.record(signal: signal)
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
          recorder.record(signal: signal)
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
    if let sessionId = sessionId {
      recorder.set(sessionId: sessionId)
    }
  }

  func start() {
    if automaticSensorRecording {
      recorder.startInputRecording(sessionId: sessionId)
    }
    if (automaticMagMappingRecording || automaticSensorRecording) && engine == .indoor {
      recorder.startOutputRecording(sessionId: sessionId)
    }
    serialDispatch.async { [weak self] in
      guard let self = self else { return }
      pthread_setname_np("VPSManager")
      nlModel?.setFloorLevelHandler(floorLevelHandler: floorLevelHandler)
      vps = VPS(
        velocityModel: VPSVelocityModel(manager: modelManager),
        modeClassifierModel: nil,
        nlModel: nlModel,
        floorLevelHandler: floorLevelHandler,
        outputHandler: self,
        system: .ios,
        featureToTensorValueParams: FeatureToTensorValueParams(packageFrequency: 30),
        interpolationParams: IosInterpolationModuleParams.shared.default_,
        modelToEventParameters: Self.createModelToEventParameters(settings: positionServiceSettings),
        positionEngineSettings: Self.createVPSEngine(settings: particleFilterSettings, engine: engine),
        floorChangeInterpreterSettings: VPSFloorChangeHandlerSettings.shared.default_,
        rotationHandlerSettings: .init(rotationOutputLimit: 3, rotationOutputActive: true, rotationCalculateLimit: 3),
        magnetometerDriftEstimatorParams: Self.getMagnetometerDriftEstimatorParams(settings: positionServiceSettings, defaultParams: Self.getDefaultMagnetometerDriftEstimatorParams(settings: positionServiceSettings, for: engine)),
        orientationParams: Self.getOrientationParams(settings: positionServiceSettings),
        debugMode: false,
        extendedDebugMode: false,
        modelOutputHandler: nil,
        safeModeActivated: true
      )
    }
  }

  func startRecording(sessionId: String?) {
    recorder.startInputRecording(sessionId: sessionId)
  }

  func stop() {
    let signal = InputSignal.Exit(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis)
    recorder.record(signal: signal)
    recorder.stopRecording()
    serialDispatch.async {
      //pthread_setname_np("VPSManager")
      self.vps?.onInputSignal(signal: signal)
      self.vps?.onDestroy()
      self.vps = nil
    }
    vpsRunning = false
    particleFilterOffsetAngle = nil
    (floorLevelHandler.currentFloorLevel as? FloorLevelData)?.geomagnetism = nil
  }

  func stopRecording() {
    recorder.stopRecording()
  }

  func startNavigation(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool) {
    start()
    vpsRunning = true
    let signal = InputSignal.StartPosition(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, positions: positions.map({ $0.asCoordinateF }), syncPosition: syncPosition, syncAngle: syncAngle, angle: Float(angle), uncertainAngle: uncertainAngle)
    recorder.record(signal: signal)
    serialDispatch.async {
      //pthread_setname_np("VPSManager")
      self.vps?.onInputSignal(signal: signal)
    }
    if let position = positions.first {
      DispatchQueue.main.asyncAfter(deadline: .now() + 0.5) { [weak self] in
        self?.outputSignalPublisher.send(.position(position: .init(
          point: position,
          std: 1,
          status: .confident,
          activityState: .active,
          trustedPosition: true,
          timestamp: .init()
        )))
      }
    }
  }

  func startLngLatFixedNorth(location: CLLocation) {
    start()
    vpsRunning = true
    let signal = InputSignal.StartLngLatFixedNorth(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, location: location.asLocation)
    recorder.record(signal: signal)
    serialDispatch.async {
      self.vps?.onInputSignal(signal: signal)
    }
  }

  func syncPosition(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool) {
    let signal = InputSignal.SyncPosition(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, positions: positions.map({ $0.asCoordinateF }), syncPosition: syncPosition, syncAngle: syncAngle, angle: Float(angle), uncertainAngle: uncertainAngle)
    recorder.record(signal: signal)
    serialDispatch.async {
      //pthread_setname_np("VPSManager")
      self.vps?.onInputSignal(signal: signal)
    }
  }

  func syncPosition(location: CLLocation) {
    let signal = InputSignal.SyncLngLat(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, location: location.asLocation)
    recorder.record(signal: signal)
    serialDispatch.async {
      //pthread_setname_np("VPSManager")
      self.vps?.onInputSignal(signal: signal)
    }
  }

  func syncGNSS(isStartSequence: Bool) {
    let signal = InputSignal.SyncGNSSSync(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, isStartSequence: isStartSequence)
    recorder.record(signal: signal)
    serialDispatch.async {
      self.vps?.onInputSignal(signal: signal)
    }
  }

  func syncManual(location: CLLocation?, isStartSequence: Bool) {
    let signal = InputSignal.SyncManualSync(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, location: location?.asLocation, isStartSequence: isStartSequence)
    recorder.record(signal: signal)
    serialDispatch.async {
      self.vps?.onInputSignal(signal: signal)
    }
  }

  func forceSyncPosition(position: CGPoint, angle: Double, forceAngle: Bool) {
    let signal = InputSignal.SyncForce(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, position: position.asCoordinateF, angle: angle.asFloat, forceAngle: forceAngle)
    recorder.record(signal: signal)
    serialDispatch.async {
      self.vps?.onInputSignal(signal: signal)
    }
  }

  func syncAngleCorrection(angle: Double, positions: [CGPoint]) {
    let syncPosition = InputSignal.SyncPosition(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, positions: positions.map({ $0.asCoordinateF }), syncPosition: true, syncAngle: false, angle: 0.0, uncertainAngle: false)
    // TODO: ASK CJ about location
    let angleCorrection = InputSignal.AngleCorrection(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, angle: Float(angle), location: nil)

    recorder.record(signal: syncPosition)
    recorder.record(signal: angleCorrection)
    serialDispatch.async {
      self.vps?.onInputSignal(signal: syncPosition)
      self.vps?.onInputSignal(signal: angleCorrection)
    }
  }

  func setPathfinder(pathfinder: BasePathfinder) {
    self.pathfinder = pathfinder
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
  
  static func createModelToEventParameters(settings: PositionServiceSettings?) -> ModelToEventParameters {
    .init(
      useSquareDriftFilter: settings?.useSquareDriftFilter ?? VPSModelToEventParameters.shared.default_.useSquareDriftFilter,
      squareDriftFilterGain: settings?.squareDriftFilterGain ?? VPSModelToEventParameters.shared.default_.squareDriftFilterGain,
      speedThresholdForStairClassification: VPSModelToEventParameters.shared.default_.speedThresholdForStairClassification, // TODO: Get from setings
      modeKalmanFilterParams: VPSModelToEventParameters.shared.default_.modeKalmanFilterParams, // TODO: Get from setings
      stairSimpleFilterParams: VPSModelToEventParameters.shared.default_.stairSimpleFilterParams // TODO: Get from setings
    )
  }

  static func createVPSEngine(settings: ParticleFilterSettings, engine: TT2Settings.TT2Engine) -> PositionEngineSettings {
    switch engine {
    case .gpsFusion:
//      return .GPSFusion(mlAdjustmentActivated: true, useNoMapFilter: false, noMapFilterParams: VPSNoMapFilterParams.shared.default_)
      return .GNSSFusion(noMapFilterParams: VPSNoMapFilterParams.shared.default_)
    case .indoor:
      return .ParticleFilter(particleFilterSettings: settings)
    case .noMap:
//      return .GPSFusion(mlAdjustmentActivated: false, useNoMapFilter: true, noMapFilterParams: VPSNoMapFilterParams.shared.default_)
      return .GNSSFusion(noMapFilterParams: VPSNoMapFilterParams.shared.default_)
    case .openTerrain:
//      return .GPSFusion(mlAdjustmentActivated: false, useNoMapFilter: false, noMapFilterParams: VPSNoMapFilterParams.shared.default_)
      return .GNSSFusion(noMapFilterParams: VPSNoMapFilterParams.shared.default_)
    }
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
      positionStdSettings: getPositionStdSettings(settings: settings, defaultParams: VPSPositionStdSettings.shared.default_)
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
      rssiScanThreshold: settings?.rssiScanThreshold ?? defaultParams.rssiScanThreshold,
      bundleAPsInScan: settings?.bundleAPsInScan ?? defaultParams.bundleAPsInScan,
      scanGridResolution: settings?.scanGridResolution ?? defaultParams.scanGridResolution,
      scanErrorRatioThreshold: settings?.scanErrorRatioThreshold ?? defaultParams.scanErrorRatioThreshold,
      wiFiSprinkleDirectionStd: settings?.wiFiSprinkleDirectionStd ?? defaultParams.wiFiSprinkleDirectionStd,
      scanErrorSprinkleLocationStdCoefficient: settings?.scanErrorSprinkleLocationStdCoefficient ?? defaultParams.scanErrorSprinkleLocationStdCoefficient,
      rescueKDEAngRatio: settings?.rescueKDEAngRatio ?? defaultParams.rescueKDEAngRatio,
      rescueStartAngRatio: settings?.rescueStartAngRatio ?? defaultParams.rescueStartAngRatio,
      rescueCompassAngRatio: settings?.rescueCompassAngRatio ?? defaultParams.rescueCompassAngRatio,
      wifiSprinkleDistanceCriteria: settings?.wifiSprinkleDistanceCriteria ?? defaultParams.wifiSprinkleDistanceCriteria,
      floorSwapPositionStd: settings?.floorSwapPositionStd ?? defaultParams.floorSwapPositionStd,
      floorSwapDirectionStd: settings?.floorSwapDirectionStd ?? defaultParams.floorSwapDirectionStd,
      floorSwapSprinklePositionStd: settings?.floorSwapSprinklePositionStd ?? defaultParams.floorSwapSprinklePositionStd,
      floorSwapSprinkleDirectionStd: settings?.floorSwapSprinkleDirectionStd ?? defaultParams.floorSwapSprinkleDirectionStd,
      idleWiFiSprinkle: settings?.idleWiFiSprinkle ?? defaultParams.idleWiFiSprinkle,
      strongRssiScanThreshold: settings?.strongRssiScanThreshold ?? defaultParams.strongRssiScanThreshold,
      weakRssiScanThreshold: settings?.weakRssiScanThreshold ?? defaultParams.weakRssiScanThreshold,
      nRequiredScans: settings?.nRequiredScans ?? defaultParams.nRequiredScans,
      minDistanceOOB: settings?.minDistanceOOB ?? defaultParams.minDistanceOOB,
      stairSpeedFactor: settings?.stairSpeedFactor ?? defaultParams.stairSpeedFactor,
      exitZoneRatioForOOB: settings?.exitZoneRatioForOOB ?? defaultParams.exitZoneRatioForOOB
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
      version: .default_,
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
      stepsSinceSprinkleLimit: settings?.trustedPosition_stepsSinceSprinkleLimit ?? defaultParams.stepsSinceSprinkleLimit,
      clusterSwapCoolDownSecOOB: settings?.trustedPosition_clusterSwapCoolDownSecOOB ?? defaultParams.clusterSwapCoolDownSecOOB,
      trustedLimitSecOOB: settings?.trustedPosition_trustedLimitSecOOB ?? defaultParams.trustedLimitSecOOB,
      stdLimitOOB: settings?.trustedPosition_stdLimitOOB ?? defaultParams.stdLimitOOB,
      particleTrendLimitOOB: settings?.trustedPosition_particleTrendLimitOOB ?? defaultParams.particleTrendLimitOOB
    )
  }

  static func getPositionStdSettings(settings: PositionServiceSettings?, defaultParams: PositionStdSettings) -> PositionStdSettings {
    .init(
      strategy: PositionStdSettingsStrategyEnum(rawValue: settings?.positionStdSettings_strategy ?? "")?.toKotlin() ?? defaultParams.strategy,
      stdDefault: settings?.positionStdSettings_stdDefault ?? defaultParams.stdDefault,
      isCapped: settings?.positionStdSettings_isCapped ?? defaultParams.isCapped,
      minStd: settings?.positionStdSettings_minStd?.asKotlinFloat ?? defaultParams.minStd,
      maxStd: settings?.positionStdSettings_maxStd?.asKotlinFloat ?? defaultParams.maxStd
    )
  }

  static func getDefaultMagnetometerDriftEstimatorParams(settings: PositionServiceSettings?, for engine: TT2Settings.TT2Engine) -> MagnetometerDriftEstimatorParams {
    switch settings?.stringValues?["ios_magnetometerDriftEstimator_version"] {
    case "FORCE_MAG_START":
      return VPSMagnetometerDriftEstimatorParams.shared.MagnetometerParamsForceMagStart
    case "NO_MAG_START":
      return VPSMagnetometerDriftEstimatorParams.shared.MagnetometerParamsNoMagStart
    case "UNCERTAIN_START_BILKA":
      return VPSMagnetometerDriftEstimatorParams.shared.MagnetometerParamsBilka
    case "IOS_INDOORS":
      return VPSMagnetometerDriftEstimatorParams.shared.MagnetometerParamsIOSIndoors
    case "IOS_OUTDOORS":
      return VPSMagnetometerDriftEstimatorParams.shared.MagnetometerParamsIOSOutdoors
    default:
      switch engine {
      case .indoor:
        return VPSMagnetometerDriftEstimatorParams.shared.MagnetometerParamsIOSIndoors
      case .gpsFusion, .noMap, .openTerrain:
        return VPSMagnetometerDriftEstimatorParams.shared.MagnetometerParamsIOSOutdoors
      }
    }
  }

  static func getMagnetometerDriftEstimatorParams(settings: PositionServiceSettings?, defaultParams: MagnetometerDriftEstimatorParams) -> MagnetometerDriftEstimatorParams {
    .init(
      version: defaultParams.version,
      useMagnetometer: settings?.magnetometerDriftEstimator_useMagnetometer ?? defaultParams.useMagnetometer,
      alpha: settings?.magnetometerDriftEstimator_alpha ?? defaultParams.alpha,
      maxRate: settings?.magnetometerDriftEstimator_maxRate ?? defaultParams.maxRate,
      accLowerLimit: settings?.magnetometerDriftEstimator_accLowerLimit ?? defaultParams.accLowerLimit,
      accUpperLimit: settings?.magnetometerDriftEstimator_accUpperLimit ?? defaultParams.accUpperLimit,
      magExpectedNorm: settings?.magnetometerDriftEstimator_magExpectedNorm ?? defaultParams.magExpectedNorm,
      sigmaMag: settings?.magnetometerDriftEstimator_sigmaMag ?? defaultParams.sigmaMag,
      useOSCalib: settings?.magnetometerDriftEstimator_useOSCalib ?? defaultParams.useOSCalib,
      maxQueueLengthSeconds: settings?.magnetometerDriftEstimator_maxQueueLengthSeconds ?? defaultParams.maxQueueLengthSeconds,
      biasAlpha: settings?.magnetometerDriftEstimator_biasAlpha ?? defaultParams.biasAlpha,
      normLambda: settings?.magnetometerDriftEstimator_normLambda ?? defaultParams.normLambda,
      magExpectedDip: settings?.magnetometerDriftEstimator_magExpectedDip ?? defaultParams.magExpectedDip,
      magExpectedDeclination: settings?.magnetometerDriftEstimator_magExpectedDeclination ?? defaultParams.magExpectedDeclination,
      sigmaInc: settings?.magnetometerDriftEstimator_sigmaInc ?? defaultParams.sigmaInc,
      maxGain: settings?.magnetometerDriftEstimator_maxGain ?? defaultParams.maxGain,
      useDriftCorrection: settings?.magnetometerDriftEstimator_useDriftCorrection ?? defaultParams.useDriftCorrection,
      nIters: settings?.magnetometerDriftEstimator_nIters ?? defaultParams.nIters,
      bounds: settings?.magnetometerDriftEstimator_bounds ?? defaultParams.bounds,
      subSampling: settings?.magnetometerDriftEstimator_subSampling ?? defaultParams.subSampling,
      computeInterval: settings?.magnetometerDriftEstimator_computeInterval ?? defaultParams.computeInterval,
      sensorBufferSize: settings?.magnetometerDriftEstimator_sensorBufferSize ?? defaultParams.sensorBufferSize,
      fs: settings?.magnetometerDriftEstimator_fs ?? defaultParams.fs,
      bruteThreshold: settings?.magnetometerDriftEstimator_bruteThreshold ?? defaultParams.bruteThreshold,
      doBackTracking: settings?.magnetometerDriftEstimator_doBackTracking ?? defaultParams.doBackTracking,
      doSingleBackTrack: settings?.magnetometerDriftEstimator_doSingleBackTrack ?? defaultParams.doSingleBackTrack,
      numSimilarDriftEstimatesToTriggerBackTrack: settings?.magnetometerDriftEstimator_numSimilarDriftEstimatesToTriggerBackTrack ?? defaultParams.numSimilarDriftEstimatesToTriggerBackTrack,
      driftEstimateSimilarityThreshold: settings?.magnetometerDriftEstimator_driftEstimateSimilarityThreshold ?? defaultParams.driftEstimateSimilarityThreshold,
      driftDiffToTriggerBackTrack: settings?.magnetometerDriftEstimator_driftDiffToTriggerBackTrack ?? defaultParams.driftDiffToTriggerBackTrack,
      meanSmoothingStdSeconds: settings?.magnetometerDriftEstimator_meanSmoothingStdSeconds ?? defaultParams.meanSmoothingStdSeconds,
      stdSmoothingStdSeconds: settings?.magnetometerDriftEstimator_stdSmoothingStdSeconds ?? defaultParams.stdSmoothingStdSeconds,
      magUseXChannel: settings?.magnetometerDriftEstimator_magUseXChannel ?? defaultParams.magUseXChannel,
      magUseYChannel: settings?.magnetometerDriftEstimator_magUseYChannel ?? defaultParams.magUseYChannel,
      magUseZChannel: settings?.magnetometerDriftEstimator_magUseZChannel ?? defaultParams.magUseZChannel,
      distanceThreshold: settings?.magnetometerDriftEstimator_distanceThreshold ?? defaultParams.distanceThreshold,
      useDistanceThreshold: settings?.magnetometerDriftEstimator_useDistanceThreshold ?? defaultParams.useDistanceThreshold,
      queueFillThreshold: settings?.queueFillThreshold ?? defaultParams.queueFillThreshold,
      ignoreCalibrationInterval: settings?.ignoreCalibrationInterval ?? defaultParams.ignoreCalibrationInterval,
      useTangentResidual: settings?.useTangentResidual ?? defaultParams.useTangentResidual,
      useNorthOptimizerAtUncertainStart: settings?.useNorthOptimizerAtUncertainStart ?? defaultParams.useNorthOptimizerAtUncertainStart,
      northOptimizerStartAngleTolerance: settings?.northOptimizerStartAngleTolerance ?? defaultParams.northOptimizerStartAngleTolerance
    )
  }

  static func getOrientationParams(settings: PositionServiceSettings?) -> OrientationParams {
    switch settings?.stringValues?["ios_orientationParams_version"] {
    case "BILKA":
      return VPSOrientationParams.shared.OrientationParamsBilka
    default:
      return VPSOrientationParams.shared.OrientationParamsAutomatic
    }
  }

  enum PositionStdSettingsStrategyEnum: String {
    case reportTescoSpecial = "REPORT_TESCO_SPECIAL"
    case reportActual = "REPORT_ACTUAL"
    case reportActualOnlyWhenUntrusted = "REPORT_ACTUAL_ONLY_WHEN_UNTRUSTED"
    case reportOnlyDefault = "REPORT_ONLY_DEFAULT"

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
    recorder.record(signal: outputSignal)
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
          gpsLocation: output.gnssLocation.asLocation,
          reliableSource: .undefined
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
    case let output as OutputSignal.SyncSignal: break
    case let output as OutputSignal.UserInfoVPSError:
      outputSignalPublisher.send(.userInfoVPSError(output.asVPSError))
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

extension OutputSignal.UserInfoVPSError {
  var asVPSError: VPSOutputSignal.UserInfoVPSError {
    .init(description: description(), stacktrace: stacktrace)
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
      ellipsoidalAltitude: ea,
      source: .androidInternal,
      usedConstellations: nil
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

//private extension OutputSignal.LngLatLocationSource {
//  var asSource: VPSOutputSignal.LatLngPosition.Source {
//    switch self {
//    case .gps: return .gps
//    case .undefined: return .undefined
//    case .vpsMl: return .vpsML
//    default: return .undefined
//    }
//  }
//}

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
  var rssiScanThreshold: Int32? { intValues?[.PARTICLE_FILTER_RSSI_SCAN_THRESHOLD]?.asInt32 }
  var bundleAPsInScan: Bool? { boolValues?[.PARTICLE_FILTER_BUNDLE_APS_IN_SCAN] }
  var scanGridResolution: Float? { floatValues?[.PARTICLE_FILTER_SCAN_GRID_RESOLUTION] }
  var scanErrorRatioThreshold: Float? { floatValues?[.PARTICLE_FILTER_SCAN_ERROR_RATIO_THRESHOLD] }
  var wiFiSprinkleDirectionStd: Float? { floatValues?[.PARTICLE_FILTER_WIFI_SPRINKLE_DIRECTION_STD] }
  var scanErrorSprinkleLocationStdCoefficient: Float? { floatValues?[.PARTICLE_FILTER_SCAN_ERROR_SPRINKLE_LOCATION_STD_COEFFICIENT] }
  var rescueKDEAngRatio: Float? { floatValues?[.PARTICLE_FILTER_RESCUE_KDE_ANG_RATIO] }
  var rescueStartAngRatio: Float? { floatValues?[.PARTICLE_FILTER_RESCUE_START_ANG_RATIO] }
  var rescueCompassAngRatio: Float? { floatValues?[.PARTICLE_FILTER_RESCUE_COMPASS_ANG_RATIO] }
  var wifiSprinkleDistanceCriteria: Float? { floatValues?[.PARTICLE_FILTER_WIFI_SPRINKLE_DISTANCE_CRITERIA] }
  var floorSwapPositionStd: Float? { floatValues?[.PARTICLE_FILTER_FLOOR_SWAP_POSITION_STD] }
  var floorSwapDirectionStd: Float? { floatValues?[.PARTICLE_FILTER_FLOOR_SWAP_DIRECTION_STD] }
  var floorSwapSprinklePositionStd: Float? { floatValues?[.PARTICLE_FILTER_FLOO_SWAP_SPRINKLE_POSITION_STD] }
  var floorSwapSprinkleDirectionStd: Float? { floatValues?[.PARTICLE_FILTER_FLOO_SWAP_SPRINKLE_DIRECTION_STD] }
  var idleWiFiSprinkle: Bool? { boolValues?[.PARTICLE_FILTER_IDLE_WIFI_SPRINKLE] }
  var strongRssiScanThreshold: Int32? { intValues?[.PARTICLE_FILTER_STRONG_RSSI_SCAN_THRESHOLD]?.asInt32 }
  var weakRssiScanThreshold: Int32? { intValues?[.PARTICLE_FILTER_WEAK_RSSI_SCAN_THRESHOLD]?.asInt32 }
  var nRequiredScans: Int32? { intValues?[.PARTICLE_FILTER_N_REQUIRED_SCANS]?.asInt32 }
  var minDistanceOOB: Float? { floatValues?[.PARTICLE_FILTER_MIN_DISTANCE_OOB] }
  var stairSpeedFactor: Float? { floatValues?[.PARTICLE_FILTER_STAIR_SPEED_FACTOR] }
  var exitZoneRatioForOOB: Float? { floatValues?[.PARTICLE_FILTER_EXIT_ZONE_RATIO_FOR_OOB] }

  // SCORING PARAMS
  var scoring_dt: Float? {
    floatValues?[.FOR_IOS + .SCORING_PARAMS_DT] ?? floatValues?[.SCORING_PARAMS_DT]
  }
  var scoring_scoringIntervalSec: Int32? {
    (intValues?[.FOR_IOS + .SCORING_PARAMS_SCORING_INTERVAL_SEC] ?? intValues?[.SCORING_PARAMS_SCORING_INTERVAL_SEC])?.asInt32
  }
  var scoring_clusterSwapThreshold: Float? {
    floatValues?[.FOR_IOS + .SCORING_PARAMS_CLUSTER_SWAP_THRESHOLD] ?? floatValues?[.SCORING_PARAMS_CLUSTER_SWAP_THRESHOLD]
  }
  var scoring_beforeLimitRmSec: Int32? {
    (intValues?[.FOR_IOS + .SCORING_PARAMS_BEFORE_LIMIT_RM_SEC] ?? intValues?[.SCORING_PARAMS_BEFORE_LIMIT_RM_SEC])?.asInt32
  }
  var scoring_afterLimitRmSec: Int32? {
    (intValues?[.FOR_IOS + .SCORING_PARAMS_AFTER_LIMIT_RM_SEC] ?? intValues?[.SCORING_PARAMS_AFTER_LIMIT_RM_SEC])?.asInt32
  }
  var scoring_maxGapRmSec: Int32? {
    (intValues?[.FOR_IOS + .SCORING_PARAMS_MAX_GAP_RM_SEC] ?? intValues?[.SCORING_PARAMS_MAX_GAP_RM_SEC])?.asInt32
  }
  var scoring_beforeLimitCsSec: Int32? {
    (intValues?[.FOR_IOS + .SCORING_PARAMS_BEFORE_LIMIT_CS_SEC] ?? intValues?[.SCORING_PARAMS_BEFORE_LIMIT_CS_SEC])?.asInt32
  }
  var scoring_afterLimitCsSec: Int32? {
    (intValues?[.FOR_IOS + .SCORING_PARAMS_AFTER_LIMIT_CS_SEC] ?? intValues?[.SCORING_PARAMS_AFTER_LIMIT_CS_SEC])?.asInt32
  }
  var scoring_maxGapCsSec: Int32? {
    (intValues?[.FOR_IOS + .SCORING_PARAMS_MAX_GAP_CS_SEC] ?? intValues?[.SCORING_PARAMS_MAX_GAP_CS_SEC])?.asInt32
  }
  var scoring_beforeLimitFsSec: Int32? {
    (intValues?[.FOR_IOS + .SCORING_PARAMS_BEFORE_LIMIT_FS_SEC] ?? intValues?[.SCORING_PARAMS_BEFORE_LIMIT_FS_SEC])?.asInt32
  }
  var scoring_afterLimitFsSec: Int32? {
    (intValues?[.FOR_IOS + .SCORING_PARAMS_AFTER_LIMIT_FS_SEC] ?? intValues?[.SCORING_PARAMS_AFTER_LIMIT_FS_SEC])?.asInt32
  }
  var scoring_maxGapFsSec: Int32? {
    (intValues?[.FOR_IOS + .SCORING_PARAMS_MAX_GAP_FS_SEC] ?? intValues?[.SCORING_PARAMS_MAX_GAP_FS_SEC])?.asInt32
  }

  // TRUSTED POSITION PARAMS
  var trustedPosition_dt: Float? {
    floatValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_DT] ?? floatValues?[.TRUSTED_POSITION_PARAMS_DT]
  }
  var trustedPosition_trustedLimitSec: Int32? {
    (intValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_TRUSTED_LIMIT_SEC] ?? intValues?[.TRUSTED_POSITION_PARAMS_TRUSTED_LIMIT_SEC])?.asInt32
  }
  var trustedPosition_clusterSwapCoolDownSec: Int32? {
    (intValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_CLUSTER_SWAP_COOLDOWN_SEC] ?? intValues?[.TRUSTED_POSITION_PARAMS_CLUSTER_SWAP_COOLDOWN_SEC])?.asInt32
  }
  var trustedPosition_rescueModeCoolDownSec: Int32? {
    (intValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_RESCUE_MODE_COOLDOWN_SEC] ?? intValues?[.TRUSTED_POSITION_PARAMS_RESCUE_MODE_COOLDOWN_SEC])?.asInt32
  }
  var trustedPosition_stdLimit: Float? {
    floatValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_STD_LIMIT] ?? floatValues?[.TRUSTED_POSITION_PARAMS_STD_LIMIT]
  }
  var trustedPosition_stdLimitLarge: Float? {
    floatValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_STD_LIMIT_LARGE] ?? floatValues?[.TRUSTED_POSITION_PARAMS_STD_LIMIT_LARGE]
  }
  var trustedPosition_particleTrendLimit: Float? {
    floatValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_PARTICLE_TREND_LIMIT] ?? floatValues?[.TRUSTED_POSITION_PARAMS_PARTICLE_TREND_LIMIT]
  }
  var trustedPosition_consistencyScoreLimit: Float? {
    floatValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_CONSISTENCY_SCORE_LIMIT] ?? floatValues?[.TRUSTED_POSITION_PARAMS_CONSISTENCY_SCORE_LIMIT]
  }
  var trustedPosition_stepsSinceSprinkleLimit: Int32? {
    (intValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_STEPS_SINCE_SPRINKLE_LIMIT] ?? intValues?[.TRUSTED_POSITION_PARAMS_STEPS_SINCE_SPRINKLE_LIMIT])?.asInt32
  }
  var trustedPosition_clusterSwapCoolDownSecOOB: Int32? {
    (intValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_CLUSTER_SWAP_COOLDOWN_SEC_OOB] ?? intValues?[.TRUSTED_POSITION_PARAMS_CLUSTER_SWAP_COOLDOWN_SEC_OOB])?.asInt32
  }
  var trustedPosition_trustedLimitSecOOB: Int32? {
    (intValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_TRUSTED_LIMIT_SEC_OOB] ?? intValues?[.TRUSTED_POSITION_PARAMS_TRUSTED_LIMIT_SEC_OOB])?.asInt32
  }
  var trustedPosition_stdLimitOOB: Float? {
    floatValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_STD_LIMIT_OOB]  ?? floatValues?[.TRUSTED_POSITION_PARAMS_STD_LIMIT_OOB]
  }
  var trustedPosition_particleTrendLimitOOB: Float? {
    floatValues?[.FOR_IOS + .TRUSTED_POSITION_PARAMS_PARTICLE_TREND_LIMIT_OOB] ?? floatValues?[.TRUSTED_POSITION_PARAMS_PARTICLE_TREND_LIMIT_OOB]
  }

  // POSITION STD SETTINGS
  var positionStdSettings_strategy: String? {
    stringValues?[.FOR_IOS + .POSTION_STD_SETTINGS_STRATEGY] ?? stringValues?[.POSTION_STD_SETTINGS_STRATEGY]
  }
  var positionStdSettings_stdDefault: Float? {
    floatValues?[.FOR_IOS + .POSTION_STD_SETTINGS_STD_DEFAULT] ?? floatValues?[.POSTION_STD_SETTINGS_STD_DEFAULT]
  }
  var positionStdSettings_isCapped: Bool? {
    boolValues?[.FOR_IOS + .POSTION_STD_SETTINGS_IS_CAPPED] ?? boolValues?[.POSTION_STD_SETTINGS_IS_CAPPED]
  }
  var positionStdSettings_minStd: Float? {
    floatValues?[.FOR_IOS + .POSTION_STD_SETTINGS_MIN_STD] ?? floatValues?[.POSTION_STD_SETTINGS_MIN_STD]
  }
  var positionStdSettings_maxStd: Float? {
    floatValues?[.FOR_IOS + .POSTION_STD_SETTINGS_MAX_STD] ?? floatValues?[.POSTION_STD_SETTINGS_MAX_STD]
  }

  // MAGNETOMETER DRIFT ESTIMATOR
  var magnetometerDriftEstimator_useMagnetometer: Bool? {
    boolValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_USE_MAGNETOMETER] ?? boolValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_USE_MAGNETOMETER]
  }
  var magnetometerDriftEstimator_alpha: Float? {
    floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_ALPHA] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_ALPHA]
  }
  var magnetometerDriftEstimator_maxRate: Float? {
    floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_MAX_RATE] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_MAX_RATE]
  }
  var magnetometerDriftEstimator_accLowerLimit: Float? {
    floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_ACC_LOWER_LIMIT] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_ACC_LOWER_LIMIT]
  }
  var magnetometerDriftEstimator_accUpperLimit: Float? {
    floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_ACC_UPPER_LIMIT] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_ACC_UPPER_LIMIT]
  }
  var magnetometerDriftEstimator_magExpectedNorm: Float? {
    floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_MAG_EXPECTED_NORM] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_MAG_EXPECTED_NORM]
  }
  var magnetometerDriftEstimator_sigmaMag: Float? {
    floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_SIGMA_MAG] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_SIGMA_MAG]
  }
  var magnetometerDriftEstimator_useOSCalib: Bool? {
    boolValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_USE_OS_CALIB] ?? boolValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_USE_OS_CALIB]
  }
  var magnetometerDriftEstimator_maxQueueLengthSeconds: Int32? {
    (intValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_MAX_QUEUE_LENGTH_SECONDS] ?? intValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_MAX_QUEUE_LENGTH_SECONDS])?.asInt32
  }
  var magnetometerDriftEstimator_biasAlpha: Float? {
    floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_BIAS_ALPHA] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_BIAS_ALPHA]
  }
  var magnetometerDriftEstimator_normLambda: Float? {
    floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_NORM_LAMBDA] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_NORM_LAMBDA]
  }
  var magnetometerDriftEstimator_magExpectedDip: Float? {
    floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_MAG_EXPEECTED_DIP] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_MAG_EXPEECTED_DIP]
  }
  var magnetometerDriftEstimator_magExpectedDeclination: Float? {
    floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_MAG_EXPEECTED_DECLINATION] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_MAG_EXPEECTED_DECLINATION]
  }
  var magnetometerDriftEstimator_sigmaInc: Float? {
    floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_SIGMA_INC] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_SIGMA_INC]
  }
  var magnetometerDriftEstimator_maxGain: Float? {
    floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_MAX_GAIN] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_MAX_GAIN]
  }
  var magnetometerDriftEstimator_useDriftCorrection: Bool? {
    boolValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_USE_DRIFT_CORRECTION] ?? boolValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_USE_DRIFT_CORRECTION]
  }
  var magnetometerDriftEstimator_nIters: [KotlinInt]? {
    guard
      let values = intArrayValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_N_ITERS] ?? intArrayValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_N_ITERS]
    else { return nil }
    let newArr = values.compactMap(KotlinInt.init)
    return newArr.count == values.count ? newArr : nil
  }
  var magnetometerDriftEstimator_bounds: KotlinPair<KotlinDouble, KotlinDouble>? {
    guard
      let values = floatArrayValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_BOUNDS] ?? floatArrayValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_BOUNDS],
      values.count == 2
    else { return nil }
    return .init(first: .init(value: values[0].asDouble), second: .init(value: values[1].asDouble))
  }
  var magnetometerDriftEstimator_subSampling: Int32? {
    (intValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_SUB_SAMPLING] ?? intValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_SUB_SAMPLING])?.asInt32
  }
  var magnetometerDriftEstimator_computeInterval: Int32? {
    (intValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_COMPUTE_INTERVAL] ?? intValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_COMPUTE_INTERVAL])?.asInt32
  }
  var magnetometerDriftEstimator_sensorBufferSize: Int32? {
    (intValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_SENSOR_BUFFER_SIZE] ?? intValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_SENSOR_BUFFER_SIZE])?.asInt32
  }
  var magnetometerDriftEstimator_fs: Double? {
    (floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_FS] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_FS])?.asDouble
  }
  var magnetometerDriftEstimator_bruteThreshold: Float? {
    floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_BRUTE_THRESHOLD] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_BRUTE_THRESHOLD]
  }
  var magnetometerDriftEstimator_doBackTracking: Bool? {
    boolValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_DO_BACK_TRACKING] ?? boolValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_DO_BACK_TRACKING]
  }
  var magnetometerDriftEstimator_doSingleBackTrack: Bool? {
    boolValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_DO_SINGLE_BACK_TRACK] ?? boolValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_DO_SINGLE_BACK_TRACK]
  }
  var magnetometerDriftEstimator_numSimilarDriftEstimatesToTriggerBackTrack: Int32? {
    (intValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_NUM_SIMILAR_DRIFT_ESTIMATES_TO_TRIGGER_BACK_TRACK] ?? intValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_NUM_SIMILAR_DRIFT_ESTIMATES_TO_TRIGGER_BACK_TRACK])?.asInt32
  }
  var magnetometerDriftEstimator_driftEstimateSimilarityThreshold: Float? {
    floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_DRIFT_ESTIMATE_SIMILARITY_THRESHOLD] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_DRIFT_ESTIMATE_SIMILARITY_THRESHOLD]
  }
  var magnetometerDriftEstimator_driftDiffToTriggerBackTrack: Float? {
    floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_DRIFT_DIFF_TO_TRIGGER_BACK_TRACK] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_DRIFT_DIFF_TO_TRIGGER_BACK_TRACK]
  }
  var magnetometerDriftEstimator_meanSmoothingStdSeconds: Double? {
    (floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_MEAN_SMOOTHING_STD_SECONDS] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_MEAN_SMOOTHING_STD_SECONDS])?.asDouble
  }
  var magnetometerDriftEstimator_stdSmoothingStdSeconds: Double? {
    (floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_STD_SMOOTHING_STD_SECONDS] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_STD_SMOOTHING_STD_SECONDS])?.asDouble
  }
  var magnetometerDriftEstimator_magUseXChannel: Bool? {
    boolValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_MAG_USE_X_CHANNEL] ?? boolValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_MAG_USE_X_CHANNEL]
  }
  var magnetometerDriftEstimator_magUseYChannel: Bool? {
    boolValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_MAG_USE_Y_CHANNEL] ?? boolValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_MAG_USE_Y_CHANNEL]
  }
  var magnetometerDriftEstimator_magUseZChannel: Bool? {
    boolValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_MAG_USE_Z_CHANNEL] ?? boolValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_MAG_USE_Z_CHANNEL]
  }
  var magnetometerDriftEstimator_distanceThreshold: Float? {
    floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_DISTANCE_THRESHOLD] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_DISTANCE_THRESHOLD]
  }
  var magnetometerDriftEstimator_useDistanceThreshold: Bool? {
    boolValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_USE_DISTANCE_THRESHOLD] ?? boolValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_USE_DISTANCE_THRESHOLD]
  }

  var queueFillThreshold: Float? {
    floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_QUEUE_FILL_THRESHOLD] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_QUEUE_FILL_THRESHOLD]
  }

  var ignoreCalibrationInterval: Bool? {
    boolValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_IGNORE_CALIBRATION_INTERVAL] ?? boolValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_IGNORE_CALIBRATION_INTERVAL]
  }

  var useTangentResidual: Bool? {
    boolValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_USE_TANGENT_RESIDUAL] ?? boolValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_USE_TANGENT_RESIDUAL]
  }

  var useNorthOptimizerAtUncertainStart: Bool? {
    boolValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_USE_NORTH_OPTIMIZER_AT_UNCERTAIN_START] ?? boolValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_USE_NORTH_OPTIMIZER_AT_UNCERTAIN_START]
  }

  var northOptimizerStartAngleTolerance: KotlinFloat? {
    (floatValues?[.FOR_IOS + .MAGNETOMETER_DRIFT_ESTIMATOR_NORTH_OPTIMIZER_START_ANGLE_TOLERANCE] ?? floatValues?[.MAGNETOMETER_DRIFT_ESTIMATOR_NORTH_OPTIMIZER_START_ANGLE_TOLERANCE])?.asKotlinFloat
  }

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
  static let PARTICLE_FILTER_RSSI_SCAN_THRESHOLD: String = "ios_particleFilter_rssiScanThreshold"
  static let PARTICLE_FILTER_BUNDLE_APS_IN_SCAN : String = "ios_particleFilter_bundleAPsInScan"
  static let PARTICLE_FILTER_SCAN_GRID_RESOLUTION: String = "ios_particleFilter_scanGridResolution"
  static let PARTICLE_FILTER_SCAN_ERROR_RATIO_THRESHOLD: String = "ios_particleFilter_scanErrorRatioThreshold"
  static let PARTICLE_FILTER_WIFI_SPRINKLE_DIRECTION_STD: String = "ios_particleFilter_wiFiSprinkleDirectionStd"
  static let PARTICLE_FILTER_SCAN_ERROR_SPRINKLE_LOCATION_STD_COEFFICIENT: String = "ios_particleFilter_scanErrorSprinkleLocationStdCoefficient"
  static let PARTICLE_FILTER_RESCUE_KDE_ANG_RATIO: String = "ios_particleFilter_rescueKDEAngRatio"
  static let PARTICLE_FILTER_RESCUE_START_ANG_RATIO: String = "ios_particleFilter_rescueStartAngRatio"
  static let PARTICLE_FILTER_RESCUE_COMPASS_ANG_RATIO: String = "ios_particleFilter_rescueCompassAngRatio"
  static let PARTICLE_FILTER_WIFI_SPRINKLE_DISTANCE_CRITERIA: String = "ios_particleFilter_wifiSprinkleDistanceCriteria"
  static let PARTICLE_FILTER_FLOOR_SWAP_POSITION_STD: String = "ios_particleFilter_floorSwapPositionStd"
  static let PARTICLE_FILTER_FLOOR_SWAP_DIRECTION_STD: String = "ios_particleFilter_floorSwapDirectionStd"
  static let PARTICLE_FILTER_FLOO_SWAP_SPRINKLE_POSITION_STD: String = "ios_particleFilter_floorSwapSprinklePositionStd"
  static let PARTICLE_FILTER_FLOO_SWAP_SPRINKLE_DIRECTION_STD: String = "ios_particleFilter_floorSwapSprinkleDirectionStd"
  static let PARTICLE_FILTER_IDLE_WIFI_SPRINKLE: String = "ios_particleFilter_idleWiFiSprinkle"
  static let PARTICLE_FILTER_STRONG_RSSI_SCAN_THRESHOLD: String = "ios_particleFilter_strongRssiScanThreshold"
  static let PARTICLE_FILTER_WEAK_RSSI_SCAN_THRESHOLD: String = "ios_particleFilter_weakRssiScanThreshold"
  static let PARTICLE_FILTER_N_REQUIRED_SCANS: String = "ios_particleFilter_nRequiredScans"
  static let PARTICLE_FILTER_MIN_DISTANCE_OOB: String = "ios_particleFilter_minDistanceOOB"
  static let PARTICLE_FILTER_STAIR_SPEED_FACTOR: String = "ios_particleFilter_stairSpeedFactor"
  static let PARTICLE_FILTER_EXIT_ZONE_RATIO_FOR_OOB: String = "ios_particleFilter_exitZoneRatioForOOB"

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
  static let TRUSTED_POSITION_PARAMS_STEPS_SINCE_SPRINKLE_LIMIT: String = "trustedPosition_stepsSinceSprinkleLimit"
  static let TRUSTED_POSITION_PARAMS_CLUSTER_SWAP_COOLDOWN_SEC_OOB: String = "trustedPosition_clusterSwapCoolDownSecOOB"
  static let TRUSTED_POSITION_PARAMS_TRUSTED_LIMIT_SEC_OOB: String = "trustedPosition_trustedLimitSecOOB"
  static let TRUSTED_POSITION_PARAMS_STD_LIMIT_OOB: String = "trustedPosition_stdLimitOOB"
  static let TRUSTED_POSITION_PARAMS_PARTICLE_TREND_LIMIT_OOB: String = "trustedPosition_particleTrendLimitOOB"

  static let POSTION_STD_SETTINGS_STRATEGY: String = "positionStdSettings_strategy"
  static let POSTION_STD_SETTINGS_STD_DEFAULT: String = "positionStdSettings_stdDefault"
  static let POSTION_STD_SETTINGS_IS_CAPPED: String = "positionStdSettings_isCapped"
  static let POSTION_STD_SETTINGS_MIN_STD: String = "positionStdSettings_minStd"
  static let POSTION_STD_SETTINGS_MAX_STD: String = "positionStdSettings_maxStd"

  static let MAGNETOMETER_DRIFT_ESTIMATOR_USE_MAGNETOMETER: String = "magnetometerDriftEstimator_useMagnetometer"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_ALPHA: String = "magnetometerDriftEstimator_alpha"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_MAX_RATE: String = "magnetometerDriftEstimator_maxRate"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_ACC_LOWER_LIMIT: String = "magnetometerDriftEstimator_accLowerLimit"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_ACC_UPPER_LIMIT: String = "magnetometerDriftEstimator_accUpperLimit"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_MAG_EXPECTED_NORM: String = "magnetometerDriftEstimator_magExpectedNorm"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_SIGMA_MAG: String = "magnetometerDriftEstimator_sigmaMag"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_USE_OS_CALIB: String = "magnetometerDriftEstimator_useOSCalib"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_MAX_QUEUE_LENGTH_SECONDS: String = "magnetometerDriftEstimator_maxQueueLengthSeconds"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_BIAS_ALPHA: String = "magnetometerDriftEstimator_biasAlpha"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_NORM_LAMBDA: String = "magnetometerDriftEstimator_normLambda"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_MAG_EXPEECTED_DIP: String = "magnetometerDriftEstimator_magExpectedDip"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_MAG_EXPEECTED_DECLINATION: String = "magnetometerDriftEstimator_magExpectedDeclination"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_SIGMA_INC: String = "magnetometerDriftEstimator_sigmaInc"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_MAX_GAIN: String = "magnetometerDriftEstimator_maxGain"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_USE_DRIFT_CORRECTION: String = "magnetometerDriftEstimator_useDriftCorrection"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_N_ITERS: String = "magnetometerDriftEstimator_nIters"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_BOUNDS: String = "magnetometerDriftEstimator_bounds"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_SUB_SAMPLING: String = "magnetometerDriftEstimator_subSampling"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_COMPUTE_INTERVAL: String = "magnetometerDriftEstimator_computeInterval"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_SENSOR_BUFFER_SIZE: String = "magnetometerDriftEstimator_sensorBufferSize"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_FS: String = "magnetometerDriftEstimator_fs"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_BRUTE_THRESHOLD: String = "magnetometerDriftEstimator_bruteThreshold"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_DO_BACK_TRACKING: String = "magnetometerDriftEstimator_doBackTracking"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_DO_SINGLE_BACK_TRACK: String = "magnetometerDriftEstimator_doSingleBackTrack"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_NUM_SIMILAR_DRIFT_ESTIMATES_TO_TRIGGER_BACK_TRACK: String = "magnetometerDriftEstimator_numSimilarDriftEstimatesToTriggerBackTrack"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_DRIFT_ESTIMATE_SIMILARITY_THRESHOLD: String = "magnetometerDriftEstimator_driftEstimateSimilarityThreshold"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_DRIFT_DIFF_TO_TRIGGER_BACK_TRACK: String = "magnetometerDriftEstimator_driftDiffToTriggerBackTrack"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_MEAN_SMOOTHING_STD_SECONDS: String = "magnetometerDriftEstimator_meanSmoothingStdSeconds"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_STD_SMOOTHING_STD_SECONDS: String = "magnetometerDriftEstimator_stdSmoothingStdSeconds"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_MAG_USE_X_CHANNEL: String = "magnetometerDriftEstimator_magUseXChannel"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_MAG_USE_Y_CHANNEL: String = "magnetometerDriftEstimator_magUseYChannel"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_MAG_USE_Z_CHANNEL: String = "magnetometerDriftEstimator_magUseZChannel"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_DISTANCE_THRESHOLD: String = "magnetometerDriftEstimator_distanceThreshold"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_USE_DISTANCE_THRESHOLD: String = "magnetometerDriftEstimator_useDistanceThreshold"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_QUEUE_FILL_THRESHOLD: String = "magnetometerDriftEstimator_queueFillThreshold"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_IGNORE_CALIBRATION_INTERVAL: String = "magnetometerDriftEstimator_ignoreCalibrationInterval"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_USE_TANGENT_RESIDUAL: String = "magnetometerDriftEstimator_useTangentResidual"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_USE_NORTH_OPTIMIZER_AT_UNCERTAIN_START: String = "magnetometerDriftEstimator_useNorthOptimizerAtUncertainStart"
  static let MAGNETOMETER_DRIFT_ESTIMATOR_NORTH_OPTIMIZER_START_ANGLE_TOLERANCE: String = "magnetometerDriftEstimator_northOptimizerStartAngleTolerance"
}

extension vps.MLProcessedPath {
  var asMLProcessedPath: VSFoundation.MLProcessedPath {
    .init(path: path.map({ $0.asCGPoint }), angleCorrection: angleCorrection, speedAdjustment: speedAdjustment)
  }
}
