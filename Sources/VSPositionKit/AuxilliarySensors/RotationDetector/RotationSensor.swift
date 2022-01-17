// RotationSensor.swift
// 

// Created by: CJ on 2022-01-10
// Copyright (c) 2022 Virtual Stores

import Foundation
import VSFoundation

class RotationSensor: IAuxiliarySensor {

  private weak var delegate: IRotationSensorDelegate
  private var currentData: MotionSensorData?
  private var yAxisDirection = 0.0
  private var regularDirection = 0.0
  private var swingDirection = 0.0
  private var trolleyDirection = 0.0
  private var pocketDirection = 0.0

  public init(delegate: IRotationSensorDelegate) {
    self.delegate = delegate
  }

  func getRotaion() -> Double {
    return yAxisDirection
  }

  func input(motionSensorData: MotionSensorData) {
    onNew(data: motionSensorData)
  }

  private func onNew(data: MotionSensorData) {
    currentData = data
    let rotationVector = data.rotation.data

    let angleYAxis = VectorUtils.getRotatedAxisAngleOnPlane(rotationVector: rotationVector, axis: .yAxis)
    if !angleYAxis.isNaN {
      yAxisDirection = angleYAxis
    }

    let angleRegular = VectorUtils.getRotatedAxisAngleOnPlane(rotationVector: rotationVector, axis: .yAxis)
    if !angleRegular.isNaN {
      regularDirection = angleRegular
    }

    let angleSwing = VectorUtils.getRotatedAxisAngleOnPlane(rotationVector: rotationVector, axis: .swingAxis)
    if !angleSwing.isNaN {
      swingDirection = angleSwing
    }

    let anglePocket = VectorUtils.getRotatedAxisAngleOnPlane(rotationVector: rotationVector, axis: .pocketAxis)
    if !anglePocket.isNaN {
      pocketDirection = anglePocket
    }

    updateDirection(timestamp: data.timestampSensor)
  }

  private func updateDirection(timestamp: Int) {
    delegate.onNew(rotation: RotationBundle(
      direction: regularDirection, timestamp: timestamp
    ))
  }

  func start() {
    reset()
  }

  func stop() {
    reset()
  }

  private func reset() {
    currentData = nil
    yAxisDirection = 0.0
    regularDirection = 0.0
    swingDirection = 0.0
    trolleyDirection = 0.0
    pocketDirection = 0.0
  }
}
