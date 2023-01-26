//
// VPS+Extension
// VSTT2
//
// Created by Hripsime on 2022-01-31.
// Copyright Virtual Stores - 2021

import Foundation
import CoreGraphics
import VSFoundation
import VSPositionKit

// MARK: - Extensions for VPS
extension CGPoint {
    var asPointF: PointF { PointF(x: Double(x), y: Double(y)) }

    static func * (lhs: CGPoint, rhs: Double) -> CGPoint {
        CGPoint(x: lhs.x * rhs, y: lhs.y * rhs)
    }
}

extension PointF {
    var asCGPoint: CGPoint { CGPoint(x: Double(x), y: Double(y)) }
}

extension Goal {
    var asVPSGoal: IPathfinderGoal {
        BasePathfinderGoal<AnyObject>.init(id: self.id, position: self.position.asPointF, data: self.data as AnyObject?, type: self.type.asVPSGoalType)
    }
}

extension IPathfinderGoal {
    var asGoal: Goal {
        Goal(id: self.id_, position: self.position.asCGPoint, data: self.data, type: self.type.asGoalType, floorLevelId: 0)
    }
}

extension Goal.GoalType {
    var asVPSGoalType: IPathfinderGoalType {
        switch self {
        case .start: return IPathfinderGoalType.start
        case .target: return IPathfinderGoalType.target
        case .end: return IPathfinderGoalType.end
        }
    }
}

extension IPathfinderGoalType {
    var asGoalType: Goal.GoalType {
        switch self {
        case .start: return Goal.GoalType.start
        case .target: return Goal.GoalType.target
        case .end: return Goal.GoalType.end
        default: fatalError("Failed to parse IPathfinderGoalType in VPSPathfinderAdapter")
        }
    }
}

extension IPathfinderPath {
    var asPath: Path {
        Path(head: head.map { $0.asCGPoint }, body: body.flatMap({ $0 }).map { $0.asCGPoint }, tail: tail.map { $0.asCGPoint })
    }
}

extension PositionBundle {
    var asNavBundle: NavBundle {
        let timestampLocal = Int64(Date().currentTimeMillis)
        return NavBundle(position: self.position.asPointF, timestamp: timestampLocal, std: KotlinFloat(float: Float(self.std!)))
    }
}

extension KotlinFloat {
    var asDouble: Double {
        Double(truncating: self)
    }
  
    var asFloat: Float {
        Float(truncating: self)
    }
}
