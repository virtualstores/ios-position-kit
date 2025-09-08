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

public final class VPSPositionManager {
  public var locationHeadingPublisher: CurrentValueSubject<CLHeading?, Error> { backgroundAccess.locationHeadingPublisher }
  public var recordingPublisher: CurrentValueSubject<(identifier: String, data: String, sessionId: String, lastFile: Bool)?, Never> = .init(nil)
  public var outputSignalPublisher: CurrentValueSubject<VPSOutputSignal?, Never> = .init(nil)
  public var altimeterPublisher: CurrentValueSubject<AltitudeSensorData?, SensorError> { sensor.altimeterPublisher }
  public var vpsParticleFilterSettings: [String:String] { vps.vpsParticleFilterSettings }
  public var isRecording: Bool { vps.isRecording }

  public var rtlsOption: RtlsOptions?

  private var context: Context? = Context(PositionKitConfig())
  private var cancellable = Set<AnyCancellable>()

  @Inject var backgroundAccess: IBackgroundAccessManager
  @Inject var sensor: VPSSensorManager

  private let tag = "PositionManager"
  private var _vps: VPSManager?
  private var vps: VPSManager {
    guard let vps = _vps else { fatalError("PositionKit not setup") }
    return vps
  }

  public init() {}

  deinit {
    Logger(verbosity: .info).log(tag: tag, message: "deinit")
    dispose()
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

  func stopSensors() {
    sensor.stop()
    backgroundAccess.vpsRunning(isRunning: false)
  }
}

extension VPSPositionManager: IPositionKit {
  public func dispose() {
    Logger(verbosity: .info).log(tag: tag, message: "dispose")
    stopSensors()
    _vps?.dispose()
    context?.dispose()
    context = nil
  }
  
  public func setupMapFence(with mapData: MapFence, rtlsOption: RtlsOptions, floorheight: Double = 3.6, parameterPackage: ParameterPackage, automaticSensorRecording: Bool, positionServiceSettings: PositionServiceSettings?, converter: ICoordinateConverter, modelManger: VPSModelManager, engine: TT2Settings.TT2Engine) {
    self.rtlsOption = rtlsOption
    _vps = VPSManager(
      floorHeightDiffInMeters: floorheight,
      rtls: rtlsOption,
      automaticSensorRecording: automaticSensorRecording,
      mapData: mapData,
      positionServiceSettings: positionServiceSettings,
      converter: converter,
      modelManager: modelManger,
      engine: engine
    )

    //DispatchQueue.main.asyncAfter(deadline: .now() + 1) {
    //  self.backgroundAccess.start()
    //}

    bindPublishers()
  }

  public func start(withoutAltimeter: Bool) throws {
    if withoutAltimeter {
      try sensor.startMotion()
    } else {
      try sensor.start()
    }
  }

  public func startNavigation(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool) {
    vps.startNavigation(positions: positions, syncPosition: syncPosition, syncAngle: syncAngle, angle: angle, uncertainAngle: uncertainAngle)
    backgroundAccess.vpsRunning(isRunning: true)
  }

  public func startLngLatFixedNorth(location: CLLocation) {
    vps.startLngLatFixedNorth(location: location)
  }

  public func syncPosition(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool) {
    vps.syncPosition(positions: positions, syncPosition: syncPosition, syncAngle: syncAngle, angle: angle, uncertainAngle: uncertainAngle)
  }

  public func syncPosition(location: CLLocation) {
    vps.syncPosition(location: location)
  }

  public func syncGNSS(isStartSequence: Bool) {
    vps.syncGNSS(isStartSequence: isStartSequence)
  }

  public func syncManual(location: CLLocation?, isStartSequence: Bool) {
    vps.syncManual(location: location, isStartSequence: isStartSequence)
  }

  public func forceSyncPosition(position: CGPoint, angle: Double, forceAngle: Bool) {
    vps.forceSyncPosition(position: position, angle: angle, forceAngle: forceAngle)
  }

  public func syncAngleCorrection(angle: Double, positions: [CGPoint]) {
    vps.syncAngleCorrection(angle: angle, positions: positions)
  }

  public func startRecording() {
    vps.startRecording(sessionId: nil)
  }

  public func stop(shouldStopSensors: Bool = true) {
    if shouldStopSensors {
      stopSensors()
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

  public func startGPS() {
    backgroundAccess.start()
  }

  public func stopGPS() {
    backgroundAccess.stop()
  }
}
