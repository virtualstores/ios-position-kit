//
// VPSManager
// VSTT2
//
// Created by Hripsime on 2022-01-31.
// Copyright Virtual Stores - 2021

import Foundation
import VSFoundation
import CoreGraphics
import Combine
import VSPositionKit
import VSSensorFusion

public final class VPSManager: VPSWrapper {
    public var positionPublisher: CurrentValueSubject<PositionBundle?, VPSWrapperError> = .init(nil)
    public var directionPublisher: CurrentValueSubject<VPSDirectionBundle?, VPSWrapperError> = .init(nil)
    public var realWorldOffsetPublisher: CurrentValueSubject<VPSRealWorldOffsetUpdate?, VPSWrapperError> = .init(nil)
    public var deviceOrientationPublisher: CurrentValueSubject<DeviceOrientation?, VPSWrapperError> = .init(nil)
    public var illegalBehaviourPublisher: CurrentValueSubject<Void?, Never> = .init(nil)
    public var badStepLengthPublisher: CurrentValueSubject<Void?, Never> = .init(nil)
    public var sensorsInitiatedPublisher: CurrentValueSubject<Void?, Never> = .init(nil)
    public var reducingSensorDataPublisher: CurrentValueSubject<Void?, Never> = .init(nil)
    public var trolleyModePublisher: CurrentValueSubject<Int64?, Never> = .init(nil)
    public var rescueModePublisher: CurrentValueSubject<Int64?, Never> = .init(nil)
    public var changedFloorPublisher: CurrentValueSubject<Int?, Never> = .init(nil)
    public var recordingPublisher: CurrentValueSubject<(identifier: String, data: String)?, Never> = .init(nil)

    @Inject var sensor: VPSSensorManager

    public private (set) var pathfinder: BasePathfinder?
    public private(set) var qpsRunning = false

    /// vps properties
    private var qpsHandler: IQPSVPS?
    private var baseVPSHandler: BaseVPSHandler?
    private let qpsReplayInteractor: VPSReplayInteractor
    private var vps: IQPSVPS? { baseVPSHandler?.vps }
    private var mapInformation: VPSMapInformation?

    private let shouldRecord: Bool
    private var isRecording = false
    private var floorHeightDiffInMeters: Double?
    
    private var dataCommunicator = VPSDataCommunicator()

    private var recordingCancellable: AnyCancellable?

    public init(size: CGSize, shouldRecord: Bool, floorHeightDiffInMeters: Double, trueNorthOffset: Double = 0.0, mapData: MapFence, pixelsPerMeter: Double) {
        self.shouldRecord = shouldRecord
        self.qpsReplayInteractor = VPSReplayInteractor()
        self.floorHeightDiffInMeters = floorHeightDiffInMeters
        self.createMapInformation(with: mapData, pixelsPerMeter: pixelsPerMeter)
        self.bindPublishers()
    }

    func bindPublishers() {
        recordingCancellable = self.qpsReplayInteractor.replayInteractorDataPublisher
            .compactMap { $0 }
            .sink { (identifier, data) in
                self.recordingPublisher.send((identifier: identifier, data: data))
            }
    }

    public func start() {
        sensor.serialDispatch.async {
            self.createBaseVPSHandler()

            guard let mapInfo = self.mapInformation, let handler = self.baseVPSHandler, !self.qpsRunning else {
                return
            }
            self.qpsRunning = true

            self.qpsHandler = LegacyQPSHandlerEmulator(rawSensorManager: self.sensor, interactor: handler, replayInteractor: self.qpsReplayInteractor, mapInformation: mapInfo, userSettings: self.dataCommunicator.dataCommunicatorSettings, parameterPackageEnum: .retail, mlCommunicator: self.dataCommunicator, enableTeoML: false)

            self.sensor.startAllSensors()
        }
    }

    public func startRecording() {
        sensor.serialDispatch.async {
              if self.qpsRunning /*&& self.shouldRecord*/ {
                self.vps?.startRecording()
                self.isRecording = true
            }
        }
    }

    public func stop() {
        sensor.serialDispatch.async {
            if self.qpsRunning {
                self.stopRecording()
                self.qpsRunning = false
                self.vps?.stopNavigation()
                self.qpsHandler = nil
                self.sensor.shutDown()
            }
        }
    }

    public func stopRecording() {
        sensor.serialDispatch.async {
              if self.isRecording {
                self.vps?.stopRecording()
                self.isRecording = false
            }
        }
    }

    public func startNavigation(startPosition: CGPoint, startAngle: Double, uncertainAngle: Bool) {
        start()
        sensor.serialDispatch.async {
            self.vps?.startNavigation(startPos: startPosition.asPointF, startAngle: startAngle, startSensors: true, uncertainAngle: uncertainAngle)
            //self.startRecording()
        }
    }
    
