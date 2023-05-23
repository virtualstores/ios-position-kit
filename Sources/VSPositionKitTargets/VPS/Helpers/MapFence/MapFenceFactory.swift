//
// MapFenceData.swift
// MapFenceFactory
//
//  Created by Felix Andersson on 2019-10-29.
//

import Foundation
import VSFoundation

public class MapFenceFactory {
    static func getMapFenceData(fromJson json: Data) -> MapFenceData? {
        return MapFenceParser.getMapFenceData(fromJsonData: json)
    }

    static func getMapFenceData(fromJsonFile file: String) -> MapFenceData? {
        return MapFenceParser.getMapFenceData(fromJsonFile: file)
    }

    public static func getMapFenceData(fromMapFence mapFence: MapFence) -> MapFenceData {
        return MapFenceParser.getMapFenceData(fromMapFence: mapFence)
    }
}
