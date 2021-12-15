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
    
    private let sensor: SensorManager
    private let backgroundAccess: BackgroundAccessManager
    private var interpreter: StepDetectorStateMachine?
    private var cancellable: AnyCancellable?
    
    public init(){
        sensor = SensorManager()
        backgroundAccess = BackgroundAccessManager()
    }

    public func start() throws {
        try sensor.start()
        
        interpreter = StepDetectorStateMachine(delegate: self)
        interpreter?.initStates()
        
        cancellable = sensor.sensorPublisher
            .compactMap { $0 }
            .sink { error in
                print("error")
            } receiveValue: { _ data in
                print(#function, "Data:", data)
                self.interpreter?.input(motionSensorData: data)
            }
    }
    
    public func stop(){
        cancellable?.cancel()
    }
    
    deinit {
        stop()
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
