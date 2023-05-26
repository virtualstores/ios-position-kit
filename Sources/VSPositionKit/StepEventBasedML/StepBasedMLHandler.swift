// StepBasedMLHandler.swift
// VSPositionKit

// Created by: CJ on 2022-01-17
// Copyright (c) 2022 Virtual Stores

import Foundation
import VSFoundation

class StepBasedMLHandler {
  var mlAlogs: [IStepEventBasedML]
  var delegate: IStepEventBasedMLDelegate? = nil

  public init(mlAlogs: [IStepEventBasedML]) {
    self.mlAlogs = mlAlogs
  }
}

extension StepBasedMLHandler: IStepEventBasedML {
  func onStepEvent(success: Bool, magnitude: Double, direction: Double, duration: Int, timestamp: Int, deviceOrientation: DeviceOrientation? = nil) {
    mlAlogs.forEach {
      $0.onStepEvent(success: success, magnitude: magnitude, direction: direction, duration: duration, timestamp: timestamp, deviceOrientation: deviceOrientation)
    }
  }

  func onObservation(x: Double, y: Double, std: Double? = nil, offset: Double? = nil, observationType: ObservationType = .sync) {
    mlAlogs.forEach { $0.onObservation(x: x, y: y, std: std, offset: offset, observationType: observationType) }
  }

  func configure(delegate: IStepEventBasedMLDelegate, isPointOnNavMesh: @escaping ((Double, Double) -> Bool)) {
    self.delegate = delegate
    mlAlogs.forEach { $0.configure(delegate: self, isPointOnNavMesh: isPointOnNavMesh) }
  }

  func start() {
    mlAlogs.forEach { $0.start() }
  }

  func reset() {
    mlAlogs.forEach { $0.reset() }
  }

  func dispose() {
    mlAlogs.forEach { $0.dispose()}
    mlAlogs.removeAll()
    delegate = nil
  }

}

extension StepBasedMLHandler: IStepEventBasedMLDelegate {
  func onSpeedCoefficientSuggestion(alpha: Double?, beta: Double?) {
    delegate?.onSpeedCoefficientSuggestion(alpha: alpha, beta: beta)
  }

  func onHeadingCorrectionSuggestion(offset: Double?) {
    delegate?.onHeadingCorrectionSuggestion(offset: offset)
  }


}
