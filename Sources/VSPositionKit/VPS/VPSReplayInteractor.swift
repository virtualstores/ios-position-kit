//
// VPSReplayInteractor
// VSTT2
//
// Created by Hripsime on 2022-01-31.
// Copyright Virtual Stores - 2021

import Foundation
import qps
import Combine

public class VPSReplayInteractor: IQPSReplayInteractor {
    public var replayInteractorDataPublisher: CurrentValueSubject<(String?, String?), Never>?

    public func getData(identifier: String, printMissingFileException: Bool) -> String? {
        return ""
    }

    public func postData(data: String, identifier: String) {
        replayInteractorDataPublisher?.send((identifier, data))
    }
}
