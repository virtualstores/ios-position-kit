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
import UIKit

final class VPSManager: VPSWrapper {
    var positionPublisher: CurrentValueSubject<PositionBundle?, VPSWrapperError> = .init(nil)
    var directionPublisher: CurrentValueSubject<VPSDirectionBundle?, VPSWrapperError> = .init(nil)
    var realWorldOffsetPublisher: CurrentValueSubject<VPSRealWorldOffsetUpdate?, VPSWrapperError> = .init(nil)
    var deviceOrientationPublisher: CurrentValueSubject<DeviceOrientation?, VPSWrapperError> = .init(nil)
    var illegalBehaviourPublisher: CurrentValueSubject<Void?, Never> = .init(nil)
    var badStepLengthPublisher: CurrentValueSubject<Void?, Never> = .init(nil)
    var sensorsInitiatedPublisher: CurrentValueSubject<Void?, Never> = .init(nil)
    var reducingSensorDataPublisher: CurrentValueSubject<Void?, Never> = .init(nil)
    var trolleyModePublisher: CurrentValueSubject<Int64?, Never> = .init(nil)
    var rescueModePublisher: CurrentValueSubject<Int64?, Never> = .init(nil)
    var changedFloorPublisher: CurrentValueSubject<Int?, Never> = .init(nil)
    var recordingPublisher: CurrentValueSubject<(identifier: String, data: String)?, Never> = .init(nil)
    var recordingPublisherPartial: CurrentValueSubject<(identifier: String, data: String)?, Never> = .init(nil)
    var recordingPublisherEnd: CurrentValueSubject<(identifier: String, data: String)?, Never> = .init(nil)
    var modifiedUserPublisher: CurrentValueSubject<String?, Never> = .init(nil)
    var stepEventDataPublisher: CurrentValueSubject<VSFoundation.StepEventData?, Never> = .init(nil)

    @Inject var sensor: VPSSensorManager

    public private (set) var pathfinder: BasePathfinder?
    public private(set) var qpsRunning = false

    /// vps properties
    private var qpsHandler: IQPSVPS?
    private var baseVPSHandler: BaseVPSHandler?
    private let qpsReplayInteractor: VPSReplayInteractor
    private var vps: IQPSVPS? { baseVPSHandler?.vps }
    private var mapInformation: VPSMapInformation?

    private var isRecording = false
    private var floorHeightDiffInMeters: Double?
    private var parameterPackage: ParameterPackage
    
    private var dataCommunicator = VPSDataCommunicator()

    private var cancellable = Set<AnyCancellable>()

    init(size: CGSize, floorHeightDiffInMeters: Double, trueNorthOffset: Double = 0.0, mapData: MapFence, pixelsPerMeter: Double, parameterPackage: ParameterPackage) {
        self.qpsReplayInteractor = VPSReplayInteractor()
        self.floorHeightDiffInMeters = floorHeightDiffInMeters
        self.parameterPackage = parameterPackage
        self.createMapInformation(with: mapData, pixelsPerMeter: pixelsPerMeter)
        self.bindPublishers()
    }

    deinit {
        cancellable.removeAll()
    }

    func bindPublishers() {
        qpsReplayInteractor.replayInteractorDataPublisher
            .compactMap { $0 }
            .sink { [weak self] in self?.recordingPublisher.send($0) }
            .store(in: &cancellable)
        qpsReplayInteractor.replayInteractorDataPublisherPartial
            .compactMap { $0 }
            .sink { [weak self] in self?.recordingPublisherPartial.send($0) }
            .store(in: &cancellable)
        qpsReplayInteractor.replayInteractorDataPublisherEnd
            .compactMap { $0 }
            .sink { [weak self] in self?.recordingPublisherEnd.send($0) }
            .store(in: &cancellable)

        DispatchQueue.main.async {
            self.dataCommunicator.dataCommunicatorSettings.modifiedUserPublisher
                .compactMap { $0 }
                .sink { [weak self] in self?.modifiedUserPublisher.send($0) }
                .store(in: &self.cancellable)
        }
    }

