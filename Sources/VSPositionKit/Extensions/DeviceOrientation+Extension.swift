//
// DeviceOrientation
// VSTT2
//
// Created by Hripsime on 2022-01-13.
// Copyright Virtual Stores - 2021

import Foundation
import VSFoundation
import qps

extension IQPSDeviceOrientation {
    var asDeviceOrientation: DeviceOrientation? {
        switch self {
        case .regular: return DeviceOrientation.regular
        case .swingSym: return DeviceOrientation.swingSym
        case .swingAntiSym: return DeviceOrientation.swingAntiSym
        case .trolley: return DeviceOrientation.trolley
        case .trouserPocket: return DeviceOrientation.trouserPocket
        case .jacketPocket: return DeviceOrientation.jacketPocket
        default: return nil
        }
    }
}
