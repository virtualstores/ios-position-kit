//
// PositionKitConfig
// VSPositionKit
//
// Created by Hripsime on 2021-12-28
// Copyright Virtual Stores - 2021
//

import Foundation
import VSFoundation
import VSSensorFusion

public struct PositionKitConfig: Config {
  public init() {}
  public func configure(_ injector: Injector) {
    injectManagers(injector)
  }

  private func injectManagers(_ injector: Injector) {
      injector.map(IBackgroundAccessManager.self) {
          BackgroundAccessManager()
      }
      
      injector.map(ISensorManager.self) {
          SensorManager()
      }
      
      injector.map(VPSSensorManager.self) {
          VPSSensorManager(sensorManager: SensorManager())
      }
      
      injector.map(SensorManager.self) {
          SensorManager()
      }
  }
}
