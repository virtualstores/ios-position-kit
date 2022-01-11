// FloorSensorParameters.swift
// 

// Created by: CJ on 2022-01-11
// Copyright (c) 2022 Virtual Stores

import Foundation

struct FloorSensorParameters {
  let stableVarianceThreshold = 0.05
  let driftCompensationVarianceThreshold = 0.02
  let driftCompensationAltitudeLimit = 1.5
  let driftCompensationInterval = 20000
  let dataHistorySize = 5
  let dataCompensationHistorySize = 10
  let changeThresholdPrecentage = 0.67
}
