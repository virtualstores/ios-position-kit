//
// QPSRotationSensor
// VSPositionKit
//
// Created by Hripsime on 2022-01-01
// Copyright Virtual Stores - 2022
//

import Foundation
import VSPositionKit

public class QPSRotationSensor: QPSSensor {
    override public var sensorDataType: RawSensorData.SensorDataType {
        .rotation
    }
}
