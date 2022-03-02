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
import qps

public final class VPSSensorManager: IQPSRawSensorManager {
    public let systemType: IQPSSystemType = IQPSSystemType.ios

    private var replayHandler = ReplayHandler()
    private var motion: MotionSensorData?
    private var motionCancellable: AnyCancellable?
    private var altimeterCancellable: AnyCancellable?
    
    private let qpsAccelerationSensor: QPSAccelerationSensor
    private let qpsGravitySensor: QPSGravitySensor
    private let qpsRotationSensor: QPSRotationSensor
    private let qpsAltitudeSensor: QPSAltitudeSensor
    private var qpsOrientationSensor: QPSOrientationSensor?
    private let qpsAccelerationSensorUncalibrated: QPSAccelerationUncalibratedSensor? = nil
    private let qpsGyroscopeSensorUncalibrated: QPSGyroscopeUncalibratedSensor? = nil
    
    private var sensorManager: SensorManager

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
    
    public init(sensorManager: SensorManager) {
        self.sensorManager = sensorManager
        
        self.qpsAccelerationSensor = QPSAccelerationSensor()
        self.qpsGravitySensor = QPSGravitySensor()
        self.qpsRotationSensor = QPSRotationSensor()
        self.qpsAltitudeSensor = QPSAltitudeSensor()
        
        self.qpsAccelerationSensor.delegate = self
        self.qpsGravitySensor.delegate = self
        self.qpsOrientationSensor?.delegate = self
        
        bindPublishers()
    }
    
    public func start() {
        startMotion()
        startAltimeter()
    }
    
    public func startMotion() {
        do {
            try sensorManager.startMotion()
        } catch {
            Logger().log(message: "sensorManager startMotion error")
        }
    }
    
    public func startAltimeter() {
        do {
            try sensorManager.startAltimeter()
        } catch {
            Logger().log(message: "sensorManager startAltimeter error")
        }
    }
    
    public func stop() {
        self.stopMotion()
        self.stopAltimeter()
    }
    
    public func stopMotion() {
        sensorManager.stopMotion()
    }
    
    public func stopAltimeter() {
        sensorManager.stopAltimeter()
    }
    
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
    
    public func startAllSensors() {
        self.accelerationSensor.start()
        self.gravitySensor.start()
        self.rotationSensor.start()
        self.orientationSensor?.start()
        self.accelerationSensorUncalibrated?.start()
        self.gyroscopeSensorUncalibrated?.start()
        self.altitudeSensor?.start()
        self.lockedSensor?.start()
        self.luxSensor?.start()
        self.screenBrightnessSensor?.start()
        self.barometerSensor?.start()
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
        motionCancellable = sensorManager.sensorPublisher
            .compactMap { $0 }
            .sink { _ in
                Logger.init().log(message: "sensorPublisher error")
            } receiveValue: { [weak self] data in
                self?.reportSensorData(for: data)
            }

      altimeterCancellable = sensorManager.altimeterPublisher
        .compactMap { $0 }
        .sink { _ in
            Logger().log(message: "altimeterPublisher error")
        } receiveValue: { [weak self] data in
            self?.reportAltimeterData(data: data)
        }
    }
    
    private func reportSensorData(for data: MotionSensorData) {
        let accelerationArr = KotlinFloatArray(size: Int32(data.acceleration.data.count))
        let gravityArr = KotlinFloatArray(size: Int32(data.gravity.data.count))
        let rotationArr = KotlinFloatArray(size: Int32(data.rotation.data.count))
        
        for (index, value) in data.acceleration.data.enumerated() {
            accelerationArr.set(index: Int32(index), value: value.asFloat)
        }
        
        for (index, value) in data.gravity.data.enumerated() {
            gravityArr.set(index: Int32(index), value: value.asFloat)
        }
        
        for (index, value) in data.rotation.data.enumerated() {
            rotationArr.set(index: Int32(index), value: value.asFloat)
        }
        
        let accData = RawSensorData(values: accelerationArr, sensorDataType: .acceleration, timestamp: Int64(data.timestampSensor), systemTimestamp: Int64(data.timestampLocal), sensorAccuracy: 0.0)
        let gravData = RawSensorData(values: gravityArr, sensorDataType: self.gravitySensor.sensorDataType, timestamp: Int64(data.timestampSensor), systemTimestamp: Int64(data.timestampLocal), sensorAccuracy: 0.0)
        let rotData = RawSensorData(values: rotationArr, sensorDataType: self.rotationSensor.sensorDataType, timestamp: Int64(data.timestampSensor), systemTimestamp: Int64(data.timestampLocal), sensorAccuracy: 0.0)
        
        self.reportData(data: accData)
        self.reportData(data: gravData)
        self.reportData(data: rotData)
    }

    private func reportAltimeterData(data: AltitudeSensorData) {
        let altitudeArr = KotlinFloatArray(size: 1)
        data.altitude.data.enumerated().forEach { (index, data) in
            altitudeArr.set(index: Int32(index), value: Float(data))
        }

        let altitudeData = RawSensorData(values: altitudeArr, sensorDataType: .altitude, timestamp: Int64(data.timestampSensor), systemTimestamp: Int64(data.timestampLocal), sensorAccuracy: 0.0)
        self.reportData(data: altitudeData)
    }
    
    private func reportData(data: RawSensorData) {
        switch data.sensorDataType {
        case .acceleration: self.qpsAccelerationSensor.onNewData(data: data)
        case .gravity: self.qpsGravitySensor.onNewData(data: data)
        case .rotation: self.qpsRotationSensor.onNewData(data: data)
        case .geomagnetic: self.qpsOrientationSensor?.onNewData(data: data)
        case .altitude: self.qpsAltitudeSensor.onNewData(data: data)
        default: break
        }
    }
    
    private func handleData(_ accData: RawSensorData, _ gravData: RawSensorData, _ rotData: RawSensorData, _ orienData: RawSensorData?, timeLimit: Double) {
        
    }
}

extension VPSSensorManager: RawSensorDelegate {
    func onStart() {
        self.start()
    }
    
    func onStop() {
        self.stop()
    }
}
