//
// MapFenceData
// VSPositionKit
//
// Created by Hripsime on 2022-02-04
// Copyright Virtual Stores - 2022
//

import Foundation
import UIKit
import CoreGraphics
import VSFoundation
import vps

public class MapFenceData {
    private let flippedYAxis: Bool
    let width: Int
    let height: Int
    let widthInPixels: Double
    let heightInPixels: Double
    private var _polygons: [[CGPoint]]

  var context: CGContext?
  var pointer: UnsafeMutablePointer<UInt32>?

    var polygons: [[CGPoint]] {
        get { return flippedYAxis ? _polygons.map { $0.map { CGPoint(x: Double($0.x), y: heightInPixels - Double($0.y)) }} : _polygons }
        set { self._polygons = newValue }
    }

    init(width: Int, height: Int, widthInPixels: Double, heightInPixels: Double, polygons: [[CGPoint]], flippedYAxis: Bool = false) {
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
          for i in 0..<polygon.count - 1 {
            if let point = linesCross(start1: p1, end1: p2, start2: polygon[i], end2: polygon[i + 1]) {
              points.append(point)
              break
            }
          }
        }
        return points.count < 1
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

  func reset() {
    context = nil
    pointer = nil
  }

  func createImage() -> UIImage? {
    guard
      let context = CGContext(
        data: nil,
        width: Int(widthInPixels),
        height: Int(heightInPixels),
        bitsPerComponent: 8,
        bytesPerRow: Int(widthInPixels) * 4,
        space: CGColorSpaceCreateDeviceRGB(),
        bitmapInfo: CGBitmapInfo.byteOrder32Little.rawValue | CGImageAlphaInfo.premultipliedFirst.rawValue
      )
    else { return nil }
    context.setFillColor(UIColor.red.cgColor)
    context.setStrokeColor(UIColor.red.cgColor)
    polygons.forEach { (polygon) in

      context.move(to: polygon.first!)
      polygon.enumerated().forEach { if $0.offset == 0 { return }; context.addLine(to: $0.element) }
      context.closePath()
      context.drawPath(using: .fillStroke)
    }
    createPixelBuffer(context: context)
    guard let image = context.makeImage().flatMap({ UIImage(cgImage: $0) }) else { return nil }
    return image
  }

  func createImageCoordinates(points: [CGPoint], color: UIColor) -> UIImage? {
    guard
      let context = CGContext(
        data: nil,
        width: Int(widthInPixels),
        height: Int(heightInPixels),
        bitsPerComponent: 8,
        bytesPerRow: Int(widthInPixels) * 4,
        space: CGColorSpaceCreateDeviceRGB(),
        bitmapInfo: CGBitmapInfo.byteOrder32Little.rawValue | CGImageAlphaInfo.premultipliedFirst.rawValue
      ),
      let point = points.first
    else { return nil }
    context.setLineWidth(20)
    context.setStrokeColor(color.cgColor)
    context.move(to: point)
    points.enumerated().forEach { if $0.offset == 0 { return }; context.addLine(to: $0.element) }
    context.closePath()
    context.drawPath(using: .stroke)
    guard let image = context.makeImage().flatMap({ UIImage(cgImage: $0) }) else { return nil }
    return image
  }

  func createPixelBuffer(context: CGContext) {
    guard let pixelBuffer = context.data else { fatalError() }
    self.context = context // Pointer gets garbage collected if this is not saved in memory
    pointer = pixelBuffer.bindMemory(to: UInt32.self, capacity: Int(widthInPixels * heightInPixels))
  }

  func isValidCoordinate(point: CGPoint) -> Bool {
    if (point.x < 0 ||
        point.y < 0 ||
        Int32(point.x) >= Int32(widthInPixels) ||
        Int32(point.y) >= Int32(heightInPixels)
    ) { /*print("Out of bounds");*/ return false }
    guard context != nil, let pixel = pointer?[Int(point.y) * Int(widthInPixels) + Int(point.x)] else { return false }
    return getColor(pixel: pixel) != .red//UIColor(red: 0.0, green: 0.0, blue: 0.0, alpha: 1.0)
  }

  func getColor(pixel: UInt32) -> UIColor {
    UIColor(
      red: CGFloat(red(for: pixel)) / 255,
      green: CGFloat(green(for: pixel)) / 255,
      blue: CGFloat(blue(for: pixel)) / 255,
      alpha: CGFloat(alpha(for: pixel)) / 255
    )
  }

  private func alpha(for pixelData: UInt32) -> UInt8 {
    UInt8((pixelData >> 24) & 255)
  }

  private func red(for pixelData: UInt32) -> UInt8 {
    UInt8((pixelData >> 16) & 255)
  }

  private func green(for pixelData: UInt32) -> UInt8 {
    UInt8((pixelData >> 8) & 255)
  }

  private func blue(for pixelData: UInt32) -> UInt8 {
    UInt8((pixelData >> 0) & 255)
  }
}

extension MapFenceData {
  enum ValidCoordinates {
    static let icaBromma = [CGPoint(x: 37.262688, y: 56.00981), CGPoint(x: 56.203773, y: 104.69043), CGPoint(x: 65.47658, y: 31.241346)]
  }

  enum InvalidCoordinates {
    static let icaBromma = [CGPoint(x: 15.374447, y: 13.501157), CGPoint(x: 64.946724, y: 58.820156), CGPoint(x: 93.39165, y: 21.598818)]
  }

  enum Venue {
    case icaBromma
  }

  func testMapFence(venue: Venue, converter: ICoordinateConverter) {
    switch venue {
    case .icaBromma:
      ValidCoordinates
        .icaBromma
        .map { $0.fromMeterToPixel(converter: converter) }
        .forEach { print("ValidCoordinate", isValidCoordinate(point: $0)) }
      InvalidCoordinates
        .icaBromma
        .map { $0.fromMeterToPixel(converter: converter) }
        .forEach { print("ValidCoordinate", isValidCoordinate(point: $0)) }
    }
  }
}
