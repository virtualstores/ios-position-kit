//
// MapFenceData
// VSPositionKit
//
// Created by Hripsime on 2022-02-04
// Copyright Virtual Stores - 2022
//

import Foundation
import UIKit
import qps

public struct MapFenceData {
    private let flippedYAxis: Bool
    let width: Int
    let height: Int
    let widthInPixels: Double
    let heightInPixels: Double
    private var _polygons: [[PointF]]

    var polygons: [[PointF]] {
        get {
            return flippedYAxis ? _polygons.map { $0.map { PointF(x: Double($0.x), y: self.heightInPixels - Double($0.y)) }} : _polygons
        }
        set {
            self._polygons = newValue
        }
    }

    public init (width: Int, height: Int, widthInPixels: Double, heightInPixels: Double, polygons: [[PointF]], flippedYAxis: Bool = true) {
        self.width = width
        self.height = height
        self.widthInPixels = widthInPixels
        self.heightInPixels = heightInPixels
        self.flippedYAxis = flippedYAxis
        self._polygons = polygons
    }
}
