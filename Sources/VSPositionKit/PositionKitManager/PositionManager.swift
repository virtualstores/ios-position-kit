//
// PositionManager
// VSPositionKit
//
// Created by Hripsime on 2021-12-14
// Copyright Virtual Stores - 2021
//

import Foundation
import Combine
import VSSensorFusion
import VSSensorInterpreter
import VSFoundation
import VSEngineWrapper

final public class PositionManager: PositionKit {
    public var positionPublisher: CurrentValueSubject<PositionData?, PositionKitError>  = .init(nil)
    public var stepCountPublisher: CurrentValueSubject<Int, PositionKitError>  = .init(0)
    public var allPackagesAreInitiated: CurrentValueSubject<Bool?, PositionKitError> = .init(nil)
    
    private var stepCount = 0
    private let sensor: SensorManager
    private var interpreter: StepDetectorStateMachine?
    private var engineWrapper: EngineWrapperManager
    
    private let backgroundAccess: BackgroundAccessManager
    
    private var cancellable: AnyCancellable?
    
    public init() {
        sensor = SensorManager()
        engineWrapper = EngineWrapperManager()
        backgroundAccess = BackgroundAccessManager()
    }

    public func start() throws {
        interpreter = StepDetectorStateMachine(delegate: self)
        interpreter?.initStates()

        cancellable = sensor.sensorPublisher
            .compactMap { $0 }
            .sink { _ in
                self.positionPublisher.send(completion: .failure(PositionKitError.noData))
        } receiveValue: { data in
            self.interpreter?.input(motionSensorData: data)
        }

        try sensor.start()
        
    }

    public func stop() {
        stepCount = 0
        sensor.stop()
        cancellable?.cancel()
    }
    
    public func setBackgroundAccess(isActive: Bool) {
        isActive ? backgroundAccess.activate() : backgroundAccess.deactivate()
    }
    
    /// Temporary step setup methode which will be used from old app
    public func setupMapFenceFromJson(with path: String) {
        engineWrapper.setupMapFenceFromJson(with: path)
    }
    
    public func setupMapFence(with data: MapFence) {
        engineWrapper.setupMapFence(with: data)
    }

    deinit {
        stop()
    }
}

// MARK: IStepDetectorStateMachineDelegate
extension PositionManager: IStepDetectorStateMachineDelegate {
    public func onProcessed(step: StepData) {
        stepCount = stepCount + 1
        stepCountPublisher.send(stepCount)
    
        setupEngineWrapper(with: step)
    }

    public func onSensorsInitiated(currentTime: Int) { }
}

//MARK: Private helpers
private extension PositionManager {
    func setupEngineWrapper(with step: StepData) {
        //let engineWrapperStep = EngineWrapperStepData()
        //engineWrapper.update(with: engineWrapperStep)
    }
}
