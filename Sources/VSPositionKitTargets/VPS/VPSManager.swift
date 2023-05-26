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
import UIKit

final class VPSManager: VPSWrapper {
  var recordingPublisher: CurrentValueSubject<(identifier: String, data: String, sessionId: String, lastFile: Bool)?, Never> = .init(nil)
  var outputSignalPublisher: CurrentValueSubject<VPSOutputSignal?, Never> = .init(nil)

  @Inject var sensor: VPSSensorManager

  public private (set) var pathfinder: BasePathfinder?
  public private(set) var qpsRunning = false

  /// vps properties
  private let recorder: VPSRecorder
  private var vps: VPS?
  private var floorLevelHandler: FloorLevelHandler
  private var mapInformation: VPSMapInformation?

  private var isRecording: Bool { recorder.isRecording }
  private var parameterPackage: ParameterPackage
  private var userController: IUserController

  private var dataCommunicator = VPSDataCommunicator()

  private var cancellable = Set<AnyCancellable>()

  init(size: CGSize, floorHeightDiffInMeters: Double, trueNorthOffset: Double = 0.0, rtls: RtlsOptions, mapData: MapFence, pixelsPerMeter: Double, parameterPackage: ParameterPackage, userController: IUserController, maxRecordingTimePerPartInMillis: Int64?, converter: ICoordinateConverter) {
    self.recorder = VPSRecorder(maxRecordingTimePerPartInMillis: maxRecordingTimePerPartInMillis)
    self.floorLevelHandler = FloorLevelHandler(floorLevels: [KotlinLong(value: rtls.id):FloorLevelData(data: FloorData(rtls: rtls, mapFence: mapData, metersToNextFloor: floorHeightDiffInMeters, converter: converter))], initialFloorLevelId: nil, debug: false)
    self.parameterPackage = parameterPackage
    self.userController = userController
    self.createMapInformation(with: mapData, pixelsPerMeter: pixelsPerMeter)
    self.bindPublishers()
  }

  deinit {
    cancellable.removeAll()
  }

  func bindPublishers() {
    sensor.dataPublisher
      .compactMap { $0 }
      .sink { [weak self] (data) in
        let signal = InputSignal.SensorData(rawSensorData: data)
        self?.recorder.record(inputSignal: signal)
        self?.vps?.onInputSignal(signal: signal)
      }.store(in: &cancellable)

    recorder.dataPublisher
      .compactMap { $0 }
      .sink { [weak self] in self?.recordingPublisher.send($0) }
      .store(in: &cancellable)
  }

  func start() {
    recorder.startRecording(sessionId: nil)
    sensor.serialDispatch.async { [self] in
      vps = VPS(
        smoothing: false,
        flipAcc: false,
        useMagnetometer: true,
        frequency: 100,
        frameSize: 200,
        velocityModel: VPSVelocityModel(model: nil),
        floorLevelHandler: floorLevelHandler,
        particleFilterParams: IosParticleFilterParams().default_,
        outputHandler: self,
        debugMode: true,
        enableSensorInterpreter: true,
        enableRotationHandler: true,
        useNaiveParticleFilter: false
      )
    }
  }

  func startRecording(sessionId: String?) {
    sensor.serialDispatch.async { [self] in
      recorder.startRecording(sessionId: sessionId)
    }
  }

  func stop() {
    let signal = InputSignal.Exit(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis)
    recorder.record(inputSignal: signal)
    sensor.serialDispatch.async { self.vps?.onInputSignal(signal: signal) }
    recorder.stopRecording()
  }

  func stopRecording() {
    sensor.serialDispatch.async { [self] in
      if isRecording {
        recorder.stopRecording()
      }
    }
  }

  func startNavigation(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool) {
    start()
    let signal = InputSignal.Start(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, positions: positions.map({ $0.asCoordinateF }), syncPosition: syncPosition, syncAngle: syncAngle, angle: Float(angle), uncertainAngle: uncertainAngle)
    recorder.record(inputSignal: signal)
    sensor.serialDispatch.async { self.vps?.onInputSignal(signal: signal) }
  }

