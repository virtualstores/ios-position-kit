//
// VPSSyncData
// VSTT2
//
// Created by Hripsime on 2022-02-03.
// Copyright Virtual Stores - 2021

import Foundation
import vps

public final class VPSSyncData: IQPSSyncData {
    public var forceSyncPosition: Bool = false
    public var isValidSyncRotation: Bool = false
    public var positions: [PointWithOffset] = []
    public var timestamp: Int64 = 0
    public var delayedAngle: Float = 0
}
