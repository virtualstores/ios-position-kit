// IStepEventBasedML.swift
// VSPositionKit

// Created by: CJ on 2022-01-17
// Copyright (c) 2022 Virtual Stores

import Foundation
import VSFoundation
protocol IStepEventBasedML {

  func onStepEvent(
    success: Bool,
    magnitude: Double,
    direction: Double,
    duration: Int,
    timestamp: Int,
    deviceOrientation: DeviceOrientation?
  )

  func onObservation(x: Double, y: Double, std: Double?, offset: Double?, observationType: ObservationType)

  func start()

  func reset()

  func dispose()

  func configure(
    delegate: IStepEventBasedMLDelegate,
    isPointOnNavMesh: @escaping ((Double, Double) -> Bool)
  )


}
enum ObservationType {
  case sync
  case start
}