  func syncPosition(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool) {
    let signal = InputSignal.SyncPosition(nanoTimestamp: .nanoTime, systemTimestamp: .currentTimeMillis, positions: positions.map({ $0.asCoordinateF }), syncPosition: syncPosition, syncAngle: syncAngle, angle: Float(angle), uncertainAngle: uncertainAngle)
    recorder.record(inputSignal: signal)
    sensor.serialDispatch.async { self.vps?.onInputSignal(signal: signal) }
  }

  func setPathfinder(pathfinder: BasePathfinder) {
    self.pathfinder = pathfinder
  }

  // why does this exist? is this not the same as sync?
  func setPosition(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool) {
    sensor.serialDispatch.async { [self] in
      if qpsRunning {
        self.syncPosition(positions: positions, syncPosition: syncPosition, syncAngle: syncAngle, angle: angle, uncertainAngle: uncertainAngle)
      } else {
        start()
        startNavigation(positions: positions, syncPosition: syncPosition, syncAngle: syncAngle, angle: angle, uncertainAngle: uncertainAngle)
      }
    }
  }

  private var startAngleCached: Double?
  func prepareAngle() {
    //guard let lastQuat = vps?.getLastRotation() else { return }

    //let quatUtils = QuaternionUtils()
    //let newQuat = quatUtils.multiplyQuaternion(q: lastQuat, p: quatUtils.quaternionInverse(q: quatUtils.quaternionExtractPitch(q: lastQuat)))

    //let array: VSPositionKit.KotlinFloatArray = KotlinFloatArray(size: 3)
    //array.set(index: 0, value: 0)
    //array.set(index: 1, value: 1)
    //array.set(index: 2, value: 0)

    //startAngleCached = VectorUtils().radiansToDegrees(angRad: Double(VectorUtilsKt.getRotatedAxisAngleOnPlane(rotationVector: newQuat, axis: array)))
  }

  func delayedAngle() -> Double {
    //guard let lastQuat = vps?.getLastRotation(), let cachedAngle = startAngleCached else { return 0.0 }

    //let quatUtils = QuaternionUtils()
    //let newQuat = quatUtils.multiplyQuaternion(q: lastQuat, p: quatUtils.quaternionInverse(q: quatUtils.quaternionExtractPitch(q: lastQuat)))

    //let array: VSPositionKit.KotlinFloatArray = KotlinFloatArray(size: 3)
    //array.set(index: 0, value: 0)
    //array.set(index: 1, value: 1)
    //array.set(index: 2, value: 0)

    //startAngleCached = nil
    //return VectorUtils().radiansToDegrees(angRad: Double(VectorUtilsKt.getRotatedAxisAngleOnPlane(rotationVector: newQuat, axis: array))) - cachedAngle
    return 0.0
  }

  private func createMapInformation(with data: MapFence, pixelsPerMeter: Double) {
    let mapFenceData = MapFenceFactory.getMapFenceData(fromMapFence: data)

    let fencePolygons = mapFenceData.polygons
    let height = mapFenceData.height
    let width = Int32(mapFenceData.width - (mapFenceData.width % 16))

    //TODO: create offsetZones
    //let offsetZones = [OffsetZone(offsetRadians: 1.1, polygons: mapFenceData.polygons.first ?? [])]
    //mapInformation = VPSMapInformation(width: width, height: Int32(height), mapFenceImage: nil, mapFencePolygons: fencePolygons, mapFenceScale: pixelsPerMeter, offsetZones: [], realWorldOffset: 0.0, floorHeight: KotlinDouble(double: floorHeightDiffInMeters ?? 3.0))
    createMapFenceImage()
  }

  var mapFenceBitmap: UIImage? /*{
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
  }*/
  var mapFenceDataPointer: CFData?

