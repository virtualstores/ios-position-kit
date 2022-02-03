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

    public var accelerationSensor: RawSensor {
    // TODO: use sensorManager.motion
        QPSAccelerationSensor(motion: CMMotionManager())
    }

    public var accelerationSensorUncalibrated: RawSensor? {
        nil
    }

    public var altitudeSensor: RawSensor? {
        nil
    }

    public var barometerSensor: RawSensor? {
        nil
    }
    public var gravitySensor: RawSensor {
        // TODO: use sensorManager.motion
        QPSGravitySensor(motion: CMMotionManager())
    }

    public var gyroscopeSensorUncalibrated: RawSensor? {
        nil
    }

    public var lockedSensor: RawSensor? {
        nil
    }

    public var luxSensor: RawSensor? {
        nil
    }

    public var orientationSensor: RawSensor? {
        nil
    }

    public var rotationSensor: RawSensor {
        // TODO: use sensorManager.motion
        QPSRotationSensor(motion: CMMotionManager())
    }

    public var screenBrightnessSensor: RawSensor? {
        nil
    }

    public let systemType: IQPSSystemType = IQPSSystemType.ios

    public init() {
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

    private func reportData(data: RawSensorData) { }

    private func handleData(_ accData: RawSensorData, _ gravData: RawSensorData, _ rotData: RawSensorData, _ orienData: RawSensorData?, timeLimit: Double) {

    }
}
