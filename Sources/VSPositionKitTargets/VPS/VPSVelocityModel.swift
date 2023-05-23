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

  init(model: MLModel?) {
    self.model = model ?? MLModel()
  }
}

extension VPSVelocityModel: VelocityModel {
  func onExit() {

  }

  func onInput(data_ data: Tensor) {

  }

  func setHandler(handler: VelocityModelHandler) {

  }
}
