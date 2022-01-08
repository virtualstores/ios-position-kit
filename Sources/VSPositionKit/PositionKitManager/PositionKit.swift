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

/// Manager for PositionKit data. Will give positions
public protocol IPositionKit {
  
  /// Publishes the position data or error
  var positionPublisher: CurrentValueSubject<PositionBundle?, PositionKitError> { get }
  
  /// Temporary publisher for step counts test
  var stepCountPublisher: CurrentValueSubject<Int, Never> { get }
  
  /// Publishes if all packages are ready to start  or error
  var allPackagesAreInitiated: CurrentValueSubject<Bool?, PositionKitError> { get }
  
  /// Starts position managers. Will produce results to positionPublisher.
  func start() throws
  
  /// Stops position managers.
  func stop()
  
  /// Temporary setter for activating and deactivating background access
  func setBackgroundAccess(isActive: Bool)
  
  /// Temporary MapFence setup methode which will be used from old app
  func setupMapFence(with mapData: Data) throws
  
  /// MapFence setup methode
  func setupMapFence(with mapData: MapFence) throws
  
  /// Start navigation setup methode
  func startNavigation(with direction: Double, xPosition: Double, yPosition: Double)
}

public enum PositionKitError: Error {
  case noData
}
