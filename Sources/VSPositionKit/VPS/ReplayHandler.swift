//
// ReplayHandler
// VSPositionKit
//
// Created by Hripsime on 2022-01-01
// Copyright Virtual Stores - 2022
//

import Foundation

class SensorData: Codable {
    let timeStampLocal: Int
    let timeStampSensor: Int
    let data: [Float]

    init(timeStampLocal: Int, timeStampSensor: Int, data: [Float]) {
        self.timeStampLocal = timeStampLocal
        self.timeStampSensor = timeStampSensor
        self.data = data
    }
}

class ReplayHandler: Codable {
    var ACCELERATION: [SensorData] = []
    var GRAVITY: [SensorData] = []
    var ROTATION: [SensorData] = []
    var PROXIMITY: [SensorData] = []
    var BAROMETER: [SensorData] = []
    var ALTIMETER: [SensorData] = []

    enum SensorType {
        case acceleration
        case gravity
        case rotation
        case proximity
        case barometer
        case altimter
    }

    func addData(type: SensorType, data: SensorData) {
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
