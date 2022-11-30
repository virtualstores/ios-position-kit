//
// DeviceOrientation
// VSTT2
//
// Created by Hripsime on 2022-01-13.
// Copyright Virtual Stores - 2021

import Foundation
import VSFoundation
import VSPositionKit

extension IQPSDeviceOrientation {
    var asDeviceOrientation: DeviceOrientation? {
        switch self {
        case .regular: return .regular
        case .swingSym: return .swingSym
        case .swingAntiSym: return .swingAntiSym
        case .trolley: return .trolley
        case .trouserPocket: return .trouserPocket
        case .jacketPocket: return .jacketPocket
        default: return nil
        }
    }
}

extension IQPSPersonalMLAlgorithm {
  var asPersonalMLAlgorithm: PersonalMLAlgorithm? {
    switch self {
    case .coefficientOptimizer: return .coefficientOptimizer
    case .sac: return .sac
    case .heuristicNoScan: return .heuristicNoScan
    case .regresionMediator: return .regresionMediator
    case .teoScanMl: return .teoScanMl
    case .driftCompensator: return .driftCompensator
    case .compassAngleRectifier: return .compassAngleRectifier
    case .none: return PersonalMLAlgorithm.none
    default: return nil
    }
  }
}
