//
// VPSReplayInteractor
// VSTT2
//
// Created by Hripsime on 2022-01-31.
// Copyright Virtual Stores - 2021

import Foundation
import vps
import Combine
import UIKit
import VSFoundation

final class VPSRecorder: Disposable {
  var inputPublisher: CurrentValueSubject<(identifier: String, data: String, sessionId: String, lastFile: Bool)?, Never> { inputRecorder.dataPublisher }
  var outputPublisher: CurrentValueSubject<(identifier: String, data: String, sessionId: String, lastFile: Bool)?, Never> { outputRecorder.dataPublisher }

  private let tag = "VPSRecorder"
  private let inputRecorder: VPSInputRecorder
  private let outputRecorder: VPSOutputRecorder

  init(maxRecordingTimePerPartInMillis: Int64?, storeId: Int64) {
    self.inputRecorder = .init(maxRecordingTimePerPartInMillis: maxRecordingTimePerPartInMillis)
    self.outputRecorder = .init(storeId: storeId)
  }

  deinit {
    Logger(verbosity: .info).log(tag: tag, message: "deinit")
    dispose()
  }

  func dispose() {
    Logger(verbosity: .info).log(tag: tag, message: "dispose")
    inputRecorder.dispose()
    outputRecorder.dispose()
  }

  func set(sessionId: String) {
    inputRecorder.set(sessionId: sessionId)
    outputRecorder.set(sessionId: sessionId)
  }

  func startInputRecording(sessionId: String?) {
    inputRecorder.startRecording(sessionId: sessionId)
  }

  func startOutputRecording(sessionId: String?) {
    outputRecorder.startRecording(sessionId: sessionId)
  }

  func stopRecording() {
    inputRecorder.stopRecording()
    outputRecorder.stopRecording()
  }

  func record(signal: InputSignal) {
    inputRecorder.record(inputSignal: signal)
  }

  func record(signal: OutputSignal) {
    outputRecorder.record(signal: signal)
  }
}

fileprivate final class VPSInputRecorder: Disposable {
  var dataPublisher: CurrentValueSubject<(identifier: String, data: String, sessionId: String, lastFile: Bool)?, Never> = .init(nil)

  private let tag = "VPSInputRecorder"
  private var replayRecorder: ReplayV1Recorder?
  private let defaultSessionId = "Undefined"
  private let serialDispatch = DispatchQueue(label: "TT2VPSINPUTRECORDERSERIAL")
  private var sessionId: String { replayRecorder?.sessionId ?? defaultSessionId }
  private var isRecording: Bool { replayRecorder?.isRecording ?? false }
  private var hasRecorded = false

  init(maxRecordingTimePerPartInMillis: Int64?) {
    replayRecorder = ReplayV1Recorder(
      uploader: self,
      recordingPartInterval: maxRecordingTimePerPartInMillis?.asKotlinLong,
      packageOption: .jsonString
    )
  }

  deinit {
    Logger(verbosity: .info).log(tag: tag, message: "deinit")
    dispose()
  }

  func dispose() {
    Logger(verbosity: .info).log(tag: tag, message: "dispose")
    replayRecorder?.dispose()
    replayRecorder = nil
  }

  func set(sessionId: String) {
    serialDispatch.async {
      //pthread_setname_np("VPSRecorder")
      self.replayRecorder?.sessionId = sessionId
    }
  }

  func startRecording(sessionId: String?) {
    guard !isRecording else { return }
    //print(tag, "START RECORDING")
    serialDispatch.async {
      //pthread_setname_np("VPSRecorder")
      self.replayRecorder?.startRecording(
        sessionId: sessionId ?? self.defaultSessionId,
        startNanoTimestamp: .nanoTime,
        startSystemTimeStamp: .currentTimeMillis
      )
      self.hasRecorded = true
    }
  }

  func stopRecording() {
    guard isRecording else { return }
    //print(tag, "STOP RECORDING")
    serialDispatch.async {
      //pthread_setname_np("VPSRecorder")
      self.replayRecorder?.stopRecording(
        stopNanoTimestamp: .nanoTime,
        stopSystemTimeStamp: .currentTimeMillis
      )
    }
  }

  func record(inputSignal: InputSignal) {
    //switch inputSignal.type {
    //case .start: print(tag, "RECORD INPUTSIGNAL", "START")
    //case .exit: print(tag, "RECORD INPUTSIGNAL", "EXIT")
    //default: break
    //}
    serialDispatch.async {
      //pthread_setname_np("VPSRecorder")
      guard self.isRecording else { return }
      self.replayRecorder?.onInputSignal(signal: inputSignal)
    }
  }

  private func reset() {
    //print("VPSRECORDERIOS", "RESET")
    serialDispatch.async {
      //pthread_setname_np("VPSRecorder")
      self.hasRecorded = false
      self.dataPublisher.send(nil)
    }
  }
}

