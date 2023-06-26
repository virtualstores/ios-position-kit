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
  var accessPoints: [AccessPoint] = []
  var ceilingHeightInMeters: KotlinDouble? { KotlinDouble(double: data.metersToNextFloor) }
  var id_: Int64 { data.rtls.id }
  var pixelsPerMeter: Double { data.rtls.pixelsPerMeter }
  var heightInMeters: Double { data.rtls.heightInMeters }
  var widthInMeters: Double { data.rtls.widthInMeters }
  var converter: ICoordinateConverter { data.converter }

  init(data: FloorData) {
    self.data = data
    mapFenceData = MapFenceFactory.getMapFenceData(fromMapFence: data.mapFence)
  }

  func save(identifier: String, image: UIImage?) {
    guard
      let pngData = image?.pngData(),
      let path = FileManager.default.urls(for: .applicationSupportDirectory, in: .userDomainMask).first?/*.appendingPathComponent("MapFence/")*/.appendingPathComponent(identifier)
    else { return }
    try? pngData.write(to: path, options: .atomic)
  }

  func delete(identifier: String) {
    guard
      let path = FileManager.default.urls(for: .applicationSupportDirectory, in: .userDomainMask).first?/*.appendingPathComponent("MapFence/")*/.appendingPathComponent(identifier)
    else { return }
    try? FileManager.default.removeItem(at: path)
  }
}

extension FloorLevelData: VPSFloorLevel {
  func dispose() {
    mapFenceData.reset()
  }

  func initiate() {
    save(identifier: "mapfence.png", image: mapFenceData.createImage())
    let validIdentifier = "ValidCoordinates.png"
    let invalidIdentifier = "InvalidCoordinates.png"
    if id_ == 74 {
      save(identifier: validIdentifier, image: mapFenceData.createImageCoordinates(points: MapFenceData.ValidCoordinates.icaBromma.map({ $0.fromMeterToPixel(converter: converter).flipY(converter: converter) }), color: .purple))
      save(identifier: invalidIdentifier, image: mapFenceData.createImageCoordinates(points: MapFenceData.InvalidCoordinates.icaBromma.map({ $0.fromMeterToPixel(converter: converter).flipY(converter: converter) }), color: .green))
      //mapFenceData.testMapFence(venue: .icaBromma, converter: converter)
    } else {
      delete(identifier: validIdentifier)
      delete(identifier: invalidIdentifier)
    }
  }

  func isValidCoordinate(x: Double, y: Double) -> Bool {
    mapFenceData.isValidCoordinate(point: CGPoint(x: x, y: y).fromMeterToPixel(converter: converter))
  }
}
