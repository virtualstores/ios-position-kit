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
        .package(url: "https://github.com/virtualstores/ios-foundation.git", .branch("develop")),
        .package(url: "https://github.com/virtualstores/ios-sensor-fusion.git", .branch("master")),
        .package(url: "https://github.com/virtualstores/ios-sensor-interpreter.git", .branch("stepdetector-state-machine")),
        .package(url: "https://github.com/virtualstores/ios-engine-wrapper.git", .branch("testing-threading")),

    ],
    targets: [
        .target(
            name: "VSPositionKit",
            dependencies: [
                .product(name: "VSFoundation", package: "ios-foundation"),
                .product(name: "VSSensorFusion", package: "ios-sensor-fusion"),
                .product(name: "VSSensorInterpreter", package: "ios-sensor-interpreter"),
                .product(name: "VSEngineWrapper", package: "ios-engine-wrapper"),

            ]),
        .testTarget(
            name: "VSPositionKitTests",
            dependencies: ["VSPositionKit"],
            resources: [
              .copy("TestResources/MapFence/"),
              .copy("TestResources/SensorData/")
            ]),
    ]
)
