//
// PositionManager
// VSPositionKit
//
// Created by Hripsime on 2021-12-14
// Copyright Virtual Stores - 2021
//

import Foundation
import Combine
import VSSensorFusion
import VSFoundation
import CoreGraphics
import CoreLocation

public final class PositionManager: IPositionKit {
    public var positionPublisher: CurrentValueSubject<PositionBundle?, PositionKitError>  = .init(nil)
    public var locationHeadingPublisher: CurrentValueSubject<CLHeading, Error> = .init(CLHeading())
    public var allPackagesAreInitiated: CurrentValueSubject<Bool?, PositionKitError> = .init(nil)
    public var rtlsOption: RtlsOptions?
    
    private let context: Context
    private var cancellable: AnyCancellable?
    private var positionBundleCancellable: AnyCancellable?
    private var locationHeadingCancellable: AnyCancellable?
    private var rotationSensor: RotationSensor?

    @Inject var backgroundAccess: IBackgroundAccessManager
    @Inject var sensor: ISensorManager

    private var vps: VPSManager?

    public init(context: Context = Context(PositionKitConfig())) {
        self.context = context
    }

    public func setupMapFence(with mapData: MapFence, rtlsOption: RtlsOptions) {
        self.rtlsOption = rtlsOption
        vps = VPSManager(size: CGSize(width: mapData.properties.width, height: mapData.properties.height), shouldRecord: true, floorHeightDiffInMeters: 3.0, mapData: mapData)
        vps?.start()
        
        bindEnginePublishers()
    }

    public func start() throws {
        rotationSensor = AuxSensorFactory().createRotationSensor(delegate: self)

        cancellable = sensor.sensorPublisher
            .compactMap { $0 }
            .sink { _ in
            } receiveValue: { data in
                self.rotationSensor?.input(motionSensorData: data)
            }
        
        try sensor.start()
    }
    
    public func startNavigation(with direction: Double, xPosition: Double, yPosition: Double, uncertainAngle: Bool) {
        vps?.startNavigation(startPosition: CGPoint(x: xPosition, y: yPosition), startAngle: direction, uncertainAngle: uncertainAngle)
    }
    
    public func syncPosition(position: TT2PointWithOffset, syncRotation: Bool, forceSync: Bool, uncertainAngle: Bool) {
        vps?.syncPosition(position: position, syncRotation: syncRotation, forceSync: forceSync, uncertainAngle: uncertainAngle)
    }

    public func stop() {
        sensor.stop()
        vps?.stop()
        cancellable?.cancel()
    }

    public func setBackgroundAccess(isActive: Bool) {
        isActive ? backgroundAccess.activate() : backgroundAccess.deactivate()
    }

    func bindEnginePublishers() {
        self.positionBundleCancellable = self.vps?.positionPublisher
            .compactMap { $0 }
            .sink { [weak self] _ in
                self?.positionPublisher.send(completion: .failure(PositionKitError.noData))
            } receiveValue: { [weak self] positionBundle in
                self?.positionPublisher.send(positionBundle)
            }

        self.locationHeadingCancellable = self.backgroundAccess.locationHeadingPublisher
            .compactMap { $0 }
            .sink { error in
                print(error)
            } receiveValue: { [weak self] data in
                self?.locationHeadingPublisher.send(data)
            }
    }

    deinit {
        stop()
    }
}

extension PositionManager: IRotationSensorDelegate {
    func onNew(rotation: RotationBundle) {
        // what to do ?? ?
    }
}
