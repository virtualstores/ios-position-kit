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
    public var stepCountPublisher: CurrentValueSubject<Int, Never>  = .init(0)
    public var allPackagesAreInitiated: CurrentValueSubject<Bool?, PositionKitError> = .init(nil)

    private let context = Context(PositionKitConfig())
    private var stepCount = 0
    private var interpreter: StepDetectorStateMachine?
    private var engineWrapper: EngineWrapperManager?
    private var cancellable: AnyCancellable?
    
    @Inject var backgroundAccess: BackgroundAccessManager
    @Inject var sensor: SensorManager
    
    public init() {}
    
    public func setupMapFence(with mapData: MapFence) throws {
        engineWrapper = EngineWrapperManager(mapData: mapData)
        try engineWrapper?.startEngine()
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
            self.engineWrapper?.setupTime(with: Int64(data.timestampSensor))
        }

        try sensor.start()
    }

    public func stop() {
        stepCount = 0
        sensor.stop()
        engineWrapper?.stopEngine()
        cancellable?.cancel()
    }

    public func setBackgroundAccess(isActive: Bool) {
        isActive ? backgroundAccess.activate() : backgroundAccess.deactivate()
    }

    /// Temporary step setup methode which will be used from old app
    public func setupMapFenceFromJson(with path: String) {
        engineWrapper?.setupMapFenceFromJson(with: path)
    }
    
    public func startNavigation(with direction: Double, xPosition: Double, yPosition: Double) {
        engineWrapper?.setPosition(x: xPosition, y: yPosition, angle: direction)
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

// MARK: Private helpers
private extension PositionManager {
    func setupEngineWrapper(with step: StepData) {
        guard let speed = step.speed?.asFloat else { return }
        
        let engineWrapperStepData = WrapperStepData(speed: speed, direction: step.direction!, duration: Int64(step.duration), currentTime: Int64(step.timestamp), orientation: step.orientation)
        engineWrapper?.update(with: engineWrapperStepData)
    }
}
