// AuxiliarySensorManager.swift
// VSSensorInterpreter

// Created by: CJ on 2022-01-10
// Copyright (c) 2022 Virtual Stores

import Foundation
final class AuxiliarySensorManager {
  public var auxSensors = [IAuxiliarySensor]()

  func start() {
    auxSensors.forEach { $0.start() }
  }

  func stop() {
    auxSensors.forEach { $0.stop() }
    auxSensors.removeAll()
  }

  func reset() {
    stop()
    loadAuxSensors()
    start()
  }
  func loadAuxSensors() {

  }
}
