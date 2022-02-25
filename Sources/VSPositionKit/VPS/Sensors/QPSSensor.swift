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
import Combine

protocol RawSensorDelegate: AnyObject {
    func onStart()
    func onStop()
}

public class QPSSensor: RawSensor {
    var activated = false
    var timer: Timer?
    
    weak var delegate: RawSensorDelegate?
    
    public override init() { }
    
    override public func start() {
        self.activated = true
        self.delegate?.onStart()
    }
    
    public func onNewData(data: RawSensorData) {
        if activated {
            self.notifyChanged(data: data)
        }
    }
    
    override public func stop() {
        self.activated = false
        self.delegate?.onStop()
        
    }
    
    public override func notifyChanged(data: RawSensorData) {
        super.setChanged()
        super.notifyChanged(data: data)
    }
    
    public override func getVendorName() -> String {
        return "Apple"
    }
}
