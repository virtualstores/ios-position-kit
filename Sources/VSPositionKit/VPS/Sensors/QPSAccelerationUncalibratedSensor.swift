//
// QPSAccelerationUncalibratedSensor
// VSPositionKit
//
// Created by Hripsime on 2022-01-01
// Copyright Virtual Stores - 2022
//

import Foundation
import vps

class QPSAccelerationUncalibratedSensor: QPSSensor {
    override public var sensorDataType: RawSensorData.SensorDataType {
        .accelerationUncalibrated
    }
}
