//
//  VPSNLModel.swift
//
//
//  Created by Théodore Roos on 2024-06-10.
//

import CoreML
import Foundation
import VSFoundation
import vps

@available(iOS 14.0, *)
class VPSNLModel {
  let manager: VPSModelManager
  weak var floorLevelHandler: FloorLevelHandler?
  lazy var model: NLResnet? = {
    guard let model = manager.nlModel else { return nil }
    return NLResnet(model: model)
  }()

  init(manager: VPSModelManager) {
    self.manager = manager
  }

  deinit {
    model = nil
    onDestroy()
  }

  func createMlArray(data: [[Double]]) -> MLMultiArray? {
    var input: MLMultiArray?
    if #available(iOS 15.0, *) {
      input = MLMultiArray(MLShapedArray<Double>(scalars: data.flatMap({ $0 }), shape: [data.count, data[0].count]))
    } else {
      input = try? MLMultiArray(shape: [NSNumber(integerLiteral: data.count), NSNumber(integerLiteral: data[0].count)], dataType: .double)
      data.flatMap({ $0 }).enumerated().forEach { input?[$0.offset] = NSNumber(value: $0.element) }
    }
    return input
  }
}

@available(iOS 14.0, *)
extension VPSNLModel: NLModel {
  weak var map2D: KotlinArray<KotlinFloatArray>? { floorLevelHandler?.currentFloorLevel.get2DArrayMap(resolution: params.resolution) }

  var params: NLModelParams { .init(resolution: manager.nlParams!.resolution.asFloat) }

  func onDestroy() {
    onExit()
  }

  func onExit() {}

  func onInput(data___ data: Tensor) -> NLModelOutput? {
    guard
      var convertedData = data.data.convertToDouble,
      let map2D = map2D?.convertToDouble
    else { return nil }

    while convertedData.count < 5000 {
      convertedData.append([-123456789, -123456789])
    }

    guard
      let input = createMlArray(data: convertedData),
      let map_2D = createMlArray(data: map2D)
    else { return nil }

    return doPrediction(
      input: input,
      map2D: map_2D
    )?.asModelOutput(resolution: params.resolution)
  }

  func doPrediction(input: MLMultiArray, map2D: MLMultiArray) -> NLResnetOutput? {
    try? model?.prediction(input: NLResnetInput(trajectory_coordinates: input, map_img: map2D))
  }

  func setFloorLevelHandler(floorLevelHandler: FloorLevelHandler) {
    self.floorLevelHandler = floorLevelHandler
  }
}

@available(iOS 14.0, *)
private extension NLResnetOutput {
  func asModelOutput(resolution: Float) -> NLModelOutput {
    NLModelOutput(
      patchCenter: convert(patchCenter: patch_center),
      heatmap: convert(heatmap: heatmap),
      resolution: resolution
    )
  }

  func convert(patchCenter: MLMultiArray) -> KotlinFloatArray {
    KotlinFloatArray(size: patchCenter.count.asInt32) { (index) in
      KotlinFloat(value: patchCenter[index.asInt].floatValue)
    }
  }

  func convert(heatmap: MLMultiArray) -> KotlinArray<KotlinFloatArray> {
    let count1 = heatmap.shape[0].intValue
    let count2 = heatmap.shape[1].intValue
    var arr = [[Float]](repeating: .init(repeating: 0, count: count2), count: count1)
    for i in 0..<count1 {
      for j in 0..<count2 {
        arr[i][j] = heatmap[count2 * i + j].floatValue
      }
    }
    return KotlinArray(size: count1.asInt32) { (i) in
      KotlinFloatArray(size: count2.asInt32) { (j) in
        KotlinFloat(float: arr[i.asInt][j.asInt])
      }
    }
  }
}

extension KotlinInt {
  var asInt: Int { Int(truncating: self) }
}
