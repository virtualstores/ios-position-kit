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

struct PositionKitConfig: Config {
    func configure(_ injector: Injector) {
        injectManagers(injector)
    }

    private func injectManagers(_ injector: Injector) {
        injector.map(BackgroundAccessManager.self) {
            BackgroundAccessManager()
        }

        injector.map(SensorManager.self) {
            SensorManager()
        }
    }
}
