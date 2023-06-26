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

  private (set) var pathfinder: BasePathfinder?
  var vpsRunning: Bool = false

  /// vps properties
  private let serialDispatch = DispatchQueue(label: "TT2VPSMANAGERSERIAL")
  private let recorder: VPSRecorder
  private var vps: VPS?
  private var floorLevelHandler: FloorLevelHandler

  private var isRecording: Bool { recorder.isRecording }
  private var modelManager: VPSModelManager

  private var cancellable = Set<AnyCancellable>()

  init(floorHeightDiffInMeters: Double, trueNorthOffset: Double = 0.0, rtls: RtlsOptions, mapData: MapFence, maxRecordingTimePerPartInMillis: Int64?, converter: ICoordinateConverter, modelManager: VPSModelManager) {
    self.recorder = VPSRecorder(maxRecordingTimePerPartInMillis: maxRecordingTimePerPartInMillis)
    self.floorLevelHandler = FloorLevelHandler(floorLevels: [KotlinLong(value: rtls.id):FloorLevelData(data: FloorData(rtls: rtls, mapFence: mapData, metersToNextFloor: floorHeightDiffInMeters, converter: converter))], initialFloorLevelId: nil, debug: false)
    self.modelManager = modelManager
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
      let params = ParticleFilterParams(
        maxNumParticles: IosParticleFilterParams.shared.default_.maxNumParticles * 5,
        stepLengthStd: IosParticleFilterParams.shared.default_.stepLengthStd,
        stepDirectionStd: IosParticleFilterParams.shared.default_.stepDirectionStd,
        biasStd: IosParticleFilterParams.shared.default_.biasStd,
        startMethod: IosParticleFilterParams.shared.default_.startMethod,
        startPositionStd: 7.5,
        startDirectionStd: 0.5,
        syncMethod: IosParticleFilterParams.shared.default_.syncMethod,
        syncPositionStd: IosParticleFilterParams.shared.default_.syncPositionStd,
        syncDirectionStd: IosParticleFilterParams.shared.default_.syncDirectionStd,
        rescuePositionStd: IosParticleFilterParams.shared.default_.rescuePositionStd,
        rescueDirectionStd: IosParticleFilterParams.shared.default_.rescueDirectionStd,
        kldEpsilon: IosParticleFilterParams.shared.default_.kldEpsilon,
        kldDelta: IosParticleFilterParams.shared.default_.kldDelta,
        kldZ: IosParticleFilterParams.shared.default_.kldZ,
        binSize: IosParticleFilterParams.shared.default_.binSize,
        uxPositionConfidence: IosParticleFilterParams.shared.default_.uxPositionConfidence
      )
      vps = VPS(
        useMagnetometer: false,
        frequency: 100,
        frameSize: 200,
        packageFrequency: 30,
        velocityModel: VPSVelocityModel(manager: modelManager),
        floorLevelHandler: floorLevelHandler,
        particleFilterParams: params,
        outputHandler: self,
        debugMode: false,
        extendedDebugMode: false,
        naiveOutputFilter: true,
        system: .ios
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
