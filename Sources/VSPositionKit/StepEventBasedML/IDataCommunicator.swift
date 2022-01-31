// IDataCommunicator.swift
// 

// Created by: CJ on 2022-01-17
// Copyright (c) 2022 Virtual Stores

import Foundation

public protocol IDataCommunicator {
  /*
     This is an interface for communicating with the app. It's sort of reinventing the wheel
     since we already have the delegate, but I'd rather not degenerate it currently.
      */

     func onNewCoefficients(slope: Double, intercept: Double)

     func onNewRegressionVectors(alpha: [Double], beta: [Double], y: [Double])

     /*
     This should ONLY be used to communicate data needed to improve models over time.

     User specific parameters should be communicated through user settings.
      */
     //fun fetchData(type: dataType): MLData?

     //This stuff should be ready when the communicator is passed and not loaded from some server
     //Todo: How to handle this shit

     func getRegressionVectors() -> RegressionVectors?
}
