//
// NorthPredictorAnomalyIndoorPioneer.swift
//
// This file was automatically generated and should not be edited.
//

import CoreML


/// Model Prediction Input Type
@available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, visionOS 1.0, *)
class NPInput : MLFeatureProvider {

  /// x as 1 × 6 × 100 3-dimensional array of floats
  var x: MLMultiArray

  var featureNames: Set<String> { ["x"] }

  func featureValue(for featureName: String) -> MLFeatureValue? {
    if featureName == "x" {
      return MLFeatureValue(multiArray: x)
    }
    return nil
  }

  init(x: MLMultiArray) {
    self.x = x
  }

  convenience init(x: MLShapedArray<Float>) {
    self.init(x: MLMultiArray(x))
  }
}

/// Model Prediction Output Type
@available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, visionOS 1.0, *)
class NPOutput : MLFeatureProvider {

  /// Source provided by CoreML
  private let provider : MLFeatureProvider

  /// y as multidimensional array of floats
  var y: MLMultiArray {
    provider.featureValue(for: "y")!.multiArrayValue!
  }

  /// y as multidimensional array of floats
  var yShapedArray: MLShapedArray<Float> {
    MLShapedArray<Float>(y)
  }

  var featureNames: Set<String> {
    provider.featureNames
  }

  func featureValue(for featureName: String) -> MLFeatureValue? {
    provider.featureValue(for: featureName)
  }

  init(y: MLMultiArray) {
    self.provider = try! MLDictionaryFeatureProvider(dictionary: ["y" : MLFeatureValue(multiArray: y)])
  }

  init(features: MLFeatureProvider) {
    self.provider = features
  }
}

/// Class for model loading and prediction
@available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, visionOS 1.0, *)
class NPResnet {
  let model: MLModel

  /// URL of model assuming it was installed in the same bundle as this class
  class var urlOfModelInThisBundle : URL {
    let bundle = Bundle(for: self)
    return bundle.url(forResource: "NorthPredictorAnomalyIndoorPioneer", withExtension:"mlmodelc")!
  }

  /**
   Construct NorthPredictorAnomalyIndoorPioneer instance with an existing MLModel object.

   Usually the application does not use this initializer unless it makes a subclass of NorthPredictorAnomalyIndoorPioneer.
   Such application may want to use `MLModel(contentsOfURL:configuration:)` and `NorthPredictorAnomalyIndoorPioneer.urlOfModelInThisBundle` to create a MLModel object to pass-in.

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
   Construct NorthPredictorAnomalyIndoorPioneer instance with explicit path to mlmodelc file
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
   Construct NorthPredictorAnomalyIndoorPioneer instance asynchronously with optional configuration.

   Model loading may take time when the model content is not immediately available (e.g. encrypted model). Use this factory method especially when the caller is on the main thread.

   - parameters:
   - configuration: the desired model configuration
   - handler: the completion handler to be called when the model loading completes successfully or unsuccessfully
   */
  class func load(configuration: MLModelConfiguration = MLModelConfiguration(), completionHandler handler: @escaping (Swift.Result<NPResnet, Error>) -> Void) {
    load(contentsOf: self.urlOfModelInThisBundle, configuration: configuration, completionHandler: handler)
  }

  /**
   Construct NorthPredictorAnomalyIndoorPioneer instance asynchronously with optional configuration.

   Model loading may take time when the model content is not immediately available (e.g. encrypted model). Use this factory method especially when the caller is on the main thread.

   - parameters:
   - configuration: the desired model configuration
   */
  class func load(configuration: MLModelConfiguration = MLModelConfiguration()) async throws -> NPResnet {
    try await load(contentsOf: self.urlOfModelInThisBundle, configuration: configuration)
  }

  /**
   Construct NorthPredictorAnomalyIndoorPioneer instance asynchronously with URL of the .mlmodelc directory with optional configuration.

   Model loading may take time when the model content is not immediately available (e.g. encrypted model). Use this factory method especially when the caller is on the main thread.

   - parameters:
   - modelURL: the URL to the model
   - configuration: the desired model configuration
   - handler: the completion handler to be called when the model loading completes successfully or unsuccessfully
   */
  class func load(contentsOf modelURL: URL, configuration: MLModelConfiguration = MLModelConfiguration(), completionHandler handler: @escaping (Swift.Result<NPResnet, Error>) -> Void) {
    MLModel.load(contentsOf: modelURL, configuration: configuration) { result in
      switch result {
      case .failure(let error):
        handler(.failure(error))
      case .success(let model):
        handler(.success(NPResnet(model: model)))
      }
    }
  }

