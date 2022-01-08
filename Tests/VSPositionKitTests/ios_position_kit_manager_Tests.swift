import XCTest
@testable import VSPositionKit
import VSFoundation
import VSSensorFusion

final class ios_position_kit_manager_Tests: XCTestCase {
  func test_data_flow() throws {


    if let replayUrl = URL.ReplayData.goskaRegularSteps, let mapFenceUrl = URL.MapFence.vsOfficeMapFence {
      if let replayData = ReplaySensorDataLoader().decodeFileFrom(url: replayUrl, fileVersion: .v5),
         let mapFenceData = loadFile(url: mapFenceUrl) {

        let fakeSensorManager = FakeSensorManager(data: replayData.sensorData)
        let manager = ToyPositionManager(sensorManager: fakeSensorManager)
        try manager.setupMapFence(with: mapFenceData)
        try manager.start()
        manager.startNavigation(
          with: replayData.startPosition.angle,
          xPosition: replayData.startPosition.position.x,
          yPosition: replayData.startPosition.position.y
        )
        manager.positionPublisher.compactMap { $0 }
        .sink { _ in
            print("Error")
        } receiveValue: { data in
          print("Position: \(data)")
        }
      }
    }
  }

  private func loadFile(url: URL) -> Data? {
    if let fileContents = try? String(contentsOf: url) {
      return Data(fileContents.utf8)
    } else {
      Logger(verbosity: .error)
        .log(
          tag: "loadFileFromBundle",
          message: "Could not read file content for file: \(url)"
        )
      return nil
    }
  }
}

