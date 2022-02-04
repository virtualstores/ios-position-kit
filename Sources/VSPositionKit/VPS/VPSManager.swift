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
import vps
import VSSensorFusion

public class VPSManager: VPSWrapper {
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

    private var isRecording = false
    private let isRecordPossibilityOn = false

    public init(size: CGSize, shouldRecord: Bool, floorHeightDiffInMeters: Double, trueNorthOffset: Double = 0.0, mapData: MapFence) {

        qpsReplayInteractor = VPSReplayInteractor()
        createMapInformation(with: mapData)
    }

    public func start() {
        createBaseVPSHandler()

        guard let mapInfo = mapInformation, let handler = baseVPSHandler, !qpsRunning else {
            return
        }
        qpsRunning = true
        qpsHandler = LegacyQPSHandlerEmulator(rawSensorManager: sensor, interactor: handler, replayInteractor: qpsReplayInteractor, mapInformation: mapInfo, userSettings: VPSUserSettings(), parameterPackageEnum: .retail, mlCommunicator: nil)
    }

    public func stop() {
        if qpsRunning {
            qpsRunning = false
            vps?.stopNavigation()
            qpsHandler = nil
        }
    }

    public func startNavigation(startPosition: CGPoint, startAngle: Double) {
        if !qpsRunning {
            start()
        }

        vps?.startNavigation(startPos: startPosition.asPointF, startAngle: startAngle, startSensors: true)
    }

    public func initPositionSync() {
        if qpsRunning {
            vps?.doInitPositionSyncEvent()
        }
    }

    public func setPathfinder(pathfinder: BasePathfinder) {
        self.pathfinder = pathfinder
    }

    public func setPosition(point: CGPoint, direction: CGPoint, delayedAngle: Double, syncDirection: Bool, forceSyncPosition: Bool) {
        if self.qpsRunning {
            let data = VPSSyncData()
            data.timestamp = Int64(NSDate().timeIntervalSince1970 * 1000)
            data.positions = [PointWithOffset(position: point.asPointF, offset: direction.asPointF)]
            data.isValidSyncRotation = syncDirection
            data.forceSyncPosition = forceSyncPosition
            data.delayedAngle = Float(delayedAngle)
            vps?.onPositionSyncEvent(data: data)
        } else {
            self.start()
            let angle = syncDirection ? Double((atan2(direction.y, direction.x)) + 180.0) * -1.0 : Double.nan
            self.startNavigation(startPosition: point, startAngle: angle)
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
        let mapFaceData = MapFenceFactory.getMapFenceData(fromMapFence: data)
        let fencePolygons = mapFaceData?.polygons ?? []
        let height = mapFaceData?.height ?? 0
        let width = mapFaceData?.width ?? 0

         mapInformation = VPSMapInformation(fHeight: 1.1, mapHeight: Int32(height), fenceImage: nil, fencePolygons: fencePolygons, fenceScale: 50, zoneScale: nil, worldOffset: 2.1, mapWidth: Int32(width))
    }
}
