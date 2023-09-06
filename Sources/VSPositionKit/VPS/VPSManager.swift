//
// VPSManager
// VSTT2
//
// Created by Hripsime on 2022-01-31.
// Copyright Virtual Stores - 2021

import Foundation
import VSFoundation
import CoreGraphics
import Combine
import vps
import VSSensorFusion
import UIKit

public let vpsVersion = VPSConfig.shared.VPS_VERSION
public let velocityModelInterfaceVersion = VPSConfig.shared.VELOCITY_MODEL_INTERFACE_VERSION

final class VPSManager: VPSWrapper {
  @Inject var sensor: VPSSensorManager

  var recordingPublisher: CurrentValueSubject<(identifier: String, data: String, sessionId: String, lastFile: Bool)?, Never> = .init(nil)
  var outputSignalPublisher: CurrentValueSubject<VPSOutputSignal?, Never> = .init(nil)
  var vpsParams: [String:String] { params.map() }

  private (set) var pathfinder: BasePathfinder?
  var vpsRunning: Bool = false

  /// vps properties
  private let serialDispatch = DispatchQueue(label: "TT2VPSMANAGERSERIAL")
  private let recorder: VPSRecorder
  private let floorLevelHandler: FloorLevelHandler
  private let modelManager: VPSModelManager
  private let params: ParticleFilterParams
  private var vps: VPS?

  private var isRecording: Bool { recorder.isRecording }

  private var cancellable = Set<AnyCancellable>()

  init(floorHeightDiffInMeters: Double, trueNorthOffset: Double = 0.0, rtls: RtlsOptions, mapData: MapFence, positionServiceSettings: PositionServiceSettings?, converter: ICoordinateConverter, modelManager: VPSModelManager) {
    self.recorder = VPSRecorder(maxRecordingTimePerPartInMillis: positionServiceSettings?.intValues?["maxRecordingTimePerPartInMillis"]?.asLong)
    self.floorLevelHandler = FloorLevelHandler(floorLevels: [KotlinLong(value: rtls.id):FloorLevelData(data: FloorData(rtls: rtls, mapFence: mapData, metersToNextFloor: floorHeightDiffInMeters, converter: converter))], initialFloorLevelId: nil, debug: false)
    self.modelManager = modelManager
    let defaultParams: ParticleFilterParams = VPSManager.getDefaultParams(positionServiceSettings: positionServiceSettings)
    self.params = ParticleFilterParams(
      maxNumParticles: positionServiceSettings?.maxNumParticles ?? defaultParams.maxNumParticles,
      stepLengthStd: positionServiceSettings?.stepLengthStd ?? defaultParams.stepLengthStd,
      stepDirectionStd: positionServiceSettings?.stepDirectionStd ?? defaultParams.stepDirectionStd,
      biasStd: positionServiceSettings?.biasStd ?? defaultParams.biasStd,
      startMethod: positionServiceSettings?.startMethod ?? defaultParams.startMethod,
      startPositionStd: positionServiceSettings?.startPositionStd ?? defaultParams.startPositionStd,
      startDirectionStd: positionServiceSettings?.startDirectionStd ?? defaultParams.startDirectionStd,
      syncMethod: positionServiceSettings?.syncMethod ?? defaultParams.syncMethod,
      syncPositionStd: positionServiceSettings?.syncPositionStd ?? defaultParams.syncPositionStd,
      syncDirectionStd: positionServiceSettings?.syncDirectionStd ?? defaultParams.syncDirectionStd,
      rescuePositionStd: positionServiceSettings?.rescuePositionStd ?? defaultParams.rescuePositionStd,
      rescueDirectionStd: positionServiceSettings?.rescueDirectionStd ?? defaultParams.rescueDirectionStd,
      kldEpsilon: positionServiceSettings?.kldEpsilon ?? defaultParams.kldEpsilon,
      kldDelta: positionServiceSettings?.kldDelta ?? defaultParams.kldDelta,
      kldZ: positionServiceSettings?.kldZ ?? defaultParams.kldZ,
      binSize: defaultParams.binSize,
      uxPositionConfidence: positionServiceSettings?.uxPositionConfidence ?? defaultParams.uxPositionConfidence,
      angleOffsetGainDegPerMin: positionServiceSettings?.angleOffsetGainDegPerMin ?? defaultParams.angleOffsetGainDegPerMin,
      speedFactor: positionServiceSettings?.speedFactor ?? defaultParams.speedFactor,
      naiveOutputSyncMovement: positionServiceSettings?.naiveOutputSyncMovement ?? defaultParams.naiveOutputSyncMovement
    )
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
        self?.serialDispatch.async { self?.vps?.onInputSignal(signal: signal) }
      }.store(in: &cancellable)

