//
// NLResnet.swift
//
// This file was automatically generated and should not be edited.
//

import CoreML


/// Model Prediction Input Type
@available(macOS 11.0, iOS 14.0, tvOS 14.0, watchOS 7.0, *)
class NLResnetInput : MLFeatureProvider {

  /// trajectory_coordinates as 1 by 2 matrix of floats
  var trajectory_coordinates: MLMultiArray

  /// map_img as 1 by 1 matrix of floats
  var map_img: MLMultiArray

  var featureNames: Set<String> {
    get {
      return ["trajectory_coordinates", "map_img"]
    }
  }

  func featureValue(for featureName: String) -> MLFeatureValue? {
    if (featureName == "trajectory_coordinates") {
      return MLFeatureValue(multiArray: trajectory_coordinates)
    }
    if (featureName == "map_img") {
      return MLFeatureValue(multiArray: map_img)
    }
    return nil
  }

  init(trajectory_coordinates: MLMultiArray, map_img: MLMultiArray) {
    self.trajectory_coordinates = trajectory_coordinates
    self.map_img = map_img
  }

  @available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
  convenience init(trajectory_coordinates: MLShapedArray<Float>, map_img: MLShapedArray<Float>) {
    self.init(trajectory_coordinates: MLMultiArray(trajectory_coordinates), map_img: MLMultiArray(map_img))
  }

}

/// Model Prediction Output Type
@available(macOS 11.0, iOS 14.0, tvOS 14.0, watchOS 7.0, *)
class NLResnetOutput : MLFeatureProvider {

  /// Source provided by CoreML
  private let provider : MLFeatureProvider

  /// heatmap as multidimensional array of floats
  var heatmap: MLMultiArray {
    return self.provider.featureValue(for: "heatmap")!.multiArrayValue!
  }

  /// heatmap as multidimensional array of floats
  @available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
  var heatmapShapedArray: MLShapedArray<Float> {
    return MLShapedArray<Float>(self.heatmap)
  }

  /// patch_center as multidimensional array of floats
  var patch_center: MLMultiArray {
    return self.provider.featureValue(for: "patch_center")!.multiArrayValue!
  }

  /// patch_center as multidimensional array of floats
  @available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
  var patch_centerShapedArray: MLShapedArray<Float> {
    return MLShapedArray<Float>(self.patch_center)
  }

  var featureNames: Set<String> {
    return self.provider.featureNames
  }

  func featureValue(for featureName: String) -> MLFeatureValue? {
    return self.provider.featureValue(for: featureName)
  }

  init(heatmap: MLMultiArray, patch_center: MLMultiArray) {
    self.provider = try! MLDictionaryFeatureProvider(dictionary: ["heatmap" : MLFeatureValue(multiArray: heatmap), "patch_center" : MLFeatureValue(multiArray: patch_center)])
  }

  init(features: MLFeatureProvider) {
    self.provider = features
  }
}

/// Class for model loading and prediction
@available(macOS 11.0, iOS 14.0, tvOS 14.0, watchOS 7.0, *)
class NLResnet {
  let model: MLModel

  /// URL of model assuming it was installed in the same bundle as this class
  class var urlOfModelInThisBundle : URL {
    let bundle = Bundle(for: self)
    return bundle.url(forResource: "NLResnet", withExtension:"mlmodelc")!
  }

  /**
   Construct NLResnet instance with an existing MLModel object.

   Usually the application does not use this initializer unless it makes a subclass of NLResnet.
   Such application may want to use `MLModel(contentsOfURL:configuration:)` and `NLResnet.urlOfModelInThisBundle` to create a MLModel object to pass-in.

   - parameters:
   - model: MLModel object
   */
  init(model: MLModel) {
    self.model = model
  }

  /**
   Construct a model with configuration

   - parameters:
   - configuration: the desired model configuration

   - throws: an NSError object that describes the problem
   */
  convenience init(configuration: MLModelConfiguration = MLModelConfiguration()) throws {
    try self.init(contentsOf: type(of:self).urlOfModelInThisBundle, configuration: configuration)
  }

  /**
   Construct NLResnet instance with explicit path to mlmodelc file
   - parameters:
   - modelURL: the file url of the model

   - throws: an NSError object that describes the problem
   */
  convenience init(contentsOf modelURL: URL) throws {
    try self.init(model: MLModel(contentsOf: modelURL))
  }

  /**
   Construct a model with URL of the .mlmodelc directory and configuration

   - parameters:
   - modelURL: the file url of the model
   - configuration: the desired model configuration

   - throws: an NSError object that describes the problem
   */
  convenience init(contentsOf modelURL: URL, configuration: MLModelConfiguration) throws {
    try self.init(model: MLModel(contentsOf: modelURL, configuration: configuration))
  }

  /**
   Construct NLResnet instance asynchronously with optional configuration.

   Model loading may take time when the model content is not immediately available (e.g. encrypted model). Use this factory method especially when the caller is on the main thread.

   - parameters:
   - configuration: the desired model configuration
   - handler: the completion handler to be called when the model loading completes successfully or unsuccessfully
   */
  class func load(configuration: MLModelConfiguration = MLModelConfiguration(), completionHandler handler: @escaping (Swift.Result<NLResnet, Error>) -> Void) {
    return self.load(contentsOf: self.urlOfModelInThisBundle, configuration: configuration, completionHandler: handler)
  }

