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

public class VPSSensorManager: IQPSRawSensorManager {
    @Inject var sensorManager: SensorManager

    private var replayHandler: ReplayHandler?
    private var motion: MotionSensorData?
    private var cancellable: AnyCancellable?

    private let qpsAccelerationSensor: QPSAccelerationSensor
    private let qpsGravitySensor: QPSGravitySensor
    private let qpsRotationSensor: QPSRotationSensor
    private let qpsAltitudeSensor: QPSAltitudeSensor
    private var qpsOrientationSensor: QPSOrientationSensor?
    private let qpsAccelerationSensorUncalibrated: QPSAccelerationUncalibratedSensor? = nil
    private let qpsGyroscopeSensorUncalibrated: QPSGyroscopeUncalibratedSensor? = nil

    public var accelerationSensor: RawSensor {
        qpsAccelerationSensor
    }

    public var accelerationSensorUncalibrated: RawSensor? {
        qpsAccelerationSensorUncalibrated
    }

    public var altitudeSensor: RawSensor? {
        qpsAltitudeSensor
    }

    public var gravitySensor: RawSensor {
        qpsGravitySensor
    }

    public var orientationSensor: RawSensor? {
        qpsOrientationSensor
    }

    public var rotationSensor: RawSensor {
       qpsRotationSensor
    }

    public var gyroscopeSensorUncalibrated: RawSensor? {
        qpsGyroscopeSensorUncalibrated
    }

    public var barometerSensor: RawSensor?
    public var lockedSensor: RawSensor?
    public var luxSensor: RawSensor?
    public var screenBrightnessSensor: RawSensor?

    public let systemType: IQPSSystemType = IQPSSystemType.ios

    public init(with motion: CMMotionManager) {
        self.qpsAccelerationSensor = QPSAccelerationSensor(motion: motion)
        self.qpsGravitySensor = QPSGravitySensor(motion: motion)
        self.qpsRotationSensor = QPSRotationSensor(motion: motion)
        self.qpsAltitudeSensor = QPSAltitudeSensor(motion: motion)

        bindPublishers()
    }

    public func start() {
        startMotion()
        startAltimeter()
    }

    public func startMotion() {
        do {
            try sensorManager.start()
        } catch {

        }
    }

    public func startAltimeter() { }

    public func stop() {
        self.stopMotion()
        self.stopAltimeter()
    }

    public func stopMotion() {
        sensorManager.stop()
    }

    public func stopAltimeter() { }

    public func clearAllObservers() {
        self.accelerationSensor.deleteObservers()
        self.gravitySensor.deleteObservers()
        self.rotationSensor.deleteObservers()
        self.orientationSensor?.deleteObservers()
        self.accelerationSensorUncalibrated?.deleteObservers()
        self.gyroscopeSensorUncalibrated?.deleteObservers()
        self.altitudeSensor?.deleteObservers()
        self.lockedSensor?.deleteObservers()
        self.luxSensor?.deleteObservers()
        self.screenBrightnessSensor?.deleteObservers()
        self.barometerSensor?.deleteObservers()
    }

    public func shutDown() {
        self.stopAllSensors()
        self.clearAllObservers()
    }

    public func stopAllSensors() {
        self.accelerationSensor.stop()
        self.gravitySensor.stop()
        self.rotationSensor.stop()
        self.orientationSensor?.stop()
        self.accelerationSensorUncalibrated?.stop()
        self.gyroscopeSensorUncalibrated?.stop()
        self.altitudeSensor?.stop()
        self.lockedSensor?.stop()
        self.luxSensor?.stop()
        self.screenBrightnessSensor?.stop()
        self.barometerSensor?.stop()
    }

    func bindPublishers() {
        cancellable = sensorManager.sensorPublisher
          .compactMap { $0 }
          .sink { _ in
              Logger.init().log(message: "sensorPublisher error")
          } receiveValue: { data in
              self.replayHandler?.addData(type: .rotation, data: data)
          }
    }

    private func reportData(data: RawSensorData) {
            switch data.sensorDataType {
            case .acceleration: self.qpsAccelerationSensor.onNewData(data: data)
            case .gravity: self.qpsGravitySensor.onNewData(data: data)
            case .rotation: self.qpsRotationSensor.onNewData(data: data)
            case .geomagnetic: self.qpsOrientationSensor?.onNewData(data: data)
            case .altitude: self.qpsAccelerationSensor.onNewData(data: data)
            default: break
            }
    }

    private func handleData(_ accData: RawSensorData, _ gravData: RawSensorData, _ rotData: RawSensorData, _ orienData: RawSensorData?, timeLimit: Double) {

    }
}
