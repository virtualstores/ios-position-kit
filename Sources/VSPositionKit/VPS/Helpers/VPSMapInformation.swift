//
// VPSMapInformation
// VSTT2
//
// Created by Hripsime on 2022-02-03.
// Copyright Virtual Stores - 2021

import Foundation
import qps
import UIKit

public class VPSMapInformation: IQPSMapInformation {
    public let width: Int32
    public let height: Int32
    public let mapFenceImage: UIImage?
    public let mapFencePolygons: [[PointF]]
    public let mapFenceScale: Double
    public let offsetZones: [IQPSOffsetZone]
    public let offsetZoneScale: KotlinDouble?
    public let realWorldOffset: Double
    public let floorHeight: KotlinDouble?
    
    public init(width: Int32, height: Int32, mapFenceImage: UIImage? = nil, mapFencePolygons: [[PointF]]?,
                mapFenceScale: Double = 50.0, offsetZones: [IQPSOffsetZone], offsetZoneScale: Double? = 1000.0,
                realWorldOffset: Double = 0.0, floorHeight: KotlinDouble?) {
        self.width = width
        self.height = height
        self.mapFenceImage = mapFenceImage
        self.mapFencePolygons = mapFencePolygons ?? [[]]
        self.mapFenceScale = mapFenceScale
        self.offsetZones = offsetZones
        self.offsetZoneScale = KotlinDouble.init(double: offsetZoneScale!)
        self.realWorldOffset = realWorldOffset
        self.floorHeight = floorHeight
    }
}