  /**
   Construct NLResnet instance asynchronously with optional configuration.

   Model loading may take time when the model content is not immediately available (e.g. encrypted model). Use this factory method especially when the caller is on the main thread.

   - parameters:
   - configuration: the desired model configuration
   */
  @available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
  class func load(configuration: MLModelConfiguration = MLModelConfiguration()) async throws -> NLResnet {
    return try await self.load(contentsOf: self.urlOfModelInThisBundle, configuration: configuration)
  }

  /**
   Construct NLResnet instance asynchronously with URL of the .mlmodelc directory with optional configuration.

   Model loading may take time when the model content is not immediately available (e.g. encrypted model). Use this factory method especially when the caller is on the main thread.

   - parameters:
   - modelURL: the URL to the model
   - configuration: the desired model configuration
   - handler: the completion handler to be called when the model loading completes successfully or unsuccessfully
   */
  class func load(contentsOf modelURL: URL, configuration: MLModelConfiguration = MLModelConfiguration(), completionHandler handler: @escaping (Swift.Result<NLResnet, Error>) -> Void) {
    MLModel.load(contentsOf: modelURL, configuration: configuration) { result in
      switch result {
      case .failure(let error):
        handler(.failure(error))
      case .success(let model):
        handler(.success(NLResnet(model: model)))
      }
    }
  }

  /**
   Construct NLResnet instance asynchronously with URL of the .mlmodelc directory with optional configuration.

   Model loading may take time when the model content is not immediately available (e.g. encrypted model). Use this factory method especially when the caller is on the main thread.

   - parameters:
   - modelURL: the URL to the model
   - configuration: the desired model configuration
   */
  @available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
  class func load(contentsOf modelURL: URL, configuration: MLModelConfiguration = MLModelConfiguration()) async throws -> NLResnet {
    let model = try await MLModel.load(contentsOf: modelURL, configuration: configuration)
    return NLResnet(model: model)
  }

  /**
   Make a prediction using the structured interface

   - parameters:
   - input: the input to the prediction as NLResnetInput

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as NLResnetOutput
   */
  func prediction(input: NLResnetInput) throws -> NLResnetOutput {
    return try self.prediction(input: input, options: MLPredictionOptions())
  }

  /**
   Make a prediction using the structured interface

   - parameters:
   - input: the input to the prediction as NLResnetInput
   - options: prediction options

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as NLResnetOutput
   */
  func prediction(input: NLResnetInput, options: MLPredictionOptions) throws -> NLResnetOutput {
    let outFeatures = try model.prediction(from: input, options:options)
    return NLResnetOutput(features: outFeatures)
  }

  /**
   Make an asynchronous prediction using the structured interface

   - parameters:
   - input: the input to the prediction as NLResnetInput
   - options: prediction options

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as NLResnetOutput
   */
  @available(macOS 14.0, iOS 17.0, tvOS 17.0, watchOS 10.0, *)
  func prediction(input: NLResnetInput, options: MLPredictionOptions = MLPredictionOptions()) async throws -> NLResnetOutput {
    let outFeatures = try await model.prediction(from: input, options:options)
    return NLResnetOutput(features: outFeatures)
  }

  /**
   Make a prediction using the convenience interface

   - parameters:
   - trajectory_coordinates as 1 by 2 matrix of floats
   - map_img as 1 by 1 matrix of floats

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as NLResnetOutput
   */
  func prediction(trajectory_coordinates: MLMultiArray, map_img: MLMultiArray) throws -> NLResnetOutput {
    let input_ = NLResnetInput(trajectory_coordinates: trajectory_coordinates, map_img: map_img)
    return try self.prediction(input: input_)
  }

  /**
   Make a prediction using the convenience interface

   - parameters:
   - trajectory_coordinates as 1 by 2 matrix of floats
   - map_img as 1 by 1 matrix of floats

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as NLResnetOutput
   */

  @available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
  func prediction(trajectory_coordinates: MLShapedArray<Float>, map_img: MLShapedArray<Float>) throws -> NLResnetOutput {
    let input_ = NLResnetInput(trajectory_coordinates: trajectory_coordinates, map_img: map_img)
    return try self.prediction(input: input_)
  }

  /**
   Make a batch prediction using the structured interface

   - parameters:
   - inputs: the inputs to the prediction as [NLResnetInput]
   - options: prediction options

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as [NLResnetOutput]
   */
  func predictions(inputs: [NLResnetInput], options: MLPredictionOptions = MLPredictionOptions()) throws -> [NLResnetOutput] {
    let batchIn = MLArrayBatchProvider(array: inputs)
    let batchOut = try model.predictions(from: batchIn, options: options)
    var results : [NLResnetOutput] = []
    results.reserveCapacity(inputs.count)
    for i in 0..<batchOut.count {
      let outProvider = batchOut.features(at: i)
      let result = NLResnetOutput(features: outProvider)
      results.append(result)
    }
    return results
  }
}
