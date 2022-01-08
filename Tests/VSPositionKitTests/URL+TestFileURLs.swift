// URL+TestFileURLs.swift
// 

// Created by: CJ on 2022-01-07
// Copyright (c) 2022 Virtual Stores

import Foundation

extension URL {
  enum MapFence {
    static let vsOfficeMapFence = Bundle.module.url(forResource: "MapFence/vs_office_mapfence", withExtension: "json")
  }

  enum ReplayData {
    static let goskaRegularSteps = Bundle.module.url(forResource: "SensorData/replayData", withExtension: "json")
  }
}
