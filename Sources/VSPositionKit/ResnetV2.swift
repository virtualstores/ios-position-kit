//
// ResnetV2.swift
//
// This file was automatically generated and should not be edited.
//

import CoreML

/// Model Prediction Input Type
@available(macOS 10.15, iOS 13.0, tvOS 13.0, watchOS 6.0, *)
class ResnetV2Input : MLFeatureProvider {

  /// input as 1 × 9 × 200 3-dimensional array of floats
  var input: MLMultiArray

  /// step_numbers as 1 element vector of floats
  var step_numbers: MLMultiArray

  var featureNames: Set<String> {
    get {
      return ["input", "step_numbers"]
    }
  }

  func featureValue(for featureName: String) -> MLFeatureValue? {
    if (featureName == "input") {
      return MLFeatureValue(multiArray: input)
    }
    if (featureName == "step_numbers") {
      return MLFeatureValue(multiArray: step_numbers)
    }
    return nil
  }

  init(input: MLMultiArray, step_numbers: MLMultiArray) {
    self.input = input
    self.step_numbers = step_numbers
  }

  @available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
  convenience init(input: MLShapedArray<Float>, step_numbers: MLShapedArray<Float>) {
    self.init(input: MLMultiArray(input), step_numbers: MLMultiArray(step_numbers))
  }

}


/// Model Prediction Output Type
@available(macOS 10.15, iOS 13.0, tvOS 13.0, watchOS 6.0, *)
class ResnetV2Output : MLFeatureProvider {

  /// Source provided by CoreML
  private let provider : MLFeatureProvider

  /// output as multidimensional array of floats
  var output: MLMultiArray {
    return self.provider.featureValue(for: "output")!.multiArrayValue!
  }

  /// output as multidimensional array of floats
  @available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
  var outputShapedArray: MLShapedArray<Float> {
    return MLShapedArray<Float>(self.output)
  }

  var featureNames: Set<String> {
    return self.provider.featureNames
  }

  func featureValue(for featureName: String) -> MLFeatureValue? {
    return self.provider.featureValue(for: featureName)
  }

  init(output: MLMultiArray) {
    self.provider = try! MLDictionaryFeatureProvider(dictionary: ["output" : MLFeatureValue(multiArray: output)])
  }

  init(features: MLFeatureProvider) {
    self.provider = features
  }
}


/// Class for model loading and prediction
@available(macOS 10.15, iOS 13.0, tvOS 13.0, watchOS 6.0, *)
class ResnetV2 {
  let model: MLModel

  /// URL of model assuming it was installed in the same bundle as this class
  class var urlOfModelInThisBundle : URL {
    let bundle = Bundle(for: self)
    return bundle.url(forResource: "ResnetV2", withExtension:"mlmodelc")!
  }

  /**
   Construct ResnetV2 instance with an existing MLModel object.

   Usually the application does not use this initializer unless it makes a subclass of ResnetV2.
   Such application may want to use `MLModel(contentsOfURL:configuration:)` and `ResnetV2.urlOfModelInThisBundle` to create a MLModel object to pass-in.

   - parameters:
   - model: MLModel object
   */
  init(model: MLModel) {
    self.model = model
  }

  /**
   Construct ResnetV2 instance by automatically loading the model from the app's bundle.
   */
  @available(*, deprecated, message: "Use init(configuration:) instead and handle errors appropriately.")
  convenience init() {
    try! self.init(contentsOf: type(of:self).urlOfModelInThisBundle)
  }

  /**
   Construct a model with configuration

   - parameters:
   - configuration: the desired model configuration

   - throws: an NSError object that describes the problem
   */
  convenience init(configuration: MLModelConfiguration) throws {
    try self.init(contentsOf: type(of:self).urlOfModelInThisBundle, configuration: configuration)
  }

  /**
   Construct ResnetV2 instance with explicit path to mlmodelc file
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
   Construct ResnetV2 instance asynchronously with optional configuration.

   Model loading may take time when the model content is not immediately available (e.g. encrypted model). Use this factory method especially when the caller is on the main thread.

   - parameters:
   - configuration: the desired model configuration
   - handler: the completion handler to be called when the model loading completes successfully or unsuccessfully
   */
  @available(macOS 11.0, iOS 14.0, tvOS 14.0, watchOS 7.0, *)
  class func load(configuration: MLModelConfiguration = MLModelConfiguration(), completionHandler handler: @escaping (Swift.Result<ResnetV2, Error>) -> Void) {
    return self.load(contentsOf: self.urlOfModelInThisBundle, configuration: configuration, completionHandler: handler)
  }

