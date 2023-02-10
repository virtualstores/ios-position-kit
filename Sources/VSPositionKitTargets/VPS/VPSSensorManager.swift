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
import VSPositionKit

public final class VPSSensorManager: IQPSRawSensorManager {
    public let systemType: IQPSSystemType = IQPSSystemType.ios

    var serialDispatch = DispatchQueue(label: "VPSSensorManagerSerial")

    private var replayHandler = ReplayHandler()
    private var motion: MotionSensorData?
    private var cancellable = Set<AnyCancellable>()
    
    private let qpsAccelerationSensor: QPSAccelerationSensor
    private let qpsGravitySensor: QPSGravitySensor
    private let qpsRotationSensor: QPSRotationSensor
    private let qpsAltitudeSensor: QPSAltitudeSensor
    private var qpsOrientationSensor: QPSOrientationSensor?
    private let qpsAccelerationSensorUncalibrated: QPSAccelerationUncalibratedSensor? = nil
    private var qpsGyroscopeSensorUncalibrated: QPSGyroscopeUncalibratedSensor?
    private var qpsAccelerometerSensor: QPSAccelerometerSensor?
    private let qpsAccelerometerSensorUncalibrated: QPSAccelerometerSensorUncalibrated? = nil
    private var qpsGeomagneticSensor: QPSGeomagneticSensor?
    
    private var sensorManager: SensorManager

    public var accelerationSensor: RawSensor { qpsAccelerationSensor }
    public var accelerationSensorUncalibrated: RawSensor? { qpsAccelerationSensorUncalibrated }
    public var altitudeSensor: RawSensor? { qpsAltitudeSensor }
    public var gravitySensor: RawSensor { qpsGravitySensor }
    public var orientationSensor: RawSensor? { qpsOrientationSensor }
    public var rotationSensor: RawSensor { qpsRotationSensor }
    public var gyroscopeSensorUncalibrated: RawSensor? { qpsGyroscopeSensorUncalibrated }
    public var accelerometerSensor: RawSensor? { qpsAccelerometerSensor }
    public var accelerometerSensorUncalibrated: RawSensor? { qpsAccelerometerSensorUncalibrated }
    public var geomagneticSensor: RawSensor? { qpsGeomagneticSensor }
    
    public var barometerSensor: RawSensor?
    public var lockedSensor: RawSensor?
    public var luxSensor: RawSensor?
    public var screenBrightnessSensor: RawSensor?
    
    public init(sensorManager: SensorManager) {
        self.sensorManager = sensorManager
        
        qpsAccelerationSensor = QPSAccelerationSensor()
        qpsGravitySensor = QPSGravitySensor()
        qpsRotationSensor = QPSRotationSensor()
        qpsAltitudeSensor = QPSAltitudeSensor()

        qpsGyroscopeSensorUncalibrated = QPSGyroscopeUncalibratedSensor()
        qpsAccelerometerSensor = QPSAccelerometerSensor()
        qpsGeomagneticSensor = QPSGeomagneticSensor()
        
        //qpsAccelerationSensor.delegate = self
        //qpsGravitySensor.delegate = self
        //qpsOrientationSensor?.delegate = self
        
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

        
        for (index, value) in data.acceleration.data.enumerated() {
            accelerationArr.set(index: Int32(index), value: value.asFloat)
        }
        
        for (index, value) in data.gravity.data.enumerated() {
            gravityArr.set(index: Int32(index), value: value.asFloat)
        }
        
        for (index, value) in data.rotation.data.enumerated() {
            rotationArr.set(index: Int32(index), value: value.asFloat)
        }

        data.magnetometer.data.enumerated().forEach { (index, value) in
            geomagneticArr.set(index: Int32(index), value: value.asFloat)
        }

        data.accelerometer.data.enumerated().forEach { (index, value) in
            accelerometerArr.set(index: Int32(index), value: value.asFloat)
        }

        data.gyroscope.data.enumerated().forEach { (index, value) in
            gyroscopeArr.set(index: Int32(index), value: value.asFloat)
        }
        
        let accData = RawSensorData(values: accelerationArr, sensorDataType: .acceleration, timestamp: Int64(data.timestampSensor), systemTimestamp: Int64(data.timestampLocal), sensorAccuracy: 0.0)
        let gravData = RawSensorData(values: gravityArr, sensorDataType: .gravity, timestamp: Int64(data.timestampSensor), systemTimestamp: Int64(data.timestampLocal), sensorAccuracy: 0.0)
        let rotData = RawSensorData(values: rotationArr, sensorDataType: .rotation, timestamp: Int64(data.timestampSensor), systemTimestamp: Int64(data.timestampLocal), sensorAccuracy: 0.0)
        let geoData = RawSensorData(values: geomagneticArr, sensorDataType: .geomagnetic, timestamp: Int64(data.timestampSensor), systemTimestamp: Int64(data.timestampLocal), sensorAccuracy: 0.0)
        let accelerometerData = RawSensorData(values: accelerometerArr, sensorDataType: .accelerometer, timestamp: Int64(data.timestampSensor), systemTimestamp: Int64(data.timestampLocal), sensorAccuracy: 0.0)
        let gyroData = RawSensorData(values: gyroscopeArr, sensorDataType: .gyroscopeUncalibrated, timestamp: Int64(data.timestampSensor), systemTimestamp: Int64(data.timestampLocal), sensorAccuracy: 0.0)
        
        self.reportData(data: accData)
        self.reportData(data: gravData)
        self.reportData(data: rotData)
        self.reportData(data: geoData)
        self.reportData(data: accelerometerData)
        self.reportData(data: gyroData)
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
        case .acceleration: qpsAccelerationSensor.onNewData(data: data)
        case .gravity: qpsGravitySensor.onNewData(data: data)
        case .rotation: qpsRotationSensor.onNewData(data: data)
        case .geomagnetic: qpsGeomagneticSensor?.onNewData(data: data)
        case .altitude: qpsAltitudeSensor.onNewData(data: data)
        case .accelerometer: qpsAccelerometerSensor?.onNewData(data: data)
        case .gyroscopeUncalibrated: qpsGyroscopeSensorUncalibrated?.onNewData(data: data)
        default: break
        }
    }
    
    private func handleData(_ accData: RawSensorData, _ gravData: RawSensorData, _ rotData: RawSensorData, _ orienData: RawSensorData?, timeLimit: Double) {
        
    }
    
    deinit {
        cancellable.removeAll()
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
