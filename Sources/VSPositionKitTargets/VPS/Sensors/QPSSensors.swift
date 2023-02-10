//
// QPSSensors
// VSPositionKit
//
// Created by Hripsime on 2022-01-01
// Copyright Virtual Stores - 2022
//

import Foundation
import VSPositionKit

class QPSAccelerationSensor: QPSSensor {
    override public var sensorDataType: RawSensorData.SensorDataType { .acceleration }
}

class QPSAccelerationUncalibratedSensor: QPSSensor {
    override public var sensorDataType: RawSensorData.SensorDataType { .accelerationUncalibrated }
}

class QPSAltitudeSensor: QPSSensor {
    override public var sensorDataType: RawSensorData.SensorDataType { .altitude }
}

class QPSGravitySensor: QPSSensor {
    override public var sensorDataType: RawSensorData.SensorDataType { .gravity }
}

class QPSGyroscopeUncalibratedSensor: QPSSensor {
    override public var sensorDataType: RawSensorData.SensorDataType { .gyroscopeUncalibrated }
}

class QPSOrientationSensor: QPSSensor {
    override public var sensorDataType: RawSensorData.SensorDataType { .geomagnetic }

    var counter = 0
}

class QPSRotationSensor: QPSSensor {
    override public var sensorDataType: RawSensorData.SensorDataType { .rotation }
}

class QPSAccelerometerSensor: QPSSensor {
  override var sensorDataType: RawSensorData.SensorDataType { .accelerometer }
}

class QPSAccelerometerSensorUncalibrated: QPSSensor {
  override var sensorDataType: RawSensorData.SensorDataType { .accelerometerUncalibrated }
}

class QPSGeomagneticSensor: QPSSensor {
  override var sensorDataType: RawSensorData.SensorDataType { .geomagnetic }
}
