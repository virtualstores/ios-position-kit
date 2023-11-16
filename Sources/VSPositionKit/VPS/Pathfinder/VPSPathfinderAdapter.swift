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
import vps

public final class VPSPathfinderAdapter: VSFoundation.IPathfinder {
  public var currentGoalUpdatedPublisher: CurrentValueSubject<Goal?, Never> = .init(nil)
  public var sortedGoalUpdatedPublisher: CurrentValueSubject<[Goal]?, Never> = .init(nil)
  public var pathUpdatedPublisher: CurrentValueSubject<Path?, Never> = .init(nil)

  public var hasGoal: CurrentValueSubject<Bool, Never> { .init(self.vpsPathfinder.hasGoal) }

  private let vpsPathfinder: vps.IPathfinder
  let serialDispatch: DispatchQueue = DispatchQueue(label: "se.tt2.pathfinder")

  public init(converter: ICoordinateConverter, height: Double, width: Double, pixelsPerMeter: Float, navGraph: TT2NavGraph, startPosition: CGPoint, stopPosition: CGPoint, pathRefreshDistance: Float = 100.0) {
    self.vpsPathfinder = BasePathfinder(
      heightInPixels: Float(converter.convertFromMetersToPixels(input: height)),
      widthInPixels: Float(converter.convertFromMetersToPixels(input: width)),
      pixelsPerMeter: pixelsPerMeter,
      navGraph: navGraph.asNavGraph,
      pathRefreshDistance: pathRefreshDistance,
      pathProcess: .masmoothing, 
      windowSize: 3,
      startPosition: startPosition.asPathfinderCoordinateF,
      stopPosition: stopPosition.asPathfinderCoordinateF
    )

    self.vpsPathfinder.addListener(listener: self)
  }

  public func setUserPosition(position: CGPoint?) {
    serialDispatch.async { self.vpsPathfinder.setUserPosition(position: position?.asPathfinderCoordinateF) }
  }

  public func add(goal: Goal, completion: @escaping () -> Void) {
    serialDispatch.async { self.vpsPathfinder.addGoal(goal: goal.asVPSGoal, callback: completion) }
  }

  public func add(goals: [Goal], completion: @escaping () -> Void) {
    serialDispatch.async { self.vpsPathfinder.addGoals(goals: goals.map { $0.asVPSGoal }, callback: completion) }
  }

  public func set(goals: [Goal], completion: @escaping () -> Void) {
    serialDispatch.async { self.vpsPathfinder.setGoals(goals: goals.map { $0.asVPSGoal }, callback: completion) }
  }

  public func remove(id: String, completion: @escaping () -> Void) {
    serialDispatch.async { self.vpsPathfinder.removeGoal(id: id, callback: completion) }
  }

  public func remove(ids: [String], completion: @escaping () -> Void) {
    serialDispatch.async { self.vpsPathfinder.removeGoals(ids: ids, callback: completion) }
  }

  public func popGoal() {
    serialDispatch.async { self.vpsPathfinder.popGoal() }
  }

  public func forceRefresh(withTSP: Bool, overridePosition: CGPoint?, completion: @escaping () -> Void) {
    serialDispatch.async { self.vpsPathfinder.forceRefresh(withTSP: withTSP, overridePosition: overridePosition?.asPathfinderCoordinateF, callback: completion) }
  }
}

extension VPSPathfinderAdapter: IPathfinderListener {
  public var id: String { "VPSPathfinderAdapter" }

  public func onCurrentGoalUpdated(goal: IPathfinderGoal?) {
    DispatchQueue.main.async { self.currentGoalUpdatedPublisher.send( goal?.asGoal) }
  }

  public func onPathUpdated(path: IPathfinderPath) {
    DispatchQueue.main.async { self.pathUpdatedPublisher.send(path.asPath) }
  }

  public func onSortedGoalUpdated(goals: [IPathfinderGoal]) {
    DispatchQueue.main.async { self.sortedGoalUpdatedPublisher.send( goals.map { $0.asGoal }) }
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
