// BasicAlgo.swift
// VSPositionKit

// Created by: CJ on 2022-01-17
// Copyright (c) 2022 VirtualStores

import Foundation
import VSFoundation

class BasicAlgo: IStepEventBasedML {

  private var isPointOnNavMesh: ((Double, Double) -> Bool)? = nil
  private var delegate: IStepEventBasedMLDelegate? = nil
  private var started = false

  public init() {}

  func start() {
    guard !started else {
      fatalError("\(ErrorMessage.functionName(fileName: #file, methodName: #function)): already started")
    }
    started = true
  }

  func reset() {
    started = false
  }

  func dispose() {
    self.delegate = nil
    self.isPointOnNavMesh = nil
  }

  func configure(delegate: IStepEventBasedMLDelegate, isPointOnNavMesh: @escaping ((Double, Double) -> Bool)) {
    self.delegate = delegate
    self.isPointOnNavMesh = isPointOnNavMesh
  }

  func onStepEvent(success: Bool, magnitude: Double, direction: Double, duration: Int, timestamp: Int, deviceOrientation: DeviceOrientation?) {
    fatalError(ErrorMessage.methodOverride(fileName: #file, methodName: #function))
  }

  func onObservation(x: Double, y: Double, std: Double?, offset: Double?, observationType: ObservationType) {
    fatalError(ErrorMessage.methodOverride(fileName: #file, methodName: #function))
  }

}
