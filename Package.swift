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
        .package(url: "https://github.com/virtualstores/ios-foundation.git", .upToNextMajor(from: "1.0.0")),
        .package(url: "https://github.com/virtualstores/ios-sensor-fusion.git", .exact("1.0.0")),
    ],
    targets: [
        .target(
            name: "VSPositionKit",
            dependencies: [
                .target(name: "VPS"),
                .product(name: "VSFoundation", package: "ios-foundation"),
                .product(name: "VSSensorFusion", package: "ios-sensor-fusion"),
            ]),
        .testTarget(
            name: "VSPositionKitTests",
            dependencies: ["VSPositionKit"],
            resources: [
              .copy("TestResources/MapFence/"),
              .copy("TestResources/SensorData/")
            ]),
        .binaryTarget(name: "VPS", path: "vps.xcframework"),
    ]
)
