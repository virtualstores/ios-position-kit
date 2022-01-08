// File.swift
// 

// Created by: CJ on 2022-01-07
// Copyright (c) 2022 ___ORGANIZATIONNAME___

import Foundation
import Combine
import VSSensorFusion
import VSSensorInterpreter
import VSFoundation
import VSEngineWrapper

final public class ToyPositionManager: PositionKit {
    public var positionPublisher: CurrentValueSubject<PositionBundle?, PositionKitError>  = .init(nil)
    public var stepCountPublisher: CurrentValueSubject<Int, Never>  = .init(0)
    public var allPackagesAreInitiated: CurrentValueSubject<Bool?, PositionKitError> = .init(nil)

    private let context = Context(PositionKitConfig())
    private var stepCount = 0
    private var interpreter: StepDetectorStateMachine?
    private var engineWrapper: EngineWrapperManager?
    private var cancellable: AnyCancellable?
    private var positionBundleCancellable: AnyCancellable?

    var sensor: ISensorManager

  public init(sensorManager: ISensorManager) {
    sensor = sensorManager
  }

    public func setupMapFence(with mapData: MapFence) throws {
//        DispatchQueue.main.async {
            do {
                self.engineWrapper = EngineWrapperManager(mapData: mapData)
                try self.engineWrapper?.startEngine()
                self.bindEnginePublishers()
            } catch {}
//        }
    }

    /// Temporary step setup methode which will be used from old app
    public func setupMapFence(with mapData: Data) throws {
//        DispatchQueue.main.async {
            do {
                self.engineWrapper = EngineWrapperManager(mapData: mapData)
                try self.engineWrapper?.startEngine()
                self.bindEnginePublishers()
            } catch {}
//        }
    }

    public func start() throws {
        interpreter = StepDetectorStateMachine(delegate: self)
        interpreter?.initStates()

        cancellable = sensor.sensorPublisher
            .compactMap { $0 }
            .sink { _ in
                self.positionPublisher.send(completion: .failure(PositionKitError.noData))
            } receiveValue: { data in
                DispatchQueue.main.async {
                    self.interpreter?.input(motionSensorData: data)
                    self.engineWrapper?.setupTime(with: Int64(data.timestampSensor))
                }
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
        //isActive ? backgroundAccess.activate() : backgroundAccess.deactivate()
    }

    public func startNavigation(with direction: Double, xPosition: Double, yPosition: Double) {
//        DispatchQueue.main.async {
            self.engineWrapper?.setPosition(x: xPosition, y: yPosition, angle: direction)
//        }
    }

    func bindEnginePublishers() {
        self.positionBundleCancellable = self.engineWrapper?.positionPublisher
            .sink { data in
                print(data)
              print("Sink:")
            } receiveValue: { [weak self] positionBundle in
              print("PositionBundle: \(positionBundle)")
              self?.positionPublisher.send(positionBundle)
            }
    }

    deinit {
        stop()
    }
}

// MARK: IStepDetectorStateMachineDelegate
extension ToyPositionManager: IStepDetectorStateMachineDelegate {
    public func onProcessed(step: StepData) {
        stepCount = stepCount + 1
        stepCountPublisher.send(stepCount)
        setupEngineWrapper(with: step)
    }

    public func onSensorsInitiated(currentTime: Int) { }
}

// MARK: Private helpers
private extension ToyPositionManager {
    func setupEngineWrapper(with step: StepData) {
        guard let speed = step.speed?.asFloat else { return }

//        DispatchQueue.main.async {
            let engineWrapperStepData = WrapperStepData(speed: speed, direction: step.direction!, duration: Int64(step.duration), currentTime: Int64(step.timestamp), orientation: step.orientation)
            self.engineWrapper?.update(with: engineWrapperStepData)
//        }
    }
}