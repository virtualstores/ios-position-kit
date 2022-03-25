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
    public var directionPublisher: CurrentValueSubject<VPSDirectionBundle?, Error> = .init(nil)
    public var realWorldOffsetPublisher: CurrentValueSubject<VPSRealWorldOffsetUpdate?, Error> = .init(nil)
    public var locationHeadingPublisher: CurrentValueSubject<CLHeading, Error> = .init(CLHeading())
    public var allPackagesAreInitiated: CurrentValueSubject<Bool?, PositionKitError> = .init(nil)
    public var changedFloorPublisher: CurrentValueSubject<Int?, Never>  = .init(nil)
    public var recordingPublisher: CurrentValueSubject<(identifier: String, data: String)?, Never> = .init(nil)

    public var rtlsOption: RtlsOptions?
    
    private let context = Context(PositionKitConfig())
    private var cancellable: AnyCancellable?
    private var positionBundleCancellable: AnyCancellable?
    private var directionBundleCancellable: AnyCancellable?
    private var realWorldOffsetCancellable: AnyCancellable?
    private var locationHeadingCancellable: AnyCancellable?
    private var changeFloorCancellable: AnyCancellable?
    private var recordingCancellable: AnyCancellable?
    private var rotationSensor: RotationSensor?

    @Inject var backgroundAccess: IBackgroundAccessManager
    @Inject var sensor: ISensorManager

    private var vps: VPSManager?

    public init() {}

    public func setupMapFence(with mapData: MapFence, rtlsOption: RtlsOptions, floorheight: Double = 3.0, shouldRecord: Bool) {
        self.rtlsOption = rtlsOption
        vps = VPSManager(size: CGSize(width: mapData.properties.width, height: mapData.properties.height), shouldRecord: shouldRecord, floorHeightDiffInMeters: floorheight, mapData: mapData, scale: rtlsOption.pixelsPerMeter)

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
    
    public func syncPosition(xPosition: Double, yPosition: Double, startAngle: Double, syncPosition: Bool, syncAngle: Bool, uncertainAngle: Bool) {
        vps?.syncPosition(position: CGPoint(x: xPosition, y: yPosition), startAngle: startAngle, syncPosition: syncPosition, syncAngle: syncAngle, uncertainAngle: uncertainAngle)
    }

    public func stop(stopSensors: Bool = true) {
        if stopSensors {
            self.sensor.stop()
        }
        self.vps?.stop()
        cancellable?.cancel()
    }

    public func setBackgroundAccess(isActive: Bool) {
        isActive ? backgroundAccess.activate() : backgroundAccess.deactivate()
    }

    func bindEnginePublishers() {
        self.positionBundleCancellable = self.vps?.positionPublisher
            .compactMap { $0 }
            .sink { [weak self] _ in
                self?.positionPublisher.send(completion: .failure(PositionKitError.noPositions))
            } receiveValue: { [weak self] positionBundle in
                self?.positionPublisher.send(positionBundle)
            }

        self.directionBundleCancellable = self.vps?.directionPublisher
          .compactMap { $0 }
          .sink(receiveCompletion: { [weak self] (_) in
              self?.directionPublisher.send(completion: .failure(PositionKitError.noDirection))
          }, receiveValue: { data in
              self.directionPublisher.send(data)
          })

        self.realWorldOffsetCancellable = self.vps?.realWorldOffsetPublisher
                .compactMap { $0 }
                .sink(receiveCompletion: { [weak self] (_) in
                    self?.realWorldOffsetPublisher.send(completion: .failure(PositionKitError.noRealWorldOffset))
                }, receiveValue: { data in
                    self.realWorldOffsetPublisher.send(data)
                })

        self.locationHeadingCancellable = self.backgroundAccess.locationHeadingPublisher
            .compactMap { $0 }
            .sink { error in
                Logger.init().log(message: "locationHeadingPublisher error")

            } receiveValue: { [weak self] data in
                self?.locationHeadingPublisher.send(data)
            }
        
        self.changeFloorCancellable = self.vps?.changedFloorPublisher
            .compactMap { $0 }
            .sink { error in
                Logger.init().log(message: "changeFloorCancellable error")
            } receiveValue: { [weak self] data in
                self?.changedFloorPublisher.send(data)
            }

        self.recordingCancellable = self.vps?.recordingPublisher
            .compactMap { $0 }
            .sink(receiveValue: { (identifier, data) in
                self.recordingPublisher.send((identifier: identifier, data: data))
            })
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