    recorder.dataPublisher
      .compactMap { $0 }
      .sink { [weak self] in self?.recordingPublisher.send($0) }
      .store(in: &cancellable)
  }

  func start() {
    recorder.startRecording(sessionId: nil)
    serialDispatch.async { [self] in
      //let params = ParticleFilterParams(
      //  maxNumParticles: IosParticleFilterParams.shared.default_.maxNumParticles * 5,
      //  stepLengthStd: IosParticleFilterParams.shared.default_.stepLengthStd,
      //  stepDirectionStd: IosParticleFilterParams.shared.default_.stepDirectionStd,
      //  biasStd: IosParticleFilterParams.shared.default_.biasStd,
      //  startMethod: IosParticleFilterParams.shared.default_.startMethod,
      //  startPositionStd: 7.5,
      //  startDirectionStd: 0.5,
      //  syncMethod: IosParticleFilterParams.shared.default_.syncMethod,
      //  syncPositionStd: IosParticleFilterParams.shared.default_.syncPositionStd,
      //  syncDirectionStd: IosParticleFilterParams.shared.default_.syncDirectionStd,
      //  rescuePositionStd: IosParticleFilterParams.shared.default_.rescuePositionStd,
      //  rescueDirectionStd: IosParticleFilterParams.shared.default_.rescueDirectionStd,
      //  kldEpsilon: IosParticleFilterParams.shared.default_.kldEpsilon,
      //  kldDelta: IosParticleFilterParams.shared.default_.kldDelta,
      //  kldZ: IosParticleFilterParams.shared.default_.kldZ,
      //  binSize: IosParticleFilterParams.shared.default_.binSize//,
      //  //uxPositionConfidence: IosParticleFilterParams.shared.default_.uxPositionConfidence
      //)
      //print("PARAMS", params)
      vps = VPS(
        velocityModel: VPSVelocityModel(manager: modelManager),
        floorLevelHandler: floorLevelHandler,
        outputHandler: self,
        system: .ios,
        featureToTensorValueParams: FeatureToTensorValueParams(frameSize: modelManager.params?.frameSize ?? 200, packageFrequency: 30),
        interpolationParams: IosInterpolationModuleParams.shared.default_,
        featurePackerParams: FeaturePackerParams(useSmoothing: modelManager.params?.useSmooting ?? false, flipAcc: false),
        particleFilterParams: params,
        debugMode: false,
        extendedDebugMode: false,
        naiveOutputFilter: true,
        uxPositionActivated: false,
        mlPositionActivated: false
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
    serialDispatch.async { self.vps?.onInputSignal(signal: signal) }
    recorder.stopRecording()
    vpsRunning = false
  }

  func stopRecording() {
    guard isRecording else { return }
    recorder.stopRecording()
  }

  func startNavigation(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool) {
    start()
    vpsRunning = true
    let signal = InputSignal.Start(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, positions: positions.map({ $0.asCoordinateF }), syncPosition: syncPosition, syncAngle: syncAngle, angle: Float(angle), uncertainAngle: uncertainAngle)
    recorder.record(inputSignal: signal)
    serialDispatch.async { self.vps?.onInputSignal(signal: signal) }
  }

  func syncPosition(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool) {
    let signal = InputSignal.SyncPosition(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, positions: positions.map({ $0.asCoordinateF }), syncPosition: syncPosition, syncAngle: syncAngle, angle: Float(angle), uncertainAngle: uncertainAngle)
    recorder.record(inputSignal: signal)
    serialDispatch.async { self.vps?.onInputSignal(signal: signal) }
  }

  func setPathfinder(pathfinder: BasePathfinder) {
    self.pathfinder = pathfinder
  }

  // why does this exist? is this not the same as sync?
  func setPosition(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool) {
    serialDispatch.async { [self] in
      if vpsRunning {
        self.syncPosition(positions: positions, syncPosition: syncPosition, syncAngle: syncAngle, angle: angle, uncertainAngle: uncertainAngle)
      } else {
        startNavigation(positions: positions, syncPosition: syncPosition, syncAngle: syncAngle, angle: angle, uncertainAngle: uncertainAngle)
      }
    }
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

  static func getDefaultParams(positionServiceSettings: PositionServiceSettings?) -> ParticleFilterParams {
    guard
      let option = positionServiceSettings?.stringValues?[.PARTICLE_FILTER_DEFAULT_PARAMS],
      let defaultEnum = VPSParticleFilterDefaultEnum(rawValue: option)
    else { return VPSParticleFilterParams.shared.default_ }
    switch defaultEnum {
    case .´default´: return VPSParticleFilterParams.shared.default_
    case .compass: return VPSParticleFilterParams.shared.compass
    }
  }

  enum VPSParticleFilterDefaultEnum: String {
    case ´default´ = "DEFAULT"
    case compass = "COMPASS"
  }
}

extension VPSManager: VPSOutputHandler {
  func onOutputSignal(outputSignal: OutputSignal) {
    if let signal = outputSignal as? OutputSignal.Position {
      let position = VPSOutputSignal.Position(
        position: signal.position.asCGPoint,
        std: Double(signal.std),
        status: signal.status.asStatus
      )
      outputSignalPublisher.send(.position(position: position))
    } else if let signal = outputSignal as? OutputSignal.UXPosition {
      let position = VPSOutputSignal.Position(
        position: signal.position.asCGPoint,
        std: Double(signal.std),
        status: signal.status.asStatus
      )
      outputSignalPublisher.send(.ux(position: position))
    } else if let signal = outputSignal as? OutputSignal.MLOutputPosition {
      let position = VPSOutputSignal.Position(
        position: signal.position.asCGPoint,
        std: Double(signal.std),
        status: .none
      )
      outputSignalPublisher.send(.ml(position: position))
    } else if let signal = outputSignal as? OutputSignal.Rotation {
      let heading = DoubleExtKt.radiansToDegrees(Double(signal.heading))
      //print("Rotation", heading)
      outputSignalPublisher.send(.rotation(heading: Double(heading)))
    }
  }
}

extension VPSManager: LogOutputHandler {
  func onLog(text: String, id: String?) {
    //print("Logger", text)
  }
}

extension OutputSignal.PositionStatus {
  var asStatus: VPSOutputSignal.Position.Status {
    switch self {
    case .confident: return .confident
    case .uncertain: return .uncertain
    default: return .none
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
  var asSyncMethod : SyncMethod {
    switch self {
    case .gauss: return .gauss
    case .compassGauss: return .compassGauss
    case .standard: return .standard
    }
  }
}

private extension PositionServiceSettings {
  var maxNumParticles: Int32? { intValues?[.PARTICLE_FILTER_MAX_NUM_PARTICLES]?.asInt32 }
  var stepLengthStd: Float? { floatValues?[.PARTICLE_FILTER_STEP_LENGTH_STD] }
  var stepDirectionStd: Float? { floatValues?[.PARTICLE_FILTER_STEP_DIRECTION_STD] }
  var biasStd: Float? { floatValues?[.PARTICLE_FILTER_BIAS_STD] }
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
  var uxPositionConfidence: Float? { floatValues?[.PARTICLE_FILTER_UX_POSITION_CONFIDENCE] }
  var angleOffsetGainDegPerMin: Float? { floatValues?[.PARTICLE_FILTER_ANGLE_OFFSET_GAIN_DEG_PER_MIN] }
  var speedFactor: Float? { floatValues?[.PARTICLE_FILTER_SPEED_FACTOR] }
  var naiveOutputSyncMovement: Bool? { boolValues?[.PARTICLE_FILTER_NAIVE_OUTPUT_SYNC_MOVEMENT] }

  enum VPSStartMethod: String {
    case gauss = "GAUSS"
    case global = "GLOBAL"
    case standard = "STANDARD"
  }

  enum VPSSyncMethod: String {
    case gauss = "GAUSS"
    case compassGauss = "COMPASSGAUSS"
    case standard = "STANDARD"
  }
}

private extension String {
  static let PARTICLE_FILTER_DEFAULT_PARAMS: String = "particleFilter_defaultParams"
  static let PARTICLE_FILTER_PARAMS_DEFAULT: String = "DEFAULT"
  static let PARTICLE_FILTER_PARAMS_COMPASS: String = "COMPASS"
  static let PARTICLE_FILTER_MAX_NUM_PARTICLES: String = "particleFilter_maxNumParticles"
  static let PARTICLE_FILTER_STEP_LENGTH_STD: String = "particleFilter_stepLengthStd"
  static let PARTICLE_FILTER_STEP_DIRECTION_STD: String = "particleFilter_stepDirectionStd"
  static let PARTICLE_FILTER_BIAS_STD: String = "particleFilter_biasStd"
  static let PARTICLE_FILTER_START_METHOD: String = "particleFilter_startMethod"
  static let PARTICLE_FILTER_START_POSITION_STD: String = "particleFilter_startPositionStd"
  static let PARTICLE_FILTER_START_DIRECTION_STD: String = "particleFilter_startDirectionStd"
  static let PARTICLE_FILTER_SYNC_METHOD: String = "particleFilter_syncMethod"
  static let PARTICLE_FILTER_SYNC_POSITION_STD: String = "particleFilter_syncPositionStd"
  static let PARTICLE_FILTER_SYNC_DIRECTION_STD: String = "particleFilter_syncDirectionStd"
  static let PARTICLE_FILTER_RESCUE_POSITION_STD: String = "particleFilter_rescuePositionStd"
  static let PARTICLE_FILTER_RESCUE_DIRECTION_STD: String = "particleFilter_rescueDirectionStd"
  static let PARTICLE_FILTER_KLD_EPSILON: String = "particleFilter_kldEpsilon"
  static let PARTICLE_FILTER_KLD_DELTA: String = "particleFilter_kldDelta"
  static let PARTICLE_FILTER_KLD_Z: String = "particleFilter_kldZ"
  static let PARTICLE_FILTER_UX_POSITION_CONFIDENCE: String = "particleFilter_uxPositionConfidence"
  static let PARTICLE_FILTER_ANGLE_OFFSET_GAIN_DEG_PER_MIN: String = "particleFilter_angleOffsetGainDegPerMin"
  static let PARTICLE_FILTER_SPEED_FACTOR: String = "particleFilter_speedFactor"
  static let PARTICLE_FILTER_NAIVE_OUTPUT_SYNC_MOVEMENT: String = "particleFilter_naiveOutputSyncMovement"
}
