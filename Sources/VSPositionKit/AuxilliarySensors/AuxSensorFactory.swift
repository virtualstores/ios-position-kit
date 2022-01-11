// AuxSensorFactory.swift
// 

// Created by: CJ on 2022-01-11
// Copyright (c) 2022 VirtualStores

import Foundation


class AuxSensorFactory {

  func createRotationSensor(delegate: IRotationSensorDelegate) -> RotationSensor {
     return RotationSensor(delegate: delegate)
  }

}
