//
// QPSGravitySensor
// VSPositionKit
//
// Created by Hripsime on 2022-01-01
// Copyright Virtual Stores - 2022
//

import Foundation
import qps

public class QPSGravitySensor: QPSSensor {
    override public var sensorDataType: RawSensorData.SensorDataType {
        .gravity
    }
}
