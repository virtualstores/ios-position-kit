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

public final class VPSPathfinderAdapter: PathfinderProtocol {
    public var currentGoalUpdatedPublisher: CurrentValueSubject<Goal?, Never> {
         .init(self.vpsPathfinder.currentGoal?.asGoal)
    }
    public var sortedGoalUpdatedPublisher: CurrentValueSubject<[Goal]?, Never> {
        .init(self.vpsPathfinder.sortedGoals.map { $0.asGoal })
    }
    public var pathUpdatedPublisher: CurrentValueSubject<Path?, Never> = .init(nil)

    public  var hasGoal: CurrentValueSubject<Bool, Never> {
        .init(self.vpsPathfinder.hasGoal)
    }

    private let vpsPathfinder: IPathfinder

    public init(heightInPixels: Float, widthInPixels: Float, pixelsPerMeter: Float, navGraph: NavGraph, startPosition: CGPoint, stopPosition: CGPoint, pathRefreshDistance: Float = 100.0) {
        self.vpsPathfinder = BasePathfinder(heightInPixels: heightInPixels, widthInPixels: widthInPixels, pixelsPerMeter: pixelsPerMeter, navGraph: navGraph, pathRefreshDistance: pathRefreshDistance, startPosition: startPosition.asPointF, stopPosition: stopPosition.asPointF)

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
    public var id: String { "VPSPathfinderAdapter" }

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
