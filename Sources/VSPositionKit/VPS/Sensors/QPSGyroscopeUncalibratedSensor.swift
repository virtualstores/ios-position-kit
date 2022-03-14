//
// QPSGyroscopeUncalibratedSensor
// VSPositionKit
//
// Created by Hripsime on 2022-01-01
// Copyright Virtual Stores - 2022
//

import Foundation
import qps

class QPSGyroscopeUncalibratedSensor: QPSSensor {
    override public var sensorDataType: RawSensorData.SensorDataType {
        .gyroscopeUncalibrated
    }
}
