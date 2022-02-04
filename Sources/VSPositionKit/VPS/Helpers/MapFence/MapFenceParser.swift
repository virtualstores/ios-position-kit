//
// MapFenceParser
// VSPositionKit
//
// Created by Hripsime on 2022-02-04
// Copyright Virtual Stores - 2022
//

import UIKit
import CoreFoundation
import VSFoundation
import vps

private typealias Polygon = [[CGPoint]]
private typealias PolygonJson = [String: AnyObject]

internal class MapFenceParser: NSObject {
    internal static func getMapFenceData(fromJsonFile: String) -> MapFenceData? {
        let filePath = Bundle.main.path(forResource: fromJsonFile, ofType: "json")!
        let data = try! Data(referencing: NSData(contentsOfFile: filePath))
        return getMapFenceData(fromJsonData: data)
    }

    internal static func getMapFenceData(fromJsonData data: Data) -> MapFenceData? {
        do {
            guard let json = try JSONSerialization.jsonObject(with: data, options: JSONSerialization.ReadingOptions.allowFragments) as? PolygonJson, let polygons = json["coordinates"] as? [[AnyObject]], let properties = json["properties"] as? NSDictionary, let width = properties["width"] as? Double, let height = properties["height"] as? Double else {
                return nil
            }

            var output: [[PointF]] = []

            for object in polygons {
                let polygonPoints = object[0] as! [[CGFloat]]
                let points: [PointF] = polygonPoints.map { (coords) -> PointF in
                    return PointF(x: Double(coords[0]), y: Double(coords[1]))
                }
                output.append(points)
            }
            return MapFenceData(width: Int(width), height: Int(height), widthInPixels: width, heightInPixels: height, polygons: output)
        } catch {
            print(error.localizedDescription)
            return nil
        }
    }

    static func getMapFenceData(fromMapFence mapFence: MapFence) -> MapFenceData? {
        var output: [[PointF]] = []

        for object in mapFence.coordinates {
            let polygonPoints = object[0]
            let points: [PointF] = polygonPoints.map { (coords) -> PointF in
                return PointF(x: coords[0], y: coords[1])
            }
            output.append(points)
        }

        return MapFenceData(width: Int(mapFence.properties.width), height: Int(mapFence.properties.height), widthInPixels: mapFence.properties.width, heightInPixels: mapFence.properties.height, polygons: output)
    }
}

