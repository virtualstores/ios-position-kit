//
// ReplayHandler
// VSPositionKit
//
// Created by Hripsime on 2022-01-01
// Copyright Virtual Stores - 2022
//

import Foundation
import VSFoundation

class ReplayHandler {
    var ACCELERATION: [MotionSensorData] = []
    var GRAVITY: [MotionSensorData] = []
    var ROTATION: [MotionSensorData] = []
    var PROXIMITY: [MotionSensorData] = []
    var BAROMETER: [MotionSensorData] = []
    var ALTIMETER: [MotionSensorData] = []

    enum SensorType {
        case acceleration
        case gravity
        case rotation
        case proximity
        case barometer
        case altimter
    }

    func addData(type: SensorType, data: MotionSensorData) {
        switch type {
        case .acceleration: ACCELERATION.append(data)
        case .gravity: GRAVITY.append(data)
        case .rotation: ROTATION.append(data)
        case .proximity: PROXIMITY.append(data)
        case .barometer: BAROMETER.append(data)
        case .altimter: ALTIMETER.append(data)
        }
    }

    func reset() {
        ACCELERATION.removeAll()
        GRAVITY.removeAll()
        ROTATION.removeAll()
        PROXIMITY.removeAll()
        BAROMETER.removeAll()
        ALTIMETER.removeAll()
    }
}
