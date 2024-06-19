//
// PositionManager
// VSPositionKit
//
// Created by Hripsime on 2021-12-14
// Copyright Virtual Stores - 2021
//

import Foundation
import Combine
import VSSensorFusion
import VSFoundation
import CoreGraphics
import CoreLocation

public final class PositionManager {
  public var locationHeadingPublisher: CurrentValueSubject<CLHeading?, Error> { backgroundAccess.locationHeadingPublisher }
  public var recordingPublisher: CurrentValueSubject<(identifier: String, data: String, sessionId: String, lastFile: Bool)?, Never> = .init(nil)
  public var outputSignalPublisher: CurrentValueSubject<VPSOutputSignal?, Never> = .init(nil)
  public var altimeterPublisher: CurrentValueSubject<AltitudeSensorData?, SensorError> { sensor.altimeterPublisher }
  public var vpsParticleFilterSettings: [String:String] { vps.vpsParticleFilterSettings }
  public var isRecording: Bool { vps.isRecording }

  public var rtlsOption: RtlsOptions?

  private let context = Context(PositionKitConfig())
  private var cancellable = Set<AnyCancellable>()

  @Inject var backgroundAccess: IBackgroundAccessManager
  @Inject var sensor: VPSSensorManager

  private var _vps: VPSManager?
  private var vps: VPSManager {
    guard let vps = _vps else { fatalError("PositionKit not setup") }
    return vps
  }

  public init() {}

  deinit {
    stop()
  }

  func bindPublishers() {
    vps.recordingPublisher
      .compactMap { $0 }
      .sink { [weak self] in self?.recordingPublisher.send($0) }
      .store(in: &cancellable)

    vps.outputSignalPublisher
      .compactMap { $0 }
      .sink { [weak self] in self?.outputSignalPublisher.send($0) }
      .store(in: &cancellable)
  }
}

extension PositionManager: IPositionKit {
  public func setupMapFence(with mapData: MapFence, rtlsOption: RtlsOptions, floorheight: Double = 3.6, parameterPackage: ParameterPackage, automaticSensorRecording: Bool, positionServiceSettings: PositionServiceSettings?, converter: ICoordinateConverter, modelManger: VPSModelManager) {
    self.rtlsOption = rtlsOption
    _vps = VPSManager(
      floorHeightDiffInMeters: floorheight,
      rtls: rtlsOption,
      automaticSensorRecording: automaticSensorRecording,
      mapData: mapData,
      positionServiceSettings: positionServiceSettings,
      converter: converter,
      modelManager: modelManger
    )

    bindPublishers()
  }

  public func start() throws {
    try sensor.start()
  }

  public func startNavigation(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool) {
    vps.startNavigation(positions: positions, syncPosition: syncPosition, syncAngle: syncAngle, angle: angle, uncertainAngle: uncertainAngle)
    backgroundAccess.vpsRunning(isRunning: true)
  }

  public func syncPosition(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool) {
    vps.syncPosition(positions: positions, syncPosition: syncPosition, syncAngle: syncAngle, angle: angle, uncertainAngle: uncertainAngle)
  }

  public func syncAngleCorrection(angle: Double, positions: [CGPoint]) {
    vps.syncAngleCorrection(angle: angle, positions: positions)
  }

  public func startRecording() {
    vps.startRecording(sessionId: nil)
  }

  public func stop(stopSensors: Bool = true) {
    if stopSensors {
      sensor.stop()
      backgroundAccess.vpsRunning(isRunning: false)
    }
    vps.stop()
  }

  public func stopRecording() {
    vps.stopRecording()
  }

  public func setBackgroundAccess(isActive: Bool) {
    isActive ? backgroundAccess.activate() : backgroundAccess.deactivate()
  }

  public func processMLPath(path: [CGPoint], pathEndPoint: CGPoint) -> MLProcessedPath {
    vps.processMLPath(path: path, pathEndPoint: pathEndPoint)
  }

  public func prepareAngle() {
    vps.prepareAngle()
  }

  public func set(sessionId: String?) {
    vps.set(sessionId: sessionId)
  }
}
