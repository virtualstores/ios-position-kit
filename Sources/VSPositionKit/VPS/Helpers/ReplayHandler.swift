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
    var accelerationData: [MotionSensorData] = []
    var gravityData: [MotionSensorData] = []
    var rotationData: [MotionSensorData] = []
    var proximityData: [MotionSensorData] = []
    var barometerData: [MotionSensorData] = []
    var altimterData: [MotionSensorData] = []

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
        case .acceleration: accelerationData.append(data)
        case .gravity: gravityData.append(data)
        case .rotation: rotationData.append(data)
        case .proximity: proximityData.append(data)
        case .barometer: barometerData.append(data)
        case .altimter: altimterData.append(data)
        }
    }

    func reset() {
        accelerationData.removeAll()
        gravityData.removeAll()
        rotationData.removeAll()
        proximityData.removeAll()
        barometerData.removeAll()
        altimterData.removeAll()
    }
}
