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
  var isRecording: Bool { replayRecorder.isRecording }
  private var hasRecorded = false

  init(maxRecordingTimePerPartInMillis: Int64?) {
    replayRecorder = ReplayV1Recorder(uploader: self, recordingPartInterval: maxRecordingTimePerPartInMillis?.asKotlinLong)
  }

  func set(sessionId: String) {
    serialDispatch.async {
      //pthread_setname_np("VPSRecorder")
      self.replayRecorder.sessionId = sessionId
    }
  }

  func startRecording(sessionId: String?) {
    //print("VPSRECORDERIOS", "START RECORDING")
    serialDispatch.async {
      //pthread_setname_np("VPSRecorder")
      self.replayRecorder.startRecording(
        sessionId: sessionId ?? self.defaultSessionId,
        startNanoTimestamp: .nanoTime,
        startSystemTimeStamp: .currentTimeMillis
      )
      self.hasRecorded = true
    }
  }

  func stopRecording() {
    //print("VPSRECORDERIOS", "STOP RECORDING")
    serialDispatch.async {
      //pthread_setname_np("VPSRecorder")
      self.replayRecorder.stopRecording(
        stopNanoTimestamp: .nanoTime,
        stopSystemTimeStamp: .currentTimeMillis
      )
    }
  }

  func record(inputSignal: InputSignal) {
    //switch inputSignal.type {
    //case .start: print("VPSRECORDERIOS", "RECORD INPUTSIGNAL", "START")
    //case .exit: print("VPSRECORDERIOS", "RECORD INPUTSIGNAL", "EXIT")
    //default: break
    //}
    serialDispatch.async {
      //pthread_setname_np("VPSRecorder")
      guard self.isRecording else { return }
      self.replayRecorder.onInputSignal(signal: inputSignal)
    }
  }

  func reset() {
    //print("VPSRECORDERIOS", "RESET")
    serialDispatch.async {
      //pthread_setname_np("VPSRecorder")
      self.replayRecorder.dispose()
      self.hasRecorded = false
    }
  }
}

extension VPSRecorder: Uploader {
  public func onPartialUpload(dataPackage: PartitionRecorderDataPackage) {
    guard isRecording else { return }
    dataPublisher.send((dataPackage.identifier, dataPackage.data, sessionId, false))
  }

  public func onEndUpload(dataPackage: PartitionRecorderDataPackage) {
    guard hasRecorded else { return }
    dataPublisher.send((dataPackage.identifier, dataPackage.data, sessionId, true))
    reset()
  }
}

extension Int64 {
  var asKotlinLong: KotlinLong { KotlinLong(value: self) }
}