    func start() {
        sensor.serialDispatch.async { [self] in
            self.createBaseVPSHandler()

            guard let mapInfo = self.mapInformation, let handler = self.baseVPSHandler, !self.qpsRunning else { return }
            self.qpsRunning = true

            self.qpsHandler = LegacyQPSHandlerEmulator(
              rawSensorManager: sensor,
              interactor: handler,
              replayInteractor: qpsReplayInteractor,
              mapInformation: mapInfo,
              userSettings: dataCommunicator.dataCommunicatorSettings,
              parameterPackageEnum: parameterPackage.asParameterPackageEnum,
              mlAlgorithm: nil,
              mlData: nil
            )

            self.sensor.startAllSensors()
        }
    }

    func startRecording() {
        sensor.serialDispatch.async {
              if self.qpsRunning {
                self.vps?.startRecording()
                self.isRecording = true
            }
        }
    }

    func stop() {
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

    func stopRecording() {
        sensor.serialDispatch.async {
              if self.isRecording {
                self.vps?.stopRecording()
                self.isRecording = false
            }
        }
    }

    func startNavigation(startPosition: CGPoint, startAngle: Double, uncertainAngle: Bool) {
        start()
        sensor.serialDispatch.async {
            self.vps?.startNavigation(startPos: startPosition.asPointF, startAngle: startAngle, startSensors: true, uncertainAngle: uncertainAngle)
            //self.startRecording()
        }
    }
    
    func syncPosition(position: CGPoint, startAngle: Double, syncPosition: Bool, syncAngle: Bool, uncertainAngle: Bool) {
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

    func initPositionSync() {
        if qpsRunning {
            vps?.doInitPositionSyncEvent()
        }
    }

    func setPathfinder(pathfinder: BasePathfinder) {
        self.pathfinder = pathfinder
    }

    // why does this exist? is this not the same as sync?
    func setPosition(point: CGPoint, startAngle: Double, syncPosition: Bool, syncAngle: Bool, uncertainAngle: Bool) {
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

    func prepareAngle() { }

    private func createBaseVPSHandler() {
        self.baseVPSHandler = BaseVPSHandler(
            parameterPackageEnum: parameterPackage.asParameterPackageEnum,
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
            },
            onNewStepEvent: { [weak self] (stepEventData) in
              DispatchQueue.main.async { self?.stepEventDataPublisher.send(stepEventData.asStepEventData) }
            },
            onNewMlUpdate: { [weak self] (mlUpdate) in
              mlUpdate.job?.calculate(isPointOnNavMesh: { (x, y) in
                guard let isValid = self?.isValid(point: CGPoint(x: Double(truncating: x), y: Double(truncating: y))) else { return false }
                return KotlinBoolean(bool: isValid)
              })
            },
            onNewMlCalibration: { [weak self] (userAdjustments, mlAlgorithm) in

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
        createMapFenceImage()
    }

  var mapFenceBitmap: UIImage? {
    didSet {
      var points = [
        CGPoint(x: 37.262688, y: 56.00981),
        CGPoint(x: 56.203773, y: 104.69043),
        CGPoint(x: 65.47658, y: 31.241346),
        CGPoint(x: 15.374447, y: 13.501157),
        CGPoint(x: 64.946724, y: 58.820156),
        CGPoint(x: 93.39165, y: 21.598818)
      ]

      let icaH = CGPoint(x: 14.343776, y: 16.475367)
      let icaSE113 = CGPoint(x: 13.863465, y: 9.386356)
      let icaSE117 = CGPoint(x: 68.89559, y: 53.152657)
      let icaSE118 = CGPoint(x: 69.9245, y: 34.08943)

      var yPos = icaSE113.y
      points.removeAll()
      while yPos < icaH.y {
        points.append(CGPoint(x: icaSE113.x, y: yPos))
        yPos += 0.1
      }

      points.forEach { print(isValid(point: $0)) }
    }
  }
  func image(image: UIImage?) { }
  var mapFenceData: CFData?
  private func createMapFenceImage() {
    guard let info = mapInformation else { return }

    let width = Double(info.width)
    let height = Double(info.height)
    let polygons = info.mapFencePolygons.asCGpoints

    UIGraphicsBeginImageContextWithOptions(CGSize(width: width, height: height), false, 1.0)

    var fencePath: [UIBezierPath] = []
    polygons.forEach { (polygon) in
      let path = UIBezierPath()
      path.move(to: polygon.first!)
      polygon.forEach { path.addLine(to: $0) }
      path.close()
      fencePath.append(path)
    }

    UIColor.red.setFill()
    fencePath.forEach { $0.fill() }
    mapFenceBitmap = UIGraphicsGetImageFromCurrentImageContext()
    if let pngData = mapFenceBitmap?.pngData(), let path = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask).first?.appendingPathComponent("mapfence.png") {
        try? pngData.write(to: path, options: .atomic)
    }
    UIGraphicsEndImageContext()
  }

  private func createDataPointer(image: UIImage) -> CFData? {
    let dataProvider = mapFenceBitmap?.cgImage?.dataProvider
    return dataProvider?.data
  }

  func isValid(point: CGPoint) -> Bool {
    guard
      let info = mapInformation,
      let data = createDataPointer(image: mapFenceBitmap!)
    else { return false }
    if point.x.isNaN || point.y.isNaN { return false }
    let convertedPoint = point * info.mapFenceScale
    if (
      convertedPoint.x < 0 ||
      convertedPoint.y < 0 ||
      Int32(convertedPoint.x) >= info.width ||
      Int32(convertedPoint.y) >= info.height
    ) { return false }

//    print(getPixelColor(point: convertedPoint, pixelData: CFDataGetBytePtr(data)).asHex)
    return getPixelColor(point: convertedPoint, pixelData: CFDataGetBytePtr(data)) != .blue
  }

  private func getPixelColor(point: CGPoint, pixelData: UnsafePointer<UInt8>) -> UIColor {
    guard let info = mapInformation else { return .clear }
    let width = info.width
    let height = info.height
    var index = Int(width) * Int(point.y) + Int(point.x)
    if index <= 0 || index >= (width * height * 4) { return .clear }

    return UIColor(
      red: (Double(pixelData[4 * index]) / 255.0),
      green: (Double(pixelData[4 * index + 1]) / 255.0),
      blue: (Double(pixelData[4 * index + 2]) / 255.0),
      alpha: (Double(pixelData[4 * index + 3]) / 255.0)
    )
  }
}

extension CGPoint {
  static func * (lhs: CGPoint, rhs: Double) -> CGPoint {
    CGPoint(x: lhs.x * rhs, y: lhs.y * rhs)
  }
}
extension Array<Array<PointF>> {
  var asCGpoints: [[CGPoint]] {
    var polygons = [[CGPoint]]()
    self.forEach {
      var polygon = [CGPoint]()
      $0.forEach { polygon.append($0.asCGPoint) }
      polygons.append(polygon)
    }
    return polygons
  }
}

extension ParameterPackage {
    var asParameterPackageEnum: IQPSParameterPackageEnum {
        switch self {
        case .retail: return .retail
        case .client_1: return .jula
        case .client_2: return .ikea
        }
    }
}

extension VSPositionKit.StepEventData {
  var asStepEventData: VSFoundation.StepEventData {
    VSFoundation.StepEventData(
      direction: direction as? Double,
      directionCertainty: directionCertainty as? Double,
      duration: duration,
      relativeDirection: relativeDirection as? Double,
      speed: speed as? Double,
      stepCertainty: stepCertainty,
      success: success,
      timestamp: timestamp,
      type: type.asDeviceOrientation
    )
  }
}
