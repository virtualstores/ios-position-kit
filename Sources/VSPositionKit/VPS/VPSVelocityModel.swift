//
//  VPSVelocityModel.swift
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
  lazy var model: Resnet? = {
    guard let model = manager.mlModel else { return nil }
    return Resnet(model: model)
  }()
  lazy var modelV2: ResnetV2? = {
    guard let model = manager.mlModel else { return nil }
    return ResnetV2(model: model)
  }()
  var handler: VelocityModelHandler?
  var batchedData: [[Double]] = []
  var stepNumber = 0

  private let tag = "VPSVelocityModel"

  init(manager: VPSModelManager) {
    self.manager = manager
  }

  deinit {
    Logger(verbosity: .info).log(tag: tag, message: "deinit")
    onDestroy()
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
    let count = manager.mlParams!.featureSequence.count
    let frameSize = Int(manager.mlParams!.frameSize)
    var input: MLMultiArray?
    if #available(iOS 15.0, *) {
      input = MLMultiArray(MLShapedArray<Double>(scalars: data.flatMap({ $0 }), shape: [data.count,count,frameSize]))
    } else {
      input = try? MLMultiArray(shape: [NSNumber(integerLiteral: data.count), NSNumber(integerLiteral: count), NSNumber(integerLiteral: frameSize)], dataType: .double)
      data.flatMap({ $0 }).enumerated().forEach { input?[$0.offset] = NSNumber(value: $0.element) }
    }
    return input
  }

  func createMlArray(stepNumber: Int) -> MLMultiArray? {
    let input = try? MLMultiArray(shape: [1], dataType: .int32)
    input?[0] = NSNumber(value: stepNumber)
    return input
  }
}

extension VPSVelocityModel: VelocityModel {
  var name: String { "VPSVelocityModel" }

  var params: VelocityModelParams {
    VelocityModelParams(
      batchComputeSize: 1,
      windowSize: manager.mlParams!.frameSize,
      smoothing: manager.mlParams!.useSmooting,
      featureSequence: manager.mlParams!.featureSequence.map({ $0.asVPSFeature }),
      stepNumberInput: manager.mlParams!.stepNumberInput
    )
  }

  func onDestroy() {
    model = nil
    modelV2 = nil
    handler = nil
    onExit()
  }

  func onExit() {
    batchedData.removeAll()
  }

  func onFlush() {

  }

  func reset() {
    stepNumber = 0
  }

  func onInput(data__ data: Tensor) {
    guard let convertedData = data.data.convertToDouble else { return }
    batchedData.append(convertedData.flatMap({ $0 }))
    //batchedData.append(data.data.map({ $0.map({ Double(truncating: $0) }) }).flatMap { $0 })
    guard batchedData.count > 0, let input = createMlArray(data: batchedData) else { return }
    batchedData.removeAll()
    if manager.mlParams!.stepNumberInput, let stepNumber = createMlArray(stepNumber: stepNumber) {
      doPrediction(input: input, timestamp: data.nanoTimestamp, systemTimestamp: data.systemTimestamp, stepNumber: stepNumber)
    } else {
      doPrediction(input: input, timestamp: data.nanoTimestamp, systemTimestamp: data.systemTimestamp)
    }
    stepNumber += 1
  }

  func doPrediction(input: MLMultiArray, timestamp: Int64, systemTimestamp: Int64) {
    let output = try? model?.prediction(input: ResnetInput(input: input))
    //print("OUTPUT", output?.output)
    guard let modelOutput = output?.output.asModelOutput(timestamp: timestamp, systemTimestamp: systemTimestamp) else { return }
    handler?.onVelocityModelOutPut(modelOutput: [modelOutput])
  }

  func doPrediction(input: MLMultiArray, timestamp: Int64, systemTimestamp: Int64, stepNumber: MLMultiArray) {
    let output = try? modelV2?.prediction(input: ResnetV2Input(input: input, step_numbers: stepNumber))
    //print("OUTPUT V2", output?.output)
    guard let modelOutput = output?.output.asModelOutput(timestamp: timestamp, systemTimestamp: systemTimestamp) else { return }
    handler?.onVelocityModelOutPut(modelOutput: [modelOutput])
  }

  func setHandler(handler_ handler: VelocityModelHandler?) {
    self.handler = handler
  }
}

private extension MLMultiArray {
  func asModelOutput(timestamp: Int64, systemTimestamp: Int64) -> VelocityModelOutput {
    var arr = [KotlinFloat](repeating: 0, count: count)
    for i in 0..<count {
      arr[i] = KotlinFloat(value: Float(truncating: self[i]))
    }
    return VelocityModelOutput(timestamp: timestamp, systemTimestamp: systemTimestamp, data: arr)
  }
}

extension KotlinArray<KotlinFloatArray> {
  var convertToDouble: [[Double]]? {
    var convertedData = [[Double]](repeating: [], count: Int(size))
    for i in 0..<size {
      guard let arr = get(index: i) else { return nil }
      for j in 0..<arr.size {
        convertedData[Int(i)].append(arr.get(index: j).asDouble)
      }
    }
    return convertedData
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
