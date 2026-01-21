//
//  VPSNPModel.swift
//  VSPositionKit
//
//  Created by Théodore Roos on 2026-01-16.
//

import CoreML
import VSFoundation
import vps

@available(iOS 15.0, *)
class VPSNPModel {
  let manager: VPSModelManager
  lazy var model: NPResnet? = {
    guard let model = manager.npModel else { return nil }
    return .init(model: model)
  }()

  init(manager: VPSModelManager) {
    self.manager = manager
  }

  func createMlArray(from input: [[[Double]]]) throws -> MLMultiArray {
    // Expected shape validation
    precondition(input.count == 1, "Batch dimension must be 1")
    precondition(input[0].count == 6, "Channel dimension must be 6")

    let window = input[0][0].count
    precondition(window >= 100 && window <= 11_000, "Invalid time dimension")

    // Ensure rectangular structure
    for c in 0..<6 {
      precondition(input[0][c].count == window, "Jagged input array")
    }

    let shape: [NSNumber] = [1, 6, window].map { NSNumber(value: $0) }
    let array = try MLMultiArray(shape: shape, dataType: .float32)

    // Flattening: [1][6][T] → contiguous memory
    let ptr = array.dataPointer.bindMemory( to: Float.self, capacity: 6 * window)

    var idx = 0
    for c in 0..<6 {
      for t in 0..<window {
        ptr[idx] = Float(input[0][c][t])
        idx += 1
      }
    }

    return array
  }
}

@available(iOS 15.0, *)
extension VPSNPModel: NorthPredictorModel {
  func onDestroy() {

  }
  
  func onExit() {

  }
  
  func onInput(data____ data: [String : Any]) -> KotlinFloatArray? {
    do {
      guard let model = model else { throw NSError(domain: "\(#function) Model is nil", code: 400) }
      guard
        let data = (data["x"] as? KotlinArray<KotlinArray<KotlinFloatArray>>)?.convertToDouble
      else { throw NSError(domain: "\(#function) Failed to get data", code: 400) }
      let arr = try createMlArray(from: data)
      let prediction = try model.prediction(x: arr)
      return prediction.asKotlinFloatArray
    } catch {
      Logger(verbosity: .warning).log(message: "VPSNPModel.onInput: \(error)")
      return nil
    }
  }
}

@available(iOS 15.0, *)
private extension NPOutput {
  var asKotlinFloatArray: KotlinFloatArray {
    let count = y.count
    let result = KotlinFloatArray(size: Int32(count))

    // Fast path: read as Float regardless of stored dtype
    for i in 0..<count {
      result.set(index: Int32(i), value: y[i].floatValue)
    }

    return result
  }
}

private extension KotlinArray<KotlinArray<KotlinFloatArray>> {
  var convertToDouble: [[[Double]]]? {
    var convertedData = [[[Double]]](repeating: [], count: Int(size))
    for i in 0..<size {
      guard let arr = get(index: i) else { return nil }
      for j in 0..<arr.size {
        guard let convertedArr = arr.get(index: j)?.convertToDouble else { return nil }
        convertedData[Int(i)].append(convertedArr)
      }
    }
    return convertedData
  }
}

private extension KotlinFloatArray {
  var convertToDouble: [Double] {
    var convertedData = [Double](repeating: 0, count: Int(size))
    for i in 0..<size {
      convertedData[Int(i)] = get(index: i).asDouble
    }
    return convertedData
  }
}
