// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "VSPositionKit",
    platforms: [
        .iOS(.v13),
        .macOS(.v11),
        .watchOS(.v6)
    ],
    products: [
        .library(
            name: "VSPositionKit",
            targets: ["VSPositionKit"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        .package(url: "https://github.com/virtualstores/ios-foundation.git", .upToNextMajor(from: "0.0.8")),
        .package(url: "https://github.com/virtualstores/ios-sensor-fusion.git", .upToNextMajor(from: "0.0.5")),
    ],
    targets: [
        .target(
            name: "VSPositionKitTargets",
            dependencies: [
                .target(name: "VSPositionKit"),
                .product(name: "VSFoundation", package: "ios-foundation"),
                .product(name: "VSSensorFusion", package: "ios-sensor-fusion"),
            ]),
        .testTarget(
            name: "VSPositionKitTests",
            dependencies: ["VSPositionKitTargets"],
            resources: [
              .copy("TestResources/MapFence/"),
              .copy("TestResources/SensorData/")
            ]),
        .binaryTarget(
            name: "VSPositionKit",
            path: "VSPositionKit.xcframework"),
    ]
)
