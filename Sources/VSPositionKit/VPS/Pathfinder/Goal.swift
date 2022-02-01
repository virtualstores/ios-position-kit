//
//  Goal.swift
//  PositionKit
//
//  Created by Hripsime on 2022-01-31.
//

import Foundation
import CoreGraphics

public struct Goal {
    public let id: String
    public let position: CGPoint
    public let data: Any?
    public let type: GoalType
    
    public enum GoalType {
        case end, start, target
    }
    
    public init(id: String, position: CGPoint, data: Any?, type: GoalType) {
        self.id = id
        self.position = position
        self.data = data
        self.type = type
    }
}
