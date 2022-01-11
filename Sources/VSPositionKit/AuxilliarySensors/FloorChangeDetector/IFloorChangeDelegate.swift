// IFloorChangeDelegate.swift
// VSSensorInterpreter

// Created by: CJ on 2022-01-10
// Copyright (c) 2022 Virtual Stores

import Foundation

public protocol IFloorChangeDelegate {
  func onDetectedFloorChange(floorDifference: Int, timestamp: Int)
}