  /**
   Construct NorthPredictorAnomalyIndoorPioneer instance asynchronously with URL of the .mlmodelc directory with optional configuration.

   Model loading may take time when the model content is not immediately available (e.g. encrypted model). Use this factory method especially when the caller is on the main thread.

   - parameters:
   - modelURL: the URL to the model
   - configuration: the desired model configuration
   */
  class func load(contentsOf modelURL: URL, configuration: MLModelConfiguration = MLModelConfiguration()) async throws -> NPResnet {
    let model = try await MLModel.load(contentsOf: modelURL, configuration: configuration)
    return NPResnet(model: model)
  }

  /**
   Make a prediction using the structured interface

   It uses the default function if the model has multiple functions.

   - parameters:
   - input: the input to the prediction as NorthPredictorAnomalyIndoorPioneerInput

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as NorthPredictorAnomalyIndoorPioneerOutput
   */
  func prediction(input: NPInput) throws -> NPOutput {
    try prediction(input: input, options: MLPredictionOptions())
  }

  /**
   Make a prediction using the structured interface

   It uses the default function if the model has multiple functions.

   - parameters:
   - input: the input to the prediction as NorthPredictorAnomalyIndoorPioneerInput
   - options: prediction options

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as NorthPredictorAnomalyIndoorPioneerOutput
   */
  func prediction(input: NPInput, options: MLPredictionOptions) throws -> NPOutput {
    let outFeatures = try model.prediction(from: input, options: options)
    return NPOutput(features: outFeatures)
  }

  /**
   Make an asynchronous prediction using the structured interface

   It uses the default function if the model has multiple functions.

   - parameters:
   - input: the input to the prediction as NorthPredictorAnomalyIndoorPioneerInput
   - options: prediction options

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as NorthPredictorAnomalyIndoorPioneerOutput
   */
  @available(macOS 14.0, iOS 17.0, tvOS 17.0, watchOS 10.0, visionOS 1.0, *)
  func prediction(input: NPInput, options: MLPredictionOptions = MLPredictionOptions()) async throws -> NPOutput {
    let outFeatures = try await model.prediction(from: input, options: options)
    return NPOutput(features: outFeatures)
  }

  /**
   Make a prediction using the convenience interface

   It uses the default function if the model has multiple functions.

   - parameters:
   - x: 1 × 6 × 100 3-dimensional array of floats

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as NorthPredictorAnomalyIndoorPioneerOutput
   */
  func prediction(x: MLMultiArray) throws -> NPOutput {
    let input_ = NPInput(x: x)
    return try prediction(input: input_)
  }

  /**
   Make a prediction using the convenience interface

   It uses the default function if the model has multiple functions.

   - parameters:
   - x: 1 × 6 × 100 3-dimensional array of floats

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as NorthPredictorAnomalyIndoorPioneerOutput
   */

  func prediction(x: MLShapedArray<Float>) throws -> NPOutput {
    let input_ = NPInput(x: x)
    return try prediction(input: input_)
  }

  /**
   Make a batch prediction using the structured interface

   It uses the default function if the model has multiple functions.

   - parameters:
   - inputs: the inputs to the prediction as [NorthPredictorAnomalyIndoorPioneerInput]
   - options: prediction options

   - throws: an NSError object that describes the problem

   - returns: the result of the prediction as [NorthPredictorAnomalyIndoorPioneerOutput]
   */
  func predictions(inputs: [NPInput], options: MLPredictionOptions = MLPredictionOptions()) throws -> [NPOutput] {
    let batchIn = MLArrayBatchProvider(array: inputs)
    let batchOut = try model.predictions(from: batchIn, options: options)
    var results : [NPOutput] = []
    results.reserveCapacity(inputs.count)
    for i in 0..<batchOut.count {
      let outProvider = batchOut.features(at: i)
      let result =  NPOutput(features: outProvider)
      results.append(result)
    }
    return results
  }
}
