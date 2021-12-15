//
// PositionKit
// VSPositionKit
//
// Created by Hripsime on 2021-12-14
// Copyright Virtual Stores - 2021
//

import Foundation
import Combine

/// Manager for PositionKit data. Will give positions
public protocol PositionKit {
    
    /// Publishes the position data or error
    var positionPublisher: CurrentValueSubject<PositionData?, PositionError> { get }
    
    /// Starts position managers. Will produce results to positionPublisher.
    func start() throws
    
    /// Stops position managers.
    func stop()
    
    /// Temporary flag for activating and deactivating background access
    var activateBackgroundAccess: Bool? { get set }
}
    
public enum PositionError: Error {
    case noData
}
