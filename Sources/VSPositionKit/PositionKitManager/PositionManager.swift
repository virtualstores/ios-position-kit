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

public class PositionManager: PositionKit {
    public var positionPublisher: CurrentValueSubject<PositionData?, PositionError>  = .init(nil)
    
    public var activateBackgroundAccess: Bool? {
        didSet {
            activateBackgroundAccess == true ? backgroundAccess.activate() : backgroundAccess.deactivate()
        }
    }
    
    private let sensor: SensorManager
    private let backgroundAccess: BackgroundAccessManager
    private var interpreter: StepDetectorStateMachine?
    private var cancellable: AnyCancellable?
    
    public init(){
        sensor = SensorManager()
        backgroundAccess = BackgroundAccessManager()
    }
        
    public func start() throws {
        interpreter = StepDetectorStateMachine(delegate: self)
        interpreter?.initStates()

        cancellable = sensor.sensorPublisher
            .compactMap { $0 }
            .sink { error in
                self.positionPublisher.send(completion: .failure(PositionError.noData))
        } receiveValue: { data in
            self.interpreter?.input(motionSensorData: data)
        }
        
        try sensor.start()
    }
    
    public func stop(){
        sensor.stop()
        cancellable?.cancel()
    }
    
    deinit {
        cancellable?.cancel()
    }
}

//MARK: IStepDetectorStateMachineDelegate
extension PositionManager: IStepDetectorStateMachineDelegate {
    public func onProcessed(step: StepData) { }
    
    public func onSensorsInitiated(currentTime: Int) { }
}
