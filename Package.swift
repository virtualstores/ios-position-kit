// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "VSPositionKit",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "VSPositionKit",
            targets: ["VSPositionKit"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        .package(url: "https://github.com/virtualstores/ios-sensor-fusion.git", branch: "feature/suggested-implementation"),
        .package(url: "https://github.com/virtualstores/ios-sensor-interpreter.git", branch: "stepdetector-state-machine"),
    ],
    targets: [
        .target(
            name: "VSPositionKit",
            dependencies: [
                .product(name: "VSSensorFusion", package: "ios-sensor-fusion"),
                .product(name: "VSSensorInterpreter", package: "ios-sensor-interpreter")
            ]),
        .testTarget(
            name: "VSPositionKitTests",
            dependencies: ["VSPositionKit"]),
    ]
)
