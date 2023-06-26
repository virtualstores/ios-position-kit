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

public final class VPSSensorManager {
  var serialDispatch = DispatchQueue(label: "VPSSensorManagerSerial")

  var dataPublisher: CurrentValueSubject<RawSensorData?, Never> = .init(nil)
  private var replayHandler = ReplayHandler()
  private var motion: MotionSensorData?
  private var cancellable = Set<AnyCancellable>()
  private var sensorManager: SensorManager

  public init(sensorManager: SensorManager) {
    self.sensorManager = sensorManager

    bindPublishers()
  }

  deinit {
    cancellable.removeAll()
  }

  public func start() throws {
    try startMotion()
    try startAltimeter()
  }

  public func startMotion() throws {
    try sensorManager.startMotion()
    Logger().log(message: "sensorManager startMotion error")
  }

  public func startAltimeter() throws {
    try sensorManager.startAltimeter()
  }

  public func stop() {
    stopMotion()
    stopAltimeter()
  }

  public func stopMotion() {
    sensorManager.stopMotion()
  }

  public func stopAltimeter() {
    sensorManager.stopAltimeter()
  }

  func bindPublishers() {
    sensorManager.sensorPublisher
      .compactMap { $0 }
      .sink { _ in
        Logger.init().log(message: "sensorPublisher error")
      } receiveValue: { [weak self] data in
        self?.serialDispatch.async {
          self?.reportSensorData(for: data)
        }
      }.store(in: &cancellable)

    sensorManager.altimeterPublisher
      .compactMap { $0 }
      .sink { _ in
        Logger().log(message: "altimeterPublisher error")
      } receiveValue: { [weak self] data in
        self?.serialDispatch.async {
          self?.reportAltimeterData(data: data)
        }
      }.store(in: &cancellable)
  }

  private func reportSensorData(for data: MotionSensorData) {
    let accelerationArr = KotlinFloatArray(size: Int32(data.acceleration.data.count))
    let gravityArr = KotlinFloatArray(size: Int32(data.gravity.data.count))
    let rotationArr = KotlinFloatArray(size: Int32(data.rotation.data.count))
    let geomagneticArr = KotlinFloatArray(size: Int32(data.magnetometer.data.count))
    let accelerometerArr = KotlinFloatArray(size: Int32(data.accelerometer.data.count))
    let gyroscopeArr = KotlinFloatArray(size: Int32(data.gyroscope.data.count))

    data.acceleration.data.enumerated().forEach { accelerationArr.set(index: Int32($0.offset), value: $0.element.asFloat) }
    data.gravity.data.enumerated().forEach { gravityArr.set(index: Int32($0.offset), value: $0.element.asFloat) }
    data.rotation.data.enumerated().forEach { rotationArr.set(index: Int32($0.offset), value: $0.element.asFloat) }
    data.magnetometer.data.enumerated().forEach { geomagneticArr.set(index: Int32($0.offset), value: $0.element.asFloat) }
    data.accelerometer.data.enumerated().forEach { accelerometerArr.set(index: Int32($0.offset), value: $0.element.asFloat) }
    data.gyroscope.data.enumerated().forEach { gyroscopeArr.set(index: Int32($0.offset), value: $0.element.asFloat) }

    dataPublisher.send(RawSensorData(values: accelerationArr, sensorType: .acceleration, nanoTimestamp: Int64(data.timestampLocalNano), sensorTimestamp: Int64(data.timestampSensor), systemTimestamp: Int64(data.timestampLocal)))
    dataPublisher.send(RawSensorData(values: gravityArr, sensorType: .gravity, nanoTimestamp: Int64(data.timestampLocalNano), sensorTimestamp: Int64(data.timestampSensor), systemTimestamp: Int64(data.timestampLocal)))
    dataPublisher.send(RawSensorData(values: rotationArr, sensorType: .rotation, nanoTimestamp: Int64(data.timestampLocalNano), sensorTimestamp: Int64(data.timestampSensor), systemTimestamp: Int64(data.timestampLocal)))
    dataPublisher.send(RawSensorData(values: geomagneticArr, sensorType: .geomagnetic, nanoTimestamp: Int64(data.timestampLocalNano), sensorTimestamp: Int64(data.timestampSensor), systemTimestamp: Int64(data.timestampLocal)))
    dataPublisher.send(RawSensorData(values: accelerometerArr, sensorType: .accelerometer, nanoTimestamp: Int64(data.timestampLocalNano), sensorTimestamp: Int64(data.timestampSensor), systemTimestamp: Int64(data.timestampLocal)))
    dataPublisher.send(RawSensorData(values: gyroscopeArr, sensorType: .gyroscopeUncalibrated, nanoTimestamp: Int64(data.timestampLocalNano), sensorTimestamp: Int64(data.timestampSensor), systemTimestamp: Int64(data.timestampLocal)))
  }

  private func reportAltimeterData(data: AltitudeSensorData) {
    let altitudeArr = KotlinFloatArray(size: 1)
    data.altitude.data.enumerated().forEach { altitudeArr.set(index: Int32($0.offset), value: Float($0.element)) }
    dataPublisher.send(RawSensorData(values: altitudeArr, sensorType: .altitude, nanoTimestamp: Int64(data.timestampSensor), sensorTimestamp: Int64(data.timestampSensor), systemTimestamp: Int64(data.timestampLocal)))
  }
}
