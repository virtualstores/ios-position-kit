//
//  File.swift
//  
//
//  Created by Théodore Roos on 2023-05-22.
//

import Foundation
import CoreML
import VSFoundation
import vps

class VPSVelocityModel {
  let manager: VPSModelManager
  var model: Resnet?
  var handler: VelocityModelHandler?
  var batchedData: [[Double]] = []

  init(manager: VPSModelManager) {
    self.manager = manager
    guard let model = manager.model else { return }
    self.model = Resnet(model: model)
  }

  deinit {
    model = nil
    handler = nil
  }

  func structure(data: [[Double]]) -> [Double] {
    var arr1: [Double] = []
    var arr2: [Double] = []
    var arr3: [Double] = []
    var arr4: [Double] = []
    var arr5: [Double] = []
    var arr6: [Double] = []

    data.forEach {
      arr1.append(contentsOf: $0[0..<200])
      arr2.append(contentsOf: $0[200..<400])
      arr3.append(contentsOf: $0[400..<600])
      arr4.append(contentsOf: $0[600..<800])
      arr5.append(contentsOf: $0[800..<1000])
      arr6.append(contentsOf: $0[1000..<1200])
    }

    return arr1 + arr2 + arr3 + arr4 + arr5 + arr6
  }

  func createMlArray(data: [[Double]]) -> MLMultiArray? {
    let count = manager.params!.featureSequence.count
    let frameSize = Int(manager.params!.frameSize)
    var input: MLMultiArray?
    if #available(iOS 15.0, *) {
      input = MLMultiArray(MLShapedArray<Double>(scalars: data.flatMap({ $0 }), shape: [data.count,count,frameSize]))
    } else {
      input = try? MLMultiArray(shape: [NSNumber(integerLiteral: data.count),NSNumber(integerLiteral: count),NSNumber(integerLiteral: frameSize)], dataType: .double)
      data.flatMap({ $0 }).enumerated().forEach { input?[$0.offset] = NSNumber(value: $0.element) }
    }
    return input
  }
}

extension VPSVelocityModel: VelocityModel {
  var params: VelocityModelParams {
    VelocityModelParams(
      batchComputeSize: 1,
      windowSize: manager.params!.frameSize,
      smoothing: manager.params!.useSmooting,
      featureSequence: manager.params!.featureSequence.map({ $0.asVPSFeature })
    )
  }
  
  func onExit() {

  }

  func onInput(data_ data: Tensor) {
    if model == nil, let model = manager.model { self.model = Resnet(model: model) }
    batchedData.append(data.data.map({ $0.map({ Double(truncating: $0) }) }).flatMap { $0 })
    guard batchedData.count > 0, let input = createMlArray(data: batchedData) else { return }
    batchedData.removeAll()
    let output = try? model?.prediction(input: ResnetInput(input: input))
    //print("OUTPUT", output?.output)
    guard let modelOutput = output?.output.asModelOutput(timestamp: data.timestamp) else { return }
    //DispatchQueue.main.async {
    self.handler?.onVelocityModelOutPut(modelOutput: [modelOutput])
    //}
  }

  func setHandler(handler: VelocityModelHandler) {
    self.handler = handler
  }
}

extension MLMultiArray {
  func asModelOutput(timestamp: Int64) -> ModelOutput {
    var arr = [KotlinFloat](repeating: 0, count: count)
    for i in 0..<count {
      arr[i] = KotlinFloat(value: Float(truncating: self[i]))
    }
    return ModelOutput(timestamp: timestamp, data: arr)
  }
}

private extension VPSFeaturesEntriesEnum {
  var asVPSFeature: VelocityModelParams.FeaturesEntries {
    switch self {
    case .gx: return .gx
    case .gy: return .gy
    case .gz: return .gz
    case .ax: return .ax
    case .ay: return .ay
    case .az: return .az
    case .gxd: return .gxd
    case .gyd: return .gyd
    case .gzd: return .gzd
    case .axd: return .axd
    case .ayd: return .ayd
    case .azd: return .azd
    case .r00: return .r00
    case .r01: return .r01
    case .r02: return .r02
    case .r10: return .r10
    case .r11: return .r11
    case .r12: return .r12
    case .r20: return .r20
    case .r21: return .r21
    case .r22: return .r22
    }
  }
}