  private func createMapFenceImage() {
    guard let info = mapInformation else { return }

    let width = Double(info.width)
    let height = Double(info.height)
    let polygons = convertPointFsAsCGPoints(array: [])

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
    if let bitmap = mapFenceBitmap {
      mapFenceDataPointer = createDataPointer(image: bitmap)
    }
    //save(image: mapFenceBitmap)
    UIGraphicsEndImageContext()
  }

  func save(image: UIImage?) {
    guard
      let pngData = mapFenceBitmap?.pngData(),
      let path = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask).first?.appendingPathComponent("mapfence.png")
    else { return }
    try? pngData.write(to: path, options: .atomic)
  }

  private func createDataPointer(image: UIImage) -> CFData? {
    let dataProvider = mapFenceBitmap?.cgImage?.dataProvider
    return dataProvider?.data
  }

  func isValid(point: CGPoint) -> Bool {
    guard let info = mapInformation, let data = mapFenceDataPointer else { return false }
    if point.x.isNaN || point.y.isNaN { return false }
    let convertedPoint = point * info.mapFenceScale // meterToPixelConversion
    if (
      convertedPoint.x < 0 ||
      convertedPoint.y < 0 ||
      Int32(convertedPoint.x) >= info.width ||
      Int32(convertedPoint.y) >= info.height
    ) { return false }

    let pixelColor = getPixelColor(point: convertedPoint, pixelData: CFDataGetBytePtr(data))
    //print(pixelColor.asHex)
    return pixelColor != .blue
  }

  private func getPixelColor(point: CGPoint, pixelData: UnsafePointer<UInt8>) -> UIColor {
    guard let info = mapInformation else { return .clear }
    let width = info.width
    let height = info.height
    let index = Int(width) * Int(point.y) + Int(point.x)
    if index <= 0 || index >= (width * height * 4) { return .clear }

    return UIColor(
      red: (Double(pixelData[4 * index]) / 255.0),
      green: (Double(pixelData[4 * index + 1]) / 255.0),
      blue: (Double(pixelData[4 * index + 2]) / 255.0),
      alpha: (Double(pixelData[4 * index + 3]) / 255.0)
    )
  }
}

extension VPSManager {
  func convertPointFsAsCGPoints(array: [[CoordinateF]]) -> [[CGPoint]] {
    var polygons = [[CGPoint]]()
    array.forEach {
      var polygon = [CGPoint]()
      $0.forEach { polygon.append($0.asCGPoint) }
      polygons.append(polygon)
    }
    return polygons
  }
}

extension VPSManager: VPSOutputHandler {
  func onOutputSignal(outputSignal: OutputSignal) {
    if let signal = outputSignal as? OutputSignal.Position {
      let position = VPSOutputSignal.Position(
        position: signal.position.asCGPoint,
        std: Double(signal.std),
        status: signal.status.asStatus
      )
      outputSignalPublisher.send(.position(position: position))
    } else if let signal = outputSignal as? OutputSignal.Rotation {
      let heading = DoubleExtKt.radiansToDegrees(Double(signal.heading))
      //print("Rotation", heading)
      outputSignalPublisher.send(.rotation(heading: Double(heading - 65)))
    }
  }
}

extension OutputSignal.PositionStatus {
  var asStatus: VPSOutputSignal.Position.Status {
    switch self {
    case .confident: return .confident
    case .uncertain: return .uncertain
    default: return .uncertain
    }
  }
}

extension Dictionary {
  var asKotlinDictionary: [String: KotlinDouble]? {
    var dict: [String: KotlinDouble] = [:]
    forEach {
      guard let key = $0.key as? String, let value = $0.value as? Double else { return }
      dict[key] = KotlinDouble(value: value)
    }
    return dict
  }
}

extension KotlinFloatArray {
  var asDouble: [Double] {
    var arr: [Double] = []
    for i in 0...size - 1 { arr.append(Double(get(index: i))) }
    return arr
  }
}
