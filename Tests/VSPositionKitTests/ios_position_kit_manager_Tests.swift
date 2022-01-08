import XCTest
@testable import VSPositionKit
import VSFoundation
import VSSensorFusion

final class ios_position_kit_manager_Tests: XCTestCase {
  func test_data_flow_through_interpreter_and_enginge() throws {

    if let replayUrl = URL.ReplayData.goskaRegularSteps, let mapFenceUrl = URL.MapFence.vsOfficeMapFence {
      if let replayData = ReplaySensorDataLoader().decodeFileFrom(url: replayUrl, fileVersion: .v5),
         let mapFenceData = loadFile(url: mapFenceUrl) {

        let expectedAtLeastNumberOfPositonBundles = 1330

        let expectation = self.expectation(description: "Awaiting publisher")

        let manager = PositionManager(context: Context(PositionKitTestConfig()))

        (manager.sensor as? IFakeSensorManager)?.setFakeData(data: replayData.sensorData)

        try manager.setupMapFence(with: mapFenceData)

        let cancellable = manager.positionPublisher
          .compactMap { $0 }
          .collect(expectedAtLeastNumberOfPositonBundles)
          .sink { [weak self] error in
            print("Error, \(error), \(String(describing: self))")
          } receiveValue: { [weak self]  positionBundle in
            print("Success: \(String(describing: self))")
            expectation.fulfill()
          }

        manager.startNavigation(
          with: replayData.startPosition.angle,
          xPosition: replayData.startPosition.position.x,
          yPosition: replayData.startPosition.position.y
        )
        try manager.start()
        waitForExpectations(timeout: 10)
        cancellable.cancel()
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