    public func syncPosition(position: CGPoint, startAngle: Double, syncPosition: Bool, syncAngle: Bool, uncertainAngle: Bool) {
        sensor.serialDispatch.async {
            let syncData = VPSSyncData()

            syncData.position = position.asPointF
            syncData.angle = Float(startAngle)
            syncData.timestamp = Int64(NSDate().timeIntervalSince1970 * 1000)
            syncData.syncPosition = syncPosition
            syncData.syncAngle = syncAngle
            syncData.uncertainAngle = uncertainAngle

            //TODO: calculate delayed angel
            self.vps?.onPositionSyncEvent(data: syncData)
        }
    }

    public func initPositionSync() {
        if qpsRunning {
            vps?.doInitPositionSyncEvent()
        }
    }

    public func setPathfinder(pathfinder: BasePathfinder) {
        self.pathfinder = pathfinder
    }

    // why does this exist? is this not the same as sync?
    public func setPosition(point: CGPoint, startAngle: Double, syncPosition: Bool, syncAngle: Bool, uncertainAngle: Bool) {
        sensor.serialDispatch.async {
            if self.qpsRunning {
                let data = VPSSyncData()
                data.position = point.asPointF
                data.angle = Float(startAngle)
                data.timestamp = Int64(NSDate().timeIntervalSince1970 * 1000)
                data.syncPosition = syncPosition
                data.syncAngle = syncAngle
                data.uncertainAngle = uncertainAngle
                self.vps?.onPositionSyncEvent(data: data)
            } else {
                self.start()
                self.startNavigation(startPosition: point, startAngle: startAngle, uncertainAngle: uncertainAngle)
            }
        }
    }

    public func prepareAngle() { }

    private func createBaseVPSHandler() {
        self.baseVPSHandler = BaseVPSHandler(
            parameterPackageEnum: .retail,
            onNewNavigationBundle: { [weak self] (x, y, std, _) in
              if let x = x, let y = y, let std = std {
                let position =  PositionBundle(x: Float(truncating: x), y: Float(truncating: y), std: Float(truncating: std))
                DispatchQueue.main.async { self?.positionPublisher.send(position) }
              }
            },
            onPositionEvent: { (_) in },
            onIllegalBehaviour: { [weak self] () in
              DispatchQueue.main.async { self?.illegalBehaviourPublisher.send(()) }
            },
            onTrolleyDetection: { [weak self] (currentTime) in
              DispatchQueue.main.async { self?.trolleyModePublisher.send(Int64(truncating: currentTime)) }
            },
            onRescueMode: { [weak self] (currentTime) in
              DispatchQueue.main.async { self?.rescueModePublisher.send(Int64(truncating: currentTime)) }
            },
            onSensorsInitiated: { [weak self] () in
              DispatchQueue.main.async { self?.sensorsInitiatedPublisher.send(()) }
            },
            onNewDeviceOrientation: { [weak self] (orientation) in
              DispatchQueue.main.async { self?.deviceOrientationPublisher.send(orientation.asDeviceOrientation) }
            },
            onFloorChange: { [weak self] (floorDifferential, _) in
              DispatchQueue.main.async { self?.changedFloorPublisher.send(Int(truncating: floorDifferential)) }
            },
            onNewDebugMessage: nil,
            onNewDirectionBundle: { [weak self] (directionBundle) in
              DispatchQueue.main.async { self?.directionPublisher.send(VPSDirectionBundle(angle: directionBundle.direction)) }
            },
            onNewRealWorldOffsetUpdate: { [weak self] (realWorldOffset) in
              DispatchQueue.main.async { self?.realWorldOffsetPublisher.send(VPSRealWorldOffsetUpdate(angle: realWorldOffset.direction)) }
            }
        )
    }

    private func createMapInformation(with data: MapFence, pixelsPerMeter: Double) {
        guard let mapFenceData = MapFenceFactory.getMapFenceData(fromMapFence: data) else { return }
        
        let fencePolygons = mapFenceData.polygons
        let height = mapFenceData.height
        let width = Int32(mapFenceData.width - (mapFenceData.width % 16))
        
        //TODO: create offsetZones
        //let offsetZones = [OffsetZone(offsetRadians: 1.1, polygons: mapFenceData.polygons.first ?? [])]
        mapInformation = VPSMapInformation(width: width, height: Int32(height), mapFenceImage: nil, mapFencePolygons: fencePolygons, mapFenceScale: pixelsPerMeter, offsetZones: [], realWorldOffset: 0.0, floorHeight: KotlinDouble(double: floorHeightDiffInMeters ?? 3.0))
    }
    
    deinit {
        recordingCancellable?.cancel()
    }
}
