//
// VPSReplayInteractor
// VSTT2
//
// Created by Hripsime on 2022-01-31.
// Copyright Virtual Stores - 2021

import Foundation
import VSPositionKit
import Combine
import VSFoundation

public final class VPSReplayInteractor: IQPSReplayInteractor {
    public var maxRecordingTimePerPartInMillis: Int64 { 1 * 60 * 1000 }

    public var replayInteractorDataPublisher: CurrentValueSubject<(String, String)?, Never> = .init(nil)
    public var replayInteractorDataPublisherPartial: CurrentValueSubject<(String, String)?, Never> = .init(nil)
    public var replayInteractorDataPublisherEnd: CurrentValueSubject<(String, String)?, Never> = .init(nil)

    public func getData(identifier: String, printMissingFileException: Bool) -> String? {
        return ""
    }

    public func postData(data: String, identifier: String) {
        replayInteractorDataPublisher.send((identifier, data))
    }

    public func postPartialData(data: String, identifier: String) {
      replayInteractorDataPublisherPartial.send((identifier, data))
    }

    public func postEndData(data: String, identifier: String) {
      replayInteractorDataPublisherEnd.send((identifier, data))
    }
}
