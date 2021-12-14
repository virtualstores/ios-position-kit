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
    
    private let sensor = SensorManager()
    private let backgroundAccess = BackgroundAccessManager()
    private var interpreter: StepDetectorStateMachine?
    private var cancellable: AnyCancellable?
    
    public init(){}
        
    public func start() throws {
        try sensor.start()
        
        interpreter = StepDetectorStateMachine(delegate: self)
        interpreter?.initStates()

        cancellable = sensor.sensorPublisher.sink { error in
            print("error")
        } receiveValue: { [weak self] data in
            guard let self = self, let data = data else { return }

            self.interpreter?.input(motionSensorData: data)
        }
    }
    
    public func stop(){
        cancellable?.cancel()
    }
}

//MARK: IStepDelegate
extension PositionManager: IStepDetectorStateMachineDelegate {
    public func onProcessed(step: StepData) {
        print("onProcessed")
        print(step)
    }
    
    public func onSensorsInitiated(currentTime: Int) {
        print(#function,String(currentTime))
    }
}
