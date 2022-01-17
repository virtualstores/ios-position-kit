// FloorSensor.swift
// VSSensorInterpreter

// Created by: CJ on 2022-01-10
// Copyright (c) 2022 Virtual Stores

import Foundation
import VSFoundation

class FloorSensor: IAuxiliarySensor {

  weak var delegate: IFloorChangeDelegate

  init(delegate: IFloorChangeDelegate) {
    self.delegate = delegate
  }

  func input(data: AltitudeSensorData) {
    fatalError(ErrorMessage.methodOverride(fileName: #file, methodName: #function))
  }

  func start() {
    // do nothing
  }

  func stop() {
    // do nothing yet, maby cleanup
  }
}
