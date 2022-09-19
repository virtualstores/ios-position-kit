//
// VPSUserSettings
// VSTT2
//
// Created by Hripsime on 2022-02-04.
// Copyright Virtual Stores - 2022

import Foundation
import VSFoundation
import VSPositionKit
import Combine

public final class VPSUserSettings: IQPSUserSettings {
    //@Inject var persistence: Persistence

    var modifiedUserPublisher: CurrentValueSubject<String?, Never> = .init(nil)

    var vpsProfile: String? {
        didSet {
            modifiedUserPublisher.send(vpsProfile)
        }
    }
    
    public init() {
        saveUserData()
    }

    func set(vpsProfile: String) {
        self.vpsProfile = vpsProfile
    }
    
    func saveUserData() {
//        var object = User()
//        object.userId = userId
//
//        do {
//            try persistence.save(&object)
//        } catch {
//            Logger.init(verbosity: .silent).log(tag: Logger.createTag(fileName: #file, functionName: #function),
//                                                message: "Save User Object SQLite error")
//        }
    }
    
    var userObject: User? {
        return nil//persistence.get(object: User.self)
    }
    
    var userId: String {
        return ""//persistence.get(object: User.self)?.id ?? ""
    }
    
    var alpha: [KotlinFloat] {
        set {
            for obj in newValue {
//                userObject?.alpha?.append(obj.kotlinFloatAsFloat)
            }
            save(editableObject: userObject)
        }
        get {
            let tmp: [Float] = []
//            guard let tmp = userObject?.alpha else { return [] }
            var arr: [KotlinFloat] = []
            for num in tmp {
                arr.append(KotlinFloat(float: num))
            }
            
            return arr
        }
    }
    
    func save(editableObject: User?) {
        guard var object = editableObject else { return }
        
//        do {
//            try persistence.save(&object)
//        } catch {
//            Logger.init(verbosity: .silent).log(tag: Logger.createTag(fileName: #file, functionName: #function),
//                                                message: "Update Points SQLite error")
//        }
    }
    
    var beta: [KotlinFloat] {
        set {
            for obj in newValue {
//                userObject?.beta?.append(obj.kotlinFloatAsFloat)
            }
            
            save(editableObject: userObject)
        }
        get {
            let tmp: [Float] = []
//            guard let tmp = userObject?.beta else { return [] }
            var arr: [KotlinFloat] = []
            for num in tmp {
                arr.append(KotlinFloat(float: num))
            }
            
            return arr
        }
    }
    var y: [KotlinFloat] {
        set {
            for obj in newValue {
//                userObject?.y?.append(obj.kotlinFloatAsFloat)
            }
            save(editableObject: userObject)
        }
        get {
            let tmp: [Float] = []
//            guard let tmp = userObject?.y else { return [] }
            var arr: [KotlinFloat] = []
            for num in tmp {
                arr.append(KotlinFloat(float: num))
            }
            
            return arr
        }
    }
    
    public var userHeight: KotlinFloat? {
        set {
            userObject?.height = newValue?.kotlinFloatAsFloat
            save(editableObject: userObject)
        }
        get {
            return nil
            
        }
    }
    
    public var speedRegressionIntercept: KotlinFloat? {
        set {
//            userObject?.speedRegressionIntercept = newValue?.kotlinFloatAsFloat
            save(editableObject: userObject)
        }
        get {
            let tmp: Float = 1.0
//            guard let tmp = userObject?.speedRegressionIntercept else { return nil }
            
            if tmp == 0 {
                return nil
            }
            
            return KotlinFloat(float: tmp) }
    }
    
    public var speedRegressionSlope: KotlinFloat? {
        set {
//            userObject?.speedRegressionSlope = newValue?.kotlinFloatAsFloat
            save(editableObject: userObject)
        }
        get {
            let tmp: Float = 1.0
//            guard let tmp = userObject?.speedRegressionSlope else { return nil }
            
            if tmp == 0 {
                return nil
            }
            
            return KotlinFloat(float: tmp)
        }
    }
    
    
    public func reset() {
//        userObject?.alpha = nil
//        userObject?.beta = nil
//        userObject?.y = nil
        userObject?.height = nil
//        userObject?.speedRegressionSlope = nil
//        userObject?.speedRegressionIntercept = nil
        
        save(editableObject: userObject)
    }
}
