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
    /// Publishes the current heading from CLLocationManager
    var locationHeadingPublisher: CurrentValueSubject<CLHeading, Error> { get }
    /// Publishes all recorded data
    var recordingPublisher: CurrentValueSubject<(identifier: String, data: String, sessionId: String, lastFile: Bool)?, Never> { get }

    /// Publishes output signals from VPS
    var outputSignalPublisher: CurrentValueSubject<VPSOutputSignal?, Never> { get }
    
    /// Starts position managers. Will produce results to positionPublisher.
    func start() throws
    
    /// Stops position managers.
    func stop(stopSensors: Bool)
    
    /// Temporary setter for activating and deactivating background access
    func setBackgroundAccess(isActive: Bool)

    func prepareAngle()
    
    /// MapFence setup methode
    func setupMapFence(with mapData: MapFence, rtlsOption: RtlsOptions, floorheight: Double, parameterPackage: ParameterPackage, userController: IUserController, positionServiceSettings: PositionServiceSettings?, converter: ICoordinateConverter, modelManger: VPSModelManager)
    
    /// Start navigation setup methode
    func startNavigation(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool)
    
    func syncPosition(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool)
}

public enum PositionKitError: Error {
    case noPositions
    case noDirection
    case alreadyStarted
    case noRealWorldOffset
}

extension PositionKitError: LocalizedError {
    public var errorDescription: String? {
        switch self {
        case .noPositions: return NSLocalizedString("No position data avaialable", comment: "Check VPS connection")
        case .noDirection: return NSLocalizedString("No direction data available", comment: "Check VPS connection")
        case .alreadyStarted: return NSLocalizedString("VPS already started", comment: "VPS can only be started once")
        case .noRealWorldOffset: return NSLocalizedString("No offset data available", comment: "Check VPS connection")
        }
    }
}
