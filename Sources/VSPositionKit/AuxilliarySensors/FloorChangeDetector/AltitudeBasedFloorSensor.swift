// AltitudeBasedFloorSensor.swift
// 

// Created by: CJ on 2022-01-10
// Copyright (c) 2022 Virtual Stores

import Foundation
import VSFoundation

final class AltitudeBasedFloorSensor: FloorSensor {

  enum FloorState {
    case goingUp
    case goingDown
    case stable
  }

  private let floorDistance: Double
  let parameters = FloorSensorParameters()
  private var altitudeAdjustment = 0.0
  private let changeThreshold: Double
  private var currentState: FloorState = .stable

  var dataHistory: AverageVariance
  var compensationDataHistory: AverageVariance

  private var shortStabilityMeasure = 0.0
  private var longStabilityMeasure = 0.0
  private var lastCompensationUpdate = 0

  init(floorDistance: Double, delegate: IFloorChangeDelegate) {
    self.floorDistance = floorDistance
    self.changeThreshold = parameters.changeThresholdPrecentage * floorDistance
    self.dataHistory = AverageVariance(size: parameters.dataHistorySize)
    self.compensationDataHistory = AverageVariance(size: parameters.dataCompensationHistorySize)
    super.init(delegate: delegate)
  }

  override func input(data: AltitudeSensorData) {
    let altitudeData = data.altitude.data[0]
    let timestamp = data.timestampSensor
    let altitudeMeasurement = filterSensorData(data: altitudeData)
    let adjustedData = altitudeMeasurement - altitudeAdjustment
    adjustDataHistory(data: adjustedData)
    if currentState == .stable {
      checkForFloorChange(data: adjustedData)
      compensateDrift(data: adjustedData, timestamp: timestamp)
    } else {
      checkForStableFloor(data: adjustedData, timestamp: timestamp)
    }
  }

  func filterSensorData(data: Double) -> Double {
    return data
  }

  private func checkForFloorChange(data: Double) {
    if data > changeThreshold {
      currentState = .goingUp
    } else if data < -changeThreshold {
      currentState = .goingDown
    }
  }

  private func adjustDataHistory(data: Double) {
    shortStabilityMeasure = dataHistory.calculate(data: data).variance
    longStabilityMeasure = compensationDataHistory.calculate(data: data).variance
  }

  private func checkForStableFloor(data: Double, timestamp: Int) {
    if shortStabilityMeasure < parameters.stableVarianceThreshold {
      let difference: Int = Int(round(data/floorDistance))

      delegate.onDetectedFloorChange(floorDifference: difference, timestamp: timestamp)

      altitudeAdjustment += data
      currentState = .stable
    }
  }

  private func compensateDrift(data: Double, timestamp: Int) {
    if longStabilityMeasure < parameters.driftCompensationVarianceThreshold &&
        timestamp - lastCompensationUpdate > parameters.driftCompensationInterval {
      if abs(data) < parameters.driftCompensationAltitudeLimit {
        altitudeAdjustment += data
        lastCompensationUpdate = timestamp
      }
    }
  }
}
