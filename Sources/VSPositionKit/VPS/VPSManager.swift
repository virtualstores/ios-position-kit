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

final class VPSManager: VPSWrapper {
  var recordingPublisher: CurrentValueSubject<(identifier: String, data: String, sessionId: String, lastFile: Bool)?, Never> = .init(nil)
  var outputSignalPublisher: CurrentValueSubject<VPSOutputSignal?, Never> = .init(nil)

  @Inject var sensor: VPSSensorManager

  public private (set) var pathfinder: BasePathfinder?
  public var vpsRunning: Bool = false

  /// vps properties
  private let recorder: VPSRecorder
  private var vps: VPS?
  private var floorLevelHandler: FloorLevelHandler

  private var isRecording: Bool { recorder.isRecording }
  private var parameterPackage: ParameterPackage
  private var userController: IUserController

  private var cancellable = Set<AnyCancellable>()

  init(size: CGSize, floorHeightDiffInMeters: Double, trueNorthOffset: Double = 0.0, rtls: RtlsOptions, mapData: MapFence, pixelsPerMeter: Double, parameterPackage: ParameterPackage, userController: IUserController, maxRecordingTimePerPartInMillis: Int64?, converter: ICoordinateConverter) {
    self.recorder = VPSRecorder(maxRecordingTimePerPartInMillis: maxRecordingTimePerPartInMillis)
    self.floorLevelHandler = FloorLevelHandler(floorLevels: [KotlinLong(value: rtls.id):FloorLevelData(data: FloorData(rtls: rtls, mapFence: mapData, metersToNextFloor: floorHeightDiffInMeters, converter: converter))], initialFloorLevelId: nil, debug: false)
    self.parameterPackage = parameterPackage
    self.userController = userController
    self.bindPublishers()
  }

  deinit {
    cancellable.removeAll()
  }

  func bindPublishers() {
    sensor.dataPublisher
      .compactMap { $0 }
      .sink { [weak self] (data) in
        let signal = InputSignal.SensorData(rawSensorData: data)
        self?.recorder.record(inputSignal: signal)
        self?.vps?.onInputSignal(signal: signal)
      }.store(in: &cancellable)

    recorder.dataPublisher
      .compactMap { $0 }
      .sink { [weak self] in self?.recordingPublisher.send($0) }
      .store(in: &cancellable)
  }

  func start() {
    recorder.startRecording(sessionId: nil)
    sensor.serialDispatch.async { [self] in
      vps = VPS(
        smoothing: false,
        flipAcc: false,
        useMagnetometer: true,
        frequency: 100,
        frameSize: 200,
        velocityModel: VPSVelocityModel(model: nil),
        floorLevelHandler: floorLevelHandler,
        particleFilterParams: IosParticleFilterParams.shared.default_,
        outputHandler: self,
        debugMode: true,
        enableSensorInterpreter: true,
        enableRotationHandler: true,
        useNaiveParticleFilter: false
      )
    }
  }

  func startRecording(sessionId: String?) {
    sensor.serialDispatch.async { [self] in
      recorder.startRecording(sessionId: sessionId)
    }
  }

  func stop() {
    let signal = InputSignal.Exit(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis)
    recorder.record(inputSignal: signal)
    sensor.serialDispatch.async { self.vps?.onInputSignal(signal: signal) }
    recorder.stopRecording()
    vpsRunning = false
  }

  func stopRecording() {
    sensor.serialDispatch.async { [self] in
      if isRecording {
        recorder.stopRecording()
      }
    }
  }

  func startNavigation(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool) {
    start()
    vpsRunning = true
    let signal = InputSignal.Start(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, positions: positions.map({ $0.asCoordinateF }), syncPosition: syncPosition, syncAngle: syncAngle, angle: Float(angle), uncertainAngle: uncertainAngle)
    recorder.record(inputSignal: signal)
    sensor.serialDispatch.async { self.vps?.onInputSignal(signal: signal) }
  }

  func syncPosition(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool) {
    let signal = InputSignal.SyncPosition(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, positions: positions.map({ $0.asCoordinateF }), syncPosition: syncPosition, syncAngle: syncAngle, angle: Float(angle), uncertainAngle: uncertainAngle)
    recorder.record(inputSignal: signal)
    sensor.serialDispatch.async { self.vps?.onInputSignal(signal: signal) }
  }

  func setPathfinder(pathfinder: BasePathfinder) {
    self.pathfinder = pathfinder
  }

  // why does this exist? is this not the same as sync?
  func setPosition(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool) {
    sensor.serialDispatch.async { [self] in
      if vpsRunning {
        self.syncPosition(positions: positions, syncPosition: syncPosition, syncAngle: syncAngle, angle: angle, uncertainAngle: uncertainAngle)
      } else {
        start()
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
    } else if let signal = outputSignal as? OutputSignal.Rotation {
      let heading = DoubleExtKt.radiansToDegrees(Double(signal.heading))
      //print("Rotation", heading)
      outputSignalPublisher.send(.rotation(heading: Double(heading - 65)))
    }
  }
}

extension OutputSignal.PositionStatus {
  var asStatus: VPSOutputSignal.Position.Status {
    switch self {
    case .confident: return .confident
    case .uncertain: return .uncertain
    default: return .uncertain
    }
  }
}
