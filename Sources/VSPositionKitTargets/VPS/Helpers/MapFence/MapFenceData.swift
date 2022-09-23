//
// MapFenceData
// VSPositionKit
//
// Created by Hripsime on 2022-02-04
// Copyright Virtual Stores - 2022
//

import Foundation
import UIKit
import VSPositionKit

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

    init(width: Int, height: Int, widthInPixels: Double, heightInPixels: Double, polygons: [[PointF]], flippedYAxis: Bool = true) {
        self.width = width
        self.height = height
        self.widthInPixels = widthInPixels
        self.heightInPixels = heightInPixels
        self.flippedYAxis = flippedYAxis
        self._polygons = polygons
    }

    public func isRightAisle(p1: CGPoint, p2: CGPoint) -> Bool {
        var points: [CGPoint] = []
        polygons.forEach { polygon in
//          print("polygon", polygon.count, polygon)
          for i in 0..<polygon.count - 1 {
            if let point = linesCross(start1: p1, end1: p2, start2: polygon[i].asCGPoint, end2: polygon[i + 1].asCGPoint) {
              print(p1, p2, polygon[i].asCGPoint, polygon[i + 1].asCGPoint)
              points.append(point)
              break
            }
          }
        }
        print("rightAisle", points.count < 2, points)
        return points.count < 2
    }

    func linesCross(start1: CGPoint, end1: CGPoint, start2: CGPoint, end2: CGPoint) -> CGPoint? {
        // calculate the differences between the start and end X/Y positions for each of our points
        let delta1x = end1.x - start1.x
        let delta1y = end1.y - start1.y
        let delta2x = end2.x - start2.x
        let delta2y = end2.y - start2.y

        // create a 2D matrix from our vectors and calculate the determinant
        let determinant = delta1x * delta2y - delta2x * delta1y

        if abs(determinant) < 0.0001 {
            // if the determinant is effectively zero then the lines are parallel/colinear
            return nil
        }

        // if the coefficients both lie between 0 and 1 then we have an intersection
        let ab = ((start1.y - start2.y) * delta2x - (start1.x - start2.x) * delta2y) / determinant

        if ab > 0 && ab < 1 {
            let cd = ((start1.y - start2.y) * delta1x - (start1.x - start2.x) * delta1y) / determinant

            if cd > 0 && cd < 1 {
                // lines cross – figure out exactly where and return it
                let intersectX = start1.x + ab * delta1x
                let intersectY = start1.y + ab * delta1y
                return CGPoint(x: intersectX, y: intersectY)
            }
        }

        // lines don't cross
        return nil
    }
}
