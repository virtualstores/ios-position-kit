//
//  File.swift
//  
//
//  Created by Théodore Roos on 2023-05-22.
//

import Foundation
import CoreML
import vps

class VPSVelocityModel {
  var model: MLModel
  var handler: VelocityModelHandler?

  init(model: MLModel?) {
    self.model = model ?? MLModel()
  }
}

extension VPSVelocityModel: VelocityModel {
  func onExit() {

  }

  func onInput(data_ data: Tensor) {
    let arr = KotlinFloatArray(size: 2)
    arr.set(index: 0, value: 0.0)
    arr.set(index: 1, value: 0.0)
    let output = ModelOutput(timestamp: data.timestamp, data: arr)
    let arr2: KotlinArray<ModelOutput> = .init(size: 1) { (_) in
      output
    }
    arr2.set(index: 0, value: output)
    handler?.onVelocityModelOutPut(data: arr2)
  }

  func setHandler(handler: VelocityModelHandler) {
    self.handler = handler
  }
}
