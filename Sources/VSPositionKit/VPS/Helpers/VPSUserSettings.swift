//
// VPSUserSettings
// VSTT2
//
// Created by Hripsime on 2022-02-04.
// Copyright Virtual Stores - 2022

import Foundation
import vps

public final class VPSUserSettings: IQPSUserSettings {
    public var speedRegressionIntercept: KotlinFloat?
    public var speedRegressionSlope: KotlinFloat?
    public var userHeight: KotlinFloat?
}
