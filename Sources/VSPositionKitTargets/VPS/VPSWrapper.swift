//
// VPSWrapper
// VSPositionKit
//
// Created by Hripsime on 2021-12-28
// Copyright Virtual Stores - 2021
//

import Foundation
import VSFoundation
import CoreGraphics
import Combine

protocol VPSWrapper {
    /// Publishes the position data or error
    var positionPublisher: CurrentValueSubject<PositionBundle?, VPSWrapperError> { get }

    /// Publishes the direction data or error
     var directionPublisher: CurrentValueSubject<VPSDirectionBundle?, VPSWrapperError> { get }

    /// Publishes the offset of unit quaternion (start angle) and the map
    var realWorldOffsetPublisher: CurrentValueSubject<VPSRealWorldOffsetUpdate?, VPSWrapperError> { get }

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

  var stepEventDataPublisher: CurrentValueSubject<VSFoundation.StepEventData?, Never> { get }

    /// Starts the vps
    func start()

    /// Stop the vps
    func stop()

    /// Start navigation setup methode
    func startNavigation(startPosition: CGPoint, startAngle: Double, uncertainAngle: Bool)

    /// Position Sync methode
    func initPositionSync()

    /// Set position change  methode
    func setPosition(point: CGPoint, startAngle: Double, syncPosition: Bool, syncAngle: Bool, uncertainAngle: Bool)

    /// Start recording for vps
    func startRecording()

    /// Stop recording for vps
    func stopRecording()

    /// Provide device start angle
    func prepareAngle()
}

public enum VPSWrapperError: Error {
    case noData
}
