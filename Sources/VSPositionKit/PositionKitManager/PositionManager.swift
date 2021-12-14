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
        interpreter = StepDetectorStateMachine(delegate: self)
        interpreter?.initStates()

        cancellable = sensor.sensorPublisher.sink { error in
            print("error")
        } receiveValue: { [weak self] data in
            print(#function, "Data:", data)
            guard let self = self, let data = data else { return }

            self.interpreter?.input(motionSensorData: data)
        }
        
        try sensor.start()
    }
    
    public func stop(){
        cancellable?.cancel()
    }
}

//MARK: IStepDetectorStateMachineDelegate
extension PositionManager: IStepDetectorStateMachineDelegate {
    public func onProcessed(step: StepData) {
        print("onProcessed")
        print(step)
    }
    
    public func onSensorsInitiated(currentTime: Int) {
        print(#function,String(currentTime))
    }
}
