//
// VPSDataCommunicator
// VSTT2
//
// Created by Hripsime on 2022-02-08
// Copyright Virtual Stores - 2022

import Foundation
import qps

class VPSDataCommunicator: DataCommunicator {
    let dataCommunicatorSettings = VPSUserSettings()
    
    public func getRegressionVectors() -> DataCommunicatorRegressionVectors? {
        let data = DataCommunicatorRegressionVectors(
            alpha: dataCommunicatorSettings.alpha,
            beta: dataCommunicatorSettings.beta,
            y: dataCommunicatorSettings.y
        )
        return data
    }
    
    public func onNewCoefficients(slope: Float, intercept: Float) {
        dataCommunicatorSettings.speedRegressionSlope = KotlinFloat(float: slope)
        dataCommunicatorSettings.speedRegressionIntercept = KotlinFloat(float: intercept)
    }
    
    public func onNewRegressionVectors(alpha: [KotlinFloat], beta: [KotlinFloat], y: [KotlinFloat]) {
        dataCommunicatorSettings.alpha.append(contentsOf: alpha)
        dataCommunicatorSettings.beta.append(contentsOf: beta)
        dataCommunicatorSettings.y.append(contentsOf: y)
    }
}
