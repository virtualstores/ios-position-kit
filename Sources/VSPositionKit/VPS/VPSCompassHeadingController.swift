//
//  VPSCompassHeadingController.swift
//
//
//  Created by Théodore Roos on 2023-12-08.
//

import Foundation
import VSFoundation
import VSSensorFusion
import CoreMotion
import Combine

public class VPSCompassHeadingController {
  private var gravityReading: [Double]?
  private var magnetometerReading: [Double]?

  private let sensorOperation = OperationQueue()
  let serialDispatch = DispatchQueue(label: "VPSCompassHeadingControllerSerial")
  private let motion = CMMotionManager()

  init() {
    //if motion.isDeviceMotionAvailable {
    //  motion.deviceMotionUpdateInterval = .interval100Hz
    //  motion.startDeviceMotionUpdates(to: sensorOperation) { (data, error) in
    //    guard let data = data else {
    //      if error != nil {
    //        //self.sensorPublisher.send(completion: .failure(.noData))
    //      }
    //      return
    //    }
    //    self.onSensorChanged(data: MotionSensorData(data: data, accelerometerData: nil, magnetometerData: nil))
    //  }
    //}
  }

  func onSensorChanged(data: MotionSensorData) {
    guard
      data.gravity.data.count == 3,
      /*data.magnetometer.data.count == 3*/
      let heading = BackgroundAccessManager.locationHeadingPublisher.value
    else { return }
    //print("DATA", "GRAVITY", data.gravity.data)
    //print("DATA", "MAGNETOMETER", data.magnetometer.data)
    serialDispatch.async {
      self.gravityReading = CompassMath.lowPassFilter(input: data.gravity.data, output: self.gravityReading)
      //magnetometerReading = CompassMath.lowPassFilter(input: data.magnetometer.data, output: magnetometerReading)
      self.magnetometerReading = CompassMath.lowPassFilter(input: [heading.x, heading.y, heading.z], output: self.magnetometerReading)

      self.updateHeading()

      self.updateCompass(trueHeading: VPSCompassHeadingController.trueHeading.value)
      //print("MAGNETIC AVERAGE HEADING", getAverageCompassDirection())
    }
  }

  var currentHeadingRadians: Double = 0.0
  public static var trueHeading: CurrentValueSubject<Double, Never> = .init(0.0)
  func updateHeading() {
    guard let gravity = gravityReading, let magnetometer = magnetometerReading else { return }
    currentHeadingRadians = CompassMath.calculateHeading(gravityReading: gravity, magnetometerReading: magnetometer)
    let currentHeadingInDegrees = currentHeadingRadians.radiansToDegrees
    let currentHeadingInDegreesNormalized = CompassMath.map180To360(angle: currentHeadingInDegrees)

    VPSCompassHeadingController.trueHeading.send(currentHeadingInDegreesNormalized + (getMagneticDeclination() ?? 0.0))
    if VPSCompassHeadingController.trueHeading.value > 360 { // If trueHeading is 362 degrees for example, it will be adjusted to 2 degrees instead
      VPSCompassHeadingController.trueHeading.value -= 360
    }
    //print("MAGNETIC HEADING", VPSCompassHeadingController.trueHeading)
  }

  func getMagneticDeclination() -> Double? {
    7.0
  }

  var angleQueue = [Double]()
  public static var averageHeading: Double = 0.0
  func updateCompass(trueHeading: Double) {
    angleQueue.append(trueHeading)
    if angleQueue.count > 5 { angleQueue.removeFirst(angleQueue.count - 5) }
    VPSCompassHeadingController.averageHeading = angleQueue.average()
    //print("MAGNETIC AVERAGE HEADING", VPSCompassHeadingController.averageHeading)
  }

  var northOffset: Double? = 0.0
  func getAverageCompassDirection() -> Double? {
    guard let offset = northOffset else { return nil }
    let angle = 90 - (angleQueue.average() + offset)
    return angle.isNaN ? 0.01337 : angle
  }
}

struct CompassMath {
  static let ALPHA: Double = 0.15
  static func lowPassFilter(input: [Double], output: [Double]?) -> [Double] {
    guard let output = output else { return input }
    var modifiedOutput = [Double](repeating: 0.0, count: input.count)
    input.enumerated().forEach({ (index, value) in
      modifiedOutput[index] = output[index] + ALPHA * (value - output[index])
    })
    return modifiedOutput
  }

  static func calculateHeading(gravityReading: [Double], magnetometerReading: [Double]) -> Double {
    var Ax = gravityReading[0]
    var Ay = gravityReading[1]
    var Az = gravityReading[2]

    let Ex = magnetometerReading[0]
    let Ey = magnetometerReading[1]
    let Ez = magnetometerReading[2]

    //cross product of the magnetic field vector and the gravity vector
    var Hx = Ey * Az - Ez * Ay
    var Hy = Ez * Ax - Ex * Az
    var Hz = Ex * Ay - Ey * Ax

    //normalize the values of resulting vector
    let invH = 1.0 / sqrt((Hx * Hx + Hy * Hy + Hz * Hz))
    Hx *= invH
    Hy *= invH
    Hz *= invH

    //normalize the values of gravity vector
    let invA = 1.0 / sqrt((Ax * Ax + Ay * Ay + Az * Az))
    Ax *= invA
    Ay *= invA
    Az *= invA

    //cross product of the gravity vector and the new vector H
    //let Mx = Ay * Hz - Az * Hy
    let My = Az * Hx - Ax * Hz
    //let Mz = Ax * Hy - Ay * Hx

    //arctangent to obtain heading in radians
    return atan2(Hy, My) * Hy.sign()
  }

  static func map180To360(angle: Double) -> Double {
    (angle + 360).truncatingRemainder(dividingBy: 360)
  }
}
