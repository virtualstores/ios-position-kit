// IStepEventBasedMLDelegate.swift
// VSPositionKit

// Created by: CJ on 2022-01-17
// Copyright (c) 2022 Virual Stores

import Foundation
protocol IStepEventBasedMLDelegate {
  func onSpeedCoefficientSuggestion(alpha: Double?, beta: Double?)
  func onHeadingCorrectionSuggestion(offset: Double?)
}
