//
// VPSWrapper
// VSPositionKit
//
// Created by Hripsime on 2021-12-28
// Copyright Virtual Stores - 2021
//

import Foundation
import VSFoundation
import Combine

public protocol VPSWrapper {
    /// Publishes the position data or error
    var positionPublisher: CurrentValueSubject<PositionBundle?, VPSWrapperError> { get }

    /// Publishes the direction data or error
     var directionPublisher: CurrentValueSubject<DirectionBundle?, VPSWrapperError> { get }

    /// Publishes the device orientation or error
    var deviceOrientationPublisher: CurrentValueSubject<DeviceOrientation?, VPSWrapperError> { get }

    /// Publishes the illegal behaviour from vps
    var illegalBehaviourPublisher: CurrentValueSubject<Void?, Never> { get }

    /// Publishes the bad Step Length from vps
    var badStepLengthPublisher: CurrentValueSubject<Void?, Never> { get }

    /// Publishes  when  the sensors are Initiated  from vps
    var sensorsInitiatedPublisher: CurrentValueSubject<Void?, Never> { get }

    /// Publishes  when recording  the sensors data from vps
    var reducingSensorDataPublisher: CurrentValueSubject<Void?, Never> { get }

    /// Publishes  trolley Mode from vps
    var trolleyModePublisher: CurrentValueSubject<Int64?, Never> { get }

    /// Publishes  rescue Mode from vps
    var rescueModePublisher: CurrentValueSubject<Int64?, Never> { get }

    /// Publishes the floor change
    var changedFloorPublisher: CurrentValueSubject<Int?, Never> { get }

    /// Starts the vps
    func start()
}

public enum VPSWrapperError: Error {
    case noData
}