extension VPSInputRecorder: Uploader {
  func onPartialUpload(dataPackage: PartitionRecorderDataPackage<AnyObject>) {
    guard isRecording, let data = dataPackage.dataAsJSONString else { return }
    dataPublisher.send((dataPackage.identifier, data, sessionId, false))
  }

  func onEndUpload(dataPackage: PartitionRecorderDataPackage<AnyObject>) {
    guard hasRecorded, let data = dataPackage.dataAsJSONString else { return }
    dataPublisher.send((dataPackage.identifier, data, sessionId, true))
    reset()
  }
}

extension Int64 {
  var asKotlinLong: KotlinLong { KotlinLong(value: self) }
}

fileprivate final class VPSOutputRecorder: Disposable {
  var dataPublisher: CurrentValueSubject<(identifier: String, data: String, sessionId: String, lastFile: Bool)?, Never> = .init(nil)
  private let tag = "VPSRecorderOutput"
  private var replayRecorder: MagMapDataRecorderV1?
  private let defaultSessionId = "Undefined"
  private let serialDispatch = DispatchQueue(label: "TT2VPSOUTPUTRECORDERSERIAL")
  private var hasRecorded = false
  private var sessionId: String { replayRecorder?.sessionId ?? defaultSessionId }
  private var isRecording: Bool { replayRecorder?.isRecording ?? false }

  init(maxRecordingTimePerPartInMillis: Int64 = 120000, storeId: Int64) {
    replayRecorder = .init(
      uploader: self,
      recordingPartInterval: maxRecordingTimePerPartInMillis,
      packageOption: .jsonString,
      description: "",
      venueId: storeId.description,
      deviceModel: UIDevice.current.modelName
    )
  }

  deinit {
    Logger(verbosity: .info).log(tag: tag, message: "deinit")
    dispose()
  }

  func dispose() {
    Logger(verbosity: .info).log(tag: tag, message: "dispose")
    replayRecorder?.dispose()
    replayRecorder = nil
  }

  func set(sessionId: String) {
    serialDispatch.async {
      self.replayRecorder?.sessionId = sessionId
    }
  }

  func startRecording(sessionId: String?) {
    guard !isRecording else { return }
    serialDispatch.async {
      self.replayRecorder?.startRecording(
        sessionId: sessionId ?? self.defaultSessionId,
        startNanoTimestamp: .nanoTime,
        startSystemTimeStamp: .currentTimeMillis
      )
      self.hasRecorded = true
    }
  }

  func stopRecording() {
    guard isRecording else { return }
    serialDispatch.async {
      self.replayRecorder?.stopRecording(
        stopNanoTimestamp: .nanoTime,
        stopSystemTimeStamp: .currentTimeMillis
      )
    }
  }

  func record(signal: OutputSignal) {
    serialDispatch.async {
      guard self.isRecording else { return }
      self.replayRecorder?.onOutputSignal(signal: signal)
    }
  }

  private func reset() {
    serialDispatch.async {
      self.hasRecorded = false
      self.dataPublisher.send(nil)
    }
  }
}

extension VPSOutputRecorder: Uploader {
  func onPartialUpload(dataPackage: PartitionRecorderDataPackage<AnyObject>) {
    guard isRecording, let data = dataPackage.dataAsJSONString else { return }
    dataPublisher.send((dataPackage.identifier, data, sessionId, false))
  }

  func onEndUpload(dataPackage: PartitionRecorderDataPackage<AnyObject>) {
    guard hasRecorded, let data = dataPackage.dataAsJSONString else { return }
    dataPublisher.send((dataPackage.identifier, data, sessionId, true))
    reset()
  }
}
