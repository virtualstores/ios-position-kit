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

class PositionKitConfig: Config {
  var disposables = [Disposable]()

  init() {}
  func configure(_ injector: Injector) {
    injectManagers(injector)
  }

  private func injectManagers(_ injector: Injector) {
    injector.map(IBackgroundAccessManager.self) { [weak self] in
      let inject = BackgroundAccessManager()
      self?.disposables.append(inject)
      return inject
    }
    injector.map(ISensorManager.self) { [weak self] in
      let inject = SensorManager()
      self?.disposables.append(inject)
      return inject
    }
    injector.map(VPSSensorManager.self) { [weak self] in
      let inject = VPSSensorManager()
      self?.disposables.append(inject)
      return inject
    }
  }

  func deconfigure(_ injector: Injector) {
    injector.unmap(IBackgroundAccessManager.self)
    injector.unmap(ISensorManager.self)
    injector.unmap(VPSSensorManager.self)

    disposables.reversed().forEach { $0.dispose() }
    disposables.removeAll()
  }

  func dispose() {
    // TODO:
  }
}
