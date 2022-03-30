// File.swift
// 

// Created by: CJ on 2022-01-11
// Copyright (c) 2022 ___ORGANIZATIONNAME___

import Foundation
import XCTest
@testable import VSPositionKitTargets
import VSFoundation
import VSSensorFusion

final class altitude_floor_Tests: XCTestCase {
  class FloorTestDelegate: IFloorChangeDelegate {
    var count = 0
    func onDetectedFloorChange(floorDifference: Int, timestamp: Int) {
      count += 1
      print("FloorChange: \(floorDifference)")
    }
  }

  func test_floor_changes() throws {
    if let replayUrl = URL.ReplayData.altitudeFloorChangeData {
      if let replayData = ReplaySensorDataLoader().decodeFileFrom(url: replayUrl, fileVersion: .v5) {
        if let altitudeData = replayData.altitudeData {

          let delegate = FloorTestDelegate()
          let floor = AltitudeBasedFloorSensor(floorDistance: 3.4, delegate: delegate)

          altitudeData.forEach {
            floor.input(data: $0)
          }
        }
      }
    }
  }
}
