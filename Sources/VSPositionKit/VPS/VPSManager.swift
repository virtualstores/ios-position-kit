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
import qps
import VSSensorFusion

public final class VPSManager: VPSWrapper {
    public var positionPublisher: CurrentValueSubject<PositionBundle?, VPSWrapperError> = .init(nil)
    public var directionPublisher: CurrentValueSubject<DirectionBundle?, VPSWrapperError> = .init(nil)
    public var deviceOrientationPublisher: CurrentValueSubject<DeviceOrientation?, VPSWrapperError> = .init(nil)
    public var illegalBehaviourPublisher: CurrentValueSubject<Void?, Never> = .init(nil)
    public var badStepLengthPublisher: CurrentValueSubject<Void?, Never> = .init(nil)
    public var sensorsInitiatedPublisher: CurrentValueSubject<Void?, Never> = .init(nil)
    public var reducingSensorDataPublisher: CurrentValueSubject<Void?, Never> = .init(nil)
    public var trolleyModePublisher: CurrentValueSubject<Int64?, Never> = .init(nil)
    public var rescueModePublisher: CurrentValueSubject<Int64?, Never> = .init(nil)
    public var changedFloorPublisher: CurrentValueSubject<Int?, Never> = .init(nil)

    @Inject var sensor: VPSSensorManager

    public private(set) var pathfinder: BasePathfinder?
    public private(set) var qpsRunning = false

    /// vps properties
    private var qpsHandler: IQPSVPS?
    private var baseVPSHandler: BaseVPSHandler?
    private let qpsReplayInteractor: VPSReplayInteractor
    private var vps: IQPSVPS? { baseVPSHandler?.vps }
    private var mapInformation: VPSMapInformation?

    private let shouldRecord: Bool
    private var isRecording = false
    private let isRecordPossibilityOn = false

    public init(size: CGSize, shouldRecord: Bool, floorHeightDiffInMeters: Double, trueNorthOffset: Double = 0.0, mapData: MapFence) {
        self.shouldRecord = shouldRecord
        self.qpsReplayInteractor = VPSReplayInteractor()
        
        self.createMapInformation(with: mapData)
    }

    public func start() {
        createBaseVPSHandler()

        guard let mapInfo = mapInformation, let handler = baseVPSHandler, !qpsRunning else {
            return
        }
        qpsRunning = true
        
        qpsHandler = LegacyQPSHandlerEmulator(rawSensorManager: sensor, interactor: handler, replayInteractor: qpsReplayInteractor, mapInformation: mapInfo, userSettings: VPSUserSettings(), parameterPackageEnum: .retail, mlCommunicator: nil)
                
        
        sensor.startAllSensors()
    }

    public func stop() {
        if qpsRunning {
            qpsRunning = false
            vps?.stopNavigation()
            qpsHandler = nil
        }
    }

    public func startNavigation(startPosition: CGPoint, startAngle: Double, uncertainAngle: Bool) {
        if !qpsRunning {
            start()
        }

        vps?.startNavigation(startPos: startPosition.asPointF, startAngle: startAngle, startSensors: true, uncertainAngle: uncertainAngle)
    }

    public func initPositionSync() {
        if qpsRunning {
            vps?.doInitPositionSyncEvent()
        }
    }

    public func setPathfinder(pathfinder: BasePathfinder) {
        self.pathfinder = pathfinder
    }

    public func setPosition(point: CGPoint, direction: CGPoint, delayedAngle: Double, syncDirection: Bool, forceSyncPosition: Bool, uncertainAngle: Bool) {
        if self.qpsRunning {
            let data = VPSSyncData()
            data.timestamp = Int64(NSDate().timeIntervalSince1970 * 1000)
            data.positions = [PointWithOffset(position: point.asPointF, offset: direction.asPointF)]
            data.isValidSyncRotation = syncDirection
            data.forceSyncPosition = forceSyncPosition
            data.delayedAngle = Float(delayedAngle)
            vps?.onPositionSyncEvent(data: data, uncertainAngle: uncertainAngle)
        } else {
            self.start()
            let angle = syncDirection ? Double((atan2(direction.y, direction.x)) + 180.0) * -1.0 : Double.nan
            self.startNavigation(startPosition: point, startAngle: angle, uncertainAngle: uncertainAngle)
        }
    }

    public func startRecording(startPosition: PositionBundle, currentDirection: Double) {
        if qpsRunning && isRecordPossibilityOn {
            vps?.startRecording(startPosition: startPosition.asNavBundle, currentDirection: KotlinDouble(double: currentDirection))
            isRecording = true
        }
    }

    public func stopRecording() {
        if qpsRunning && isRecording {
            vps?.stopRecording()
            isRecording = false
        }
    }

    public func prepareAngle() { }

    private func createBaseVPSHandler() {
        self.baseVPSHandler = BaseVPSHandler(parameterPackageEnum: .retail,
                                             onNewNavigationBundle: { [weak self] (x, y, std, _) -> Void in
            if let x = x, let y = y, let std = std {
                let position =  PositionBundle(x: Float(truncating: x), y: Float(truncating: y), std: Float(truncating: std))
                self?.positionPublisher.send(position)
            }
        },
                                             onPositionEvent: { (_) -> Void in },
                                             onIllegalBehaviour: { [weak self] () -> Void in
            self?.illegalBehaviourPublisher.send(())
        },
                                             onTrolleyDetection: { [weak self] (currentTime) -> Void in
            self?.trolleyModePublisher.send(Int64(truncating: currentTime))
        },
                                             onRescueMode: { [weak self] (currentTime) -> Void in
            self?.rescueModePublisher.send(Int64(truncating: currentTime))
        },
                                             onSensorsInitiated: { [weak self] () -> Void in
            self?.sensorsInitiatedPublisher.send(())
        },
                                             onNewDeviceOrientation: { [weak self] (orientation) -> Void in
            self?.deviceOrientationPublisher.send(orientation.asDeviceOrientation)
        },
                                             onFloorChange: { [weak self] (floorDifferential, _) -> Void in
            self?.changedFloorPublisher.send(Int(truncating: floorDifferential))
        },
                                             onNewDebugMessage: nil,
                                             onNewDirectionBundle: { (_) -> Void in })
    }

    private func createMapInformation(with data: MapFence) {
        guard let mapFenceData = MapFenceFactory.getMapFenceData(fromMapFence: data) else { return }
        
        let fencePolygons = mapFenceData.polygons
        let height = mapFenceData.height
        let width = Int32(mapFenceData.width - (mapFenceData.width % 16))
        
        //TODO: create offsetZones
        //let offsetZones = [OffsetZone(offsetRadians: 1.1, polygons: mapFenceData.polygons.first ?? [])]
        mapInformation = VPSMapInformation(width: width, height: Int32(height), mapFenceImage: nil, mapFencePolygons: fencePolygons, mapFenceScale: 50, offsetZones: [], realWorldOffset: 0.0, floorHeight: 3)
    }
}

extension VPSManager: RawSensorDelegate {
    func onStart() {
        sensor.start()
    }
    
    func onStop() {
        sensor.stop()
    }
}
