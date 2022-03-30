//
// VPSSyncData
// VSTT2
//
// Created by Hripsime on 2022-02-03.
// Copyright Virtual Stores - 2021

import Foundation
import VSPositionKit

public final class VPSSyncData: IQPSSyncData {
    public var position: PointF = PointF(x: Double(0.0), y: Double(0.0))
    public var angle: Float = 0
    public var timestamp: Int64 = 0
    public var syncPosition: Bool = false
    public var syncAngle: Bool = false
    public var uncertainAngle: Bool = false
}
