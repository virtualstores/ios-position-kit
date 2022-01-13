// AverageVariance.swift
// 

// Created by: CJ on 2022-01-11
// Copyright (c) 2022 Virtual Stores

import Foundation
import VSFoundation

class AverageVariance {
  struct DoublePack {
    let average: Double
    let variance: Double
    let totalVariation: Double
  }

  private let queue: Queue<Double>
  private var size: Int
  private var avg = 0.0
  private var varFirst = 0.0
  private var varSecond = 0.0
  private var totalVariation = 0.0

  init(size: Int) {
    self.size = size
    queue = Queue(maxSize: size)

    for _ in 0..<size {
      queue.enqueue(0.0)
    }
  }

  func calculate(data: Double) -> DoublePack {
    let firstData = queue.peek!
    let lastData = queue.peekLast!

    queue.enqueue(data)

    let previousAverage = avg
    avg += (data - firstData) / size.asDouble

    varFirst += (pow(data, 2) - pow(firstData, 2)) + (pow(avg, 2) - pow(previousAverage, 2)) * size.asDouble
    varSecond += 2 * (firstData - data)

    let variance = (varFirst + varSecond * avg) / size.asDouble

    totalVariation += abs(lastData - data) - abs(queue.peek! - firstData)

    return DoublePack(average: avg, variance: variance, totalVariation: totalVariation)
  }

  func min() -> Double {
    return queue.asArray().min()!
  }
  func max() -> Double {
    return queue.asArray().max()!
  }
}
