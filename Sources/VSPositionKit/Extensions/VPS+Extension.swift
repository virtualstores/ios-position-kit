//
// VPS+Extension
// VSTT2
//
// Created by Hripsime on 2022-01-31.
// Copyright Virtual Stores - 2021

import Foundation
import CoreGraphics
import VSFoundation
import vps

// MARK: - Extensions for VPS
extension CGPoint {
  var asCoordinateF: CoordinateF { CoordinateF(x: Double(x), y: Double(y)) }
  var asPathfinderCoordinateF: PathfinderCoordinateF { PathfinderCoordinateF(x: x, y: y) }

  static func * (lhs: CGPoint, rhs: Double) -> CGPoint {
    CGPoint(x: lhs.x * rhs, y: lhs.y * rhs)
  }
}

extension CoordinateF {
  var asCGPoint: CGPoint { CGPoint(x: Double(x), y: Double(y)) }
}

extension PathfinderCoordinateF {
  var asCGPoint: CGPoint { CGPoint(x: Double(x), y: Double(y)) }
}

extension Goal {
  var asVPSGoal: IPathfinderGoal {
    BasePathfinderGoal<AnyObject>(id: id, position: position.asPathfinderCoordinateF, data: data as AnyObject?, type: type.asVPSGoalType)
  }
}

extension IPathfinderGoal {
  var asGoal: Goal { Goal(id: id, position: position.asCGPoint, data: data, type: type.asGoalType, floorLevelId: 0) }
}

extension Goal.GoalType {
  var asVPSGoalType: IPathfinderGoalType {
    switch self {
    case .start: return .start
    case .target: return .target
    case .end: return .end
    }
  }
}

extension IPathfinderGoalType {
  var asGoalType: Goal.GoalType {
    switch self {
    case .start: return .start
    case .target: return .target
    case .end: return .end
    default: fatalError("Failed to parse IPathfinderGoalType in VPSPathfinderAdapter")
    }
  }
}

extension IPathfinderPath {
  var asPath: Path {
    Path(head: head.map { $0.asCGPoint }, body: body.flatMap({ $0 }).map { $0.asCGPoint }, tail: tail.map { $0.asCGPoint })
  }
}

extension KotlinFloat {
  var asDouble: Double { Double(truncating: self) }
  var asFloat: Float { Float(truncating: self) }
}
