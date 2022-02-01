//
// VPSManager
// VSTT2
//
// Created by Hripsime on 2022-01-31.
// Copyright Virtual Stores - 2021

import Foundation
import VSFoundation
import CoreGraphics
import Combine
import qps

public class VPSManager: VPSWrapper {
    public var positionPublisher: CurrentValueSubject<PositionBundle?, VPSWrapperError> = .init(nil)
    public var directionPublisher: CurrentValueSubject<DirectionBundle?, VPSWrapperError> = .init(nil)
    public var deviceOrientationPublisher: CurrentValueSubject<DeviceOrientation?, VPSWrapperError> = .init(nil)
    public var illegalBehaviourPublisher: CurrentValueSubject<Void?, Never> = .init(nil)
    public var badStepLengthPublisher: CurrentValueSubject<Void?, Never> = .init(nil)
    public var sensorsInitiatedPublisher: CurrentValueSubject<Void?, Never> = .init(nil)
    public var reducingSensorDataPublisher: CurrentValueSubject<Void?, Never> = .init(nil)
    public var trolleyModePublisher: CurrentValueSubject<Int64?, Never> = .init(nil)
    public var rescueModePublisher: CurrentValueSubject<Int64?, Never> = .init(nil)

    /// Publishes the floor change
    public var changedFloorPublisher: CurrentValueSubject<Int?, Never> = .init(nil)

    public private(set) var qpsRunning: Bool = false
    private var qpsHandler: IQPSVPS?
    
    public func start() {
        qpsRunning = true
    }
}

extension VPSManager: BaseVPSHandlerDelegate {

    public func onFloorChange(floorDifference: Int32, timestamp: Int64) {
        changedFloorPublisher.send(Int(floorDifference))
    }
    
    public func onIllegalBehaviour() {
        illegalBehaviourPublisher.send(())
    }
    
    public func onNewDebugMessage(message: String) { }
    
    public func onNewDeviceOrientation(orientation: IQPSDeviceOrientation) {
        deviceOrientationPublisher.send(orientation.asDeviceOrientation)
    }
    
    public func onNewDirectionBundle(directionBundle: DirectionBundle) {
        // if self.qpsSensorManager.sensorEventQueue.isEmpty {
               //    directionPublisher.send(directionBundle)
              // }
    }
    
    public func onNewNavigationBundle(navigationBundle: NavBundle) {
//        if let position = navigationBundle.position, let std = navigationBundle.std {//self.qpsSensorManager.sensorEventQueue.isEmpty
//            let bundle = PositionBundle(position: CGPoint(x: position.x, y: position.y), std: Double(truncating: std))
//            positionPublisher.send(bundle)
//        }
    }
    
    public func onPositionEvent(positionEvent: PositionEvent) { }
    
    public func onRescueMode(currentTime: Int64) {
        rescueModePublisher.send(currentTime)
    }
    
    public func onSensorsInitiated() {
        self.sensorsInitiatedPublisher.send(())
    }
    
    public func onTrolleyDetection(currentTime: Int64) {
        trolleyModePublisher.send((currentTime))
    }
    
    public func whatToDoWithScrubbedListIfInWarehouseMode(list: NSMutableArray, timestamp: Int64) { }
}
