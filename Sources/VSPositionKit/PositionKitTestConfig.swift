// PositionKitTestConfig.swift
// VSPositionKit

// Created by: CJ on 2022-01-08
// Copyright (c) 2022 Virtual Stores

import Foundation
import VSFoundation
import TT2SensorFusion

struct PositionKitTestConfig: Config {
  init() {}
  func configure(_ injector: Injector) {
    injectManagers(injector)
  }

  private func injectManagers(_ injector: Injector) {
    injector.map(IBackgroundAccessManager.self) {
      FakeBackgroundAccessManager()
    }

    injector.map(ISensorManager.self) {
      FakeSensorManager()
    }
  }

  func deconfigure(_ injector: Injector) {
    // TODO:
  }

  func dispose() {
    // TODO:
  }
}
