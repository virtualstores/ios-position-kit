//
// PositionKit
// VSPositionKit
//
// Created by Hripsime on 2021-12-14
// Copyright Virtual Stores - 2021
//

import Foundation
import Combine
import VSFoundation
import CoreLocation

/// Manager for PositionKit data. Will give positions
public protocol IPositionKit {
    /// Publishes the position data or error
    var positionPublisher: CurrentValueSubject<PositionBundle?, PositionKitError> { get }

    /// Publishes the current heading from CLLocationManager
    var locationHeadingPublisher: CurrentValueSubject<CLHeading, Error> { get }
    
    /// Publishes if all packages are ready to start  or error
    var allPackagesAreInitiated: CurrentValueSubject<Bool?, PositionKitError> { get }
    
    /// Publishes the floor change
    var changedFloorPublisher: CurrentValueSubject<Int?, Never> { get }
    
    /// Starts position managers. Will produce results to positionPublisher.
    func start() throws
    
    /// Stops position managers.
    func stop(stopSensors: Bool)
    
    /// Temporary setter for activating and deactivating background access
    func setBackgroundAccess(isActive: Bool)
    
    /// MapFence setup methode
    func setupMapFence(with mapData: MapFence, rtlsOption: RtlsOptions, floorheight: Double)
    
    /// Start navigation setup methode
    func startNavigation(with direction: Double, xPosition: Double, yPosition: Double, uncertainAngle: Bool)
    
    func syncPosition(position: TT2PointWithOffset, syncRotation: Bool, forceSync: Bool, uncertainAngle: Bool)
}

public enum PositionKitError: Error {
    case noPositions
    case noDirection
    case alreadyStarted
}

extension PositionKitError: LocalizedError {
    public var errorDescription: String? {
        switch self {
        case .noPositions: return NSLocalizedString("No position data avaialable", comment: "Check VPS connection")
        case .noDirection: return NSLocalizedString("No direction data available", comment: "Check VPS connection")
        case .alreadyStarted: return NSLocalizedString("VPS already started", comment: "VPS can only be started once")
        }
    }
}
