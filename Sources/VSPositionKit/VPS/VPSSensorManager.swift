//
// VPSSensorManager
// VSPositionKit
//
// Created by Hripsime on 2022-01-01
// Copyright Virtual Stores - 2022
//

import Foundation
import CoreMotion
import Combine
import VSFoundation
import VSSensorFusion
import vps

final class VPSSensorManager: Disposable {
  @Inject var sensorManager: ISensorManager
  var serialDispatch = DispatchQueue(label: "VPSSensorManagerSerial")

  var dataPublisher: CurrentValueSubject<RawSensorData?, Never> = .init(nil)
  var altimeterPublisher: CurrentValueSubject<AltitudeSensorData?, SensorError> { sensorManager.altimeterPublisher }
  private let tag = "VPSSensorManager"
  private var replayHandler = ReplayHandler()
  private var motion: MotionSensorData?
  private var cancellable = Set<AnyCancellable>()

  init() {
    bindPublishers()
  }

  deinit {
    Logger(verbosity: .info).log(tag: tag, message: "deinit")
    dispose()
  }

  public func dispose() {
    Logger(verbosity: .info).log(tag: tag, message: "dispose")
    cancellable.removeAll()
  }

  func start() throws {
    try startMotion()
    try startAltimeter()
  }

  func startMotion() throws {
    try sensorManager.startMotion()
    Logger().log(message: "sensorManager startMotion error")
  }

  func startAltimeter() throws {
    try sensorManager.startAltimeter()
  }

  func stop() {
    stopMotion()
    stopAltimeter()
  }

  func stopMotion() {
    sensorManager.stopMotion()
  }

  func stopAltimeter() {
    sensorManager.stopAltimeter()
  }

  //let compassSensorManager = VPSCompassHeadingController()
  func bindPublishers() {
    sensorManager.sensorPublisher
      .compactMap { $0 }
      .sink { _ in
        Logger.init().log(message: "sensorPublisher error")
      } receiveValue: { [weak self] data in
        self?.serialDispatch.async {
          //pthread_setname_np("VPSSensorManager")
          self?.reportSensorData(for: data)
          //self?.compassSensorManager.onSensorChanged(data: data)
        }
      }.store(in: &cancellable)

    sensorManager.altimeterPublisher
      .compactMap { $0 }
      .sink { _ in
        Logger().log(message: "altimeterPublisher error")
      } receiveValue: { [weak self] data in
        self?.serialDispatch.async {
          //pthread_setname_np("VPSSensorManager")
          self?.reportAltimeterData(data: data)
        }
      }.store(in: &cancellable)
  }

  private func reportSensorData(for data: MotionSensorData) {
    dataPublisher.send(createRawSensorData(with: data, type: .acceleration))
    dataPublisher.send(createRawSensorData(with: data, type: .gravity))
    dataPublisher.send(createRawSensorData(with: data, type: .rotation))
    dataPublisher.send(createRawSensorData(with: data, type: .geomagneticUncalibrated))
    dataPublisher.send(createRawSensorData(with: data, type: .accelerometer))
    dataPublisher.send(createRawSensorData(with: data, type: .gyroscopeUncalibrated))
  }

  private func createRawSensorData(with sensorData: MotionSensorData, type: vps.SensorDataType) -> RawSensorData? {
    let data: [Double]
    switch type {
    case .acceleration:
      data = sensorData.acceleration.data
    case .gravity:
      data = sensorData.gravity.data
    case .rotation:
      data = sensorData.rotation.data
    case .geomagnetic, .geomagneticUncalibrated:
      data = sensorData.magnetometer.data
    case .accelerometer:
      data = sensorData.accelerometer.data
    case .gyroscopeUncalibrated:
      data = sensorData.gyroscope.data
    default:
      Logger(verbosity: .critical).log(tag: tag, message: "Case not handled: \(type)")
      return nil
    }

    let arr = KotlinFloatArray(size: Int32(data.count))
    data.enumerated().forEach { arr.set(index: $0.offset.asInt32, value: $0.element.asFloat) }

    return RawSensorData(
      values: arr,
      sensorType: type,
      nanoTimestamp: Int64(sensorData.timestampLocalNano),
      sensorTimestamp: Int64(sensorData.timestampSensor),
      systemTimestamp: Int64(sensorData.timestampLocal)
    )
  }

  private func reportAltimeterData(data: AltitudeSensorData) {
    let altitudeArr = KotlinFloatArray(size: 1)
    let barometerArr = KotlinFloatArray(size: 1)
    data.altitude.data.enumerated().forEach { altitudeArr.set(index: $0.offset.asInt32, value: $0.element.asFloat) }
    data.barometer.data.enumerated().forEach { barometerArr.set(index: $0.offset.asInt32, value: $0.element.asFloat) }
    dataPublisher.send(RawSensorData(values: altitudeArr, sensorType: .altitude, nanoTimestamp: Int64(data.timestampLocalNano), sensorTimestamp: Int64(data.timestampSensor), systemTimestamp: Int64(data.timestampLocal)))
    dataPublisher.send(RawSensorData(values: barometerArr, sensorType: .barometer, nanoTimestamp: Int64(data.timestampLocalNano), sensorTimestamp: Int64(data.timestampSensor), systemTimestamp: Int64(data.timestampLocal)))
  }
}