  /**
   Construct ResnetV2 instance asynchronously with optional configuration.

   Model loading may take time when the model content is not immediately available (e.g. encrypted model). Use this factory method especially when the caller is on the main thread.

   - parameters:
   - configuration: the desired model configuration
   */
  @available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
  class func load(configuration: MLModelConfiguration = MLModelConfiguration()) async throws -> ResnetV2 {
    return try await self.load(contentsOf: self.urlOfModelInThisBundle, configuration: configuration)
  }

  /**
   Construct ResnetV2 instance asynchronously with URL of the .mlmodelc directory with optional configuration.

   Model loading may take time when the model content is not immediately available (e.g. encrypted model). Use this factory method especially when the caller is on the main thread.

   - parameters:
   - modelURL: the URL to the model
   - configuration: the desired model configuration
   - handler: the completion handler to be called when the model loading completes successfully or unsuccessfully
   */
  @available(macOS 11.0, iOS 14.0, tvOS 14.0, watchOS 7.0, *)
  class func load(contentsOf modelURL: URL, configuration: MLModelConfiguration = MLModelConfiguration(), completionHandler handler: @escaping (Swift.Result<ResnetV2, Error>) -> Void) {
    MLModel.load(contentsOf: modelURL, configuration: configuration) { result in
      switch result {
      case .failure(let error):
        handler(.failure(error))
      case .success(let model):
        handler(.success(ResnetV2(model: model)))
      }
    }
  }

  /**
   Construct ResnetV2 instance asynchronously with URL of the .mlmodelc directory with optional configuration.

   Model loading may take time when the model content is not immediately available (e.g. encrypted model). Use this factory method especially when the caller is on the main thread.

   - parameters:
   - modelURL: the URL to the model
   - configuration: the desired model configuration
   */
  @available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
  class func load(contentsOf modelURL: URL, configuration: MLModelConfiguration = MLModelConfiguration()) async throws -> ResnetV2 {
    let model = try await MLModel.load(contentsOf: modelURL, configuration: configuration)
    return ResnetV2(model: model)
  }

  /**
   Make a prediction using the structured interface

   - parameters:
   - input: the input to the prediction as ResnetV2Input

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as ResnetV2Output
   */
  func prediction(input: ResnetV2Input) throws -> ResnetV2Output {
    return try self.prediction(input: input, options: MLPredictionOptions())
  }

  /**
   Make a prediction using the structured interface

   - parameters:
   - input: the input to the prediction as ResnetV2Input
   - options: prediction options

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as ResnetV2Output
   */
  func prediction(input: ResnetV2Input, options: MLPredictionOptions) throws -> ResnetV2Output {
    let outFeatures = try model.prediction(from: input, options:options)
    return ResnetV2Output(features: outFeatures)
  }

  /**
   Make an asynchronous prediction using the structured interface

   - parameters:
   - input: the input to the prediction as ResnetV2Input
   - options: prediction options

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as ResnetV2Output
   */
  @available(macOS 14.0, iOS 17.0, tvOS 17.0, watchOS 10.0, *)
  func prediction(input: ResnetV2Input, options: MLPredictionOptions = MLPredictionOptions()) async throws -> ResnetV2Output {
    let outFeatures = try await model.prediction(from: input, options:options)
    return ResnetV2Output(features: outFeatures)
  }

  /**
   Make a prediction using the convenience interface

   - parameters:
   - input as 1 × 9 × 200 3-dimensional array of floats
   - step_numbers as 1 element vector of floats

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as ResnetV2Output
   */
  func prediction(input: MLMultiArray, step_numbers: MLMultiArray) throws -> ResnetV2Output {
    let input_ = ResnetV2Input(input: input, step_numbers: step_numbers)
    return try self.prediction(input: input_)
  }

  /**
   Make a prediction using the convenience interface

   - parameters:
   - input as 1 × 9 × 200 3-dimensional array of floats
   - step_numbers as 1 element vector of floats

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as ResnetV2Output
   */

  @available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
  func prediction(input: MLShapedArray<Float>, step_numbers: MLShapedArray<Float>) throws -> ResnetV2Output {
    let input_ = ResnetV2Input(input: input, step_numbers: step_numbers)
    return try self.prediction(input: input_)
  }

  /**
   Make a batch prediction using the structured interface

   - parameters:
   - inputs: the inputs to the prediction as [ResnetV2Input]
   - options: prediction options

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as [ResnetV2Output]
   */
  func predictions(inputs: [ResnetV2Input], options: MLPredictionOptions = MLPredictionOptions()) throws -> [ResnetV2Output] {
    let batchIn = MLArrayBatchProvider(array: inputs)
    let batchOut = try model.predictions(from: batchIn, options: options)
    var results : [ResnetV2Output] = []
    results.reserveCapacity(inputs.count)
    for i in 0..<batchOut.count {
      let outProvider = batchOut.features(at: i)
      let result =  ResnetV2Output(features: outProvider)
      results.append(result)
    }
    return results
  }
}
