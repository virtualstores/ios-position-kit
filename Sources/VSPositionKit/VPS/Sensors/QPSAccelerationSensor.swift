//
// QPSAccelerationSensor
// VSPositionKit
//
// Created by Hripsime on 2022-01-01
// Copyright Virtual Stores - 2022
//

import Foundation
import qps

public class QPSAccelerationSensor: QPSSensor {
    override public var sensorDataType: RawSensorData.SensorDataType {
        .acceleration
    }
}

public class QPSAltitudeSensor: QPSSensor {
    override public var sensorDataType: RawSensorData.SensorDataType {
        .altitude
    }
}
