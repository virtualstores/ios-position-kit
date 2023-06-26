//
// VPSReplayInteractor
// VSTT2
//
// Created by Hripsime on 2022-01-31.
// Copyright Virtual Stores - 2021

import Foundation
import vps
import Combine
import VSFoundation

public final class VPSRecorder {
  public var dataPublisher: CurrentValueSubject<(identifier: String, data: String, sessionId: String, lastFile: Bool)?, Never> = .init(nil)

  private var replayRecorder: ReplayV1Recorder!
  let defaultSessionId = "Undefined"
  let serialDispatch = DispatchQueue(label: "TT2VPSRECORDERSERIAL")
  var sessionId: String { replayRecorder.sessionId }
  var isRecording: Bool {
    //serialDispatch.async {
      replayRecorder.isRecording
    //}
  }

  init(maxRecordingTimePerPartInMillis: Int64?) {
    replayRecorder = ReplayV1Recorder(uploader: self, recordingPartInterval: maxRecordingTimePerPartInMillis?.asKotlinLong)
  }

  func set(sessionId: String) {
    serialDispatch.async {
      self.replayRecorder.sessionId = sessionId
    }
  }

  func startRecording(sessionId: String?) {
    print("VPSRECORDERIOS", "START RECORDING")
    serialDispatch.async {
      self.replayRecorder.startRecording(
        sessionId: sessionId ?? self.defaultSessionId,
        startNanoTimestamp: .nanoTime,
        startSystemTimeStamp: .currentTimeMillis
      )
    }
  }

  func stopRecording() {
    print("VPSRECORDERIOS", "STOP RECORDING")
    serialDispatch.async {
      self.replayRecorder.stopRecording(
        stopNanoTimestamp: .nanoTime,
        stopSystemTimeStamp: .currentTimeMillis
      )
    }
  }

  func record(inputSignal: InputSignal) {
    switch inputSignal.type {
    case .start: print("VPSRECORDERIOS", "RECORD INPUTSIGNAL", "START")
    case .exit: print("VPSRECORDERIOS", "RECORD INPUTSIGNAL", "EXIT")
    default: break
    }
    serialDispatch.async {
      self.replayRecorder.onInputSignal(signal: inputSignal)
    }
  }

  func reset() {
    print("VPSRECORDERIOS", "RESET")
    serialDispatch.async {
      self.replayRecorder.dispose()
    }
  }
}

extension VPSRecorder: Uploader {
  public func onPartialUpload(dataPackage: PartitionRecorderDataPackage) {
    dataPublisher.send((dataPackage.identifier, dataPackage.data, sessionId, false))
  }

  public func onEndUpload(dataPackage: PartitionRecorderDataPackage) {
    dataPublisher.send((dataPackage.identifier, dataPackage.data, sessionId, true))
    reset()
  }
}

extension Int64 {
  var asKotlinLong: KotlinLong { KotlinLong(value: self) }
}
