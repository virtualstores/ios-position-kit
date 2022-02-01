//
// QPSSensor
// VSPositionKit
//
// Created by Hripsime on 2022-01-01
// Copyright Virtual Stores - 2022
//

import Foundation
import qps
import CoreMotion

public class QPSSensor: RawSensor {
    let motion: CMMotionManager

    var activated: Bool = false
    var timer: Timer?

    public init(motion: CMMotionManager) {
        self.motion = motion
    }

    override public func start() {
        self.activated = true
    }

    public func onNewData(data: RawSensorData) {
        if activated {
            self.notifyChanged(data: data)
        }
    }

    override public func stop() {
        self.activated = false
    }

    public override func notifyChanged(data: RawSensorData) {
        super.setChanged()
        super.notifyChanged(data: data)
    }

    public override func getVendorName() -> String {
        return "Apple"
    }
}
