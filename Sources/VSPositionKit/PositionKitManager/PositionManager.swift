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

public final class PositionManager: IPositionKit {
    public var positionPublisher: CurrentValueSubject<PositionBundle?, PositionKitError>  = .init(nil)
    public var stepCountPublisher: CurrentValueSubject<Int, Never>  = .init(0)
    public var allPackagesAreInitiated: CurrentValueSubject<Bool?, PositionKitError> = .init(nil)

    private let context: Context
    private var stepCount = 0
    private var cancellable: AnyCancellable?
    private var positionBundleCancellable: AnyCancellable?
    private var rotationSensor: RotationSensor?

    @Inject var backgroundAccess: IBackgroundAccessManager
    @Inject var sensor: ISensorManager
    public var vps: VPSManager?

    public init(context: Context = Context(PositionKitConfig())) {
        self.context = context
    }

    public func setupMapFence(with mapData: MapFence) {
        vps = VPSManager(size: CGSize(width: 100, height: 200), shouldRecord: true, floorHeightDiffInMeters: 3.0, mapData: mapData)
        vps?.start()
        bindEnginePublishers()
    }

    public func start() throws {
        rotationSensor = AuxSensorFactory().createRotationSensor(delegate: self)

        cancellable = sensor.sensorPublisher
            .compactMap { $0 }
            .sink { _ in
                self.positionPublisher.send(completion: .failure(PositionKitError.noData))
            } receiveValue: { data in
                self.rotationSensor?.input(motionSensorData: data)
            }
        
        try sensor.start()
    }
    
    public func startNavigation(with direction: Double, xPosition: Double, yPosition: Double) {
        vps?.startNavigation(startPosition: CGPoint(x: xPosition, y: yPosition), startAngle: direction)
    }

    public func stop() {
        stepCount = 0
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
            .sink { data in
                print(data)
            } receiveValue: { [weak self] positionBundle in
                guard let self = self else { return }

                self.stepCount = self.stepCount + 1
                self.stepCountPublisher.send(self.stepCount)
                self.positionPublisher.send(positionBundle)
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
