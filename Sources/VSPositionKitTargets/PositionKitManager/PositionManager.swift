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
    public var recordingPublisherPartial: CurrentValueSubject<(identifier: String, data: String)?, Never> = .init(nil)
    public var recordingPublisherEnd: CurrentValueSubject<(identifier: String, data: String)?, Never> = .init(nil)
    public var deviceOrientationPublisher: CurrentValueSubject<DeviceOrientation?, VPSWrapperError> = .init(nil)
    public var rescueModePublisher: CurrentValueSubject<Int64?, Never> = .init(nil)
    public var modifiedUserPublisher: CurrentValueSubject<String?, Never> = .init(nil)
    public var stepEventDataPublisher: CurrentValueSubject<VSFoundation.StepEventData?, Never> = .init(nil)
    
    public var rtlsOption: RtlsOptions?
    
    private let context = Context(PositionKitConfig())
    private var cancellable = Set<AnyCancellable>()
    
    private var rotationSensor: RotationSensor?
    
    @Inject var backgroundAccess: IBackgroundAccessManager
    @Inject var sensor: ISensorManager
    
    private var vps: VPSManager?
    
    public init() {}
    
    public func setupMapFence(with mapData: MapFence, rtlsOption: RtlsOptions, floorheight: Double = 3.0, parameterPackage: ParameterPackage) {
        self.rtlsOption = rtlsOption
        vps = VPSManager(size: CGSize(width: mapData.properties.width, height: mapData.properties.height), floorHeightDiffInMeters: floorheight, mapData: mapData, pixelsPerMeter: rtlsOption.pixelsPerMeter, parameterPackage: parameterPackage)
        
        bindEnginePublishers()
    }
    
    public func start() throws {
//        rotationSensor = AuxSensorFactory().createRotationSensor(delegate: self)
//
//        sensor.sensorPublisher
//            .compactMap { $0 }
//            .sink { _ in
//            } receiveValue: { data in
//                self.rotationSensor?.input(motionSensorData: data)
//            }
//            .store(in: &cancellable)
        
        try sensor.start()
    }
    
    public func startNavigation(with direction: Double, xPosition: Double, yPosition: Double, uncertainAngle: Bool) {
        vps?.startNavigation(startPosition: CGPoint(x: xPosition, y: yPosition), startAngle: direction, uncertainAngle: uncertainAngle)
    }
    
    public func syncPosition(xPosition: Double, yPosition: Double, startAngle: Double, syncPosition: Bool, syncAngle: Bool, uncertainAngle: Bool) {
        vps?.syncPosition(position: CGPoint(x: xPosition, y: yPosition), startAngle: startAngle, syncPosition: syncPosition, syncAngle: syncAngle, uncertainAngle: uncertainAngle)
    }

    public func startRecording() {
        vps?.startRecording()
    }
    
    public func stop(stopSensors: Bool = true) {
        if stopSensors {
            self.sensor.stop()
        }
        self.vps?.stop()
    }

    public func stopRecording() {
        vps?.stopRecording()
    }
    
    public func setBackgroundAccess(isActive: Bool) {
        isActive ? backgroundAccess.activate() : backgroundAccess.deactivate()
    }
    
    func bindEnginePublishers() {
        backgroundAccess.locationHeadingPublisher
            .compactMap { $0 }
            .sink { error in
                Logger.init().log(message: "locationHeadingPublisher error")
            } receiveValue: { [weak self] data in
                self?.locationHeadingPublisher.send(data)
            }.store(in: &cancellable)
        vps?.positionPublisher
            .compactMap { $0 }
            .sink { [weak self] _ in
                self?.positionPublisher.send(completion: .failure(PositionKitError.noPositions))
            } receiveValue: { [weak self] positionBundle in
                self?.positionPublisher.send(positionBundle)
            }.store(in: &cancellable)
        
        vps?.directionPublisher
            .compactMap { $0 }
            .sink(receiveCompletion: { [weak self] (_) in
                self?.directionPublisher.send(completion: .failure(PositionKitError.noDirection))
            }, receiveValue: { data in
                self.directionPublisher.send(data)
            }).store(in: &cancellable)
        
        vps?.realWorldOffsetPublisher
            .compactMap { $0 }
            .sink(receiveCompletion: { [weak self] (_) in
                self?.realWorldOffsetPublisher.send(completion: .failure(PositionKitError.noRealWorldOffset))
            }, receiveValue: { data in
                self.realWorldOffsetPublisher.send(data)
            }).store(in: &cancellable)
        
        vps?.changedFloorPublisher
            .compactMap { $0 }
            .sink { error in
                Logger.init().log(message: "changeFloorCancellable error")
            } receiveValue: { [weak self] data in
                self?.changedFloorPublisher.send(data)
            }.store(in: &cancellable)
        
        vps?.recordingPublisher
            .compactMap { $0 }
            .sink(receiveValue: { [weak self] in self?.recordingPublisherEnd.send($0) })
            .store(in: &cancellable)
        vps?.recordingPublisherPartial
            .compactMap { $0 }
            .sink(receiveValue: { [weak self] in self?.recordingPublisherEnd.send($0) })
            .store(in: &cancellable)
        vps?.recordingPublisherEnd
            .compactMap { $0 }
            .sink(receiveValue: { [weak self] in self?.recordingPublisherEnd.send($0) })
            .store(in: &cancellable)

        vps?.deviceOrientationPublisher
            .compactMap { $0 }
            .sink(receiveCompletion: { (_) in
                self.deviceOrientationPublisher.send(completion: .failure(.noData))
            }, receiveValue: { (orientation) in
                self.deviceOrientationPublisher.send(orientation)
            }).store(in: &cancellable)

        vps?.rescueModePublisher
          .compactMap { $0 }
          .sink(receiveValue: { [weak self] in self?.rescueModePublisher.send($0) })
          .store(in: &cancellable)

        vps?.modifiedUserPublisher
            .compactMap { $0 }
            .sink { [weak self] in self?.modifiedUserPublisher.send($0) }
            .store(in: &cancellable)

        vps?.stepEventDataPublisher
            .compactMap { $0 }
            .sink(receiveValue: { [weak self] in self?.stepEventDataPublisher.send($0) })
            .store(in: &cancellable)
    }
    
    deinit {
        stop()
        cancellable.removeAll()
    }
}

extension PositionManager: IRotationSensorDelegate {
    func onNew(rotation: RotationBundle) {
        // what to do ?? ?
    }
}
