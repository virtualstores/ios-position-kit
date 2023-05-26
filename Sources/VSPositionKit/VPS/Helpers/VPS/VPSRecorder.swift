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
  var sessionId: String { replayRecorder.sessionId }
  var isRecording: Bool { replayRecorder.isRecording }

  init(maxRecordingTimePerPartInMillis: Int64?) {
    replayRecorder = ReplayV1Recorder(uploader: self, recordingPartInterval: maxRecordingTimePerPartInMillis?.asKotlinLong)
  }

  func set(sessionId: String) {
    replayRecorder.sessionId = sessionId
  }

  func startRecording(sessionId: String?) {
    replayRecorder.startRecording(
      sessionId: sessionId ?? defaultSessionId,
      startNanoTimestamp: .nanoTime,
      startSystemTimeStamp: .currentTimeMillis
    )
  }

  func stopRecording() {
    replayRecorder.stopRecording(
      stopNanoTimestamp: .nanoTime,
      stopSystemTimeStamp: .currentTimeMillis
    )
  }

  func record(inputSignal: InputSignal) {
    replayRecorder.onInputSignal(signal: inputSignal)
  }

  func reset() {
    replayRecorder.dispose()
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
