//
// VPSMapInformation
// VSTT2
//
// Created by Hripsime on 2022-02-03.
// Copyright Virtual Stores - 2021

import Foundation
import vps
import UIKit

public final class VPSMapInformation: IQPSMapInformation {
    let fHeight: Double?
    let mapHeight: Int32
    let fenceImage: UIImage?
    let fencePolygons: [[PointF]]
    let fenceScale: Double
    let zoneScale: Double?
    let worldOffset: Double
    let mapWidth: Int32

    public init(fHeight: Double, mapHeight: Int32, fenceImage: UIImage?, fencePolygons: [[PointF]],
                fenceScale: Double, zoneScale: Double?, worldOffset: Double, mapWidth: Int32) {
        self.mapHeight = mapHeight
        self.fHeight = fHeight
        self.fenceImage = fenceImage
        self.fencePolygons = fencePolygons
        self.fenceScale = fenceScale
        self.zoneScale = zoneScale
        self.worldOffset = worldOffset
        self.mapWidth = mapWidth
    }

    public var floorHeight: KotlinDouble? { nil }

    public var height: Int32 { mapHeight }

    public var mapFenceImage: UIImage? { fenceImage }

    public var mapFencePolygons: [[PointF]] { fencePolygons }

    public var mapFenceScale: Double { fenceScale }

    public var offsetZoneScale: KotlinDouble? { nil }

    public var offsetZones: [IQPSOffsetZone] { [] }

    public var realWorldOffset: Double { worldOffset }

    public var width: Int32 { mapWidth }
}
