//
// resnet.swift
//
// This file was automatically generated and should not be edited.
//

import CoreML


/// Model Prediction Input Type
@available(macOS 10.15, iOS 13.0, tvOS 13.0, watchOS 6.0, *)
class ResnetInput : MLFeatureProvider {

  /// input as 1 × 6 × 200 3-dimensional array of floats
  var input: MLMultiArray

  var featureNames: Set<String> { ["input"] }

  init(input: MLMultiArray) {
    self.input = input
  }

  @available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
  convenience init(input: MLShapedArray<Float>) {
    self.init(input: MLMultiArray(input))
  }

  func featureValue(for featureName: String) -> MLFeatureValue? {
    if (featureName == "input") {
      return MLFeatureValue(multiArray: input)
    }
    return nil
  }
}


/// Model Prediction Output Type
@available(macOS 10.15, iOS 13.0, tvOS 13.0, watchOS 6.0, *)
class ResnetOutput : MLFeatureProvider {

  /// Source provided by CoreML
  private let provider : MLFeatureProvider

  /// output as multidimensional array of floats
  var output: MLMultiArray { provider.featureValue(for: "output")!.multiArrayValue! }

  /// output as multidimensional array of floats
  @available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
  var outputShapedArray: MLShapedArray<Float> { MLShapedArray<Float>(self.output) }

  var featureNames: Set<String> { provider.featureNames }

  init(output: MLMultiArray) {
    provider = try! MLDictionaryFeatureProvider(dictionary: ["output" : MLFeatureValue(multiArray: output)])
  }

  init(features: MLFeatureProvider) {
    provider = features
  }

  func featureValue(for featureName: String) -> MLFeatureValue? {
    provider.featureValue(for: featureName)
  }
}


/// Class for model loading and prediction
@available(macOS 10.15, iOS 13.0, tvOS 13.0, watchOS 6.0, *)
class Resnet {
  let model: MLModel

  /// URL of model assuming it was installed in the same bundle as this class
  class var urlOfModelInThisBundle : URL {
    let bundle = Bundle(for: self)
    return bundle.url(forResource: "resnet", withExtension:"mlmodelc")!
  }

  /**
   Construct resnet instance with an existing MLModel object.

   Usually the application does not use this initializer unless it makes a subclass of resnet.
   Such application may want to use `MLModel(contentsOfURL:configuration:)` and `resnet.urlOfModelInThisBundle` to create a MLModel object to pass-in.

   - parameters:
   - model: MLModel object
   */
  init(model: MLModel) {
    self.model = model
  }

  /**
   Construct resnet instance by automatically loading the model from the app's bundle.
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
   Construct resnet instance with explicit path to mlmodelc file
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
   Construct resnet instance asynchronously with optional configuration.

   Model loading may take time when the model content is not immediately available (e.g. encrypted model). Use this factory method especially when the caller is on the main thread.

   - parameters:
   - configuration: the desired model configuration
   - handler: the completion handler to be called when the model loading completes successfully or unsuccessfully
   */
  @available(macOS 11.0, iOS 14.0, tvOS 14.0, watchOS 7.0, *)
  class func load(configuration: MLModelConfiguration = MLModelConfiguration(), completionHandler handler: @escaping (Swift.Result<Resnet, Error>) -> Void) {
    return self.load(contentsOf: self.urlOfModelInThisBundle, configuration: configuration, completionHandler: handler)
  }

  /**
   Construct resnet instance asynchronously with optional configuration.

   Model loading may take time when the model content is not immediately available (e.g. encrypted model). Use this factory method especially when the caller is on the main thread.

   - parameters:
   - configuration: the desired model configuration
   */
  @available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
  class func load(configuration: MLModelConfiguration = MLModelConfiguration()) async throws -> Resnet {
    return try await self.load(contentsOf: self.urlOfModelInThisBundle, configuration: configuration)
  }

  /**
   Construct resnet instance asynchronously with URL of the .mlmodelc directory with optional configuration.

   Model loading may take time when the model content is not immediately available (e.g. encrypted model). Use this factory method especially when the caller is on the main thread.

   - parameters:
   - modelURL: the URL to the model
   - configuration: the desired model configuration
   - handler: the completion handler to be called when the model loading completes successfully or unsuccessfully
   */
  @available(macOS 11.0, iOS 14.0, tvOS 14.0, watchOS 7.0, *)
  class func load(contentsOf modelURL: URL, configuration: MLModelConfiguration = MLModelConfiguration(), completionHandler handler: @escaping (Swift.Result<Resnet, Error>) -> Void) {
    MLModel.load(contentsOf: modelURL, configuration: configuration) { result in
      switch result {
      case .failure(let error):
        handler(.failure(error))
      case .success(let model):
        handler(.success(Resnet(model: model)))
      }
    }
  }

  /**
   Construct resnet instance asynchronously with URL of the .mlmodelc directory with optional configuration.

   Model loading may take time when the model content is not immediately available (e.g. encrypted model). Use this factory method especially when the caller is on the main thread.

   - parameters:
   - modelURL: the URL to the model
   - configuration: the desired model configuration
   */
  @available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
  class func load(contentsOf modelURL: URL, configuration: MLModelConfiguration = MLModelConfiguration()) async throws -> Resnet {
    let model = try await MLModel.load(contentsOf: modelURL, configuration: configuration)
    return Resnet(model: model)
  }

  /**
   Make a prediction using the structured interface

   - parameters:
   - input: the input to the prediction as resnetInput

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as resnetOutput
   */
  func prediction(input: ResnetInput) throws -> ResnetOutput {
    return try self.prediction(input: input, options: MLPredictionOptions())
  }

  /**
   Make a prediction using the structured interface

   - parameters:
   - input: the input to the prediction as resnetInput
   - options: prediction options

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as resnetOutput
   */
  func prediction(input: ResnetInput, options: MLPredictionOptions) throws -> ResnetOutput {
    let outFeatures = try model.prediction(from: input, options:options)
    return ResnetOutput(features: outFeatures)
  }

  /**
   Make a prediction using the convenience interface

   - parameters:
   - input as 1 × 6 × 200 3-dimensional array of floats

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as resnetOutput
   */
  func prediction(input: MLMultiArray) throws -> ResnetOutput {
    let input_ = ResnetInput(input: input)
    return try prediction(input: input_)
  }

  /**
   Make a prediction using the convenience interface

   - parameters:
   - input as 1 × 6 × 200 3-dimensional array of floats

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as resnetOutput
   */

  @available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
  func prediction(input: MLShapedArray<Float>) throws -> ResnetOutput {
    let input_ = ResnetInput(input: input)
    return try prediction(input: input_)
  }

  /**
   Make a batch prediction using the structured interface

   - parameters:
   - inputs: the inputs to the prediction as [resnetInput]
   - options: prediction options

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as [resnetOutput]
   */
  func predictions(inputs: [ResnetInput], options: MLPredictionOptions = MLPredictionOptions()) throws -> [ResnetOutput] {
    let batchIn = MLArrayBatchProvider(array: inputs)
    let batchOut = try model.predictions(from: batchIn, options: options)
    var results : [ResnetOutput] = []
    results.reserveCapacity(inputs.count)
    for i in 0..<batchOut.count {
      let outProvider = batchOut.features(at: i)
      let result = ResnetOutput(features: outProvider)
      results.append(result)
    }
    return results
  }
}
