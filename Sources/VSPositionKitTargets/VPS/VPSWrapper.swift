//
// VPSWrapper
// VSPositionKit
//
// Created by Hripsime on 2021-12-28
// Copyright Virtual Stores - 2021
//

import Foundation
import VSFoundation
import CoreGraphics
import Combine

protocol VPSWrapper {
    /// Publishes all recorded data
    var recordingPublisher: CurrentValueSubject<(identifier: String, data: String, sessionId: String, lastFile: Bool)?, Never> { get }

    /// Publishes output signals from VPS
    var outputSignalPublisher: CurrentValueSubject<VPSOutputSignal?, Never> { get }

    /// Starts the vps
    func start()

    /// Stop the vps
    func stop()

    /// Start navigation setup methode
    func startNavigation(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool)

    /// Set position change  methode
    func setPosition(positions: [CGPoint], syncPosition: Bool, syncAngle: Bool, angle: Double, uncertainAngle: Bool)

    /// Start recording for vps
    func startRecording(sessionId: String?)

    /// Stop recording for vps
    func stopRecording()

    /// Provide device start angle
    func prepareAngle()
}

public enum VPSWrapperError: Error {
    case noData
}
