//
//  FloorLevelData.swift
//  
//
//  Created by Théodore Roos on 2023-05-22.
//

import Foundation
import VSFoundation
import UIKit
import vps

class FloorLevelData {
  let data: FloorData
  let mapFenceData: MapFenceData
  var converter: ICoordinateConverter { data.converter }
  let floatConverter: FloatCoordinateConverter
  var accessPoints: [AccessPoint] = []

  init(data: FloorData) {
    self.data = data
    mapFenceData = MapFenceFactory.getMapFenceData(fromMapFence: data.mapFence)
    floatConverter = data.converter.asFloatConverter
  }

  var createFilePath: URL? {
    FileManager.default.urls(for: .applicationSupportDirectory, in: .userDomainMask).first?
      .appendingPathComponent("MapFence")
      .appendingPathComponent("\(id_)")
  }

  func save(identifier: String, image: UIImage?) {
    guard let pngData = image?.pngData(), let path = createFilePath else { return }
    try? FileManager.default.createDirectory(at: path, withIntermediateDirectories: true)
    try? pngData.write(to: path.appendingPathComponent(identifier), options: .atomic)
  }

  func delete(identifier: String) {
    guard let path = createFilePath else { return }
    try? FileManager.default.removeItem(at: path)
  }

  private var _map2D: [Float: KotlinArray<KotlinFloatArray>] = [:]

  private func createMap2D(resolution: Double) -> KotlinArray<KotlinFloatArray> {
    let newWidthInPixels = Int(widthInMeters * resolution)
    let newHeightInPixels = Int(heightInMeters * resolution)

    var map2D = [[Float]](repeating: [Float](repeating: 0.0, count: newHeightInPixels), count: newWidthInPixels)

    for x in 0..<newWidthInPixels {
      for y in 0..<newHeightInPixels {
        map2D[x][y] = isValidCoordinate2DMap(
          x: (x.asDouble + 0.5) / resolution,
          y: (y.asDouble + 0.5) / resolution
        )
      }
    }

    return KotlinArray(size: newWidthInPixels.asInt32) { (i) in
      KotlinFloatArray(size: newHeightInPixels.asInt32) { (j) in
        KotlinFloat(float: map2D[i.asInt][j.asInt])
      }
    }
  }

  private func isValidCoordinate2DMap(x: Double, y: Double) -> Float {
    isValidCoordinate(x: x, y: y) ? 0 : 1
  }
}

extension FloorLevelData: VPSFloorLevel {
  var swapLocations: [vps.SwapLocation] {[]}

  var zones: [vps.Zone] { [] }

  var ceilingHeightInMeters: KotlinDouble? { .init(double: data.metersToNextFloor) }
  var id_: Int64 { data.rtls.id }
  var pixelsPerMeter: Double { data.rtls.pixelsPerMeter }
  var heightInMeters: Double { data.rtls.heightInMeters }
  var widthInMeters: Double { data.rtls.widthInMeters }
  var geomagneticDeclination: KotlinFloat? { nil }
  var northOffset: KotlinFloat? { data.rtls.north?.asKotlinFloat }

  func dispose() {
    mapFenceData.reset()
    _map2D.removeAll()
  }

  func initiate() {
    let image = mapFenceData.createImage()
    guard let venue = MapFenceData.Venue(rawValue: id_) else { return }
    save(identifier: "MapFence.png", image: image)
    let images = mapFenceData.createImageCoordinates(venue: venue, converter: data.converter)
    save(identifier: "ValidCoordinates.png", image: images.valid)
    save(identifier: "InvalidCoordinates.png", image: images.invalid)
    //mapFenceData.testMapFence(venue: venue, converter: data.converter)
  }

  func get2DArrayMap(resolution: Float) -> KotlinArray<KotlinFloatArray> {
    if let map = _map2D[resolution] {
      return map
    } else {
      let map = createMap2D(resolution: resolution.asDouble)
      _map2D[resolution] = map
      return map
    }
  }

  func isValidCoordinate(x: Float, y_ y: Float) -> Bool {
    mapFenceData.isValidCoordinate(
      x: Int(floatConverter.convertFromMetersToPixels(input: x)),
      y: Int(floatConverter.convertFromMetersToPixels(input: y))
    )
  }

  func isValidCoordinate(x: Double, y: Double) -> Bool {
    mapFenceData.isValidCoordinate(
      x: Int(converter.convertFromMetersToPixels(input: x)),
      y: Int(converter.convertFromMetersToPixels(input: y))
    )
  }
}

extension ICoordinateConverter {
  var asFloatConverter: FloatCoordinateConverter {
    FloatCoordinateConverter(heightInPixels: heightInPixels.asFloat, widthInPixels: widthInPixels.asFloat, pixelPerMeter: pixelPerMeter.asFloat, pixelPerLatitude: 1000.0)
  }
}

class FloatCoordinateConverter {
  let heightInPixels: Float
  let widthInPixels: Float
  let pixelPerMeter: Float
  private let pixelPerLatitude: Float
  private let realMetersPerLatitude: Float = 111320

  init(heightInPixels: Float, widthInPixels: Float, pixelPerMeter: Float, pixelPerLatitude: Float) {
    self.heightInPixels = heightInPixels
    self.widthInPixels = widthInPixels
    self.pixelPerMeter = pixelPerMeter
    self.pixelPerLatitude = pixelPerLatitude
  }

  private var factor: Float { 1000 / pixelPerMeter }

  func convertFromPixelsToMapCoordinate(input: Float) -> Float {
    input / pixelPerLatitude
  }

  func convertFromMapCoordinateToPixels(input: Float) -> Float {
    input * pixelPerLatitude
  }

  func convertFromPixelsToMeters(input: Float) -> Float {
    input / pixelPerMeter
  }

  func convertFromMetersToPixels(input: Float) -> Float {
    input * pixelPerMeter
  }

  func convertFromMetersToMapCoordinate(input: Float) -> Float {
    input / factor
  }

  func convertFromMapCoordinateToMeters(input: Float) -> Float {
    input * factor
  }

  func convertFromMetersToMapMeters(input: Float) -> Float {
    convertFromMetersToMapCoordinate(input: input) * realMetersPerLatitude
  }
}
