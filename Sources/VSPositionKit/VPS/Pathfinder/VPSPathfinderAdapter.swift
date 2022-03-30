//
//  VPSPathfinderAdapter.swift
//  PositionKit
//
//  Created by Théodore Roos on 2021-10-26.
//

import Foundation
import Combine
import CoreGraphics
import VSFoundation
import qps

public final class VPSPathfinderAdapter: IFoundationPathfinder {
    public var currentGoalUpdatedPublisher: CurrentValueSubject<Goal?, Never> {
         .init(self.vpsPathfinder.currentGoal?.asGoal)
    }
    public var sortedGoalUpdatedPublisher: CurrentValueSubject<[Goal]?, Never> {
        .init(self.vpsPathfinder.sortedGoals.map { $0.asGoal })
    }
    public var pathUpdatedPublisher: CurrentValueSubject<Path?, Never> = .init(nil)

    public var hasGoal: CurrentValueSubject<Bool, Never> {
        .init(self.vpsPathfinder.hasGoal)
    }

    private let vpsPathfinder: IPathfinder
    private let converter: ICoordinateConverter
    private let height: Double

    public init(converter: ICoordinateConverter, height: Double, width: Double, pixelsPerMeter: Float, navGraph: TT2NavGraph, startPosition: CGPoint, stopPosition: CGPoint, pathRefreshDistance: Float = 100.0) {
        self.converter = converter
        self.height = height
        let heightInPixels = converter.convertFromMetersToPixels(input: height)
        let widthInPixels = converter.convertFromMetersToPixels(input: width)
        self.vpsPathfinder = BasePathfinder(heightInPixels: Float(heightInPixels), widthInPixels: Float(widthInPixels), pixelsPerMeter: pixelsPerMeter, navGraph: navGraph.asNavGraph, pathRefreshDistance: pathRefreshDistance, startPosition: startPosition.asPointF, stopPosition: stopPosition.asPointF)

        self.vpsPathfinder.addListener(listener_: self)
    }

    public func setUserPosition(position: CGPoint?) {
        self.vpsPathfinder.setUserPosition(position: position?.asPointF)
    }

    public func add(goal: Goal, completion: @escaping () -> Void) {
        self.vpsPathfinder.addGoal(goal: goal.asVPSGoal, callback: completion)
    }

    public func add(goals: [Goal], completion: @escaping () -> Void) {
        self.vpsPathfinder.addGoals(goals: goals.map { $0.asVPSGoal }, callback: completion)
    }

    public func set(goals: [Goal], completion: @escaping () -> Void) {
        self.vpsPathfinder.setGoals(goals: goals.map { $0.asVPSGoal }, callback: completion)
    }

    public func remove(goal: Goal, completion: @escaping () -> Void) {
        self.vpsPathfinder.removeGoal(id: goal.id, callback: completion)
    }

    public func remove(goals: [Goal], completion: @escaping () -> Void) {
        self.vpsPathfinder.removeGoals(ids: goals.map { $0.id }, callback: completion)
    }

    public func popGoal() {
        self.vpsPathfinder.popGoal()
    }

    public func forceRefresh(withTSP: Bool, overridePosition: CGPoint?, completion: @escaping () -> Void) {
        self.vpsPathfinder.forceRefresh(withTSP: withTSP, overridePosition: overridePosition?.asPointF, callback: completion)
    }
}

extension VPSPathfinderAdapter: IPathfinderListener {
    public var id_: String { "VPSPathfinderAdapter" }

    public func onCurrentGoalUpdated(goal: IPathfinderGoal?) {
        currentGoalUpdatedPublisher.send( goal?.asGoal)
    }

    public func onPathUpdated(path: IPathfinderPath) {
        pathUpdatedPublisher.send(path.asPath)
    }

    public func onSortedGoalUpdated(goals: [IPathfinderGoal]) {
        sortedGoalUpdatedPublisher.send( goals.map { $0.asGoal })
    }
}

extension TT2NavGraph {
  var asNavGraph: NavGraph {
    var modifiedVertices: [String : NavGraph.Vertex] = [:]
    vertices.forEach { (key, value) in
      var neighborCosts: [String : KotlinInt] = [:]
      value.neighborCosts.forEach { (key, value) in
        neighborCosts[key] = KotlinInt(int: value)
      }
      modifiedVertices[key] = NavGraph.Vertex(id: value.id, x: value.x, y: value.y, cost: value.cost, neighborCosts: neighborCosts)
    }
    return NavGraph(spacing: Int32(spacing), numVertices: numVertices, vertices: modifiedVertices)
  }
}
