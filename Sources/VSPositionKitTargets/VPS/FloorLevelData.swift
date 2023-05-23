//
//  FloorLevelData.swift
//  
//
//  Created by Théodore Roos on 2023-05-22.
//

import Foundation
import VSFoundation
import vps

class FloorLevelData: VPSFloorLevel {
  let data: FloorData
  let mapFenceData: MapFenceData
  var accessPoints: [AccessPoint] = []
  var ceilingHeightInMeters: KotlinDouble? { KotlinDouble(double: data.metersToNextFloor) }
  var id_: Int64 { data.rtls.id }
  var pixelsPerMeter: Double { data.rtls.pixelsPerMeter }
  var heightInMeters: Double { data.rtls.heightInMeters }
  var widthInMeters: Double { data.rtls.widthInMeters }

  init(data: FloorData) {
    self.data = data
    mapFenceData = MapFenceFactory.getMapFenceData(fromMapFence: data.mapFence)
  }

  func dispose() {

  }

  func initiate() {
    
  }

  func isValidCoordinate(x: Double, y: Double) -> Bool {
    return false
  }
}
