#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class VpsVPSConfig, VpsPathfinderCoordinateF, VpsNavGraph, VpsPathProcessorPathProcess, VpsDjikstrasOptimizedCompanion, VpsDjikstrasOptimizedOldNodeGraph, VpsNavGraphVertex, VpsPriorityQueueUsingSinglyLinkedList<T>, VpsPathProcessor, VpsPathProcessorBSpline, VpsKotlinDoubleArray, VpsKotlinArray<T>, VpsKotlinEnumCompanion, VpsKotlinEnum<E>, VpsKotlinPair<__covariant A, __covariant B>, VpsTSPThreeOptAlgorithmCompanion, VpsKotlinIntArray, VpsKotlinRandom, VpsIPathfinderGoalType, VpsNavGraphCompanion, VpsNavGraphVertexCompanion, VpsPathfinderCoordinateFCompanion, VpsConvolveMode, VpsCoordinateF, VpsBaseEventWiFiObservation, VpsBaseEventWiFiScan, VpsFloorChangeInterpreterType, VpsPose, VpsAccessPoint, VpsSwapLocation, VpsFloorLevelHandlerMapInformation, VpsFloorLevelHandler, VpsVPSParamsSystem, VpsFeatureToTensorValueParams, VpsInterpolationModuleParams, VpsModelToEventParameters, VpsPositionEngineSettings, VpsFloorChangeInterpreterSettings, VpsRotationHandlerSettings, VpsVelocityModelOutput, VpsFlow<T>, VpsInputSignalStart, VpsOutputSignal, VpsInputSignal, VpsFlowConverter<T, S>, VpsBaseEvent, VpsRawSensorData, VpsFloorChangeSignal, VpsFlowConverterBuilder<T, S>, VpsFloorChangeInterpreter, VpsFloorChangeInterpreterBuilder, VpsInAndOutTrigger, VpsFloorChangeControllerCompanion, VpsFloorChangeSignalWiFiFloorChangeSignal, VpsFloorChangeController, VpsFloorChangeControllerBuilder, VpsFloorChangeDetector, VpsBaseEventWifiStatusUpdate, VpsAltitudeClassifierParams, VpsClassifierState, VpsClassifierEvent, VpsKotlinFloatArray, VpsConvertAltitudeToClassifierEvent, VpsConvertAltitudeToClassifierEventBuilder, VpsNode<T>, VpsAltitudeBasedFloorChangeInterpreterFloorState, VpsAverageVariance, VpsFloorSensorParameters, VpsAltitudeBasedFloorChangeInterpreter, VpsAltitudeBasedFloorChangeInterpreterBuilder, VpsFloorSensorParametersCompanion, VpsSensorDataType, VpsSensorFrequencyDetector, VpsAverageVarianceDoublePack, VpsAverageVarianceFloatPack, VpsBaseEventStart, VpsPositioningEngine, VpsPositioningEngineBuilder, VpsLocation, VpsOutputSignalLngLatLocationSource, VpsKotlinTriple<__covariant A, __covariant B, __covariant C>, VpsParticleFilterParams, VpsParticleFilterEvent, VpsNLModelOutput, VpsEventHandler, VpsEventHandlerBuilder, VpsEventHandlerNaiveOutput, VpsEventHandlerNaiveOutputBuilder, VpsParticleFilterSettings, VpsParticleFilter, VpsParticleFilterBuilder, VpsBaseEventCompanion, VpsEventType, VpsBaseEventAngleCorrectionEventCompanion, VpsBaseEventAngleCorrectionEvent, VpsBaseEventFloorChangeEventCompanion, VpsBaseEventFloorChangeEvent, VpsBaseEventLngLatEventCompanion, VpsBaseEventLngLatEvent, VpsBaseEventStairEventCompanion, VpsBaseEventStairEvent, VpsBaseEventStartCompanion, VpsBaseEventStartStartType, VpsBaseEventStartLngLatEventCompanion, VpsBaseEventStartLngLatEvent, VpsBaseEventStartPositionEventCompanion, VpsBaseEventStartPositionEvent, VpsStepType, VpsBaseEventStepEventCompanion, VpsBaseEventStepEvent, VpsBaseEventSyncCompanion, VpsBaseEventSyncSyncType, VpsBaseEventSync, VpsBaseEventSyncAccessPointFloorSwapSyncEventCompanion, VpsBaseEventSyncAccessPointFloorSwapSyncEvent, VpsBaseEventSyncLngLatEventCompanion, VpsBaseEventSyncLngLatEvent, VpsBaseEventSyncPositionEventCompanion, VpsBaseEventSyncPositionEvent, VpsBaseEventWiFiObservationCompanion, VpsBaseEventWiFiScanCompanion, VpsBaseEventWifiStatusUpdateCompanion, VpsEventTypeHolderCompanion, VpsEventTypeHolder, VpsOutputSignalUXPosition, VpsAbstractParticleFilter, VpsOutputSignalSyncSignal, VpsGaussianKDE, VpsStartMethod, VpsSyncMethod, VpsParticleFilterKLD, VpsParticleFilterKLDV2, VpsPoseCompanion, VpsSyncCritera, VpsKotlinThrowable, VpsKotlinException, VpsWifiScanDataCompanion, VpsWifiScanData, VpsFeatures, VpsTensor, VpsFeatureToTensorValue, VpsFeatureToTensorValueBuilder, VpsFlowConverterRawSensorDataToRotation, VpsFlowConverterRawSensorDataToRotationBuilder, VpsRawSensorPack, VpsFlowConverterRawSensorDataToSensorDataFrame, VpsFlowConverterRotationToOutputSignal, VpsModelToEvent, VpsModelToEventBuilder, VpsTensorToModelOutput, VpsTensorToModelOutputBuilder, VpsInterpolationModule, VpsInterpolationModuleBuilder, VpsInterpolationModuleParams_, VpsMathUtil, VpsVelocityModelParamsFeaturesEntries, VpsAverageAccelerationSmoother, VpsFeaturePacker, VpsFeaturePackerBuilder, VpsEmbeddedRotationHandler, VpsEmbeddedRotationHandlerBuilder, VpsRotationHandler, VpsStairsInterpreter, VpsStairsInterpreterBuilder, VpsCoordinateDCompanion, VpsCoordinateD, VpsAccessPointCoordinate, VpsCoordinateFCompanion, VpsLocationCompanion, VpsLFiltInitCond, VpsWiFiAltitudeFusionParams, VpsVPSFloorChangeHandlerSettings, VpsFlowBuilder<T>, VpsVPSModelToEventParameters, VpsParticleFilterParamsVersion, VpsParticleFilterSettingsVersion, VpsVPSParticleFilterParams, VpsVPSParticleFilterSettings, VpsPositionEngineType, VpsLegacyReplaySensorData, VpsLegacyReplaySyncPosition, VpsLegacyReplayStartPosition, VpsLegacyReplayWiFiDataLegacyReplayWifiStatusUpdate, VpsLegacyReplayWiFiDataLegacyReplayWifiScan, VpsLegacyReplayDataV9Companion, VpsLegacyReplayDataV9, VpsLegacyReplaySensorDataCompanion, VpsLegacyReplayStartPositionCompanion, VpsLegacyReplaySyncPositionCompanion, VpsLegacyReplayWiFiDataCompanion, VpsLegacyReplayWiFiData, VpsLegacyReplayWiFiDataLegacyReplayWifiScanLegacyReplayWifiScanResult, VpsLegacyReplayWiFiDataLegacyReplayWifiScanCompanion, VpsLegacyReplayWiFiDataLegacyReplayWifiScanLegacyReplayWifiScanResultCompanion, VpsLegacyReplayWiFiDataLegacyReplayWifiStatusUpdateCompanion, VpsReplayAngleCorrectionCompanion, VpsReplayAngleCorrection, VpsReplayStartPosition, VpsReplayStartLngLat, VpsReplayExit, VpsReplaySyncPosition, VpsReplaySyncLngLat, VpsWifiStatusUpdate, VpsWifiScanUpdate, VpsReplayFloorChange, VpsReplayLngLat, VpsReplaySensorData, VpsReplayDataV1Companion, VpsReplayDataV1, VpsReplayExitCompanion, VpsReplayFloorChangeCompanion, VpsReplayLngLatCompanion, VpsReplaySensorDataCompanion, VpsReplayStartLngLatCompanion, VpsReplayStartPositionCompanion, VpsReplaySyncLngLatCompanion, VpsReplaySyncPositionCompanion, VpsPartitionRecorderDataPackage, VpsPartitionRecorder<T>, VpsFeaturesCompanion, VpsRawSensorDataCompanion, VpsRawSensorPackCompanion, VpsTensorCompanion, VpsVelocityModelOutputCompanion, VpsIosInterpolationModuleParams, VpsInputSignalType, VpsInputSignalStartStartType, VpsInputSignalSyncSyncType, VpsInputSignalSync, VpsOutputSignalCompanion, VpsOutputSignalType, VpsOutputSignalFloorChangeSignalCompanion, VpsOutputSignalLngLatLocationCompanion, VpsOutputSignalLngLatLocationSourceCompanion, VpsOutputSignalMLOutputPositionCompanion, VpsOutputSignalParticleSignalCompanion, VpsOutputSignalPositionStatus, VpsOutputSignalPositionCompanion, VpsOutputSignalPositionStatusCompanion, VpsOutputSignalRescueModeSignalCompanion, VpsOutputSignalRotationCompanion, VpsOutputSignalRotationDeviationAngleCompanion, VpsOutputSignalSyncSignalCompanion, VpsOutputSignalTypeCompanion, VpsOutputSignalUXPositionStatus, VpsOutputSignalUXPositionCompanion, VpsOutputSignalWiFiFloorChangeSignalCompanion, VpsSwapLocationSwapLocationPoint, VpsSwapLocationSwapLocationPath, VpsSwapLocationCompanion, VpsSwapLocationSwapLocationPathCompanion, VpsSwapLocationSwapLocationPathDirection, VpsSwapLocationSwapLocationPointCompanion, VpsNLModelParams, VpsVelocityModelParams, VpsLog, VpsAccessPointCompanion, VpsAccessPointCoordinateCompanion, VpsWifiScanUpdateScanResult, VpsWifiScanUpdateCompanion, VpsWifiScanUpdateScanResultCompanion, VpsWifiStatusUpdateCompanion, VpsVPSParams, VpsVPSParamsPackage, VpsMLProcessedPath, VpsKotlinDoubleIterator, VpsKotlinFloatIterator, VpsKotlinIntIterator, VpsInputSignalSensorData, VpsInputSignalStartPosition, VpsInputSignalSyncPosition, VpsInputSignalExit, VpsInputSignalLngLat, VpsInputSignalSyncLngLat, VpsInputSignalAngleCorrection, VpsInputSignalFloorChange, VpsInputSignalStairInfo, VpsInputSignalStartLngLat, VpsInputSignalWifiScan, VpsInputSignalWifiStatus, VpsKotlinRandomDefault, VpsKotlinByteArray, VpsKotlinByteIterator, VpsKotlinx_serialization_coreSerializersModule, VpsKotlinx_serialization_coreSerialKind, VpsKotlinNothing;

@protocol VpsIPathfinderGoal, VpsIPathfinderListener, VpsIPathfinder, VpsKotlinComparable, VpsIPathfinderPath, VpsKotlinx_serialization_coreKSerializer, VpsPositionEngineRepositoryRead, VpsPositionEngineRepositoryWrite, VpsPositionEngineRepository, VpsVPSFloorLevel, VpsFlowConnection, VpsVelocityModel, VpsVPSOutputHandler, VpsNLModel, VpsInAndOutListener, VpsNodeHandler, VpsFusionFilter, VpsRandomNumberGenerator, VpsAbstractParticleFilterRescueModeHelper, VpsVelocityModelHandler, VpsCoordinateConverter, VpsUploader, VpsLogOutputHandler, VpsKotlinIterator, VpsKotlinx_serialization_coreEncoder, VpsKotlinx_serialization_coreSerialDescriptor, VpsKotlinx_serialization_coreSerializationStrategy, VpsKotlinx_serialization_coreDecoder, VpsKotlinx_serialization_coreDeserializationStrategy, VpsKotlinx_serialization_coreCompositeEncoder, VpsKotlinAnnotation, VpsKotlinx_serialization_coreCompositeDecoder, VpsKotlinx_serialization_coreSerializersModuleCollector, VpsKotlinKClass, VpsKotlinKDeclarationContainer, VpsKotlinKAnnotatedElement, VpsKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface VpsBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface VpsBase (VpsBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface VpsMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface VpsMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorVpsKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface VpsNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface VpsByte : VpsNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface VpsUByte : VpsNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface VpsShort : VpsNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface VpsUShort : VpsNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface VpsInt : VpsNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface VpsUInt : VpsNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface VpsLong : VpsNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface VpsULong : VpsNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface VpsFloat : VpsNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface VpsDouble : VpsNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface VpsBoolean : VpsNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSConfig")))
@interface VpsVPSConfig : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vPSConfig __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsVPSConfig *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *VELOCITY_MODEL_INTERFACE_VERSION __attribute__((swift_name("VELOCITY_MODEL_INTERFACE_VERSION")));
@property (readonly) NSString *VPS_VERSION __attribute__((swift_name("VPS_VERSION")));
@end

__attribute__((swift_name("IPathfinder")))
@protocol VpsIPathfinder
@required
- (void)addGoalGoal:(id<VpsIPathfinderGoal>)goal callback:(void (^ _Nullable)(void))callback __attribute__((swift_name("addGoal(goal:callback:)")));
- (void)addGoalsGoals:(id)goals callback:(void (^ _Nullable)(void))callback __attribute__((swift_name("addGoals(goals:callback:)")));
- (void)addListenerListener:(id<VpsIPathfinderListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (void)forceRefreshWithTSP:(BOOL)withTSP overridePosition:(VpsPathfinderCoordinateF * _Nullable)overridePosition callback:(void (^ _Nullable)(void))callback __attribute__((swift_name("forceRefresh(withTSP:overridePosition:callback:)")));
- (void)popGoal __attribute__((swift_name("popGoal()")));
- (void)removeGoalId:(NSString *)id callback:(void (^ _Nullable)(void))callback __attribute__((swift_name("removeGoal(id:callback:)")));
- (void)removeGoalsIds:(id)ids callback:(void (^ _Nullable)(void))callback __attribute__((swift_name("removeGoals(ids:callback:)")));
- (void)removeListenerListener:(id<VpsIPathfinderListener>)listener __attribute__((swift_name("removeListener(listener:)")));
- (void)setGoalsGoals:(id)goals callback:(void (^ _Nullable)(void))callback __attribute__((swift_name("setGoals(goals:callback:)")));
- (void)setUserPositionPosition:(VpsPathfinderCoordinateF * _Nullable)position __attribute__((swift_name("setUserPosition(position:)")));
@property (readonly) id<VpsIPathfinderGoal> _Nullable currentGoal __attribute__((swift_name("currentGoal")));
@property (readonly) BOOL hasGoal __attribute__((swift_name("hasGoal")));
@property (readonly) NSArray<id<VpsIPathfinderGoal>> *sortedGoals __attribute__((swift_name("sortedGoals")));
@property (readonly) VpsPathfinderCoordinateF *startPosition __attribute__((swift_name("startPosition")));
@property (readonly) VpsPathfinderCoordinateF *stopPosition __attribute__((swift_name("stopPosition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasePathfinder")))
@interface VpsBasePathfinder : VpsBase <VpsIPathfinder>
- (instancetype)initWithHeightInPixels:(float)heightInPixels widthInPixels:(float)widthInPixels pixelsPerMeter:(float)pixelsPerMeter navGraph:(VpsNavGraph *)navGraph pathRefreshDistance:(float)pathRefreshDistance pathProcess:(VpsPathProcessorPathProcess *)pathProcess windowSize:(int32_t)windowSize startPosition:(VpsPathfinderCoordinateF *)startPosition stopPosition:(VpsPathfinderCoordinateF *)stopPosition __attribute__((swift_name("init(heightInPixels:widthInPixels:pixelsPerMeter:navGraph:pathRefreshDistance:pathProcess:windowSize:startPosition:stopPosition:)"))) __attribute__((objc_designated_initializer));
- (void)addGoalGoal:(id<VpsIPathfinderGoal>)goal callback:(void (^ _Nullable)(void))callback __attribute__((swift_name("addGoal(goal:callback:)")));
- (void)addGoalsGoals:(id)goals callback:(void (^ _Nullable)(void))callback __attribute__((swift_name("addGoals(goals:callback:)")));
- (void)addListenerListener:(id<VpsIPathfinderListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (VpsPathfinderCoordinateF *)flipY:(VpsPathfinderCoordinateF *)receiver __attribute__((swift_name("flipY(_:)")));
- (void)forceRefreshWithTSP:(BOOL)withTSP overridePosition:(VpsPathfinderCoordinateF * _Nullable)overridePosition callback:(void (^ _Nullable)(void))callback __attribute__((swift_name("forceRefresh(withTSP:overridePosition:callback:)")));
- (VpsPathfinderCoordinateF *)pixelsToMeters:(VpsPathfinderCoordinateF *)receiver __attribute__((swift_name("pixelsToMeters(_:)")));
- (void)popGoal __attribute__((swift_name("popGoal()")));
- (void)removeGoalId:(NSString *)id callback:(void (^ _Nullable)(void))callback __attribute__((swift_name("removeGoal(id:callback:)")));
- (void)removeGoalsIds:(id)ids callback:(void (^ _Nullable)(void))callback __attribute__((swift_name("removeGoals(ids:callback:)")));
- (void)removeListenerListener:(id<VpsIPathfinderListener>)listener __attribute__((swift_name("removeListener(listener:)")));
- (void)setGoalsGoals:(id)goals callback:(void (^ _Nullable)(void))callback __attribute__((swift_name("setGoals(goals:callback:)")));
- (void)setUserPositionPosition:(VpsPathfinderCoordinateF * _Nullable)position __attribute__((swift_name("setUserPosition(position:)")));
@property (readonly) id<VpsIPathfinderGoal> _Nullable currentGoal __attribute__((swift_name("currentGoal")));
@property (readonly) BOOL hasGoal __attribute__((swift_name("hasGoal")));
@property (readonly) float heightInPixels __attribute__((swift_name("heightInPixels")));
@property NSArray<id<VpsIPathfinderGoal>> *lastSortedGoals __attribute__((swift_name("lastSortedGoals")));
@property (readonly) VpsPathProcessorPathProcess *pathProcess __attribute__((swift_name("pathProcess")));
@property (readonly) float pathRefreshDistance __attribute__((swift_name("pathRefreshDistance")));
@property (readonly) float pixelsPerMeter __attribute__((swift_name("pixelsPerMeter")));
@property (readonly) NSArray<id<VpsIPathfinderGoal>> *sortedGoals __attribute__((swift_name("sortedGoals")));
@property (readonly) VpsPathfinderCoordinateF *startPosition __attribute__((swift_name("startPosition")));
@property (readonly) VpsPathfinderCoordinateF *stopPosition __attribute__((swift_name("stopPosition")));
@property (readonly) float widthInPixels __attribute__((swift_name("widthInPixels")));
@property (readonly) int32_t windowSize __attribute__((swift_name("windowSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DjikstrasOptimized")))
@interface VpsDjikstrasOptimized : VpsBase
- (instancetype)initWithGraph:(VpsNavGraph *)graph __attribute__((swift_name("init(graph:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsDjikstrasOptimizedCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<VpsPathfinderCoordinateF *> * _Nullable)getPixelScalePathFrom:(VpsPathfinderCoordinateF *)from to:(VpsPathfinderCoordinateF *)to __attribute__((swift_name("getPixelScalePath(from:to:)")));
- (void)resetHistory __attribute__((swift_name("resetHistory()")));
@property VpsDjikstrasOptimizedOldNodeGraph *currentGoalGraph __attribute__((swift_name("currentGoalGraph")));
@property BOOL oldGraphIsInitiated __attribute__((swift_name("oldGraphIsInitiated")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DjikstrasOptimized.Companion")))
@interface VpsDjikstrasOptimizedCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsDjikstrasOptimizedCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DjikstrasOptimized.OldNodeGraph")))
@interface VpsDjikstrasOptimizedOldNodeGraph : VpsBase
- (instancetype)initWithGoal:(VpsNavGraphVertex *)goal currentGoal:(NSString *)currentGoal __attribute__((swift_name("init(goal:currentGoal:)"))) __attribute__((objc_designated_initializer));
@property (readonly) VpsMutableDictionary<NSString *, id> *cameFrom __attribute__((swift_name("cameFrom")));
@property (readonly) VpsMutableDictionary<NSString *, VpsInt *> *costSoFar __attribute__((swift_name("costSoFar")));
@property (readonly) VpsPriorityQueueUsingSinglyLinkedList<VpsNavGraphVertex *> *frontier __attribute__((swift_name("frontier")));
@property NSString *goalId __attribute__((swift_name("goalId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PathProcessor")))
@interface VpsPathProcessor : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pathProcessor __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsPathProcessor *shared __attribute__((swift_name("shared")));
- (NSArray<VpsPathfinderCoordinateF *> *)processPath:(NSArray<VpsPathfinderCoordinateF *> * _Nullable)path goal:(id<VpsIPathfinderGoal>)goal process:(VpsPathProcessorPathProcess *)process windowSize:(int32_t)windowSize __attribute__((swift_name("process(path:goal:process:windowSize:)")));
- (NSArray<VpsPathfinderCoordinateF *> *)validMovingAverage2D:(NSArray<VpsPathfinderCoordinateF *> *)receiver windowSize:(int32_t)windowSize __attribute__((swift_name("validMovingAverage2D(_:windowSize:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PathProcessor.BSpline")))
@interface VpsPathProcessorBSpline : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bSpline __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsPathProcessorBSpline *shared __attribute__((swift_name("shared")));
- (double)BX:(double)x k:(int32_t)k i:(int32_t)i t:(VpsKotlinDoubleArray *)t __attribute__((swift_name("B(x:k:i:t:)")));
- (VpsKotlinDoubleArray *)bsplineX:(double)x t:(VpsKotlinDoubleArray *)t c:(VpsKotlinArray<VpsKotlinDoubleArray *> *)c k:(int32_t)k __attribute__((swift_name("bspline(x:t:c:k:)")));
- (VpsKotlinDoubleArray *)linspaceStart:(double)start end:(double)end points:(int32_t)points __attribute__((swift_name("linspace(start:end:points:)")));
- (VpsKotlinArray<VpsKotlinDoubleArray *> *)paul_splineFirst:(VpsKotlinDoubleArray *)first second:(VpsKotlinDoubleArray *)second d_first:(VpsKotlinDoubleArray *)d_first d_second:(VpsKotlinDoubleArray *)d_second __attribute__((swift_name("paul_spline(first:second:d_first:d_second:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol VpsKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface VpsKotlinEnum<E> : VpsBase <VpsKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PathProcessor.PathProcess")))
@interface VpsPathProcessorPathProcess : VpsKotlinEnum<VpsPathProcessorPathProcess *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsPathProcessorPathProcess *none __attribute__((swift_name("none")));
@property (class, readonly) VpsPathProcessorPathProcess *salmon __attribute__((swift_name("salmon")));
@property (class, readonly) VpsPathProcessorPathProcess *masmoothing __attribute__((swift_name("masmoothing")));
+ (VpsKotlinArray<VpsPathProcessorPathProcess *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsPathProcessorPathProcess *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TSPThreeOptAlgorithm")))
@interface VpsTSPThreeOptAlgorithm : VpsBase
- (instancetype)initWithSize:(int32_t)size dist:(VpsKotlinArray<VpsKotlinDoubleArray *> *)dist nodes:(VpsKotlinArray<VpsKotlinPair<VpsDouble *, VpsDouble *> *> *)nodes __attribute__((swift_name("init(size:dist:nodes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsTSPThreeOptAlgorithmCompanion *companion __attribute__((swift_name("companion")));
- (void)shuffle:(VpsKotlinIntArray *)receiver random:(VpsKotlinRandom *)random __attribute__((swift_name("shuffle(_:random:)")));
- (VpsKotlinIntArray *)solve __attribute__((swift_name("solve()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TSPThreeOptAlgorithm.Companion")))
@interface VpsTSPThreeOptAlgorithmCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsTSPThreeOptAlgorithmCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("IPathfinderGoal")))
@protocol VpsIPathfinderGoal
@required
@property (readonly) id _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) VpsPathfinderCoordinateF *position __attribute__((swift_name("position")));
@property (readonly) VpsIPathfinderGoalType *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("BasePathfinderGoal")))
@interface VpsBasePathfinderGoal<T> : VpsBase <VpsIPathfinderGoal>
- (instancetype)initWithId:(NSString *)id position:(VpsPathfinderCoordinateF *)position data:(T _Nullable)data type:(VpsIPathfinderGoalType *)type __attribute__((swift_name("init(id:position:data:type:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) VpsPathfinderCoordinateF *position __attribute__((swift_name("position")));
@property (readonly) VpsIPathfinderGoalType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IPathfinderGoalType")))
@interface VpsIPathfinderGoalType : VpsKotlinEnum<VpsIPathfinderGoalType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsIPathfinderGoalType *end __attribute__((swift_name("end")));
@property (class, readonly) VpsIPathfinderGoalType *start __attribute__((swift_name("start")));
@property (class, readonly) VpsIPathfinderGoalType *target __attribute__((swift_name("target")));
+ (VpsKotlinArray<VpsIPathfinderGoalType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsIPathfinderGoalType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("IPathfinderListener")))
@protocol VpsIPathfinderListener
@required
- (void)onCurrentGoalUpdatedGoal:(id<VpsIPathfinderGoal> _Nullable)goal __attribute__((swift_name("onCurrentGoalUpdated(goal:)")));
- (void)onPathUpdatedPath:(id<VpsIPathfinderPath>)path __attribute__((swift_name("onPathUpdated(path:)")));
- (void)onSortedGoalUpdatedGoals:(NSArray<id<VpsIPathfinderGoal>> *)goals __attribute__((swift_name("onSortedGoalUpdated(goals:)")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((swift_name("IPathfinderPath")))
@protocol VpsIPathfinderPath
@required
@property (readonly) NSArray<NSArray<VpsPathfinderCoordinateF *> *> *body __attribute__((swift_name("body")));
@property (readonly) NSArray<VpsPathfinderCoordinateF *> *bodyMeterScale __attribute__((swift_name("bodyMeterScale")));
@property (readonly) NSArray<VpsPathfinderCoordinateF *> *head __attribute__((swift_name("head")));
@property (readonly) NSArray<VpsPathfinderCoordinateF *> *headMeterScale __attribute__((swift_name("headMeterScale")));
@property (readonly) NSArray<VpsPathfinderCoordinateF *> *tail __attribute__((swift_name("tail")));
@property (readonly) NSArray<VpsPathfinderCoordinateF *> *tailMeterScale __attribute__((swift_name("tailMeterScale")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavGraph")))
@interface VpsNavGraph : VpsBase
- (instancetype)initWithSpacing:(int32_t)spacing numVertices:(int32_t)numVertices vertices:(NSDictionary<NSString *, VpsNavGraphVertex *> *)vertices __attribute__((swift_name("init(spacing:numVertices:vertices:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsNavGraphCompanion *companion __attribute__((swift_name("companion")));
- (VpsNavGraphVertex * _Nullable)closestVertexPoint:(VpsPathfinderCoordinateF *)point __attribute__((swift_name("closestVertex(point:)")));
- (VpsInt * _Nullable)getCostFromVertexId:(NSString *)fromVertexId toVertexId:(NSString *)toVertexId __attribute__((swift_name("getCost(fromVertexId:toVertexId:)")));
- (VpsNavGraphVertex * _Nullable)getVertexId:(NSString *)id __attribute__((swift_name("getVertex(id:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t numVertices __attribute__((swift_name("numVertices")));
@property (readonly) int32_t spacing __attribute__((swift_name("spacing")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavGraph.Companion")))
@interface VpsNavGraphCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsNavGraphCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavGraph.Vertex")))
@interface VpsNavGraphVertex : VpsBase
- (instancetype)initWithId:(NSString *)id x:(float)x y:(float)y cost:(int32_t)cost neighborCosts:(NSDictionary<NSString *, VpsInt *> *)neighborCosts __attribute__((swift_name("init(id:x:y:cost:neighborCosts:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsNavGraphVertexCompanion *companion __attribute__((swift_name("companion")));
- (VpsNavGraphVertex *)doCopyId:(NSString *)id x:(float)x y:(float)y cost:(int32_t)cost neighborCosts:(NSDictionary<NSString *, VpsInt *> *)neighborCosts __attribute__((swift_name("doCopy(id:x:y:cost:neighborCosts:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (VpsInt * _Nullable)getCostToVertex:(VpsNavGraphVertex *)vertex __attribute__((swift_name("getCostTo(vertex:)")));
- (VpsInt * _Nullable)getCostToIdId:(NSString *)id __attribute__((swift_name("getCostToId(id:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsPathfinderCoordinateF *coordinate __attribute__((swift_name("coordinate")));
@property (readonly) int32_t cost __attribute__((swift_name("cost")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSDictionary<NSString *, VpsInt *> *neighborCosts __attribute__((swift_name("neighborCosts")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavGraph.VertexCompanion")))
@interface VpsNavGraphVertexCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsNavGraphVertexCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PathfinderCoordinateF")))
@interface VpsPathfinderCoordinateF : VpsBase
- (instancetype)initWithX:(double)x y:(double)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX:(float)x y_:(float)y __attribute__((swift_name("init(x:y_:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsPathfinderCoordinateFCompanion *companion __attribute__((swift_name("companion")));
- (VpsPathfinderCoordinateF *)doCopyX:(float)x y:(float)y __attribute__((swift_name("doCopy(x:y:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PathfinderCoordinateF.Companion")))
@interface VpsPathfinderCoordinateFCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsPathfinderCoordinateFCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PriorityQueueUsingSinglyLinkedList")))
@interface VpsPriorityQueueUsingSinglyLinkedList<T> : VpsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (T _Nullable)peek __attribute__((swift_name("peek()")));
- (T _Nullable)pop __attribute__((swift_name("pop()")));
- (void)pushValue:(T _Nullable)value cost:(int32_t)cost __attribute__((swift_name("push(value:cost:)")));
@property int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConvolveMode")))
@interface VpsConvolveMode : VpsKotlinEnum<VpsConvolveMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsConvolveMode *valid __attribute__((swift_name("valid")));
+ (VpsKotlinArray<VpsConvolveMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsConvolveMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SayHelloFromNative")))
@interface VpsSayHelloFromNative : VpsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)getHelloMessage __attribute__((swift_name("getHelloMessage()")));
@end

__attribute__((swift_name("PositionEngineRepositoryRead")))
@protocol VpsPositionEngineRepositoryRead
@required
@property (readonly) VpsCoordinateF *currentPosition __attribute__((swift_name("currentPosition")));
@property (readonly) VpsBaseEventWiFiObservation * _Nullable currentWiFiObservation __attribute__((swift_name("currentWiFiObservation")));
@property (readonly) VpsBaseEventWiFiScan * _Nullable currentWiFiScan __attribute__((swift_name("currentWiFiScan")));
@property (readonly) VpsFloorChangeInterpreterType * _Nullable floorChangeInterpreterType __attribute__((swift_name("floorChangeInterpreterType")));
@property (readonly) BOOL justGotWiFiScan __attribute__((swift_name("justGotWiFiScan")));
@end

__attribute__((swift_name("PositionEngineRepositoryWrite")))
@protocol VpsPositionEngineRepositoryWrite
@required
- (void)setCurrentPositionPosition:(VpsCoordinateF *)position __attribute__((swift_name("setCurrentPosition(position:)")));
- (void)setCurrentWifiObservationWiFiObservation:(VpsBaseEventWiFiObservation * _Nullable)wiFiObservation __attribute__((swift_name("setCurrentWifiObservation(wiFiObservation:)")));
- (void)setCurrentWifiScanWifiScan:(VpsBaseEventWiFiScan * _Nullable)wifiScan __attribute__((swift_name("setCurrentWifiScan(wifiScan:)")));
- (void)setFloorChangeInterpreterTypeType:(VpsFloorChangeInterpreterType *)type __attribute__((swift_name("setFloorChangeInterpreterType(type:)")));
- (void)setJustGotWiFiScanInput:(BOOL)input __attribute__((swift_name("setJustGotWiFiScan(input:)")));
@end

__attribute__((swift_name("PositionEngineRepository")))
@protocol VpsPositionEngineRepository <VpsPositionEngineRepositoryRead, VpsPositionEngineRepositoryWrite>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositionEngineRepositoryImpl")))
@interface VpsPositionEngineRepositoryImpl : VpsBase <VpsPositionEngineRepository>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)setCurrentPositionPosition:(VpsCoordinateF *)position __attribute__((swift_name("setCurrentPosition(position:)")));
- (void)setCurrentWifiObservationWiFiObservation:(VpsBaseEventWiFiObservation * _Nullable)wiFiObservation __attribute__((swift_name("setCurrentWifiObservation(wiFiObservation:)")));
- (void)setCurrentWifiScanWifiScan:(VpsBaseEventWiFiScan * _Nullable)wifiScan __attribute__((swift_name("setCurrentWifiScan(wifiScan:)")));
- (void)setFloorChangeInterpreterTypeType:(VpsFloorChangeInterpreterType *)type __attribute__((swift_name("setFloorChangeInterpreterType(type:)")));
- (void)setJustGotWiFiScanInput:(BOOL)input __attribute__((swift_name("setJustGotWiFiScan(input:)")));
@property (readonly) VpsCoordinateF *currentPosition __attribute__((swift_name("currentPosition")));
@property (readonly) VpsBaseEventWiFiObservation * _Nullable currentWiFiObservation __attribute__((swift_name("currentWiFiObservation")));
@property (readonly) VpsBaseEventWiFiScan * _Nullable currentWiFiScan __attribute__((swift_name("currentWiFiScan")));
@property (readonly) VpsFloorChangeInterpreterType * _Nullable floorChangeInterpreterType __attribute__((swift_name("floorChangeInterpreterType")));
@property (readonly) BOOL justGotWiFiScan __attribute__((swift_name("justGotWiFiScan")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorLevelHandler")))
@interface VpsFloorLevelHandler : VpsBase
- (instancetype)initWithFloorLevels:(NSDictionary<VpsLong *, id<VpsVPSFloorLevel>> *)floorLevels initialFloorLevelId:(VpsLong * _Nullable)initialFloorLevelId debug:(BOOL)debug __attribute__((swift_name("init(floorLevels:initialFloorLevelId:debug:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isValidCoordinateX:(double)x y:(double)y __attribute__((swift_name("isValidCoordinate(x:y:)")));
- (BOOL)isValidPointP:(VpsPose *)p __attribute__((swift_name("isValidPoint(p:)")));
- (BOOL)isValidPointX:(double)x y:(double)y __attribute__((swift_name("isValidPoint(x:y:)")));
- (BOOL)isValidPointX:(float)x y_:(float)y __attribute__((swift_name("isValidPoint(x:y_:)")));
- (void)setFloorLevelFloorLevelId:(int64_t)floorLevelId __attribute__((swift_name("setFloorLevel(floorLevelId:)")));
@property (readonly) NSArray<VpsAccessPoint *> *allAccessPoints __attribute__((swift_name("allAccessPoints")));
@property (readonly) NSArray<VpsSwapLocation *> *allSwapLocations __attribute__((swift_name("allSwapLocations")));
@property (readonly) NSArray<VpsAccessPoint *> *currentFloorAccessPoints __attribute__((swift_name("currentFloorAccessPoints")));
@property (readonly) VpsDouble * _Nullable currentFloorCeilingHeightInMeters __attribute__((swift_name("currentFloorCeilingHeightInMeters")));
@property (readonly) double currentFloorHeightInMeters __attribute__((swift_name("currentFloorHeightInMeters")));
@property (readonly) id<VpsVPSFloorLevel> currentFloorLevel __attribute__((swift_name("currentFloorLevel")));
@property (readonly) int64_t currentFloorLevelId __attribute__((swift_name("currentFloorLevelId")));
@property (readonly) NSArray<VpsSwapLocation *> *currentFloorSwapLocations __attribute__((swift_name("currentFloorSwapLocations")));
@property (readonly) double currentFloorWidthInMeters __attribute__((swift_name("currentFloorWidthInMeters")));
@property (readonly) VpsFloorLevelHandlerMapInformation *currentMapInformation __attribute__((swift_name("currentMapInformation")));
@property (readonly) double currentPixelsPerMeter __attribute__((swift_name("currentPixelsPerMeter")));
@property (readonly) BOOL debug __attribute__((swift_name("debug")));
@property (readonly) NSDictionary<VpsLong *, id<VpsVPSFloorLevel>> *floorLevels __attribute__((swift_name("floorLevels")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorLevelHandler.MapInformation")))
@interface VpsFloorLevelHandlerMapInformation : VpsBase
- (instancetype)initWithWidth:(int32_t)width height:(int32_t)height mapFenceScale:(double)mapFenceScale floorHeight:(VpsDouble * _Nullable)floorHeight __attribute__((swift_name("init(width:height:mapFenceScale:floorHeight:)"))) __attribute__((objc_designated_initializer));
- (VpsFloorLevelHandlerMapInformation *)doCopyWidth:(int32_t)width height:(int32_t)height mapFenceScale:(double)mapFenceScale floorHeight:(VpsDouble * _Nullable)floorHeight __attribute__((swift_name("doCopy(width:height:mapFenceScale:floorHeight:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsDouble * _Nullable floorHeight __attribute__((swift_name("floorHeight")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) double mapFenceScale __attribute__((swift_name("mapFenceScale")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((swift_name("FlowConnection")))
@protocol VpsFlowConnection
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(id _Nullable)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPS")))
@interface VpsVPS : VpsBase <VpsFlowConnection>
- (instancetype)initWithVelocityModel:(id<VpsVelocityModel>)velocityModel floorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler outputHandler:(id<VpsVPSOutputHandler>)outputHandler system:(VpsVPSParamsSystem *)system featureToTensorValueParams:(VpsFeatureToTensorValueParams *)featureToTensorValueParams interpolationParams:(VpsInterpolationModuleParams *)interpolationParams modelToEventParameters:(VpsModelToEventParameters *)modelToEventParameters positionEngineSettings:(VpsPositionEngineSettings *)positionEngineSettings floorChangeInterpreterSettings:(VpsFloorChangeInterpreterSettings *)floorChangeInterpreterSettings rotationHandlerSettings:(VpsRotationHandlerSettings *)rotationHandlerSettings debugMode:(BOOL)debugMode extendedDebugMode:(BOOL)extendedDebugMode modelOutputHandler:(VpsFlow<VpsVelocityModelOutput *> * _Nullable)modelOutputHandler nlModel:(id<VpsNLModel> _Nullable)nlModel isRotationOutputActive:(BOOL)isRotationOutputActive __attribute__((swift_name("init(velocityModel:floorLevelHandler:outputHandler:system:featureToTensorValueParams:interpolationParams:modelToEventParameters:positionEngineSettings:floorChangeInterpreterSettings:rotationHandlerSettings:debugMode:extendedDebugMode:modelOutputHandler:nlModel:isRotationOutputActive:)"))) __attribute__((objc_designated_initializer));
- (void)flush __attribute__((swift_name("flush()")));
- (void)doInitSignal:(VpsInputSignalStart *)signal __attribute__((swift_name("doInit(signal:)")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(VpsOutputSignal *)data __attribute__((swift_name("onInput(data:)")));
- (void)onInputSignalSignal:(VpsInputSignal *)signal __attribute__((swift_name("onInputSignal(signal:)")));
@end

__attribute__((swift_name("VPSOutputHandler")))
@protocol VpsVPSOutputHandler
@required
- (void)onOutputSignalOutputSignal:(VpsOutputSignal *)outputSignal __attribute__((swift_name("onOutputSignal(outputSignal:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSRotation")))
@interface VpsVPSRotation : VpsBase <VpsFlowConnection>
- (instancetype)initWithOutputHandler:(id<VpsVPSOutputHandler>)outputHandler system:(VpsVPSParamsSystem *)system rotationHandlerSettings:(VpsRotationHandlerSettings *)rotationHandlerSettings __attribute__((swift_name("init(outputHandler:system:rotationHandlerSettings:)"))) __attribute__((objc_designated_initializer));
- (void)flush __attribute__((swift_name("flush()")));
- (void)doInitSignal:(VpsInputSignalStart *)signal __attribute__((swift_name("doInit(signal:)")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(VpsOutputSignal *)data __attribute__((swift_name("onInput(data:)")));
- (void)onInputSignalSignal:(VpsInputSignal *)signal __attribute__((swift_name("onInputSignal(signal:)")));
@end

__attribute__((swift_name("FlowConverter")))
@interface VpsFlowConverter<T, S> : VpsBase <VpsFlowConnection>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsFlowConverter<T, S> *)connectToConnections:(NSArray<id<VpsFlowConnection>> *)connections __attribute__((swift_name("connectTo(connections:)")));
- (VpsFlowConverter<T, S> *)connectToConnection:(id<VpsFlowConnection>)connection __attribute__((swift_name("connectTo(connection:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)outputData:(S _Nullable)data __attribute__((swift_name("output(data:)")));
@property (readonly) NSArray<id<VpsFlowConnection>> *connections __attribute__((swift_name("connections")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorChangeInterpreter")))
@interface VpsFloorChangeInterpreter : VpsFlowConverter<VpsRawSensorData *, VpsFloorChangeSignal *>
- (instancetype)initWithSystem:(VpsVPSParamsSystem *)system floorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler floorChangeInterpreterSettings:(VpsFloorChangeInterpreterSettings *)floorChangeInterpreterSettings __attribute__((swift_name("init(system:floorLevelHandler:floorChangeInterpreterSettings:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)doInit __attribute__((swift_name("doInit()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputEvent:(VpsBaseEvent *)event __attribute__((swift_name("onInput(event:)")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@property (readonly) VpsFloorLevelHandler *floorLevelHandler __attribute__((swift_name("floorLevelHandler")));
@property (readonly) VpsVPSParamsSystem *system __attribute__((swift_name("system")));
@end

__attribute__((swift_name("FlowConverterBuilder")))
@interface VpsFlowConverterBuilder<T, S> : VpsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (T _Nullable)build __attribute__((swift_name("build()")));
@property NSMutableArray<id<VpsFlowConnection>> *builderConnections __attribute__((swift_name("builderConnections")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorChangeInterpreter.Builder")))
@interface VpsFloorChangeInterpreterBuilder : VpsFlowConverterBuilder<VpsFloorChangeInterpreter *, VpsFloorChangeSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsFloorChangeInterpreter *)build __attribute__((swift_name("build()")));
- (VpsFloorChangeInterpreterBuilder *)setFloorHandlerSettingsFloorChangeInterpreterSettings:(VpsFloorChangeInterpreterSettings *)floorChangeInterpreterSettings __attribute__((swift_name("setFloorHandlerSettings(floorChangeInterpreterSettings:)")));
- (VpsFloorChangeInterpreterBuilder *)setFloorLevelHandlerFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("setFloorLevelHandler(floorLevelHandler:)")));
- (VpsFloorChangeInterpreterBuilder *)setSystemSystem:(VpsVPSParamsSystem *)system __attribute__((swift_name("setSystem(system:)")));
@end

__attribute__((swift_name("InAndOutListener")))
@protocol VpsInAndOutListener
@required
- (void)onEnterTriggers:(NSArray<VpsInAndOutTrigger *> *)triggers position:(VpsCoordinateF *)position __attribute__((swift_name("onEnter(triggers:position:)")));
- (void)onEnterTrigger:(VpsInAndOutTrigger *)trigger position:(VpsCoordinateF *)position __attribute__((swift_name("onEnter(trigger:position:)")));
- (void)onExitTriggers:(NSArray<VpsInAndOutTrigger *> *)triggers position:(VpsCoordinateF *)position __attribute__((swift_name("onExit(triggers:position:)")));
- (void)onExitTrigger:(VpsInAndOutTrigger *)trigger position:(VpsCoordinateF *)position __attribute__((swift_name("onExit(trigger:position:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorChangeController")))
@interface VpsFloorChangeController : VpsFlowConverter<VpsFloorChangeSignal *, VpsOutputSignal *> <VpsInAndOutListener>
- (instancetype)initWithFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler positioningEngineRepository:(id<VpsPositionEngineRepository>)positioningEngineRepository listener:(void (^ _Nullable)(VpsInputSignal *))listener __attribute__((swift_name("init(floorLevelHandler:positioningEngineRepository:listener:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) VpsFloorChangeControllerCompanion *companion __attribute__((swift_name("companion")));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)onEnterTrigger:(VpsInAndOutTrigger *)trigger position:(VpsCoordinateF *)position __attribute__((swift_name("onEnter(trigger:position:)")));
- (void)onExitTrigger:(VpsInAndOutTrigger *)trigger position:(VpsCoordinateF *)position __attribute__((swift_name("onExit(trigger:position:)")));
- (void)onInputData:(VpsFloorChangeSignal *)data __attribute__((swift_name("onInput(data:)")));
- (void)onNewPositionEventPosition:(VpsCoordinateF *)position __attribute__((swift_name("onNewPositionEvent(position:)")));
- (void)onWifiFloorChangeEvent:(VpsFloorChangeSignalWiFiFloorChangeSignal *)event __attribute__((swift_name("onWifiFloorChange(event:)")));
@property (readonly) VpsFloorLevelHandler *floorLevelHandler __attribute__((swift_name("floorLevelHandler")));
@property (readonly) void (^ _Nullable listener)(VpsInputSignal *) __attribute__((swift_name("listener")));
@property (readonly) id<VpsPositionEngineRepository> positioningEngineRepository __attribute__((swift_name("positioningEngineRepository")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorChangeController.Builder")))
@interface VpsFloorChangeControllerBuilder : VpsFlowConverterBuilder<VpsFloorChangeController *, VpsOutputSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsFloorChangeController *)build __attribute__((swift_name("build()")));
- (VpsFloorChangeControllerBuilder *)setFloorLevelHandlerFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("setFloorLevelHandler(floorLevelHandler:)")));
- (VpsFloorChangeControllerBuilder *)setListenerListener:(void (^)(VpsInputSignal *))listener __attribute__((swift_name("setListener(listener:)")));
- (VpsFloorChangeControllerBuilder *)setPositionEngineRepositoryPositioningEngineRepository:(id<VpsPositionEngineRepository>)positioningEngineRepository __attribute__((swift_name("setPositionEngineRepository(positioningEngineRepository:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorChangeController.Companion")))
@interface VpsFloorChangeControllerCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsFloorChangeControllerCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("FloorChangeDetector")))
@interface VpsFloorChangeDetector : VpsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onFloorChanged __attribute__((swift_name("onFloorChanged()")));
- (void)onInputEvent:(VpsBaseEvent *)event __attribute__((swift_name("onInput(event:)")));
- (void)onInputData_:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data_:)")));
- (void)setOutPutListenerListener:(void (^)(VpsFloorChangeSignal *))listener __attribute__((swift_name("setOutPutListener(listener:)")));
@property void (^ _Nullable listener)(VpsFloorChangeSignal *) __attribute__((swift_name("listener")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AltitudeWifiFusionFloorChangeInterpreter")))
@interface VpsAltitudeWifiFusionFloorChangeInterpreter : VpsFloorChangeDetector
- (instancetype)initWithFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler floorChangeInterpreterSettings:(VpsFloorChangeInterpreterSettings *)floorChangeInterpreterSettings __attribute__((swift_name("init(floorLevelHandler:floorChangeInterpreterSettings:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputEvent:(VpsBaseEvent *)event __attribute__((swift_name("onInput(event:)")));
- (void)onInputData_:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data_:)")));
@property (readonly) VpsFloorLevelHandler *floorLevelHandler __attribute__((swift_name("floorLevelHandler")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiBasedFloorChangeInterpreter2")))
@interface VpsWifiBasedFloorChangeInterpreter2 : VpsFloorChangeDetector
- (instancetype)initWithFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("init(floorLevelHandler:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (VpsFloorChangeSignalWiFiFloorChangeSignal * _Nullable)determineFloorStatus:(VpsBaseEventWifiStatusUpdate *)status __attribute__((swift_name("determineFloor(status:)")));
- (void)onInputEvent:(VpsBaseEvent *)event __attribute__((swift_name("onInput(event:)")));
@property (readonly) VpsFloorLevelHandler *floorLevelHandler __attribute__((swift_name("floorLevelHandler")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AltitudeClassifierDetector")))
@interface VpsAltitudeClassifierDetector : VpsFloorChangeDetector <VpsFlowConnection>
- (instancetype)initWithParams:(VpsAltitudeClassifierParams *)params floorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("init(params:floorLevelHandler:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)flush __attribute__((swift_name("flush()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onFloorChanged __attribute__((swift_name("onFloorChanged()")));
- (void)onInputData:(VpsFloorChangeSignal *)data __attribute__((swift_name("onInput(data:)")));
- (void)onInputData_:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClassifierEvent")))
@interface VpsClassifierEvent : VpsBase
- (instancetype)initWithState:(VpsClassifierState *)state startTime:(int64_t)startTime reportTime:(int64_t)reportTime altitude:(float)altitude altitudeDerivative:(VpsFloat * _Nullable)altitudeDerivative laggedAltitude:(VpsFloat * _Nullable)laggedAltitude __attribute__((swift_name("init(state:startTime:reportTime:altitude:altitudeDerivative:laggedAltitude:)"))) __attribute__((objc_designated_initializer));
- (VpsClassifierEvent *)doCopyState:(VpsClassifierState *)state startTime:(int64_t)startTime reportTime:(int64_t)reportTime altitude:(float)altitude altitudeDerivative:(VpsFloat * _Nullable)altitudeDerivative laggedAltitude:(VpsFloat * _Nullable)laggedAltitude __attribute__((swift_name("doCopy(state:startTime:reportTime:altitude:altitudeDerivative:laggedAltitude:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float altitude __attribute__((swift_name("altitude")));
@property (readonly) VpsFloat * _Nullable altitudeDerivative __attribute__((swift_name("altitudeDerivative")));
@property (readonly) VpsFloat * _Nullable laggedAltitude __attribute__((swift_name("laggedAltitude")));
@property (readonly) int64_t reportTime __attribute__((swift_name("reportTime")));
@property (readonly) int64_t startTime __attribute__((swift_name("startTime")));
@property (readonly) VpsClassifierState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClassifierState")))
@interface VpsClassifierState : VpsKotlinEnum<VpsClassifierState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsClassifierState *descend __attribute__((swift_name("descend")));
@property (class, readonly) VpsClassifierState *maybeDescend __attribute__((swift_name("maybeDescend")));
@property (class, readonly) VpsClassifierState *stable __attribute__((swift_name("stable")));
@property (class, readonly) VpsClassifierState *maybeAscend __attribute__((swift_name("maybeAscend")));
@property (class, readonly) VpsClassifierState *ascend __attribute__((swift_name("ascend")));
@property (class, readonly) VpsClassifierState *floorHeightReached __attribute__((swift_name("floorHeightReached")));
+ (VpsKotlinArray<VpsClassifierState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsClassifierState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DerivativeElevationClassifier")))
@interface VpsDerivativeElevationClassifier : VpsBase
- (instancetype)initWithParams:(VpsAltitudeClassifierParams *)params __attribute__((swift_name("init(params:)"))) __attribute__((objc_designated_initializer));
- (VpsClassifierEvent * _Nullable)inputAltitudes:(VpsKotlinFloatArray *)altitudes laggedTimestamp:(int64_t)laggedTimestamp timestamp:(int64_t)timestamp __attribute__((swift_name("input(altitudes:laggedTimestamp:timestamp:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorHeightClassifier")))
@interface VpsFloorHeightClassifier : VpsBase
- (instancetype)initWithInitialParentEvent:(VpsClassifierEvent *)initialParentEvent params:(VpsAltitudeClassifierParams *)params floorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("init(initialParentEvent:params:floorLevelHandler:)"))) __attribute__((objc_designated_initializer));
- (VpsClassifierEvent * _Nullable)inputCurrentAltitude:(float)currentAltitude timestamp:(int64_t)timestamp __attribute__((swift_name("input(currentAltitude:timestamp:)")));
- (void)onFloorChanged __attribute__((swift_name("onFloorChanged()")));
- (void)setFloorHeightParams __attribute__((swift_name("setFloorHeightParams()")));
- (void)updateCurrentParentEvent:(VpsClassifierEvent *)currentParentEvent __attribute__((swift_name("update(currentParentEvent:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConvertAltitudeToClassifierEvent")))
@interface VpsConvertAltitudeToClassifierEvent : VpsFlowConverter<VpsRawSensorData *, VpsFloorChangeSignal *>
- (instancetype)initWithParams:(VpsAltitudeClassifierParams *)params floorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("init(params:floorLevelHandler:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onFloorChanged __attribute__((swift_name("onFloorChanged()")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConvertAltitudeToClassifierEvent.Builder")))
@interface VpsConvertAltitudeToClassifierEventBuilder : VpsFlowConverterBuilder<VpsConvertAltitudeToClassifierEvent *, VpsFloorChangeSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsConvertAltitudeToClassifierEvent *)build __attribute__((swift_name("build()")));
- (VpsConvertAltitudeToClassifierEventBuilder *)setAltitudeClassifierParamsParams:(VpsAltitudeClassifierParams *)params __attribute__((swift_name("setAltitudeClassifierParams(params:)")));
- (VpsConvertAltitudeToClassifierEventBuilder *)setFloorLevelHandlerFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("setFloorLevelHandler(floorLevelHandler:)")));
@end

__attribute__((swift_name("Node")))
@interface VpsNode<T> : VpsBase <VpsFlowConnection>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)outputData:(T _Nullable)data __attribute__((swift_name("output(data:)")));
- (void)setOutPutOutput:(id<VpsNodeHandler>)output __attribute__((swift_name("setOutPut(output:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConvertPressureToAltitude")))
@interface VpsConvertPressureToAltitude : VpsNode<VpsRawSensorData *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((swift_name("AltitudeBasedFloorChangeInterpreter")))
@interface VpsAltitudeBasedFloorChangeInterpreter : VpsFlowConverter<VpsRawSensorData *, VpsFloorChangeSignal *>
- (instancetype)initWithFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler listener:(void (^ _Nullable)(VpsAltitudeBasedFloorChangeInterpreterFloorState *))listener __attribute__((swift_name("init(floorLevelHandler:listener:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (float)filterSensorDataData:(float)data __attribute__((swift_name("filterSensorData(data:)")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@property VpsAverageVariance *compensationDataHistory __attribute__((swift_name("compensationDataHistory")));
@property VpsAverageVariance *dataHistory __attribute__((swift_name("dataHistory")));
@property (readonly) VpsFloorSensorParameters *parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AltitudeBasedFloorChangeInterpreter.Builder")))
@interface VpsAltitudeBasedFloorChangeInterpreterBuilder : VpsFlowConverterBuilder<VpsAltitudeBasedFloorChangeInterpreter *, VpsFloorChangeSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsAltitudeBasedFloorChangeInterpreter *)build __attribute__((swift_name("build()")));
- (VpsAltitudeBasedFloorChangeInterpreterBuilder *)setFloorLevelHandlerFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("setFloorLevelHandler(floorLevelHandler:)")));
- (VpsAltitudeBasedFloorChangeInterpreterBuilder *)setListenerListener:(void (^)(VpsAltitudeBasedFloorChangeInterpreterFloorState *))listener __attribute__((swift_name("setListener(listener:)")));
- (VpsAltitudeBasedFloorChangeInterpreterBuilder *)setSystemSystem:(VpsVPSParamsSystem *)system __attribute__((swift_name("setSystem(system:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AltitudeBasedFloorChangeInterpreter.FloorState")))
@interface VpsAltitudeBasedFloorChangeInterpreterFloorState : VpsKotlinEnum<VpsAltitudeBasedFloorChangeInterpreterFloorState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsAltitudeBasedFloorChangeInterpreterFloorState *goingUp __attribute__((swift_name("goingUp")));
@property (class, readonly) VpsAltitudeBasedFloorChangeInterpreterFloorState *goingDown __attribute__((swift_name("goingDown")));
@property (class, readonly) VpsAltitudeBasedFloorChangeInterpreterFloorState *stable __attribute__((swift_name("stable")));
+ (VpsKotlinArray<VpsAltitudeBasedFloorChangeInterpreterFloorState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsAltitudeBasedFloorChangeInterpreterFloorState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorSensorParameters")))
@interface VpsFloorSensorParameters : VpsBase
- (instancetype)initWithSTABLE_VARIANCE_THRESHOLD:(double)STABLE_VARIANCE_THRESHOLD DRIFT_COMPENSATION_VARIANCE_THRESHOLD:(double)DRIFT_COMPENSATION_VARIANCE_THRESHOLD DRIFT_COMPENSATION_ALTITUDE_LIMIT:(double)DRIFT_COMPENSATION_ALTITUDE_LIMIT DATA_HISTORY_SIZE:(int32_t)DATA_HISTORY_SIZE DATA_COMPENSATION_HISTORY_SIZE:(int32_t)DATA_COMPENSATION_HISTORY_SIZE DRIFT_COMPENSATION_INTERVAL:(int64_t)DRIFT_COMPENSATION_INTERVAL CHANGE_THRESHOLD_PERCENTAGE:(double)CHANGE_THRESHOLD_PERCENTAGE __attribute__((swift_name("init(STABLE_VARIANCE_THRESHOLD:DRIFT_COMPENSATION_VARIANCE_THRESHOLD:DRIFT_COMPENSATION_ALTITUDE_LIMIT:DATA_HISTORY_SIZE:DATA_COMPENSATION_HISTORY_SIZE:DRIFT_COMPENSATION_INTERVAL:CHANGE_THRESHOLD_PERCENTAGE:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsFloorSensorParametersCompanion *companion __attribute__((swift_name("companion")));
- (VpsFloorSensorParameters *)doCopySTABLE_VARIANCE_THRESHOLD:(double)STABLE_VARIANCE_THRESHOLD DRIFT_COMPENSATION_VARIANCE_THRESHOLD:(double)DRIFT_COMPENSATION_VARIANCE_THRESHOLD DRIFT_COMPENSATION_ALTITUDE_LIMIT:(double)DRIFT_COMPENSATION_ALTITUDE_LIMIT DATA_HISTORY_SIZE:(int32_t)DATA_HISTORY_SIZE DATA_COMPENSATION_HISTORY_SIZE:(int32_t)DATA_COMPENSATION_HISTORY_SIZE DRIFT_COMPENSATION_INTERVAL:(int64_t)DRIFT_COMPENSATION_INTERVAL CHANGE_THRESHOLD_PERCENTAGE:(double)CHANGE_THRESHOLD_PERCENTAGE __attribute__((swift_name("doCopy(STABLE_VARIANCE_THRESHOLD:DRIFT_COMPENSATION_VARIANCE_THRESHOLD:DRIFT_COMPENSATION_ALTITUDE_LIMIT:DATA_HISTORY_SIZE:DATA_COMPENSATION_HISTORY_SIZE:DRIFT_COMPENSATION_INTERVAL:CHANGE_THRESHOLD_PERCENTAGE:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double CHANGE_THRESHOLD_PERCENTAGE __attribute__((swift_name("CHANGE_THRESHOLD_PERCENTAGE")));
@property (readonly) int32_t DATA_COMPENSATION_HISTORY_SIZE __attribute__((swift_name("DATA_COMPENSATION_HISTORY_SIZE")));
@property (readonly) int32_t DATA_HISTORY_SIZE __attribute__((swift_name("DATA_HISTORY_SIZE")));
@property (readonly) double DRIFT_COMPENSATION_ALTITUDE_LIMIT __attribute__((swift_name("DRIFT_COMPENSATION_ALTITUDE_LIMIT")));
@property (readonly) int64_t DRIFT_COMPENSATION_INTERVAL __attribute__((swift_name("DRIFT_COMPENSATION_INTERVAL")));
@property (readonly) double DRIFT_COMPENSATION_VARIANCE_THRESHOLD __attribute__((swift_name("DRIFT_COMPENSATION_VARIANCE_THRESHOLD")));
@property (readonly) double STABLE_VARIANCE_THRESHOLD __attribute__((swift_name("STABLE_VARIANCE_THRESHOLD")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorSensorParameters.Companion")))
@interface VpsFloorSensorParametersCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsFloorSensorParametersCompanion *shared __attribute__((swift_name("shared")));
- (VpsFloorSensorParameters *)default __attribute__((swift_name("default()")));
@property (readonly) double CHANGE_THRESHOLD_PERCENTAGE __attribute__((swift_name("CHANGE_THRESHOLD_PERCENTAGE")));
@property (readonly) int32_t DATA_COMPENSATION_HISTORY_SIZE __attribute__((swift_name("DATA_COMPENSATION_HISTORY_SIZE")));
@property (readonly) int32_t DATA_HISTORY_SIZE __attribute__((swift_name("DATA_HISTORY_SIZE")));
@property (readonly) double DRIFT_COMPENSATION_ALTITUDE_LIMIT __attribute__((swift_name("DRIFT_COMPENSATION_ALTITUDE_LIMIT")));
@property (readonly) int64_t DRIFT_COMPENSATION_INTERVAL __attribute__((swift_name("DRIFT_COMPENSATION_INTERVAL")));
@property (readonly) double DRIFT_COMPENSATION_VARIANCE_THRESHOLD __attribute__((swift_name("DRIFT_COMPENSATION_VARIANCE_THRESHOLD")));
@property (readonly) double STABLE_VARIANCE_THRESHOLD __attribute__((swift_name("STABLE_VARIANCE_THRESHOLD")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OldAltitudeFloorChangeDetector")))
@interface VpsOldAltitudeFloorChangeDetector : VpsFloorChangeDetector <VpsFlowConnection>
- (instancetype)initWithSystem:(VpsVPSParamsSystem *)system floorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("init(system:floorLevelHandler:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)flush __attribute__((swift_name("flush()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(VpsFloorChangeSignal *)data __attribute__((swift_name("onInput(data:)")));
- (void)onInputData_:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data_:)")));
@property (readonly) VpsFloorLevelHandler *floorLevelHandler __attribute__((swift_name("floorLevelHandler")));
@property (readonly) VpsVPSParamsSystem *system __attribute__((swift_name("system")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidFloorChangeInterpreter")))
@interface VpsAndroidFloorChangeInterpreter : VpsAltitudeBasedFloorChangeInterpreter
- (instancetype)initWithFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler listener:(void (^ _Nullable)(VpsAltitudeBasedFloorChangeInterpreterFloorState *))listener __attribute__((swift_name("init(floorLevelHandler:listener:)"))) __attribute__((objc_designated_initializer));
- (float)filterSensorDataData:(float)data __attribute__((swift_name("filterSensorData(data:)")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@property (readonly) float ATMOSPHERE __attribute__((swift_name("ATMOSPHERE")));
@property (readonly) float GRAVITY __attribute__((swift_name("GRAVITY")));
@property (readonly) float IDEAL_GAS_CONSTANT __attribute__((swift_name("IDEAL_GAS_CONSTANT")));
@property (readonly) float MOLAR_MASS_AIR __attribute__((swift_name("MOLAR_MASS_AIR")));
@property (readonly) float TEMPERATURE_15C __attribute__((swift_name("TEMPERATURE_15C")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((swift_name("SensorFrequencyDetector")))
@interface VpsSensorFrequencyDetector : VpsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onSampleFrequencyInitialised __attribute__((swift_name("onSampleFrequencyInitialised()")));
- (void)updateData:(VpsRawSensorData *)data __attribute__((swift_name("update(data:)")));
@property (readonly) VpsSensorDataType *sensorType __attribute__((swift_name("sensorType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BarometerFrequencyDetector")))
@interface VpsBarometerFrequencyDetector : VpsSensorFrequencyDetector
- (instancetype)initWithOnFrequencyCallback:(void (^)(void))onFrequencyCallback __attribute__((swift_name("init(onFrequencyCallback:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onSampleFrequencyInitialised __attribute__((swift_name("onSampleFrequencyInitialised()")));
@property (readonly) void (^onFrequencyCallback)(void) __attribute__((swift_name("onFrequencyCallback")));
@property (readonly) VpsSensorDataType *sensorType __attribute__((swift_name("sensorType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSFloorChangeInterpreter")))
@interface VpsIOSFloorChangeInterpreter : VpsAltitudeBasedFloorChangeInterpreter
- (instancetype)initWithFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler listener:(void (^ _Nullable)(VpsAltitudeBasedFloorChangeInterpreterFloorState *))listener __attribute__((swift_name("init(floorLevelHandler:listener:)"))) __attribute__((objc_designated_initializer));
- (float)filterSensorDataData:(float)data __attribute__((swift_name("filterSensorData(data:)")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AverageVariance")))
@interface VpsAverageVariance : VpsBase
- (instancetype)initWithN:(int32_t)N __attribute__((swift_name("init(N:)"))) __attribute__((objc_designated_initializer));
- (VpsAverageVarianceDoublePack *)calculateData:(double)data __attribute__((swift_name("calculate(data:)")));
- (VpsAverageVarianceFloatPack *)calculateData_:(float)data __attribute__((swift_name("calculate(data_:)")));
- (double)max __attribute__((swift_name("max()")));
- (double)min __attribute__((swift_name("min()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AverageVariance.DoublePack")))
@interface VpsAverageVarianceDoublePack : VpsBase
- (instancetype)initWithAverage:(double)average variance:(double)variance totalVariation:(double)totalVariation __attribute__((swift_name("init(average:variance:totalVariation:)"))) __attribute__((objc_designated_initializer));
- (VpsAverageVarianceDoublePack *)doCopyAverage:(double)average variance:(double)variance totalVariation:(double)totalVariation __attribute__((swift_name("doCopy(average:variance:totalVariation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double average __attribute__((swift_name("average")));
@property (readonly) double totalVariation __attribute__((swift_name("totalVariation")));
@property (readonly) double variance __attribute__((swift_name("variance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AverageVariance.FloatPack")))
@interface VpsAverageVarianceFloatPack : VpsBase
- (instancetype)initWithAverage:(float)average variance:(float)variance totalVariation:(float)totalVariation __attribute__((swift_name("init(average:variance:totalVariation:)"))) __attribute__((objc_designated_initializer));
- (VpsAverageVarianceFloatPack *)doCopyAverage:(float)average variance:(float)variance totalVariation:(float)totalVariation __attribute__((swift_name("doCopy(average:variance:totalVariation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float average __attribute__((swift_name("average")));
@property (readonly) float totalVariation __attribute__((swift_name("totalVariation")));
@property (readonly) float variance __attribute__((swift_name("variance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RollingAverage")))
@interface VpsRollingAverage : VpsBase
- (instancetype)initWithN:(int32_t)N __attribute__((swift_name("init(N:)"))) __attribute__((objc_designated_initializer));
- (double)calculateData:(double)data __attribute__((swift_name("calculate(data:)")));
- (float)calculateData_:(float)data __attribute__((swift_name("calculate(data_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiBasedFloorChangeInterpreter")))
@interface VpsWifiBasedFloorChangeInterpreter : VpsFloorChangeDetector
- (instancetype)initWithFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("init(floorLevelHandler:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (VpsFloorChangeSignalWiFiFloorChangeSignal * _Nullable)determineFloorStatus:(VpsBaseEventWifiStatusUpdate *)status __attribute__((swift_name("determineFloor(status:)")));
- (void)onInputEvent:(VpsBaseEvent *)event __attribute__((swift_name("onInput(event:)")));
@property (readonly) VpsFloorLevelHandler *floorLevelHandler __attribute__((swift_name("floorLevelHandler")));
@end

__attribute__((swift_name("PositioningEngine")))
@interface VpsPositioningEngine : VpsFlowConverter<VpsBaseEvent *, VpsOutputSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)setStartData:(VpsBaseEventStart *)data __attribute__((swift_name("setStart(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositioningEngine.Builder")))
@interface VpsPositioningEngineBuilder : VpsFlowConverterBuilder<VpsPositioningEngine *, VpsOutputSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsPositioningEngine *)build __attribute__((swift_name("build()")));
- (VpsPositioningEngineBuilder *)setFloorLevelHandlerFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("setFloorLevelHandler(floorLevelHandler:)")));
- (VpsPositioningEngineBuilder *)setNlModelNlModel:(id<VpsNLModel> _Nullable)nlModel __attribute__((swift_name("setNlModel(nlModel:)")));
- (VpsPositioningEngineBuilder *)setPositionEngineRepositoryPositioningEngineRepository:(id<VpsPositionEngineRepository>)positioningEngineRepository __attribute__((swift_name("setPositionEngineRepository(positioningEngineRepository:)")));
- (VpsPositioningEngineBuilder *)setSettingsSettings:(VpsPositionEngineSettings *)settings __attribute__((swift_name("setSettings(settings:)")));
- (VpsPositioningEngineBuilder *)setStartDataStartData:(VpsBaseEventStart *)startData __attribute__((swift_name("setStartData(startData:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterGPS")))
@interface VpsParticleFilterGPS : VpsPositioningEngine
- (instancetype)initWithMlAdjustmentActivated:(BOOL)mlAdjustmentActivated __attribute__((swift_name("init(mlAdjustmentActivated:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(VpsBaseEvent *)data __attribute__((swift_name("onInput(data:)")));
- (void)setStartData:(VpsBaseEventStart *)data __attribute__((swift_name("setStart(data:)")));
@property (readonly) BOOL mlAdjustmentActivated __attribute__((swift_name("mlAdjustmentActivated")));
@end

__attribute__((swift_name("FusionFilter")))
@protocol VpsFusionFilter
@required
- (void)setStartStart:(VpsBaseEventStart *)start __attribute__((swift_name("setStart(start:)")));
- (VpsKotlinTriple<VpsLocation *, VpsLocation *, VpsOutputSignalLngLatLocationSource *> * _Nullable)updateEvent:(VpsBaseEvent *)event __attribute__((swift_name("update(event:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GPSFusionFilter")))
@interface VpsGPSFusionFilter : VpsBase <VpsFusionFilter>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)end __attribute__((swift_name("end()")));
- (void)setStartStart:(VpsBaseEventStart *)start __attribute__((swift_name("setStart(start:)")));
- (VpsKotlinTriple<VpsLocation *, VpsLocation *, VpsOutputSignalLngLatLocationSource *> * _Nullable)updateEvent:(VpsBaseEvent *)event __attribute__((swift_name("update(event:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenTerrainFusionFilter")))
@interface VpsOpenTerrainFusionFilter : VpsBase <VpsFusionFilter>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)end __attribute__((swift_name("end()")));
- (VpsKotlinPair<VpsKotlinArray<VpsKotlinFloatArray *> *, VpsFloat *> *)getMLPositions __attribute__((swift_name("getMLPositions()")));
- (void)setStartStart:(VpsBaseEventStart *)start __attribute__((swift_name("setStart(start:)")));
- (VpsKotlinTriple<VpsLocation *, VpsLocation *, VpsOutputSignalLngLatLocationSource *> * _Nullable)updateEvent:(VpsBaseEvent *)event __attribute__((swift_name("update(event:)")));
@end

__attribute__((swift_name("AbstractParticleFilter")))
@interface VpsAbstractParticleFilter : VpsBase
- (instancetype)initWithMapData:(VpsFloorLevelHandler *)mapData positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository params:(VpsParticleFilterParams *)params random:(id<VpsRandomNumberGenerator>)random rescueModeHelper:(id<VpsAbstractParticleFilterRescueModeHelper> _Nullable)rescueModeHelper __attribute__((swift_name("init(mapData:positionEngineRepository:params:random:rescueModeHelper:)"))) __attribute__((objc_designated_initializer));
- (void)end __attribute__((swift_name("end()")));
- (void)setStartStart:(VpsBaseEventStart *)start __attribute__((swift_name("setStart(start:)")));
- (VpsCoordinateF * _Nullable)updateEvent:(VpsBaseEvent *)event __attribute__((swift_name("update(event:)")));
- (void)updateCurrentPositionCurrentPosition:(VpsCoordinateF *)currentPosition __attribute__((swift_name("updateCurrentPosition(currentPosition:)")));
- (void)updateCurrentWiFiObservationCurrentWiFiObservation:(VpsBaseEventWiFiObservation * _Nullable)currentWiFiObservation __attribute__((swift_name("updateCurrentWiFiObservation(currentWiFiObservation:)")));
- (void)updateCurrentWiFiScanCurrentWiFiScan:(VpsBaseEventWiFiScan * _Nullable)currentWiFiScan __attribute__((swift_name("updateCurrentWiFiScan(currentWiFiScan:)")));
@property (readonly) VpsCoordinateF *currentPosition __attribute__((swift_name("currentPosition")));
@property (readonly) VpsFloorLevelHandler *mapData __attribute__((swift_name("mapData")));
@property VpsParticleFilterParams *params __attribute__((swift_name("params")));
@property (readonly) id<VpsPositionEngineRepository> positionEngineRepository __attribute__((swift_name("positionEngineRepository")));
@property (readonly) id<VpsRandomNumberGenerator> random __attribute__((swift_name("random")));
@property (readonly) id<VpsAbstractParticleFilterRescueModeHelper> _Nullable rescueModeHelper __attribute__((swift_name("rescueModeHelper")));
@property void (^ _Nullable rescueModeListener)(VpsParticleFilterEvent *) __attribute__((swift_name("rescueModeListener")));
@end

__attribute__((swift_name("AbstractParticleFilterRescueModeHelper")))
@protocol VpsAbstractParticleFilterRescueModeHelper
@required
- (VpsNLModelOutput * _Nullable)getNLModelOutPut __attribute__((swift_name("getNLModelOutPut()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventHandler")))
@interface VpsEventHandler : VpsFlowConverter<VpsBaseEvent *, VpsOutputSignal *>
- (instancetype)initWithFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("init(floorLevelHandler:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputData:(VpsBaseEvent *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventHandler.Builder")))
@interface VpsEventHandlerBuilder : VpsFlowConverterBuilder<VpsEventHandler *, VpsOutputSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsEventHandler *)build __attribute__((swift_name("build()")));
- (VpsEventHandlerBuilder *)setFloorLevelHandlerFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("setFloorLevelHandler(floorLevelHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventHandlerNaiveOutput")))
@interface VpsEventHandlerNaiveOutput : VpsFlowConverter<VpsBaseEvent *, VpsOutputSignal *>
- (instancetype)initWithFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("init(floorLevelHandler:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputData:(VpsBaseEvent *)data __attribute__((swift_name("onInput(data:)")));
- (void)setStartData:(VpsBaseEventStart *)data __attribute__((swift_name("setStart(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventHandlerNaiveOutput.Builder")))
@interface VpsEventHandlerNaiveOutputBuilder : VpsFlowConverterBuilder<VpsEventHandlerNaiveOutput *, VpsOutputSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsEventHandlerNaiveOutput *)build __attribute__((swift_name("build()")));
- (VpsEventHandlerNaiveOutputBuilder *)setFloorLevelHandlerFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("setFloorLevelHandler(floorLevelHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilter")))
@interface VpsParticleFilter : VpsPositioningEngine <VpsAbstractParticleFilterRescueModeHelper>
- (instancetype)initWithFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler settings:(VpsParticleFilterSettings *)settings nlModel:(id<VpsNLModel> _Nullable)nlModel positioningEngineRepository:(id<VpsPositionEngineRepository>)positioningEngineRepository __attribute__((swift_name("init(floorLevelHandler:settings:nlModel:positioningEngineRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (VpsNLModelOutput * _Nullable)getNLModelOutPut __attribute__((swift_name("getNLModelOutPut()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(VpsBaseEvent *)data __attribute__((swift_name("onInput(data:)")));
- (void)setStartData:(VpsBaseEventStart *)data __attribute__((swift_name("setStart(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilter.Builder")))
@interface VpsParticleFilterBuilder : VpsFlowConverterBuilder<VpsParticleFilter *, VpsOutputSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsParticleFilter *)build __attribute__((swift_name("build()")));
- (VpsParticleFilterBuilder *)setFloorLevelHandlerFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("setFloorLevelHandler(floorLevelHandler:)")));
- (VpsParticleFilterBuilder *)setNlModelNlModel:(id<VpsNLModel> _Nullable)nlModel __attribute__((swift_name("setNlModel(nlModel:)")));
- (VpsParticleFilterBuilder *)setPositionEngineRepositoryPositioningEngineRepository:(id<VpsPositionEngineRepository>)positioningEngineRepository __attribute__((swift_name("setPositionEngineRepository(positioningEngineRepository:)")));
- (VpsParticleFilterBuilder *)setSettingsSettings:(VpsParticleFilterSettings *)settings __attribute__((swift_name("setSettings(settings:)")));
- (VpsParticleFilterBuilder *)setStartDataStartData:(VpsBaseEventStart *)startData __attribute__((swift_name("setStartData(startData:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("BaseEvent")))
@interface VpsBaseEvent : VpsBase
@property (class, readonly, getter=companion) VpsBaseEventCompanion *companion __attribute__((swift_name("companion")));
@property VpsEventType *event_type __attribute__((swift_name("event_type")));
@property int64_t timestamp __attribute__((swift_name("timestamp")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.AngleCorrectionEvent")))
@interface VpsBaseEventAngleCorrectionEvent : VpsBaseEvent
- (instancetype)initWithTimestamp:(int64_t)timestamp angle:(float)angle __attribute__((swift_name("init(timestamp:angle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventAngleCorrectionEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventAngleCorrectionEvent *)doCopyTimestamp:(int64_t)timestamp angle:(float)angle __attribute__((swift_name("doCopy(timestamp:angle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float angle __attribute__((swift_name("angle")));
@property int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.AngleCorrectionEventCompanion")))
@interface VpsBaseEventAngleCorrectionEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventAngleCorrectionEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.Companion")))
@interface VpsBaseEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.FloorChangeEvent")))
@interface VpsBaseEventFloorChangeEvent : VpsBaseEvent
- (instancetype)initWithTimestamp:(int64_t)timestamp floorLevelId:(int64_t)floorLevelId startPosition:(VpsCoordinateF *)startPosition __attribute__((swift_name("init(timestamp:floorLevelId:startPosition:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventFloorChangeEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventFloorChangeEvent *)doCopyTimestamp:(int64_t)timestamp floorLevelId:(int64_t)floorLevelId startPosition:(VpsCoordinateF *)startPosition __attribute__((swift_name("doCopy(timestamp:floorLevelId:startPosition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorLevelId __attribute__((swift_name("floorLevelId")));
@property (readonly) VpsCoordinateF *startPosition __attribute__((swift_name("startPosition")));
@property int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.FloorChangeEventCompanion")))
@interface VpsBaseEventFloorChangeEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventFloorChangeEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.LngLatEvent")))
@interface VpsBaseEventLngLatEvent : VpsBaseEvent
- (instancetype)initWithTimestamp:(int64_t)timestamp location:(VpsLocation *)location __attribute__((swift_name("init(timestamp:location:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventLngLatEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventLngLatEvent *)doCopyTimestamp:(int64_t)timestamp location:(VpsLocation *)location __attribute__((swift_name("doCopy(timestamp:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsLocation *location __attribute__((swift_name("location")));
@property int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.LngLatEventCompanion")))
@interface VpsBaseEventLngLatEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventLngLatEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.StairEvent")))
@interface VpsBaseEventStairEvent : VpsBaseEvent
- (instancetype)initWithTimestamp:(int64_t)timestamp isInStair:(BOOL)isInStair __attribute__((swift_name("init(timestamp:isInStair:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventStairEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventStairEvent *)doCopyTimestamp:(int64_t)timestamp isInStair:(BOOL)isInStair __attribute__((swift_name("doCopy(timestamp:isInStair:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isInStair __attribute__((swift_name("isInStair")));
@property int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.StairEventCompanion")))
@interface VpsBaseEventStairEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventStairEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("BaseEvent.Start")))
@interface VpsBaseEventStart : VpsBaseEvent
@property (class, readonly, getter=companion) VpsBaseEventStartCompanion *companion __attribute__((swift_name("companion")));
@property VpsBaseEventStartStartType *startType __attribute__((swift_name("startType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.StartCompanion")))
@interface VpsBaseEventStartCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventStartCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.StartLngLatEvent")))
@interface VpsBaseEventStartLngLatEvent : VpsBaseEventStart
- (instancetype)initWithTimestamp:(int64_t)timestamp location:(VpsLocation *)location __attribute__((swift_name("init(timestamp:location:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventStartLngLatEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventStartLngLatEvent *)doCopyTimestamp:(int64_t)timestamp location:(VpsLocation *)location __attribute__((swift_name("doCopy(timestamp:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsLocation *location __attribute__((swift_name("location")));
@property int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.StartLngLatEventCompanion")))
@interface VpsBaseEventStartLngLatEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventStartLngLatEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.StartPositionEvent")))
@interface VpsBaseEventStartPositionEvent : VpsBaseEventStart
- (instancetype)initWithTimestamp:(int64_t)timestamp start_pos:(VpsCoordinateF *)start_pos start_angle:(float)start_angle __attribute__((swift_name("init(timestamp:start_pos:start_angle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventStartPositionEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventStartPositionEvent *)doCopyTimestamp:(int64_t)timestamp start_pos:(VpsCoordinateF *)start_pos start_angle:(float)start_angle __attribute__((swift_name("doCopy(timestamp:start_pos:start_angle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float start_angle __attribute__((swift_name("start_angle")));
@property (readonly) VpsCoordinateF *start_pos __attribute__((swift_name("start_pos")));
@property int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.StartPositionEventCompanion")))
@interface VpsBaseEventStartPositionEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventStartPositionEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.StartStartType")))
@interface VpsBaseEventStartStartType : VpsKotlinEnum<VpsBaseEventStartStartType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsBaseEventStartStartType *position __attribute__((swift_name("position")));
@property (class, readonly) VpsBaseEventStartStartType *lngLat __attribute__((swift_name("lngLat")));
+ (VpsKotlinArray<VpsBaseEventStartStartType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsBaseEventStartStartType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.StepEvent")))
@interface VpsBaseEventStepEvent : VpsBaseEvent
- (instancetype)initWithTimestamp:(int64_t)timestamp duration:(int32_t)duration direction:(float)direction speed:(float)speed step_certainty:(float)step_certainty success:(BOOL)success step_type:(VpsStepType *)step_type direction_certainty:(VpsFloat * _Nullable)direction_certainty relative_direction:(VpsFloat * _Nullable)relative_direction __attribute__((swift_name("init(timestamp:duration:direction:speed:step_certainty:success:step_type:direction_certainty:relative_direction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventStepEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventStepEvent *)doCopyTimestamp:(int64_t)timestamp duration:(int32_t)duration direction:(float)direction speed:(float)speed step_certainty:(float)step_certainty success:(BOOL)success step_type:(VpsStepType *)step_type direction_certainty:(VpsFloat * _Nullable)direction_certainty relative_direction:(VpsFloat * _Nullable)relative_direction __attribute__((swift_name("doCopy(timestamp:duration:direction:speed:step_certainty:success:step_type:direction_certainty:relative_direction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float direction __attribute__((swift_name("direction")));
@property (readonly) VpsFloat * _Nullable direction_certainty __attribute__((swift_name("direction_certainty")));
@property (readonly) int32_t duration __attribute__((swift_name("duration")));
@property (readonly) VpsFloat * _Nullable relative_direction __attribute__((swift_name("relative_direction")));
@property (readonly) float speed __attribute__((swift_name("speed")));
@property (readonly) float step_certainty __attribute__((swift_name("step_certainty")));
@property (readonly) VpsStepType *step_type __attribute__((swift_name("step_type")));
@property (readonly) BOOL success __attribute__((swift_name("success")));
@property int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.StepEventCompanion")))
@interface VpsBaseEventStepEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventStepEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("BaseEvent.Sync")))
@interface VpsBaseEventSync : VpsBaseEvent
@property (class, readonly, getter=companion) VpsBaseEventSyncCompanion *companion __attribute__((swift_name("companion")));
@property VpsBaseEventSyncSyncType *syncType __attribute__((swift_name("syncType")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.SyncAccessPointFloorSwapSyncEvent")))
@interface VpsBaseEventSyncAccessPointFloorSwapSyncEvent : VpsBaseEventSync
- (instancetype)initWithTimestamp:(int64_t)timestamp wifiStatusUpdate:(VpsBaseEventWifiStatusUpdate *)wifiStatusUpdate possibleEntries:(NSArray<VpsCoordinateF *> *)possibleEntries __attribute__((swift_name("init(timestamp:wifiStatusUpdate:possibleEntries:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventSyncAccessPointFloorSwapSyncEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventSyncAccessPointFloorSwapSyncEvent *)doCopyTimestamp:(int64_t)timestamp wifiStatusUpdate:(VpsBaseEventWifiStatusUpdate *)wifiStatusUpdate possibleEntries:(NSArray<VpsCoordinateF *> *)possibleEntries __attribute__((swift_name("doCopy(timestamp:wifiStatusUpdate:possibleEntries:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<VpsCoordinateF *> *possibleEntries __attribute__((swift_name("possibleEntries")));
@property int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) VpsBaseEventWifiStatusUpdate *wifiStatusUpdate __attribute__((swift_name("wifiStatusUpdate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.SyncAccessPointFloorSwapSyncEventCompanion")))
@interface VpsBaseEventSyncAccessPointFloorSwapSyncEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventSyncAccessPointFloorSwapSyncEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.SyncCompanion")))
@interface VpsBaseEventSyncCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventSyncCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.SyncLngLatEvent")))
@interface VpsBaseEventSyncLngLatEvent : VpsBaseEventSync
- (instancetype)initWithTimestamp:(int64_t)timestamp location:(VpsLocation *)location __attribute__((swift_name("init(timestamp:location:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventSyncLngLatEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventSyncLngLatEvent *)doCopyTimestamp:(int64_t)timestamp location:(VpsLocation *)location __attribute__((swift_name("doCopy(timestamp:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property VpsLocation *location __attribute__((swift_name("location")));
@property int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.SyncLngLatEventCompanion")))
@interface VpsBaseEventSyncLngLatEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventSyncLngLatEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.SyncPositionEvent")))
@interface VpsBaseEventSyncPositionEvent : VpsBaseEventSync
- (instancetype)initWithTimestamp:(int64_t)timestamp sync_position:(VpsCoordinateF *)sync_position ean:(NSString *)ean offset:(VpsCoordinateF *)offset __attribute__((swift_name("init(timestamp:sync_position:ean:offset:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventSyncPositionEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventSyncPositionEvent *)doCopyTimestamp:(int64_t)timestamp sync_position:(VpsCoordinateF *)sync_position ean:(NSString *)ean offset:(VpsCoordinateF *)offset __attribute__((swift_name("doCopy(timestamp:sync_position:ean:offset:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *ean __attribute__((swift_name("ean")));
@property VpsCoordinateF *offset __attribute__((swift_name("offset")));
@property VpsCoordinateF *sync_position __attribute__((swift_name("sync_position")));
@property int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.SyncPositionEventCompanion")))
@interface VpsBaseEventSyncPositionEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventSyncPositionEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.SyncSyncType")))
@interface VpsBaseEventSyncSyncType : VpsKotlinEnum<VpsBaseEventSyncSyncType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsBaseEventSyncSyncType *position __attribute__((swift_name("position")));
@property (class, readonly) VpsBaseEventSyncSyncType *lngLat __attribute__((swift_name("lngLat")));
@property (class, readonly) VpsBaseEventSyncSyncType *floorSwap __attribute__((swift_name("floorSwap")));
+ (VpsKotlinArray<VpsBaseEventSyncSyncType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsBaseEventSyncSyncType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.WiFiObservation")))
@interface VpsBaseEventWiFiObservation : VpsBaseEvent
- (instancetype)initWithTimestamp:(int64_t)timestamp bssid:(NSString *)bssid rssi:(int32_t)rssi frequency:(VpsInt * _Nullable)frequency rtl_id:(NSString * _Nullable)rtl_id accessPoint:(VpsAccessPoint * _Nullable)accessPoint __attribute__((swift_name("init(timestamp:bssid:rssi:frequency:rtl_id:accessPoint:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventWiFiObservationCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventWiFiObservation *)doCopyTimestamp:(int64_t)timestamp bssid:(NSString *)bssid rssi:(int32_t)rssi frequency:(VpsInt * _Nullable)frequency rtl_id:(NSString * _Nullable)rtl_id accessPoint:(VpsAccessPoint * _Nullable)accessPoint __attribute__((swift_name("doCopy(timestamp:bssid:rssi:frequency:rtl_id:accessPoint:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property VpsAccessPoint * _Nullable accessPoint __attribute__((swift_name("accessPoint")));
@property (readonly) NSString *bssid __attribute__((swift_name("bssid")));
@property (readonly) VpsInt * _Nullable frequency __attribute__((swift_name("frequency")));
@property (readonly) int32_t rssi __attribute__((swift_name("rssi")));
@property (readonly) NSString * _Nullable rtl_id __attribute__((swift_name("rtl_id")));
@property int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.WiFiObservationCompanion")))
@interface VpsBaseEventWiFiObservationCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventWiFiObservationCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.WiFiScan")))
@interface VpsBaseEventWiFiScan : VpsBaseEvent
- (instancetype)initWithTimestamp:(int64_t)timestamp data:(VpsKotlinArray<VpsBaseEventWiFiObservation *> *)data __attribute__((swift_name("init(timestamp:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventWiFiScanCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventWiFiScan *)doCopyTimestamp:(int64_t)timestamp data:(VpsKotlinArray<VpsBaseEventWiFiObservation *> *)data __attribute__((swift_name("doCopy(timestamp:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsKotlinArray<VpsBaseEventWiFiObservation *> *data __attribute__((swift_name("data")));
@property int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.WiFiScanCompanion")))
@interface VpsBaseEventWiFiScanCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventWiFiScanCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.WifiStatusUpdate")))
@interface VpsBaseEventWifiStatusUpdate : VpsBaseEvent
- (instancetype)initWithTimestamp:(int64_t)timestamp bssid:(NSString *)bssid rtl_id:(NSString *)rtl_id rssi:(int32_t)rssi frequency:(VpsInt * _Nullable)frequency accessPoint:(VpsAccessPoint * _Nullable)accessPoint __attribute__((swift_name("init(timestamp:bssid:rtl_id:rssi:frequency:accessPoint:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventWifiStatusUpdateCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventWifiStatusUpdate *)doCopyTimestamp:(int64_t)timestamp bssid:(NSString *)bssid rtl_id:(NSString *)rtl_id rssi:(int32_t)rssi frequency:(VpsInt * _Nullable)frequency accessPoint:(VpsAccessPoint * _Nullable)accessPoint __attribute__((swift_name("doCopy(timestamp:bssid:rtl_id:rssi:frequency:accessPoint:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property VpsAccessPoint * _Nullable accessPoint __attribute__((swift_name("accessPoint")));
@property (readonly) NSString *bssid __attribute__((swift_name("bssid")));
@property (readonly) VpsInt * _Nullable frequency __attribute__((swift_name("frequency")));
@property (readonly) int32_t rssi __attribute__((swift_name("rssi")));
@property (readonly) NSString *rtl_id __attribute__((swift_name("rtl_id")));
@property int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.WifiStatusUpdateCompanion")))
@interface VpsBaseEventWifiStatusUpdateCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventWifiStatusUpdateCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventType")))
@interface VpsEventType : VpsKotlinEnum<VpsEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsEventType *stepEvent __attribute__((swift_name("stepEvent")));
@property (class, readonly) VpsEventType *wifiScan __attribute__((swift_name("wifiScan")));
@property (class, readonly) VpsEventType *sync __attribute__((swift_name("sync")));
@property (class, readonly) VpsEventType *wifiStatusUpdate __attribute__((swift_name("wifiStatusUpdate")));
@property (class, readonly) VpsEventType *startEvent __attribute__((swift_name("startEvent")));
@property (class, readonly) VpsEventType *wifiObservation __attribute__((swift_name("wifiObservation")));
@property (class, readonly) VpsEventType *angleCorrection __attribute__((swift_name("angleCorrection")));
@property (class, readonly) VpsEventType *floorChange __attribute__((swift_name("floorChange")));
@property (class, readonly) VpsEventType *lngLat __attribute__((swift_name("lngLat")));
@property (class, readonly) VpsEventType *stair __attribute__((swift_name("stair")));
@property (class, readonly) VpsEventType *undefined __attribute__((swift_name("undefined")));
+ (VpsKotlinArray<VpsEventType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsEventType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventTypeHolder")))
@interface VpsEventTypeHolder : VpsBase
- (instancetype)initWithEvent_type:(VpsEventType *)event_type __attribute__((swift_name("init(event_type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsEventTypeHolderCompanion *companion __attribute__((swift_name("companion")));
- (VpsEventTypeHolder *)doCopyEvent_type:(VpsEventType *)event_type __attribute__((swift_name("doCopy(event_type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsEventType *event_type __attribute__((swift_name("event_type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventTypeHolder.Companion")))
@interface VpsEventTypeHolderCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsEventTypeHolderCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GaussianKDE")))
@interface VpsGaussianKDE : VpsBase
- (instancetype)initWithBins:(VpsMutableDictionary<VpsKotlinTriple<VpsInt *, VpsInt *, VpsInt *> *, VpsInt *> *)bins binSize:(VpsKotlinTriple<VpsFloat *, VpsFloat *, VpsFloat *> *)binSize bandwidth:(VpsFloat * _Nullable)bandwidth __attribute__((swift_name("init(bins:binSize:bandwidth:)"))) __attribute__((objc_designated_initializer));
- (BOOL)allClose:(VpsKotlinFloatArray *)receiver other:(VpsKotlinFloatArray *)other rtol:(float)rtol atol:(float)atol __attribute__((swift_name("allClose(_:other:rtol:atol:)")));
- (float)callX:(VpsKotlinFloatArray *)x __attribute__((swift_name("call(x:)")));
- (float)callX_:(VpsKotlinTriple<VpsFloat *, VpsFloat *, VpsFloat *> *)x __attribute__((swift_name("call(x_:)")));
- (VpsKotlinTriple<VpsFloat *, VpsFloat *, VpsFloat *> *)modeMaxIter:(int32_t)maxIter tol:(float)tol x0:(VpsKotlinTriple<VpsFloat *, VpsFloat *, VpsFloat *> * _Nullable)x0 __attribute__((swift_name("mode(maxIter:tol:x0:)")));
- (VpsKotlinTriple<VpsFloat *, VpsFloat *, VpsFloat *> *)modeSimple __attribute__((swift_name("modeSimple()")));
- (VpsOutputSignalUXPosition *)uncertaintyCircleConfidence:(float)confidence __attribute__((swift_name("uncertaintyCircle(confidence:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NaiveMapOutputFilter")))
@interface VpsNaiveMapOutputFilter : VpsAbstractParticleFilter
- (instancetype)initWithMapData:(VpsFloorLevelHandler *)mapData params:(VpsParticleFilterParams *)params __attribute__((swift_name("init(mapData:params:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMapData:(VpsFloorLevelHandler *)mapData positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository params:(VpsParticleFilterParams *)params random:(id<VpsRandomNumberGenerator>)random rescueModeHelper:(id<VpsAbstractParticleFilterRescueModeHelper> _Nullable)rescueModeHelper __attribute__((swift_name("init(mapData:positionEngineRepository:params:random:rescueModeHelper:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)end __attribute__((swift_name("end()")));
- (VpsKotlinPair<VpsKotlinArray<VpsKotlinFloatArray *> *, VpsFloat *> *)getMLPositions __attribute__((swift_name("getMLPositions()")));
- (void)setStartStart:(VpsBaseEventStart *)start __attribute__((swift_name("setStart(start:)")));
- (VpsCoordinateF * _Nullable)updateEvent:(VpsBaseEvent *)event __attribute__((swift_name("update(event:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleDriftCalculator")))
@interface VpsParticleDriftCalculator : VpsBase
- (instancetype)initWithAngleOffsetGainDegPerMin:(float)angleOffsetGainDegPerMin __attribute__((swift_name("init(angleOffsetGainDegPerMin:)"))) __attribute__((objc_designated_initializer));
- (float)updateAngleOffsetHeadingMode:(VpsFloat * _Nullable)headingMode __attribute__((swift_name("updateAngleOffset(headingMode:)")));
@property (readonly) float rotationDeviationAngle __attribute__((swift_name("rotationDeviationAngle")));
@end

__attribute__((swift_name("ParticleFilterKLD")))
@interface VpsParticleFilterKLD : VpsAbstractParticleFilter
- (instancetype)initWithMapData:(VpsFloorLevelHandler *)mapData positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository params:(VpsParticleFilterParams *)params randomNumberGenerator:(id<VpsRandomNumberGenerator>)randomNumberGenerator rescueModeHelper:(id<VpsAbstractParticleFilterRescueModeHelper> _Nullable)rescueModeHelper __attribute__((swift_name("init(mapData:positionEngineRepository:params:randomNumberGenerator:rescueModeHelper:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMapData:(VpsFloorLevelHandler *)mapData positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository params:(VpsParticleFilterParams *)params random:(id<VpsRandomNumberGenerator>)random rescueModeHelper:(id<VpsAbstractParticleFilterRescueModeHelper> _Nullable)rescueModeHelper __attribute__((swift_name("init(mapData:positionEngineRepository:params:random:rescueModeHelper:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (float)chiSquareQuantileK:(float)k __attribute__((swift_name("chiSquareQuantile(k:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (VpsPose *)createGaussSampleLoc_positionX:(float)loc_positionX loc_positionY:(float)loc_positionY scale_position:(float)scale_position loc_angle:(float)loc_angle scale_angle:(float)scale_angle scale_bias:(float)scale_bias scale_bias_2:(float)scale_bias_2 loc_speed_2:(float)loc_speed_2 mixing_factor:(float)mixing_factor __attribute__((swift_name("createGaussSample(loc_positionX:loc_positionY:scale_position:loc_angle:scale_angle:scale_bias:scale_bias_2:loc_speed_2:mixing_factor:)")));
- (VpsOutputSignalSyncSignal *)createSyncSignalPositionAfterSync:(VpsCoordinateF *)positionAfterSync __attribute__((swift_name("createSyncSignal(positionAfterSync:)")));
- (void)end __attribute__((swift_name("end()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)handleScanScan:(VpsBaseEventWiFiScan *)scan __attribute__((swift_name("handleScan(scan:)")));
- (BOOL)isRightAisleX1:(double)x1 y1:(double)y1 x2:(double)x2 y2:(double)y2 resolution:(float)resolution __attribute__((swift_name("isRightAisle(x1:y1:x2:y2:resolution:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (VpsKotlinPair<NSMutableArray<VpsPose *> *, VpsKotlinFloatArray *> *)kullbackLeiblerSamplingStep:(VpsBaseEventStepEvent *)step __attribute__((swift_name("kullbackLeiblerSampling(step:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (VpsPose *)motionModelStep:(VpsBaseEventStepEvent *)step particle:(VpsPose *)particle __attribute__((swift_name("motionModel(step:particle:)")));
- (int32_t)randomChoicesIndexWeights:(VpsKotlinFloatArray *)weights __attribute__((swift_name("randomChoicesIndex(weights:)")));
- (void)setStartStart:(VpsBaseEventStart *)start __attribute__((swift_name("setStart(start:)")));
- (VpsCoordinateF * _Nullable)updateEvent:(VpsBaseEvent *)event __attribute__((swift_name("update(event:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property VpsGaussianKDE * _Nullable KDE __attribute__((swift_name("KDE")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property VpsKotlinTriple<VpsFloat *, VpsFloat *, VpsFloat *> * _Nullable KDEX0 __attribute__((swift_name("KDEX0")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float biasStd __attribute__((swift_name("biasStd")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) VpsKotlinTriple<VpsFloat *, VpsFloat *, VpsFloat *> *binSize __attribute__((swift_name("binSize")));
@property (readonly) VpsOutputSignalUXPosition *currentUxPosition __attribute__((swift_name("currentUxPosition")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property VpsBaseEventWiFiObservation * _Nullable currentWiFiObservation __attribute__((swift_name("currentWiFiObservation")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property VpsBaseEventWiFiScan * _Nullable currentWiFiScan __attribute__((swift_name("currentWiFiScan")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float kldDelta __attribute__((swift_name("kldDelta")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float kldEpsilon __attribute__((swift_name("kldEpsilon")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float kldZ __attribute__((swift_name("kldZ")));
@property VpsCoordinateF *lastKnownPosition __attribute__((swift_name("lastKnownPosition")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) VpsFloorLevelHandlerMapInformation *mapInfo __attribute__((swift_name("mapInfo")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t maxNumParticles __attribute__((swift_name("maxNumParticles")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float mixingFactor __attribute__((swift_name("mixingFactor")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) VpsKotlinFloatArray *mlDisplacement __attribute__((swift_name("mlDisplacement")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property NSMutableArray<VpsPose *> *particles __attribute__((swift_name("particles")));
@property (readonly) NSMutableArray<VpsKotlinFloatArray *> *particlesOut __attribute__((swift_name("particlesOut")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float rescueDirectionStd __attribute__((swift_name("rescueDirectionStd")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float rescuePositionStd __attribute__((swift_name("rescuePositionStd")));
@property float rotationDeviationAngle __attribute__((swift_name("rotationDeviationAngle")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float secondBiasMean __attribute__((swift_name("secondBiasMean")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float secondBiasStd __attribute__((swift_name("secondBiasStd")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property float speedFactor __attribute__((swift_name("speedFactor")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property VpsKotlinFloatArray *speedFactorList __attribute__((swift_name("speedFactorList")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property VpsKotlinFloatArray *speedWeightsList __attribute__((swift_name("speedWeightsList")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property float sprinklePercentage __attribute__((swift_name("sprinklePercentage")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float startAngle __attribute__((swift_name("startAngle")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float startDirectionStd __attribute__((swift_name("startDirectionStd")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) VpsStartMethod *startMethod __attribute__((swift_name("startMethod")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float startPositionStd __attribute__((swift_name("startPositionStd")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property float startPositionX __attribute__((swift_name("startPositionX")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property float startPositionY __attribute__((swift_name("startPositionY")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float stepDirectionStd __attribute__((swift_name("stepDirectionStd")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float stepLengthStd __attribute__((swift_name("stepLengthStd")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property int32_t stepsPerSyncCounter __attribute__((swift_name("stepsPerSyncCounter")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t swapSprinkleInterval __attribute__((swift_name("swapSprinkleInterval")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t swapSprinkleN __attribute__((swift_name("swapSprinkleN")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float syncDirectionStd __attribute__((swift_name("syncDirectionStd")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) VpsSyncMethod *syncMethod __attribute__((swift_name("syncMethod")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float syncPositionStd __attribute__((swift_name("syncPositionStd")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float syncSpeedBaseFactor __attribute__((swift_name("syncSpeedBaseFactor")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL useMLSyncSpeedFilter __attribute__((swift_name("useMLSyncSpeedFilter")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property VpsKotlinFloatArray *weights __attribute__((swift_name("weights")));
@end

__attribute__((swift_name("ParticleFilterKLDV2")))
@interface VpsParticleFilterKLDV2 : VpsParticleFilterKLD
- (instancetype)initWithMapData:(VpsFloorLevelHandler *)mapData positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository params:(VpsParticleFilterParams *)params randomNumberGenerator:(id<VpsRandomNumberGenerator>)randomNumberGenerator rescueModeHelper:(id<VpsAbstractParticleFilterRescueModeHelper> _Nullable)rescueModeHelper __attribute__((swift_name("init(mapData:positionEngineRepository:params:randomNumberGenerator:rescueModeHelper:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (VpsKotlinPair<NSMutableArray<VpsPose *> *, VpsKotlinFloatArray *> *)kullbackLeiblerSamplingStep:(VpsBaseEventStepEvent *)step __attribute__((swift_name("kullbackLeiblerSampling(step:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterKLDWiFi")))
@interface VpsParticleFilterKLDWiFi : VpsParticleFilterKLDV2
- (instancetype)initWithMapData:(VpsFloorLevelHandler *)mapData positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository params:(VpsParticleFilterParams *)params randomNumberGenerator:(id<VpsRandomNumberGenerator>)randomNumberGenerator rescueModeHelper:(id<VpsAbstractParticleFilterRescueModeHelper> _Nullable)rescueModeHelper __attribute__((swift_name("init(mapData:positionEngineRepository:params:randomNumberGenerator:rescueModeHelper:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)handleScanScan:(VpsBaseEventWiFiScan *)scan __attribute__((swift_name("handleScan(scan:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaulDBSCAN")))
@interface VpsPaulDBSCAN : VpsBase
- (instancetype)initWithEps:(float)eps min_samples:(int32_t)min_samples dist_function:(VpsFloat *(^ _Nullable)(VpsKotlinFloatArray *, VpsKotlinFloatArray *))dist_function angle_to_meter_factor:(VpsFloat * _Nullable)angle_to_meter_factor __attribute__((swift_name("init(eps:min_samples:dist_function:angle_to_meter_factor:)"))) __attribute__((objc_designated_initializer));
- (VpsKotlinArray<VpsInt *> *)fit_predictDB:(VpsKotlinArray<VpsPose *> *)DB __attribute__((swift_name("fit_predict(DB:)")));
- (NSMutableArray<VpsKotlinPair<VpsInt *, VpsPose *> *> *)range_queryDB:(VpsKotlinArray<VpsPose *> *)DB Q:(VpsPose *)Q __attribute__((swift_name("range_query(DB:Q:)")));
@property (readonly) VpsFloat *(^_dist_function)(VpsKotlinFloatArray *, VpsKotlinFloatArray *) __attribute__((swift_name("_dist_function")));
@property (readonly) float eps __attribute__((swift_name("eps")));
@property (readonly) int32_t min_samples __attribute__((swift_name("min_samples")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Pose")))
@interface VpsPose : VpsBase
- (instancetype)initWithX:(float)x y:(float)y heading:(float)heading speedBias:(float)speedBias __attribute__((swift_name("init(x:y:heading:speedBias:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsPoseCompanion *companion __attribute__((swift_name("companion")));
- (VpsPose *)doCopyX:(float)x y:(float)y heading:(float)heading speedBias:(float)speedBias __attribute__((swift_name("doCopy(x:y:heading:speedBias:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (VpsCoordinateF *)toCoordinateF __attribute__((swift_name("toCoordinateF()")));
- (VpsKotlinFloatArray *)toDebugFormat __attribute__((swift_name("toDebugFormat()")));
- (VpsKotlinFloatArray *)toFloatArray __attribute__((swift_name("toFloatArray()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float heading __attribute__((swift_name("heading")));
@property (readonly) float speedBias __attribute__((swift_name("speedBias")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Pose.Companion")))
@interface VpsPoseCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsPoseCompanion *shared __attribute__((swift_name("shared")));
- (VpsPose *)empty __attribute__((swift_name("empty()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SquareDriftFilter")))
@interface VpsSquareDriftFilter : VpsBase
- (instancetype)initWithGain:(float)gain __attribute__((swift_name("init(gain:)"))) __attribute__((objc_designated_initializer));
- (float)callInput_angle:(float)input_angle __attribute__((swift_name("call(input_angle:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property double threshold __attribute__((swift_name("threshold")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartMethod")))
@interface VpsStartMethod : VpsKotlinEnum<VpsStartMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsStartMethod *standard __attribute__((swift_name("standard")));
@property (class, readonly) VpsStartMethod *gauss __attribute__((swift_name("gauss")));
@property (class, readonly) VpsStartMethod *global __attribute__((swift_name("global")));
+ (VpsKotlinArray<VpsStartMethod *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsStartMethod *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StepType")))
@interface VpsStepType : VpsKotlinEnum<VpsStepType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsStepType *regular __attribute__((swift_name("regular")));
@property (class, readonly) VpsStepType *swingSym __attribute__((swift_name("swingSym")));
@property (class, readonly) VpsStepType *swingAntiSym __attribute__((swift_name("swingAntiSym")));
@property (class, readonly) VpsStepType *trolley __attribute__((swift_name("trolley")));
@property (class, readonly) VpsStepType *trouserPocket __attribute__((swift_name("trouserPocket")));
+ (VpsKotlinArray<VpsStepType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsStepType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyncCritera")))
@interface VpsSyncCritera : VpsKotlinEnum<VpsSyncCritera *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsSyncCritera *all __attribute__((swift_name("all")));
@property (class, readonly) VpsSyncCritera *wifi __attribute__((swift_name("wifi")));
@property (class, readonly) VpsSyncCritera *none __attribute__((swift_name("none")));
+ (VpsKotlinArray<VpsSyncCritera *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsSyncCritera *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyncMethod")))
@interface VpsSyncMethod : VpsKotlinEnum<VpsSyncMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsSyncMethod *standard __attribute__((swift_name("standard")));
@property (class, readonly) VpsSyncMethod *gauss __attribute__((swift_name("gauss")));
@property (class, readonly) VpsSyncMethod *compassGauss __attribute__((swift_name("compassGauss")));
@property (class, readonly) VpsSyncMethod *sprinkle __attribute__((swift_name("sprinkle")));
@property (class, readonly) VpsSyncMethod *noSync __attribute__((swift_name("noSync")));
+ (VpsKotlinArray<VpsSyncMethod *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsSyncMethod *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface VpsKotlinThrowable : VpsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(VpsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VpsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (VpsKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface VpsKotlinException : VpsKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(VpsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VpsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValueErrorException")))
@interface VpsValueErrorException : VpsKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(VpsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VpsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiScanData")))
@interface VpsWifiScanData : VpsBase
- (instancetype)initWithSsid:(NSString *)ssid bssid:(NSString *)bssid rssi:(int32_t)rssi frequency:(float)frequency __attribute__((swift_name("init(ssid:bssid:rssi:frequency:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsWifiScanDataCompanion *companion __attribute__((swift_name("companion")));
- (VpsWifiScanData *)doCopySsid:(NSString *)ssid bssid:(NSString *)bssid rssi:(int32_t)rssi frequency:(float)frequency __attribute__((swift_name("doCopy(ssid:bssid:rssi:frequency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *bssid __attribute__((swift_name("bssid")));
@property (readonly) float frequency __attribute__((swift_name("frequency")));
@property (readonly) int32_t rssi __attribute__((swift_name("rssi")));
@property (readonly) NSString *ssid __attribute__((swift_name("ssid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiScanData.Companion")))
@interface VpsWifiScanDataCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsWifiScanDataCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeatureToTensorValue")))
@interface VpsFeatureToTensorValue : VpsFlowConverter<VpsFeatures *, VpsTensor *>
- (instancetype)initWithWindowSize:(int32_t)windowSize packageFrequency:(int32_t)packageFrequency __attribute__((swift_name("init(windowSize:packageFrequency:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputData:(VpsFeatures *)data __attribute__((swift_name("onInput(data:)")));
@property int32_t counter __attribute__((swift_name("counter")));
@property VpsKotlinArray<VpsKotlinFloatArray *> *features __attribute__((swift_name("features")));
@property int32_t globCounter __attribute__((swift_name("globCounter")));
@property (readonly) int32_t packageFrequency __attribute__((swift_name("packageFrequency")));
@property (readonly) int32_t windowSize __attribute__((swift_name("windowSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeatureToTensorValue.Builder")))
@interface VpsFeatureToTensorValueBuilder : VpsFlowConverterBuilder<VpsFeatureToTensorValue *, VpsTensor *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsFeatureToTensorValue *)build __attribute__((swift_name("build()")));
- (VpsFeatureToTensorValueBuilder *)setPackageFrequencyPackageFrequency:(int32_t)packageFrequency __attribute__((swift_name("setPackageFrequency(packageFrequency:)")));
- (VpsFeatureToTensorValueBuilder *)setWindowSizeWindowSize:(int32_t)windowSize __attribute__((swift_name("setWindowSize(windowSize:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowConverterRawSensorDataToRotation")))
@interface VpsFlowConverterRawSensorDataToRotation : VpsFlowConverter<VpsRawSensorData *, VpsFloat *>
- (instancetype)initWithStartAngle:(float)startAngle rotationHandlerSettings:(VpsRotationHandlerSettings *)rotationHandlerSettings __attribute__((swift_name("init(startAngle:rotationHandlerSettings:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@property (readonly) VpsRotationHandlerSettings *rotationHandlerSettings __attribute__((swift_name("rotationHandlerSettings")));
@property (readonly) float startAngle __attribute__((swift_name("startAngle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowConverterRawSensorDataToRotation.Builder")))
@interface VpsFlowConverterRawSensorDataToRotationBuilder : VpsFlowConverterBuilder<VpsFlowConverterRawSensorDataToRotation *, VpsFloat *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsFlowConverterRawSensorDataToRotation *)build __attribute__((swift_name("build()")));
- (VpsFlowConverterRawSensorDataToRotationBuilder *)setRotationHandlerSettingsRotationHandlerSettings:(VpsRotationHandlerSettings *)rotationHandlerSettings __attribute__((swift_name("setRotationHandlerSettings(rotationHandlerSettings:)")));
- (VpsFlowConverterRawSensorDataToRotationBuilder *)setStartAngleAngle:(float)angle __attribute__((swift_name("setStartAngle(angle:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowConverterRawSensorDataToSensorDataFrame")))
@interface VpsFlowConverterRawSensorDataToSensorDataFrame : VpsFlowConverter<VpsRawSensorData *, VpsRawSensorPack *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@property VpsRawSensorData * _Nullable currentAccData __attribute__((swift_name("currentAccData")));
@property VpsRawSensorData * _Nullable currentGyroData __attribute__((swift_name("currentGyroData")));
@property VpsRawSensorData * _Nullable currentRotData __attribute__((swift_name("currentRotData")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowConverterRawSensorDataToSensorDataFrame.Builder")))
@interface VpsFlowConverterRawSensorDataToSensorDataFrameBuilder : VpsFlowConverterBuilder<VpsFlowConverterRawSensorDataToSensorDataFrame *, VpsRawSensorPack *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsFlowConverterRawSensorDataToSensorDataFrame *)build __attribute__((swift_name("build()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowConverterRotationToOutputSignal")))
@interface VpsFlowConverterRotationToOutputSignal : VpsFlowConverter<VpsFloat *, VpsOutputSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onInputData:(VpsFloat *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowConverterRotationToOutputSignal.Builder")))
@interface VpsFlowConverterRotationToOutputSignalBuilder : VpsFlowConverterBuilder<VpsFlowConverterRotationToOutputSignal *, VpsOutputSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsFlowConverterRotationToOutputSignal *)build __attribute__((swift_name("build()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelToEvent")))
@interface VpsModelToEvent : VpsFlowConverter<VpsVelocityModelOutput *, VpsBaseEvent *>
- (instancetype)initWithParams:(VpsModelToEventParameters *)params __attribute__((swift_name("init(params:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputData:(VpsVelocityModelOutput *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelToEvent.Builder")))
@interface VpsModelToEventBuilder : VpsFlowConverterBuilder<VpsModelToEvent *, VpsBaseEvent *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsModelToEvent *)build __attribute__((swift_name("build()")));
- (VpsModelToEventBuilder *)setParamsParams:(VpsModelToEventParameters *)params __attribute__((swift_name("setParams(params:)")));
@end

__attribute__((swift_name("VelocityModelHandler")))
@protocol VpsVelocityModelHandler
@required
- (void)onVelocityModelOutPutModelOutput:(NSArray<VpsVelocityModelOutput *> *)modelOutput __attribute__((swift_name("onVelocityModelOutPut(modelOutput:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TensorToModelOutput")))
@interface VpsTensorToModelOutput : VpsFlowConverter<VpsTensor *, VpsVelocityModelOutput *> <VpsVelocityModelHandler>
- (instancetype)initWithVelocityModel:(id<VpsVelocityModel>)velocityModel __attribute__((swift_name("init(velocityModel:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)flush __attribute__((swift_name("flush()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(VpsTensor *)data __attribute__((swift_name("onInput(data:)")));
- (void)onVelocityModelOutPutModelOutput:(NSArray<VpsVelocityModelOutput *> *)modelOutput __attribute__((swift_name("onVelocityModelOutPut(modelOutput:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TensorToModelOutput.Builder")))
@interface VpsTensorToModelOutputBuilder : VpsFlowConverterBuilder<VpsTensorToModelOutput *, VpsVelocityModelOutput *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsTensorToModelOutput *)build __attribute__((swift_name("build()")));
- (VpsTensorToModelOutputBuilder *)setVelocityModelVelocityModel:(id<VpsVelocityModel>)velocityModel __attribute__((swift_name("setVelocityModel(velocityModel:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeRawSensorDataFilterUnwantedInterpolationSensorDataTypes")))
@interface VpsNodeRawSensorDataFilterUnwantedInterpolationSensorDataTypes : VpsNode<VpsRawSensorData *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeRawSensorDataFilterUnwantedSensorDataTypes")))
@interface VpsNodeRawSensorDataFilterUnwantedSensorDataTypes : VpsNode<VpsRawSensorData *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeRawSensorDataReduceGyroscopeValues")))
@interface VpsNodeRawSensorDataReduceGyroscopeValues : VpsNode<VpsRawSensorData *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeRawSensorDataRotationSensorFilter")))
@interface VpsNodeRawSensorDataRotationSensorFilter : VpsNode<VpsRawSensorData *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeRawSensorDataTimestampToMillis")))
@interface VpsNodeRawSensorDataTimestampToMillis : VpsNode<VpsRawSensorData *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeRemoveEmptyData")))
@interface VpsNodeRemoveEmptyData : VpsNode<VpsRawSensorData *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeRotationDataFilter")))
@interface VpsNodeRotationDataFilter : VpsNode<VpsRawSensorData *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeRotationStartQuaternion")))
@interface VpsNodeRotationStartQuaternion : VpsNode<VpsRawSensorData *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeSensorDataFrameTimestampToNanos")))
@interface VpsNodeSensorDataFrameTimestampToNanos : VpsNode<VpsRawSensorPack *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Has no usage, will be removed")));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onInputData:(VpsRawSensorPack *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BarometerInterpolationNode")))
@interface VpsBarometerInterpolationNode : VpsNode<VpsRawSensorData *>
- (instancetype)initWithF:(float)f __attribute__((swift_name("init(f:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@property int64_t t __attribute__((swift_name("t")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterpolationModule")))
@interface VpsInterpolationModule : VpsFlowConverter<VpsRawSensorData *, VpsRawSensorPack *>
- (instancetype)initWithF:(float)f use_magnetometer:(BOOL)use_magnetometer __attribute__((swift_name("init(f:use_magnetometer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@property (readonly) NSMutableArray<VpsKotlinPair<VpsLong *, VpsKotlinFloatArray *> *> *acc __attribute__((swift_name("acc")));
@property (readonly) int64_t dt __attribute__((swift_name("dt")));
@property (readonly) NSMutableArray<VpsKotlinPair<VpsLong *, VpsKotlinFloatArray *> *> *gyr __attribute__((swift_name("gyr")));
@property BOOL has_started __attribute__((swift_name("has_started")));
@property (readonly) NSMutableArray<VpsKotlinPair<VpsLong *, VpsKotlinFloatArray *> *> * _Nullable mag __attribute__((swift_name("mag")));
@property (readonly) NSMutableArray<VpsKotlinPair<VpsLong *, VpsKotlinFloatArray *> *> *rot __attribute__((swift_name("rot")));
@property int64_t t __attribute__((swift_name("t")));
@property (readonly) BOOL use_magnetometer __attribute__((swift_name("use_magnetometer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterpolationModule.Builder")))
@interface VpsInterpolationModuleBuilder : VpsFlowConverterBuilder<VpsInterpolationModule *, VpsRawSensorPack *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsInterpolationModule *)build __attribute__((swift_name("build()")));
- (VpsInterpolationModuleBuilder *)setFrequencyFrequency:(float)frequency __attribute__((swift_name("setFrequency(frequency:)")));
- (VpsInterpolationModuleBuilder *)setUseMagnetometerUseMagnetometer:(BOOL)useMagnetometer __attribute__((swift_name("setUseMagnetometer(useMagnetometer:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterpolationModule.Params")))
@interface VpsInterpolationModuleParams_ : VpsBase
- (instancetype)initWithF:(float)f use_magnetometer:(BOOL)use_magnetometer __attribute__((swift_name("init(f:use_magnetometer:)"))) __attribute__((objc_designated_initializer));
- (VpsInterpolationModuleParams_ *)doCopyF:(float)f use_magnetometer:(BOOL)use_magnetometer __attribute__((swift_name("doCopy(f:use_magnetometer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float f __attribute__((swift_name("f")));
@property (readonly) BOOL use_magnetometer __attribute__((swift_name("use_magnetometer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MathUtil")))
@interface VpsMathUtil : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mathUtil __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsMathUtil *shared __attribute__((swift_name("shared")));
- (VpsKotlinFloatArray *)cumulativeSum:(VpsKotlinFloatArray *)receiver __attribute__((swift_name("cumulativeSum(_:)")));
- (double)getGaussianDistributionMean:(double)mean std:(double)std random:(id<VpsRandomNumberGenerator> _Nullable)random __attribute__((swift_name("getGaussianDistribution(mean:std:random:)")));
- (float)getGaussianDistributionMean:(float)mean std:(float)std random_:(id<VpsRandomNumberGenerator> _Nullable)random __attribute__((swift_name("getGaussianDistribution(mean:std:random_:)")));
- (VpsKotlinArray<VpsKotlinFloatArray *> *)getRotationMatrixFromQuaternionQuaternion:(VpsKotlinFloatArray *)quaternion __attribute__((swift_name("getRotationMatrixFromQuaternion(quaternion:)")));
- (VpsKotlinFloatArray *)get_start_quaternionQ:(VpsKotlinFloatArray *)q __attribute__((swift_name("get_start_quaternion(q:)")));
- (VpsKotlinFloatArray *)linear_interpolateD0:(VpsKotlinPair<VpsLong *, VpsKotlinFloatArray *> *)d0 d1:(VpsKotlinPair<VpsLong *, VpsKotlinFloatArray *> *)d1 t:(int64_t)t __attribute__((swift_name("linear_interpolate(d0:d1:t:)")));
- (VpsKotlinFloatArray *)q_expQ:(VpsKotlinFloatArray *)q __attribute__((swift_name("q_exp(q:)")));
- (VpsKotlinFloatArray *)q_invQ:(VpsKotlinFloatArray *)q __attribute__((swift_name("q_inv(q:)")));
- (VpsKotlinFloatArray *)q_lnQ:(VpsKotlinFloatArray *)q __attribute__((swift_name("q_ln(q:)")));
- (VpsKotlinFloatArray *)q_multQ:(VpsKotlinFloatArray *)q r:(VpsKotlinFloatArray *)r __attribute__((swift_name("q_mult(q:r:)")));
- (VpsKotlinFloatArray *)q_powQ:(VpsKotlinFloatArray *)q n:(float)n __attribute__((swift_name("q_pow(q:n:)")));
- (VpsKotlinFloatArray *)q_scaleQ:(VpsKotlinFloatArray *)q scale:(float)scale __attribute__((swift_name("q_scale(q:scale:)")));
- (VpsKotlinFloatArray *)quaternionExtractPitchFullRangeQ:(VpsKotlinFloatArray *)q __attribute__((swift_name("quaternionExtractPitchFullRange(q:)")));
- (VpsKotlinFloatArray *)quaternionExtractYawQ:(VpsKotlinFloatArray *)q __attribute__((swift_name("quaternionExtractYaw(q:)")));
- (VpsKotlinFloatArray *)rotate_vectorQ:(VpsKotlinFloatArray *)q v:(VpsKotlinFloatArray *)v __attribute__((swift_name("rotate_vector(q:v:)")));
- (VpsKotlinFloatArray *)slerpD0:(VpsKotlinPair<VpsLong *, VpsKotlinFloatArray *> *)d0 d1:(VpsKotlinPair<VpsLong *, VpsKotlinFloatArray *> *)d1 t:(int64_t)t __attribute__((swift_name("slerp(d0:d1:t:)")));
- (VpsKotlinArray<VpsKotlinFloatArray *> *)unflip_rotorsQ0:(VpsKotlinFloatArray *)q0 q1:(VpsKotlinFloatArray *)q1 __attribute__((swift_name("unflip_rotors(q0:q1:)")));
@end

__attribute__((swift_name("FeaturePacker")))
@interface VpsFeaturePacker : VpsFlowConverter<VpsRawSensorPack *, VpsFeatures *>
- (instancetype)initWithStart_angle:(float)start_angle smoothing:(BOOL)smoothing flip_acc:(BOOL)flip_acc featureSequence:(NSArray<VpsVelocityModelParamsFeaturesEntries *> *)featureSequence __attribute__((swift_name("init(start_angle:smoothing:flip_acc:featureSequence:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (VpsKotlinFloatArray *)generateFeaturesGyroscope:(VpsKotlinFloatArray *)gyroscope acceleration:(VpsKotlinFloatArray *)acceleration rotation:(VpsKotlinFloatArray *)rotation __attribute__((swift_name("generateFeatures(gyroscope:acceleration:rotation:)")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(VpsRawSensorPack *)data __attribute__((swift_name("onInput(data:)")));
- (void)updateData:(VpsRawSensorPack *)data __attribute__((swift_name("update(data:)")));
@property VpsKotlinFloatArray * _Nullable bufferedAccelerometer __attribute__((swift_name("bufferedAccelerometer")));
@property VpsRawSensorPack * _Nullable bufferedRawSensorPack __attribute__((swift_name("bufferedRawSensorPack")));
@property (readonly) BOOL flip_acc __attribute__((swift_name("flip_acc")));
@property (readonly) VpsAverageAccelerationSmoother *smoother __attribute__((swift_name("smoother")));
@property BOOL smoothing __attribute__((swift_name("smoothing")));
@property (readonly) float start_angle __attribute__((swift_name("start_angle")));
@property VpsKotlinFloatArray * _Nullable start_quaternion __attribute__((swift_name("start_quaternion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturePacker.Builder")))
@interface VpsFeaturePackerBuilder : VpsFlowConverterBuilder<VpsFeaturePacker *, VpsFeatures *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsFeaturePacker *)build __attribute__((swift_name("build()")));
- (VpsFeaturePackerBuilder *)setFeatureSequenceFeatureSequence:(NSArray<VpsVelocityModelParamsFeaturesEntries *> *)featureSequence __attribute__((swift_name("setFeatureSequence(featureSequence:)")));
- (VpsFeaturePackerBuilder *)setFlipAccFlipAcc:(BOOL)flipAcc __attribute__((swift_name("setFlipAcc(flipAcc:)")));
- (VpsFeaturePackerBuilder *)setSmoothingUseSmoothing:(BOOL)useSmoothing __attribute__((swift_name("setSmoothing(useSmoothing:)")));
- (VpsFeaturePackerBuilder *)setStartAngleStartAngle:(float)startAngle __attribute__((swift_name("setStartAngle(startAngle:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AverageAccelerationSmoother")))
@interface VpsAverageAccelerationSmoother : VpsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<VpsRawSensorPack *> *)exit __attribute__((swift_name("exit()")));
- (VpsKotlinFloatArray *)filter_acc __attribute__((swift_name("filter_acc()")));
- (VpsRawSensorPack * _Nullable)updateData:(VpsRawSensorPack * _Nullable)data __attribute__((swift_name("update(data:)")));
@property NSMutableArray<VpsKotlinDoubleArray *> *acc __attribute__((swift_name("acc")));
@property NSMutableArray<VpsKotlinFloatArray *> *gyr __attribute__((swift_name("gyr")));
@property BOOL has_exited __attribute__((swift_name("has_exited")));
@property int32_t kernel_size __attribute__((swift_name("kernel_size")));
@property NSMutableArray<id> *mag __attribute__((swift_name("mag")));
@property NSMutableArray<VpsKotlinFloatArray *> *rot __attribute__((swift_name("rot")));
@property NSMutableArray<VpsLong *> *time __attribute__((swift_name("time")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmbeddedRotationHandler")))
@interface VpsEmbeddedRotationHandler : VpsFlowConverter<VpsRawSensorData *, VpsOutputSignal *>
- (instancetype)initWithStartAngleRadians:(float)startAngleRadians system:(VpsVPSParamsSystem *)system rotationHandlerSettings:(VpsRotationHandlerSettings *)rotationHandlerSettings __attribute__((swift_name("init(startAngleRadians:system:rotationHandlerSettings:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)doInit __attribute__((swift_name("doInit()")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmbeddedRotationHandler.Builder")))
@interface VpsEmbeddedRotationHandlerBuilder : VpsFlowConverterBuilder<VpsEmbeddedRotationHandler *, VpsOutputSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsEmbeddedRotationHandler *)build __attribute__((swift_name("build()")));
- (VpsEmbeddedRotationHandlerBuilder *)setRotationHandlerSettingsRotationHandlerSettings:(VpsRotationHandlerSettings *)rotationHandlerSettings __attribute__((swift_name("setRotationHandlerSettings(rotationHandlerSettings:)")));
- (VpsEmbeddedRotationHandlerBuilder *)setStartAngleRadiansStartAngleRadians:(float)startAngleRadians __attribute__((swift_name("setStartAngleRadians(startAngleRadians:)")));
- (VpsEmbeddedRotationHandlerBuilder *)setSystemSystem:(VpsVPSParamsSystem *)system __attribute__((swift_name("setSystem(system:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RotationHandler")))
@interface VpsRotationHandler : VpsFlowConverter<VpsRawSensorData *, VpsOutputSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)doInitStartAngle:(float)startAngle __attribute__((swift_name("doInit(startAngle:)")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RotationHandler.Builder")))
@interface VpsRotationHandlerBuilder : VpsFlowConverterBuilder<VpsRotationHandler *, VpsOutputSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsRotationHandler *)build __attribute__((swift_name("build()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StairsInterpreter")))
@interface VpsStairsInterpreter : VpsFlowConverter<VpsRawSensorData *, VpsOutputSignal *>
- (instancetype)initWithSystem:(VpsVPSParamsSystem *)system listener:(void (^)(VpsInputSignal *))listener floorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("init(system:listener:floorLevelHandler:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)doInit __attribute__((swift_name("doInit()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@property (readonly) float ATMOSPHERE __attribute__((swift_name("ATMOSPHERE")));
@property (readonly) float GRAVITY __attribute__((swift_name("GRAVITY")));
@property (readonly) float IDEAL_GAS_CONSTANT __attribute__((swift_name("IDEAL_GAS_CONSTANT")));
@property (readonly) float MOLAR_MASS_AIR __attribute__((swift_name("MOLAR_MASS_AIR")));
@property (readonly) float TEMPERATURE_15C __attribute__((swift_name("TEMPERATURE_15C")));
@property (readonly) VpsFloorLevelHandler *floorLevelHandler __attribute__((swift_name("floorLevelHandler")));
@property (readonly) VpsVPSParamsSystem *system __attribute__((swift_name("system")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StairsInterpreter.Builder")))
@interface VpsStairsInterpreterBuilder : VpsFlowConverterBuilder<VpsStairsInterpreter *, VpsOutputSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsStairsInterpreter *)build __attribute__((swift_name("build()")));
- (VpsStairsInterpreterBuilder *)setFloorLevelHandlerFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("setFloorLevelHandler(floorLevelHandler:)")));
- (VpsStairsInterpreterBuilder *)setListenerListener:(void (^)(VpsInputSignal *))listener __attribute__((swift_name("setListener(listener:)")));
- (VpsStairsInterpreterBuilder *)setSystemSystem:(VpsVPSParamsSystem *)system __attribute__((swift_name("setSystem(system:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoordinateD")))
@interface VpsCoordinateD : VpsBase
- (instancetype)initWithX:(double)x y:(double)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX:(float)x y_:(float)y __attribute__((swift_name("init(x:y_:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsCoordinateDCompanion *companion __attribute__((swift_name("companion")));
- (VpsCoordinateD *)doCopyX:(double)x y:(double)y __attribute__((swift_name("doCopy(x:y:)")));
- (double)distanceToOther:(VpsCoordinateD *)other __attribute__((swift_name("distanceTo(other:)")));
- (double)distanceToOther_:(VpsAccessPointCoordinate *)other __attribute__((swift_name("distanceTo(other_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (VpsCoordinateF *)toCoordinateF __attribute__((swift_name("toCoordinateF()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double x __attribute__((swift_name("x")));
@property (readonly) double y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoordinateD.Companion")))
@interface VpsCoordinateDCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsCoordinateDCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoordinateF")))
@interface VpsCoordinateF : VpsBase
- (instancetype)initWithX:(double)x y:(double)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX:(float)x y_:(float)y __attribute__((swift_name("init(x:y_:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsCoordinateFCompanion *companion __attribute__((swift_name("companion")));
- (VpsCoordinateF *)doCopyX:(float)x y:(float)y __attribute__((swift_name("doCopy(x:y:)")));
- (float)distanceToOther:(VpsCoordinateF *)other __attribute__((swift_name("distanceTo(other:)")));
- (float)distanceToOther_:(VpsAccessPointCoordinate *)other __attribute__((swift_name("distanceTo(other_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (VpsCoordinateD *)toCoordinateD __attribute__((swift_name("toCoordinateD()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoordinateF.Companion")))
@interface VpsCoordinateFCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsCoordinateFCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location")))
@interface VpsLocation : VpsBase
- (instancetype)initWithLongitude:(double)longitude latitude:(double)latitude accuracy:(VpsDouble * _Nullable)accuracy bearing:(VpsDouble * _Nullable)bearing bearingAccuracy:(VpsDouble * _Nullable)bearingAccuracy altitude:(VpsDouble * _Nullable)altitude verticalAccuracy:(VpsDouble * _Nullable)verticalAccuracy speed:(VpsDouble * _Nullable)speed speedAccuracy:(VpsDouble * _Nullable)speedAccuracy ellipsoidalAltitude:(VpsDouble * _Nullable)ellipsoidalAltitude __attribute__((swift_name("init(longitude:latitude:accuracy:bearing:bearingAccuracy:altitude:verticalAccuracy:speed:speedAccuracy:ellipsoidalAltitude:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsLocationCompanion *companion __attribute__((swift_name("companion")));
- (VpsLocation *)doCopyLongitude:(double)longitude latitude:(double)latitude accuracy:(VpsDouble * _Nullable)accuracy bearing:(VpsDouble * _Nullable)bearing bearingAccuracy:(VpsDouble * _Nullable)bearingAccuracy altitude:(VpsDouble * _Nullable)altitude verticalAccuracy:(VpsDouble * _Nullable)verticalAccuracy speed:(VpsDouble * _Nullable)speed speedAccuracy:(VpsDouble * _Nullable)speedAccuracy ellipsoidalAltitude:(VpsDouble * _Nullable)ellipsoidalAltitude __attribute__((swift_name("doCopy(longitude:latitude:accuracy:bearing:bearingAccuracy:altitude:verticalAccuracy:speed:speedAccuracy:ellipsoidalAltitude:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsDouble * _Nullable accuracy __attribute__((swift_name("accuracy")));
@property (readonly) VpsDouble * _Nullable altitude __attribute__((swift_name("altitude")));
@property (readonly) VpsDouble * _Nullable bearing __attribute__((swift_name("bearing")));
@property (readonly) VpsDouble * _Nullable bearingAccuracy __attribute__((swift_name("bearingAccuracy")));
@property (readonly) VpsDouble * _Nullable ellipsoidalAltitude __attribute__((swift_name("ellipsoidalAltitude")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@property (readonly) VpsDouble * _Nullable speed __attribute__((swift_name("speed")));
@property (readonly) VpsDouble * _Nullable speedAccuracy __attribute__((swift_name("speedAccuracy")));
@property (readonly) VpsDouble * _Nullable verticalAccuracy __attribute__((swift_name("verticalAccuracy")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location.Companion")))
@interface VpsLocationCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsLocationCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("CoordinateConverter")))
@protocol VpsCoordinateConverter
@required
- (VpsCoordinateD *)lngLatToMetersPoint:(VpsCoordinateD *)point __attribute__((swift_name("lngLatToMeters(point:)")));
- (VpsCoordinateD *)metersToLngLatPoint:(VpsCoordinateD *)point __attribute__((swift_name("metersToLngLat(point:)")));
- (VpsCoordinateD *)metersToPixelPoint:(VpsCoordinateD *)point __attribute__((swift_name("metersToPixel(point:)")));
- (VpsCoordinateD *)pixelsToMeterPoint:(VpsCoordinateD *)point __attribute__((swift_name("pixelsToMeter(point:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RealWorldCoordinateConverter")))
@interface VpsRealWorldCoordinateConverter : VpsBase <VpsCoordinateConverter>
- (instancetype)initWithLngLatOrigin:(VpsCoordinateD *)lngLatOrigin mapAngleInDegrees:(double)mapAngleInDegrees earthRadiusInMeters:(double)earthRadiusInMeters pixelsPerMeter:(double)pixelsPerMeter __attribute__((swift_name("init(lngLatOrigin:mapAngleInDegrees:earthRadiusInMeters:pixelsPerMeter:)"))) __attribute__((objc_designated_initializer));
- (VpsCoordinateD *)lngLatToMetersPoint:(VpsCoordinateD *)point __attribute__((swift_name("lngLatToMeters(point:)")));
- (VpsCoordinateD *)metersToLngLatPoint:(VpsCoordinateD *)point __attribute__((swift_name("metersToLngLat(point:)")));
- (VpsCoordinateD *)metersToPixelPoint:(VpsCoordinateD *)point __attribute__((swift_name("metersToPixel(point:)")));
- (VpsCoordinateD *)pixelsToMeterPoint:(VpsCoordinateD *)point __attribute__((swift_name("pixelsToMeter(point:)")));
@end

__attribute__((swift_name("VPSFloorLevel")))
@protocol VpsVPSFloorLevel
@required
- (void)dispose __attribute__((swift_name("dispose()")));
- (VpsKotlinArray<VpsKotlinFloatArray *> *)get2DArrayMapResolution:(float)resolution __attribute__((swift_name("get2DArrayMap(resolution:)")));
- (void)initiate __attribute__((swift_name("initiate()")));
- (BOOL)isValidCoordinateX:(double)x y:(double)y __attribute__((swift_name("isValidCoordinate(x:y:)")));
- (BOOL)isValidCoordinateX:(float)x y_:(float)y __attribute__((swift_name("isValidCoordinate(x:y_:)")));
@property (readonly) NSArray<VpsAccessPoint *> *accessPoints __attribute__((swift_name("accessPoints")));
@property (readonly) VpsDouble * _Nullable ceilingHeightInMeters __attribute__((swift_name("ceilingHeightInMeters")));
@property (readonly) double heightInMeters __attribute__((swift_name("heightInMeters")));
@property (readonly) int64_t id_ __attribute__((swift_name("id_")));
@property (readonly) double pixelsPerMeter __attribute__((swift_name("pixelsPerMeter")));
@property (readonly) NSArray<VpsSwapLocation *> *swapLocations __attribute__((swift_name("swapLocations")));
@property (readonly) double widthInMeters __attribute__((swift_name("widthInMeters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AltitudeClassifierParams")))
@interface VpsAltitudeClassifierParams : VpsBase
- (instancetype)initWithFs:(float)fs fastFilterParamsFlat:(VpsKotlinArray<VpsFloat *> *)fastFilterParamsFlat slowFilterParamsFlat:(VpsKotlinArray<VpsFloat *> *)slowFilterParamsFlat fastFilterInitCond:(VpsLFiltInitCond *)fastFilterInitCond slowFilterInitCond:(VpsLFiltInitCond *)slowFilterInitCond floorSwapTimeThreshold:(int64_t)floorSwapTimeThreshold floorOffset1:(float)floorOffset1 floorOffset2:(float)floorOffset2 floorOffset3:(float)floorOffset3 derivativeClfLagSeconds:(float)derivativeClfLagSeconds ascentDescentTimeThreshold:(int64_t)ascentDescentTimeThreshold descentThreshold:(float)descentThreshold ascentThreshold:(float)ascentThreshold __attribute__((swift_name("init(fs:fastFilterParamsFlat:slowFilterParamsFlat:fastFilterInitCond:slowFilterInitCond:floorSwapTimeThreshold:floorOffset1:floorOffset2:floorOffset3:derivativeClfLagSeconds:ascentDescentTimeThreshold:descentThreshold:ascentThreshold:)"))) __attribute__((objc_designated_initializer));
- (VpsAltitudeClassifierParams *)doCopyFs:(float)fs fastFilterParamsFlat:(VpsKotlinArray<VpsFloat *> *)fastFilterParamsFlat slowFilterParamsFlat:(VpsKotlinArray<VpsFloat *> *)slowFilterParamsFlat fastFilterInitCond:(VpsLFiltInitCond *)fastFilterInitCond slowFilterInitCond:(VpsLFiltInitCond *)slowFilterInitCond floorSwapTimeThreshold:(int64_t)floorSwapTimeThreshold floorOffset1:(float)floorOffset1 floorOffset2:(float)floorOffset2 floorOffset3:(float)floorOffset3 derivativeClfLagSeconds:(float)derivativeClfLagSeconds ascentDescentTimeThreshold:(int64_t)ascentDescentTimeThreshold descentThreshold:(float)descentThreshold ascentThreshold:(float)ascentThreshold __attribute__((swift_name("doCopy(fs:fastFilterParamsFlat:slowFilterParamsFlat:fastFilterInitCond:slowFilterInitCond:floorSwapTimeThreshold:floorOffset1:floorOffset2:floorOffset3:derivativeClfLagSeconds:ascentDescentTimeThreshold:descentThreshold:ascentThreshold:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t ascentDescentTimeThreshold __attribute__((swift_name("ascentDescentTimeThreshold")));
@property (readonly) float ascentThreshold __attribute__((swift_name("ascentThreshold")));
@property (readonly) float derivativeClfLagSeconds __attribute__((swift_name("derivativeClfLagSeconds")));
@property (readonly) float descentThreshold __attribute__((swift_name("descentThreshold")));
@property (readonly) VpsLFiltInitCond *fastFilterInitCond __attribute__((swift_name("fastFilterInitCond")));
@property (readonly) VpsKotlinArray<VpsKotlinFloatArray *> *fastFilterParams __attribute__((swift_name("fastFilterParams")));
@property (readonly) VpsKotlinArray<VpsFloat *> *fastFilterParamsFlat __attribute__((swift_name("fastFilterParamsFlat")));
@property (readonly) float floorOffset1 __attribute__((swift_name("floorOffset1")));
@property (readonly) float floorOffset2 __attribute__((swift_name("floorOffset2")));
@property (readonly) float floorOffset3 __attribute__((swift_name("floorOffset3")));
@property (readonly) int64_t floorSwapTimeThreshold __attribute__((swift_name("floorSwapTimeThreshold")));
@property (readonly) float fs __attribute__((swift_name("fs")));
@property (readonly) VpsLFiltInitCond *slowFilterInitCond __attribute__((swift_name("slowFilterInitCond")));
@property (readonly) VpsKotlinArray<VpsKotlinFloatArray *> *slowFilterParams __attribute__((swift_name("slowFilterParams")));
@property (readonly) VpsKotlinArray<VpsFloat *> *slowFilterParamsFlat __attribute__((swift_name("slowFilterParamsFlat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorChangeInterpreterSettings")))
@interface VpsFloorChangeInterpreterSettings : VpsBase
- (instancetype)initWithType:(VpsFloorChangeInterpreterType *)type altitudeClassifierParams:(VpsAltitudeClassifierParams *)altitudeClassifierParams wiFiAltitudeFusionParams:(VpsWiFiAltitudeFusionParams *)wiFiAltitudeFusionParams __attribute__((swift_name("init(type:altitudeClassifierParams:wiFiAltitudeFusionParams:)"))) __attribute__((objc_designated_initializer));
- (VpsFloorChangeInterpreterSettings *)doCopyType:(VpsFloorChangeInterpreterType *)type altitudeClassifierParams:(VpsAltitudeClassifierParams *)altitudeClassifierParams wiFiAltitudeFusionParams:(VpsWiFiAltitudeFusionParams *)wiFiAltitudeFusionParams __attribute__((swift_name("doCopy(type:altitudeClassifierParams:wiFiAltitudeFusionParams:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsAltitudeClassifierParams *altitudeClassifierParams __attribute__((swift_name("altitudeClassifierParams")));
@property (readonly) VpsFloorChangeInterpreterType *type __attribute__((swift_name("type")));
@property (readonly) VpsWiFiAltitudeFusionParams *wiFiAltitudeFusionParams __attribute__((swift_name("wiFiAltitudeFusionParams")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorChangeInterpreterType")))
@interface VpsFloorChangeInterpreterType : VpsKotlinEnum<VpsFloorChangeInterpreterType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsFloorChangeInterpreterType *barometer __attribute__((swift_name("barometer")));
@property (class, readonly) VpsFloorChangeInterpreterType *wifi __attribute__((swift_name("wifi")));
@property (class, readonly) VpsFloorChangeInterpreterType *fusion __attribute__((swift_name("fusion")));
+ (VpsKotlinArray<VpsFloorChangeInterpreterType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsFloorChangeInterpreterType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("FloorChangeSignal")))
@interface VpsFloorChangeSignal : VpsBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorChangeSignal.AltitudeClassifierSignal")))
@interface VpsFloorChangeSignalAltitudeClassifierSignal : VpsFloorChangeSignal
- (instancetype)initWithClassifierEvent:(VpsClassifierEvent *)classifierEvent __attribute__((swift_name("init(classifierEvent:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsClassifierEvent *classifierEvent __attribute__((swift_name("classifierEvent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorChangeSignal.AltitudeFloorChangeSignal")))
@interface VpsFloorChangeSignalAltitudeFloorChangeSignal : VpsFloorChangeSignal
- (instancetype)initWithFloorDifference:(int32_t)floorDifference __attribute__((swift_name("init(floorDifference:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t floorDifference __attribute__((swift_name("floorDifference")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorChangeSignal.UpdatePositionSignal")))
@interface VpsFloorChangeSignalUpdatePositionSignal : VpsFloorChangeSignal
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorChangeSignal.WiFiFloorChangeSignal")))
@interface VpsFloorChangeSignalWiFiFloorChangeSignal : VpsFloorChangeSignal
- (instancetype)initWithFloorLevelId:(VpsLong * _Nullable)floorLevelId wifiStatusUpdate:(VpsBaseEventWifiStatusUpdate *)wifiStatusUpdate heightDiff:(VpsFloat * _Nullable)heightDiff __attribute__((swift_name("init(floorLevelId:wifiStatusUpdate:heightDiff:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsLong * _Nullable floorLevelId __attribute__((swift_name("floorLevelId")));
@property VpsFloat * _Nullable heightDiff __attribute__((swift_name("heightDiff")));
@property (readonly) VpsBaseEventWifiStatusUpdate *wifiStatusUpdate __attribute__((swift_name("wifiStatusUpdate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSFloorChangeHandlerSettings")))
@interface VpsVPSFloorChangeHandlerSettings : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vPSFloorChangeHandlerSettings __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsVPSFloorChangeHandlerSettings *shared __attribute__((swift_name("shared")));
@property (readonly, getter=default) VpsFloorChangeInterpreterSettings *default_ __attribute__((swift_name("default_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WiFiAltitudeFusionParams")))
@interface VpsWiFiAltitudeFusionParams : VpsBase
- (instancetype)initWithWifiForceGoCriteria:(int32_t)wifiForceGoCriteria __attribute__((swift_name("init(wifiForceGoCriteria:)"))) __attribute__((objc_designated_initializer));
- (VpsWiFiAltitudeFusionParams *)doCopyWifiForceGoCriteria:(int32_t)wifiForceGoCriteria __attribute__((swift_name("doCopy(wifiForceGoCriteria:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t wifiForceGoCriteria __attribute__((swift_name("wifiForceGoCriteria")));
@end

__attribute__((swift_name("Flow")))
@interface VpsFlow<T> : VpsBase <VpsFlowConnection>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addNode:(VpsNode<T> *)node __attribute__((swift_name("add(node:)")));
- (VpsFlow<T> *)connectToConnections:(NSArray<id<VpsFlowConnection>> *)connections __attribute__((swift_name("connectTo(connections:)")));
- (VpsFlow<T> *)connectToConnection:(id<VpsFlowConnection>)connection __attribute__((swift_name("connectTo(connection:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(T _Nullable)data __attribute__((swift_name("onInput(data:)")));
- (void)onResultData:(T _Nullable)data __attribute__((swift_name("onResult(data:)")));
- (void)onResultExit __attribute__((swift_name("onResultExit()")));
- (void)onResultFlush __attribute__((swift_name("onResultFlush()")));
@property (readonly) NSArray<id<VpsFlowConnection>> *connections __attribute__((swift_name("connections")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowBuilder")))
@interface VpsFlowBuilder<T> : VpsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsFlowBuilder<T> *)addNodeNode:(VpsNode<T> *)node __attribute__((swift_name("addNode(node:)")));
- (VpsFlow<T> *)build __attribute__((swift_name("build()")));
@property NSMutableArray<id<VpsFlowConnection>> *builderConnections __attribute__((swift_name("builderConnections")));
@end

__attribute__((swift_name("NodeHandler")))
@protocol VpsNodeHandler
@required
- (void)onFlush __attribute__((swift_name("onFlush()")));
- (void)onResultData_:(id _Nullable)data __attribute__((swift_name("onResult(data_:)")));
- (void)onResultExit __attribute__((swift_name("onResultExit()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelToEventParameters")))
@interface VpsModelToEventParameters : VpsBase
- (instancetype)initWithUseSquareDriftFilter:(BOOL)useSquareDriftFilter squareDriftFilterGain:(float)squareDriftFilterGain __attribute__((swift_name("init(useSquareDriftFilter:squareDriftFilterGain:)"))) __attribute__((objc_designated_initializer));
- (VpsModelToEventParameters *)doCopyUseSquareDriftFilter:(BOOL)useSquareDriftFilter squareDriftFilterGain:(float)squareDriftFilterGain __attribute__((swift_name("doCopy(useSquareDriftFilter:squareDriftFilterGain:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float squareDriftFilterGain __attribute__((swift_name("squareDriftFilterGain")));
@property (readonly) BOOL useSquareDriftFilter __attribute__((swift_name("useSquareDriftFilter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSModelToEventParameters")))
@interface VpsVPSModelToEventParameters : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vPSModelToEventParameters __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsVPSModelToEventParameters *shared __attribute__((swift_name("shared")));
@property (readonly, getter=default) VpsModelToEventParameters *default_ __attribute__((swift_name("default_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterEvent")))
@interface VpsParticleFilterEvent : VpsKotlinEnum<VpsParticleFilterEvent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsParticleFilterEvent *rescueMode __attribute__((swift_name("rescueMode")));
+ (VpsKotlinArray<VpsParticleFilterEvent *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsParticleFilterEvent *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterParams")))
@interface VpsParticleFilterParams : VpsBase
- (instancetype)initWithVersion:(VpsParticleFilterParamsVersion *)version maxNumParticles:(int32_t)maxNumParticles minNumParticles:(int32_t)minNumParticles stepLengthStd:(float)stepLengthStd stepDirectionStd:(float)stepDirectionStd biasStd:(float)biasStd secondBiasStd:(float)secondBiasStd secondBiasMean:(float)secondBiasMean mixingFactor:(float)mixingFactor startMethod:(VpsStartMethod *)startMethod startPositionStd:(float)startPositionStd startDirectionStd:(float)startDirectionStd syncMethod:(VpsSyncMethod *)syncMethod syncPositionStd:(float)syncPositionStd syncDirectionStd:(float)syncDirectionStd rescuePositionStd:(float)rescuePositionStd rescueDirectionStd:(float)rescueDirectionStd kldEpsilon:(float)kldEpsilon kldDelta:(float)kldDelta kldZ:(float)kldZ binSize:(VpsKotlinTriple<VpsFloat *, VpsFloat *, VpsFloat *> *)binSize uxPositionConfidence:(float)uxPositionConfidence angleOffsetGainDegPerMin:(float)angleOffsetGainDegPerMin speedFactor:(float)speedFactor naiveOutputSyncMovement:(BOOL)naiveOutputSyncMovement useMLSyncSpeedFilter:(BOOL)useMLSyncSpeedFilter sprinkleSyncThreshold:(float)sprinkleSyncThreshold sprinklePercentage:(float)sprinklePercentage useRayTraceSensorModel:(BOOL)useRayTraceSensorModel nlThreshold:(float)nlThreshold rescueOnNL:(BOOL)rescueOnNL idleWiFiDistanceSyncCriteria:(float)idleWiFiDistanceSyncCriteria idleWiFiSecondsCriteria:(float)idleWiFiSecondsCriteria wiFiPathLossCoefficient:(float)wiFiPathLossCoefficient wiFiMeasuredPower:(int32_t)wiFiMeasuredPower swapSprinkleInterval:(int32_t)swapSprinkleInterval swapSprinkleEndCount:(int32_t)swapSprinkleEndCount swapSprinkleRatio:(float)swapSprinkleRatio mlStepHistorySize:(int32_t)mlStepHistorySize __attribute__((swift_name("init(version:maxNumParticles:minNumParticles:stepLengthStd:stepDirectionStd:biasStd:secondBiasStd:secondBiasMean:mixingFactor:startMethod:startPositionStd:startDirectionStd:syncMethod:syncPositionStd:syncDirectionStd:rescuePositionStd:rescueDirectionStd:kldEpsilon:kldDelta:kldZ:binSize:uxPositionConfidence:angleOffsetGainDegPerMin:speedFactor:naiveOutputSyncMovement:useMLSyncSpeedFilter:sprinkleSyncThreshold:sprinklePercentage:useRayTraceSensorModel:nlThreshold:rescueOnNL:idleWiFiDistanceSyncCriteria:idleWiFiSecondsCriteria:wiFiPathLossCoefficient:wiFiMeasuredPower:swapSprinkleInterval:swapSprinkleEndCount:swapSprinkleRatio:mlStepHistorySize:)"))) __attribute__((objc_designated_initializer));
- (VpsParticleFilterParams *)doCopyVersion:(VpsParticleFilterParamsVersion *)version maxNumParticles:(int32_t)maxNumParticles minNumParticles:(int32_t)minNumParticles stepLengthStd:(float)stepLengthStd stepDirectionStd:(float)stepDirectionStd biasStd:(float)biasStd secondBiasStd:(float)secondBiasStd secondBiasMean:(float)secondBiasMean mixingFactor:(float)mixingFactor startMethod:(VpsStartMethod *)startMethod startPositionStd:(float)startPositionStd startDirectionStd:(float)startDirectionStd syncMethod:(VpsSyncMethod *)syncMethod syncPositionStd:(float)syncPositionStd syncDirectionStd:(float)syncDirectionStd rescuePositionStd:(float)rescuePositionStd rescueDirectionStd:(float)rescueDirectionStd kldEpsilon:(float)kldEpsilon kldDelta:(float)kldDelta kldZ:(float)kldZ binSize:(VpsKotlinTriple<VpsFloat *, VpsFloat *, VpsFloat *> *)binSize uxPositionConfidence:(float)uxPositionConfidence angleOffsetGainDegPerMin:(float)angleOffsetGainDegPerMin speedFactor:(float)speedFactor naiveOutputSyncMovement:(BOOL)naiveOutputSyncMovement useMLSyncSpeedFilter:(BOOL)useMLSyncSpeedFilter sprinkleSyncThreshold:(float)sprinkleSyncThreshold sprinklePercentage:(float)sprinklePercentage useRayTraceSensorModel:(BOOL)useRayTraceSensorModel nlThreshold:(float)nlThreshold rescueOnNL:(BOOL)rescueOnNL idleWiFiDistanceSyncCriteria:(float)idleWiFiDistanceSyncCriteria idleWiFiSecondsCriteria:(float)idleWiFiSecondsCriteria wiFiPathLossCoefficient:(float)wiFiPathLossCoefficient wiFiMeasuredPower:(int32_t)wiFiMeasuredPower swapSprinkleInterval:(int32_t)swapSprinkleInterval swapSprinkleEndCount:(int32_t)swapSprinkleEndCount swapSprinkleRatio:(float)swapSprinkleRatio mlStepHistorySize:(int32_t)mlStepHistorySize __attribute__((swift_name("doCopy(version:maxNumParticles:minNumParticles:stepLengthStd:stepDirectionStd:biasStd:secondBiasStd:secondBiasMean:mixingFactor:startMethod:startPositionStd:startDirectionStd:syncMethod:syncPositionStd:syncDirectionStd:rescuePositionStd:rescueDirectionStd:kldEpsilon:kldDelta:kldZ:binSize:uxPositionConfidence:angleOffsetGainDegPerMin:speedFactor:naiveOutputSyncMovement:useMLSyncSpeedFilter:sprinkleSyncThreshold:sprinklePercentage:useRayTraceSensorModel:nlThreshold:rescueOnNL:idleWiFiDistanceSyncCriteria:idleWiFiSecondsCriteria:wiFiPathLossCoefficient:wiFiMeasuredPower:swapSprinkleInterval:swapSprinkleEndCount:swapSprinkleRatio:mlStepHistorySize:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, NSString *> *)map __attribute__((swift_name("map()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float angleOffsetGainDegPerMin __attribute__((swift_name("angleOffsetGainDegPerMin")));
@property (readonly) float biasStd __attribute__((swift_name("biasStd")));
@property (readonly) VpsKotlinTriple<VpsFloat *, VpsFloat *, VpsFloat *> *binSize __attribute__((swift_name("binSize")));
@property (readonly) float idleWiFiDistanceSyncCriteria __attribute__((swift_name("idleWiFiDistanceSyncCriteria")));
@property (readonly) float idleWiFiSecondsCriteria __attribute__((swift_name("idleWiFiSecondsCriteria")));
@property (readonly) float kldDelta __attribute__((swift_name("kldDelta")));
@property (readonly) float kldEpsilon __attribute__((swift_name("kldEpsilon")));
@property (readonly) float kldZ __attribute__((swift_name("kldZ")));
@property (readonly) int32_t maxNumParticles __attribute__((swift_name("maxNumParticles")));
@property (readonly) int32_t minNumParticles __attribute__((swift_name("minNumParticles")));
@property (readonly) float mixingFactor __attribute__((swift_name("mixingFactor")));
@property (readonly) int32_t mlStepHistorySize __attribute__((swift_name("mlStepHistorySize")));
@property (readonly) BOOL naiveOutputSyncMovement __attribute__((swift_name("naiveOutputSyncMovement")));
@property (readonly) float nlThreshold __attribute__((swift_name("nlThreshold")));
@property (readonly) float rescueDirectionStd __attribute__((swift_name("rescueDirectionStd")));
@property (readonly) BOOL rescueOnNL __attribute__((swift_name("rescueOnNL")));
@property (readonly) float rescuePositionStd __attribute__((swift_name("rescuePositionStd")));
@property (readonly) float secondBiasMean __attribute__((swift_name("secondBiasMean")));
@property (readonly) float secondBiasStd __attribute__((swift_name("secondBiasStd")));
@property (readonly) float speedFactor __attribute__((swift_name("speedFactor")));
@property (readonly) float sprinklePercentage __attribute__((swift_name("sprinklePercentage")));
@property (readonly) float sprinkleSyncThreshold __attribute__((swift_name("sprinkleSyncThreshold")));
@property (readonly) float startDirectionStd __attribute__((swift_name("startDirectionStd")));
@property (readonly) VpsStartMethod *startMethod __attribute__((swift_name("startMethod")));
@property (readonly) float startPositionStd __attribute__((swift_name("startPositionStd")));
@property (readonly) float stepDirectionStd __attribute__((swift_name("stepDirectionStd")));
@property (readonly) float stepLengthStd __attribute__((swift_name("stepLengthStd")));
@property (readonly) int32_t swapSprinkleEndCount __attribute__((swift_name("swapSprinkleEndCount")));
@property (readonly) int32_t swapSprinkleInterval __attribute__((swift_name("swapSprinkleInterval")));
@property (readonly) float swapSprinkleRatio __attribute__((swift_name("swapSprinkleRatio")));
@property (readonly) float syncDirectionStd __attribute__((swift_name("syncDirectionStd")));
@property (readonly) VpsSyncMethod *syncMethod __attribute__((swift_name("syncMethod")));
@property (readonly) float syncPositionStd __attribute__((swift_name("syncPositionStd")));
@property (readonly) BOOL useMLSyncSpeedFilter __attribute__((swift_name("useMLSyncSpeedFilter")));
@property (readonly) BOOL useRayTraceSensorModel __attribute__((swift_name("useRayTraceSensorModel")));
@property (readonly) float uxPositionConfidence __attribute__((swift_name("uxPositionConfidence")));
@property (readonly) VpsParticleFilterParamsVersion *version __attribute__((swift_name("version")));
@property (readonly) int32_t wiFiMeasuredPower __attribute__((swift_name("wiFiMeasuredPower")));
@property (readonly) float wiFiPathLossCoefficient __attribute__((swift_name("wiFiPathLossCoefficient")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterParams.Version")))
@interface VpsParticleFilterParamsVersion : VpsKotlinEnum<VpsParticleFilterParamsVersion *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsParticleFilterParamsVersion *default_ __attribute__((swift_name("default_")));
@property (class, readonly) VpsParticleFilterParamsVersion *v1 __attribute__((swift_name("v1")));
@property (class, readonly) VpsParticleFilterParamsVersion *v2 __attribute__((swift_name("v2")));
@property (class, readonly) VpsParticleFilterParamsVersion *v3 __attribute__((swift_name("v3")));
@property (class, readonly) VpsParticleFilterParamsVersion *mixedGauss __attribute__((swift_name("mixedGauss")));
@property (class, readonly) VpsParticleFilterParamsVersion *compass __attribute__((swift_name("compass")));
@property (class, readonly) VpsParticleFilterParamsVersion *sprinkle __attribute__((swift_name("sprinkle")));
+ (VpsKotlinArray<VpsParticleFilterParamsVersion *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsParticleFilterParamsVersion *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterSettings")))
@interface VpsParticleFilterSettings : VpsBase
- (instancetype)initWithUxPositionActivated:(BOOL)uxPositionActivated mlPositionActivated:(BOOL)mlPositionActivated particlePositionActivated:(BOOL)particlePositionActivated particlesOutputActivated:(BOOL)particlesOutputActivated particleFilterVersion:(VpsParticleFilterSettingsVersion *)particleFilterVersion particleFilterParams:(VpsParticleFilterParams *)particleFilterParams randomNumberGeneratorSeed:(VpsLong * _Nullable)randomNumberGeneratorSeed saveOutputSignals:(BOOL)saveOutputSignals saveWiFiStatusUpdate:(BOOL)saveWiFiStatusUpdate saveWiFiScans:(BOOL)saveWiFiScans __attribute__((swift_name("init(uxPositionActivated:mlPositionActivated:particlePositionActivated:particlesOutputActivated:particleFilterVersion:particleFilterParams:randomNumberGeneratorSeed:saveOutputSignals:saveWiFiStatusUpdate:saveWiFiScans:)"))) __attribute__((objc_designated_initializer));
- (VpsParticleFilterSettings *)doCopyUxPositionActivated:(BOOL)uxPositionActivated mlPositionActivated:(BOOL)mlPositionActivated particlePositionActivated:(BOOL)particlePositionActivated particlesOutputActivated:(BOOL)particlesOutputActivated particleFilterVersion:(VpsParticleFilterSettingsVersion *)particleFilterVersion particleFilterParams:(VpsParticleFilterParams *)particleFilterParams randomNumberGeneratorSeed:(VpsLong * _Nullable)randomNumberGeneratorSeed saveOutputSignals:(BOOL)saveOutputSignals saveWiFiStatusUpdate:(BOOL)saveWiFiStatusUpdate saveWiFiScans:(BOOL)saveWiFiScans __attribute__((swift_name("doCopy(uxPositionActivated:mlPositionActivated:particlePositionActivated:particlesOutputActivated:particleFilterVersion:particleFilterParams:randomNumberGeneratorSeed:saveOutputSignals:saveWiFiStatusUpdate:saveWiFiScans:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, NSString *> *)map __attribute__((swift_name("map()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL mlPositionActivated __attribute__((swift_name("mlPositionActivated")));
@property (readonly) VpsParticleFilterParams *particleFilterParams __attribute__((swift_name("particleFilterParams")));
@property (readonly) VpsParticleFilterSettingsVersion *particleFilterVersion __attribute__((swift_name("particleFilterVersion")));
@property (readonly) BOOL particlePositionActivated __attribute__((swift_name("particlePositionActivated")));
@property (readonly) BOOL particlesOutputActivated __attribute__((swift_name("particlesOutputActivated")));
@property (readonly) VpsLong * _Nullable randomNumberGeneratorSeed __attribute__((swift_name("randomNumberGeneratorSeed")));
@property (readonly) BOOL saveOutputSignals __attribute__((swift_name("saveOutputSignals")));
@property (readonly) BOOL saveWiFiScans __attribute__((swift_name("saveWiFiScans")));
@property (readonly) BOOL saveWiFiStatusUpdate __attribute__((swift_name("saveWiFiStatusUpdate")));
@property (readonly) BOOL uxPositionActivated __attribute__((swift_name("uxPositionActivated")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterSettings.Version")))
@interface VpsParticleFilterSettingsVersion : VpsKotlinEnum<VpsParticleFilterSettingsVersion *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsParticleFilterSettingsVersion *v1 __attribute__((swift_name("v1")));
@property (class, readonly) VpsParticleFilterSettingsVersion *v2 __attribute__((swift_name("v2")));
@property (class, readonly) VpsParticleFilterSettingsVersion *wifi __attribute__((swift_name("wifi")));
+ (VpsKotlinArray<VpsParticleFilterSettingsVersion *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsParticleFilterSettingsVersion *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSParticleFilterParams")))
@interface VpsVPSParticleFilterParams : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vPSParticleFilterParams __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsVPSParticleFilterParams *shared __attribute__((swift_name("shared")));
@property (readonly) VpsParticleFilterParams *compass __attribute__((swift_name("compass")));
@property (readonly, getter=default) VpsParticleFilterParams *default_ __attribute__((swift_name("default_")));
@property (readonly) VpsParticleFilterParams *particleFilterMixedGauss __attribute__((swift_name("particleFilterMixedGauss")));
@property (readonly) VpsParticleFilterParams *particleFilterV1 __attribute__((swift_name("particleFilterV1")));
@property (readonly) VpsParticleFilterParams *particleFilterV2 __attribute__((swift_name("particleFilterV2")));
@property (readonly) VpsParticleFilterParams *particleFilterV3 __attribute__((swift_name("particleFilterV3")));
@property (readonly) VpsParticleFilterParams *sprinkleFilter __attribute__((swift_name("sprinkleFilter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSParticleFilterSettings")))
@interface VpsVPSParticleFilterSettings : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vPSParticleFilterSettings __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsVPSParticleFilterSettings *shared __attribute__((swift_name("shared")));
@property (readonly, getter=default) VpsParticleFilterSettings *default_ __attribute__((swift_name("default_")));
@property (readonly) VpsParticleFilterSettings *mixedGauss __attribute__((swift_name("mixedGauss")));
@property (readonly) VpsParticleFilterSettings *v1 __attribute__((swift_name("v1")));
@property (readonly) VpsParticleFilterSettings *v2 __attribute__((swift_name("v2")));
@property (readonly) VpsParticleFilterSettings *v3 __attribute__((swift_name("v3")));
@property (readonly) VpsParticleFilterSettings *wifi __attribute__((swift_name("wifi")));
@end

__attribute__((swift_name("PositionEngineSettings")))
@interface VpsPositionEngineSettings : VpsBase
@property (readonly) VpsPositionEngineType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositionEngineSettings.GPSFusion")))
@interface VpsPositionEngineSettingsGPSFusion : VpsPositionEngineSettings
- (instancetype)initWithMlAdjustmentActivated:(BOOL)mlAdjustmentActivated __attribute__((swift_name("init(mlAdjustmentActivated:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL mlAdjustmentActivated __attribute__((swift_name("mlAdjustmentActivated")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositionEngineSettings.ParticleFilter")))
@interface VpsPositionEngineSettingsParticleFilter : VpsPositionEngineSettings
- (instancetype)initWithParticleFilterSettings:(VpsParticleFilterSettings *)particleFilterSettings __attribute__((swift_name("init(particleFilterSettings:)"))) __attribute__((objc_designated_initializer));
@property (readonly) VpsParticleFilterSettings *particleFilterSettings __attribute__((swift_name("particleFilterSettings")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositionEngineType")))
@interface VpsPositionEngineType : VpsKotlinEnum<VpsPositionEngineType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsPositionEngineType *particleFilter __attribute__((swift_name("particleFilter")));
@property (class, readonly) VpsPositionEngineType *gpsFusion __attribute__((swift_name("gpsFusion")));
+ (VpsKotlinArray<VpsPositionEngineType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsPositionEngineType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("ReplayHandler")))
@protocol VpsReplayHandler
@required
@property (readonly) NSArray<VpsInputSignal *> *inputs __attribute__((swift_name("inputs")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyReplayDataV9")))
@interface VpsLegacyReplayDataV9 : VpsBase
- (instancetype)initWithSystemType:(NSString *)systemType ecsuValue:(double)ecsuValue replayData:(NSDictionary<NSString *, NSArray<VpsLegacyReplaySensorData *> *> *)replayData syncPositions:(NSArray<VpsLegacyReplaySyncPosition *> *)syncPositions startPosition:(VpsLegacyReplayStartPosition *)startPosition wifiStatusUpdates:(NSArray<VpsLegacyReplayWiFiDataLegacyReplayWifiStatusUpdate *> * _Nullable)wifiStatusUpdates wifiScans:(NSArray<VpsLegacyReplayWiFiDataLegacyReplayWifiScan *> * _Nullable)wifiScans __attribute__((swift_name("init(systemType:ecsuValue:replayData:syncPositions:startPosition:wifiStatusUpdates:wifiScans:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsLegacyReplayDataV9Companion *companion __attribute__((swift_name("companion")));
- (VpsLegacyReplayDataV9 *)doCopySystemType:(NSString *)systemType ecsuValue:(double)ecsuValue replayData:(NSDictionary<NSString *, NSArray<VpsLegacyReplaySensorData *> *> *)replayData syncPositions:(NSArray<VpsLegacyReplaySyncPosition *> *)syncPositions startPosition:(VpsLegacyReplayStartPosition *)startPosition wifiStatusUpdates:(NSArray<VpsLegacyReplayWiFiDataLegacyReplayWifiStatusUpdate *> * _Nullable)wifiStatusUpdates wifiScans:(NSArray<VpsLegacyReplayWiFiDataLegacyReplayWifiScan *> * _Nullable)wifiScans __attribute__((swift_name("doCopy(systemType:ecsuValue:replayData:syncPositions:startPosition:wifiStatusUpdates:wifiScans:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double ecsuValue __attribute__((swift_name("ecsuValue")));
@property (readonly) NSDictionary<NSString *, NSArray<VpsLegacyReplaySensorData *> *> *replayData __attribute__((swift_name("replayData")));
@property (readonly) VpsLegacyReplayStartPosition *startPosition __attribute__((swift_name("startPosition")));
@property (readonly) NSArray<VpsLegacyReplaySyncPosition *> *syncPositions __attribute__((swift_name("syncPositions")));
@property (readonly) NSString *systemType __attribute__((swift_name("systemType")));
@property NSArray<VpsLegacyReplayWiFiDataLegacyReplayWifiScan *> * _Nullable wifiScans __attribute__((swift_name("wifiScans")));
@property NSArray<VpsLegacyReplayWiFiDataLegacyReplayWifiStatusUpdate *> * _Nullable wifiStatusUpdates __attribute__((swift_name("wifiStatusUpdates")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyReplayDataV9.Companion")))
@interface VpsLegacyReplayDataV9Companion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsLegacyReplayDataV9Companion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyReplaySensorData")))
@interface VpsLegacyReplaySensorData : VpsBase
- (instancetype)initWithSensorTimestamp:(int64_t)sensorTimestamp systemTimestamp:(int64_t)systemTimestamp values:(VpsKotlinFloatArray *)values sensorAccuracy:(VpsFloat * _Nullable)sensorAccuracy __attribute__((swift_name("init(sensorTimestamp:systemTimestamp:values:sensorAccuracy:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsLegacyReplaySensorDataCompanion *companion __attribute__((swift_name("companion")));
- (VpsLegacyReplaySensorData *)doCopySensorTimestamp:(int64_t)sensorTimestamp systemTimestamp:(int64_t)systemTimestamp values:(VpsKotlinFloatArray *)values sensorAccuracy:(VpsFloat * _Nullable)sensorAccuracy __attribute__((swift_name("doCopy(sensorTimestamp:systemTimestamp:values:sensorAccuracy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsFloat * _Nullable sensorAccuracy __attribute__((swift_name("sensorAccuracy")));
@property (readonly) int64_t sensorTimestamp __attribute__((swift_name("sensorTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@property (readonly) VpsKotlinFloatArray *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyReplaySensorData.Companion")))
@interface VpsLegacyReplaySensorDataCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsLegacyReplaySensorDataCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyReplayStartPosition")))
@interface VpsLegacyReplayStartPosition : VpsBase
- (instancetype)initWithTimestamp:(VpsLong * _Nullable)timestamp position:(VpsCoordinateF * _Nullable)position angle:(VpsDouble * _Nullable)angle uncertainAngle:(VpsBoolean * _Nullable)uncertainAngle __attribute__((swift_name("init(timestamp:position:angle:uncertainAngle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsLegacyReplayStartPositionCompanion *companion __attribute__((swift_name("companion")));
- (VpsLegacyReplayStartPosition *)doCopyTimestamp:(VpsLong * _Nullable)timestamp position:(VpsCoordinateF * _Nullable)position angle:(VpsDouble * _Nullable)angle uncertainAngle:(VpsBoolean * _Nullable)uncertainAngle __attribute__((swift_name("doCopy(timestamp:position:angle:uncertainAngle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsDouble * _Nullable angle __attribute__((swift_name("angle")));
@property (readonly) VpsCoordinateF * _Nullable position __attribute__((swift_name("position")));
@property (readonly) VpsLong * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property (readonly) VpsBoolean * _Nullable uncertainAngle __attribute__((swift_name("uncertainAngle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyReplayStartPosition.Companion")))
@interface VpsLegacyReplayStartPositionCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsLegacyReplayStartPositionCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyReplaySyncPosition")))
@interface VpsLegacyReplaySyncPosition : VpsBase
- (instancetype)initWithTimestamp:(int64_t)timestamp position:(VpsCoordinateF *)position angle:(float)angle syncPosition:(BOOL)syncPosition syncAngle:(BOOL)syncAngle uncertainAngle:(BOOL)uncertainAngle __attribute__((swift_name("init(timestamp:position:angle:syncPosition:syncAngle:uncertainAngle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsLegacyReplaySyncPositionCompanion *companion __attribute__((swift_name("companion")));
- (VpsLegacyReplaySyncPosition *)doCopyTimestamp:(int64_t)timestamp position:(VpsCoordinateF *)position angle:(float)angle syncPosition:(BOOL)syncPosition syncAngle:(BOOL)syncAngle uncertainAngle:(BOOL)uncertainAngle __attribute__((swift_name("doCopy(timestamp:position:angle:syncPosition:syncAngle:uncertainAngle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float angle __attribute__((swift_name("angle")));
@property (readonly) VpsCoordinateF *position __attribute__((swift_name("position")));
@property (readonly) BOOL syncAngle __attribute__((swift_name("syncAngle")));
@property (readonly) BOOL syncPosition __attribute__((swift_name("syncPosition")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) BOOL uncertainAngle __attribute__((swift_name("uncertainAngle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyReplaySyncPosition.Companion")))
@interface VpsLegacyReplaySyncPositionCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsLegacyReplaySyncPositionCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyReplayWiFiData")))
@interface VpsLegacyReplayWiFiData : VpsBase
- (instancetype)initWithTimestamp:(int64_t)timestamp wifiStatusUpdates:(NSArray<VpsLegacyReplayWiFiDataLegacyReplayWifiStatusUpdate *> *)wifiStatusUpdates wifiScans:(NSArray<VpsLegacyReplayWiFiDataLegacyReplayWifiScan *> *)wifiScans __attribute__((swift_name("init(timestamp:wifiStatusUpdates:wifiScans:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsLegacyReplayWiFiDataCompanion *companion __attribute__((swift_name("companion")));
- (VpsLegacyReplayWiFiData *)doCopyTimestamp:(int64_t)timestamp wifiStatusUpdates:(NSArray<VpsLegacyReplayWiFiDataLegacyReplayWifiStatusUpdate *> *)wifiStatusUpdates wifiScans:(NSArray<VpsLegacyReplayWiFiDataLegacyReplayWifiScan *> *)wifiScans __attribute__((swift_name("doCopy(timestamp:wifiStatusUpdates:wifiScans:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSArray<VpsLegacyReplayWiFiDataLegacyReplayWifiScan *> *wifiScans __attribute__((swift_name("wifiScans")));
@property (readonly) NSArray<VpsLegacyReplayWiFiDataLegacyReplayWifiStatusUpdate *> *wifiStatusUpdates __attribute__((swift_name("wifiStatusUpdates")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyReplayWiFiData.Companion")))
@interface VpsLegacyReplayWiFiDataCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsLegacyReplayWiFiDataCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyReplayWiFiData.LegacyReplayWifiScan")))
@interface VpsLegacyReplayWiFiDataLegacyReplayWifiScan : VpsBase
- (instancetype)initWithTimestamp:(int64_t)timestamp data:(NSArray<VpsLegacyReplayWiFiDataLegacyReplayWifiScanLegacyReplayWifiScanResult *> *)data __attribute__((swift_name("init(timestamp:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsLegacyReplayWiFiDataLegacyReplayWifiScanCompanion *companion __attribute__((swift_name("companion")));
- (VpsLegacyReplayWiFiDataLegacyReplayWifiScan *)doCopyTimestamp:(int64_t)timestamp data:(NSArray<VpsLegacyReplayWiFiDataLegacyReplayWifiScanLegacyReplayWifiScanResult *> *)data __attribute__((swift_name("doCopy(timestamp:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<VpsLegacyReplayWiFiDataLegacyReplayWifiScanLegacyReplayWifiScanResult *> *data __attribute__((swift_name("data")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyReplayWiFiData.LegacyReplayWifiScanCompanion")))
@interface VpsLegacyReplayWiFiDataLegacyReplayWifiScanCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsLegacyReplayWiFiDataLegacyReplayWifiScanCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyReplayWiFiData.LegacyReplayWifiScanLegacyReplayWifiScanResult")))
@interface VpsLegacyReplayWiFiDataLegacyReplayWifiScanLegacyReplayWifiScanResult : VpsBase
- (instancetype)initWithSsid:(NSString *)ssid bssid:(NSString *)bssid rssi:(int32_t)rssi frequency:(int32_t)frequency centerFreq0:(int32_t)centerFreq0 _80211mcResponder:(BOOL)_80211mcResponder __attribute__((swift_name("init(ssid:bssid:rssi:frequency:centerFreq0:_80211mcResponder:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsLegacyReplayWiFiDataLegacyReplayWifiScanLegacyReplayWifiScanResultCompanion *companion __attribute__((swift_name("companion")));
- (VpsLegacyReplayWiFiDataLegacyReplayWifiScanLegacyReplayWifiScanResult *)doCopySsid:(NSString *)ssid bssid:(NSString *)bssid rssi:(int32_t)rssi frequency:(int32_t)frequency centerFreq0:(int32_t)centerFreq0 _80211mcResponder:(BOOL)_80211mcResponder __attribute__((swift_name("doCopy(ssid:bssid:rssi:frequency:centerFreq0:_80211mcResponder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL _80211mcResponder __attribute__((swift_name("_80211mcResponder")));
@property (readonly) NSString *bssid __attribute__((swift_name("bssid")));
@property (readonly) int32_t centerFreq0 __attribute__((swift_name("centerFreq0")));
@property (readonly) int32_t frequency __attribute__((swift_name("frequency")));
@property (readonly) int32_t rssi __attribute__((swift_name("rssi")));
@property (readonly) NSString *ssid __attribute__((swift_name("ssid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyReplayWiFiData.LegacyReplayWifiScanLegacyReplayWifiScanResultCompanion")))
@interface VpsLegacyReplayWiFiDataLegacyReplayWifiScanLegacyReplayWifiScanResultCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsLegacyReplayWiFiDataLegacyReplayWifiScanLegacyReplayWifiScanResultCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyReplayWiFiData.LegacyReplayWifiStatusUpdate")))
@interface VpsLegacyReplayWiFiDataLegacyReplayWifiStatusUpdate : VpsBase
- (instancetype)initWithTimestamp:(int64_t)timestamp bssid:(NSString *)bssid identifier:(NSString * _Nullable)identifier rtlsOptionsId:(VpsLong * _Nullable)rtlsOptionsId rssi:(VpsInt * _Nullable)rssi frequency:(VpsInt * _Nullable)frequency __attribute__((swift_name("init(timestamp:bssid:identifier:rtlsOptionsId:rssi:frequency:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsLegacyReplayWiFiDataLegacyReplayWifiStatusUpdateCompanion *companion __attribute__((swift_name("companion")));
- (VpsLegacyReplayWiFiDataLegacyReplayWifiStatusUpdate *)doCopyTimestamp:(int64_t)timestamp bssid:(NSString *)bssid identifier:(NSString * _Nullable)identifier rtlsOptionsId:(VpsLong * _Nullable)rtlsOptionsId rssi:(VpsInt * _Nullable)rssi frequency:(VpsInt * _Nullable)frequency __attribute__((swift_name("doCopy(timestamp:bssid:identifier:rtlsOptionsId:rssi:frequency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *bssid __attribute__((swift_name("bssid")));
@property VpsInt * _Nullable frequency __attribute__((swift_name("frequency")));
@property (readonly) NSString * _Nullable identifier __attribute__((swift_name("identifier")));
@property VpsInt * _Nullable rssi __attribute__((swift_name("rssi")));
@property (readonly) VpsLong * _Nullable rtlsOptionsId __attribute__((swift_name("rtlsOptionsId")));
@property int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyReplayWiFiData.LegacyReplayWifiStatusUpdateCompanion")))
@interface VpsLegacyReplayWiFiDataLegacyReplayWifiStatusUpdateCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsLegacyReplayWiFiDataLegacyReplayWifiStatusUpdateCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayAngleCorrection")))
@interface VpsReplayAngleCorrection : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp angle:(float)angle __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:angle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayAngleCorrectionCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayAngleCorrection *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp angle:(float)angle __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:angle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float angle __attribute__((swift_name("angle")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayAngleCorrection.Companion")))
@interface VpsReplayAngleCorrectionCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayAngleCorrectionCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayDataV1")))
@interface VpsReplayDataV1 : VpsBase
- (instancetype)initWithSessionId:(NSString *)sessionId starts:(NSMutableArray<VpsReplayStartPosition *> *)starts startLngLats:(NSMutableArray<VpsReplayStartLngLat *> *)startLngLats exits:(NSMutableArray<VpsReplayExit *> *)exits syncPositions:(NSMutableArray<VpsReplaySyncPosition *> *)syncPositions syncLngLats:(NSMutableArray<VpsReplaySyncLngLat *> *)syncLngLats wifiStatusUpdates:(NSMutableArray<VpsWifiStatusUpdate *> *)wifiStatusUpdates wifiScanUpdates:(NSMutableArray<VpsWifiScanUpdate *> *)wifiScanUpdates angleCorrections:(NSMutableArray<VpsReplayAngleCorrection *> *)angleCorrections floorChanges:(NSMutableArray<VpsReplayFloorChange *> *)floorChanges lngLats:(NSMutableArray<VpsReplayLngLat *> *)lngLats replayData:(VpsMutableDictionary<NSString *, NSMutableArray<VpsReplaySensorData *> *> *)replayData startSystemTimestamp:(int64_t)startSystemTimestamp stopSystemTimestamp:(int64_t)stopSystemTimestamp startNanoTimestamp:(int64_t)startNanoTimestamp stopNanoTimestamp:(int64_t)stopNanoTimestamp __attribute__((swift_name("init(sessionId:starts:startLngLats:exits:syncPositions:syncLngLats:wifiStatusUpdates:wifiScanUpdates:angleCorrections:floorChanges:lngLats:replayData:startSystemTimestamp:stopSystemTimestamp:startNanoTimestamp:stopNanoTimestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayDataV1Companion *companion __attribute__((swift_name("companion")));
- (VpsReplayDataV1 *)doCopySessionId:(NSString *)sessionId starts:(NSMutableArray<VpsReplayStartPosition *> *)starts startLngLats:(NSMutableArray<VpsReplayStartLngLat *> *)startLngLats exits:(NSMutableArray<VpsReplayExit *> *)exits syncPositions:(NSMutableArray<VpsReplaySyncPosition *> *)syncPositions syncLngLats:(NSMutableArray<VpsReplaySyncLngLat *> *)syncLngLats wifiStatusUpdates:(NSMutableArray<VpsWifiStatusUpdate *> *)wifiStatusUpdates wifiScanUpdates:(NSMutableArray<VpsWifiScanUpdate *> *)wifiScanUpdates angleCorrections:(NSMutableArray<VpsReplayAngleCorrection *> *)angleCorrections floorChanges:(NSMutableArray<VpsReplayFloorChange *> *)floorChanges lngLats:(NSMutableArray<VpsReplayLngLat *> *)lngLats replayData:(VpsMutableDictionary<NSString *, NSMutableArray<VpsReplaySensorData *> *> *)replayData startSystemTimestamp:(int64_t)startSystemTimestamp stopSystemTimestamp:(int64_t)stopSystemTimestamp startNanoTimestamp:(int64_t)startNanoTimestamp stopNanoTimestamp:(int64_t)stopNanoTimestamp __attribute__((swift_name("doCopy(sessionId:starts:startLngLats:exits:syncPositions:syncLngLats:wifiStatusUpdates:wifiScanUpdates:angleCorrections:floorChanges:lngLats:replayData:startSystemTimestamp:stopSystemTimestamp:startNanoTimestamp:stopNanoTimestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSMutableArray<VpsReplayAngleCorrection *> *angleCorrections __attribute__((swift_name("angleCorrections")));
@property (readonly) NSMutableArray<VpsReplayExit *> *exits __attribute__((swift_name("exits")));
@property (readonly) NSMutableArray<VpsReplayFloorChange *> *floorChanges __attribute__((swift_name("floorChanges")));
@property (readonly) NSMutableArray<VpsReplayLngLat *> *lngLats __attribute__((swift_name("lngLats")));
@property (readonly) VpsMutableDictionary<NSString *, NSMutableArray<VpsReplaySensorData *> *> *replayData __attribute__((swift_name("replayData")));
@property NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) NSMutableArray<VpsReplayStartLngLat *> *startLngLats __attribute__((swift_name("startLngLats")));
@property int64_t startNanoTimestamp __attribute__((swift_name("startNanoTimestamp")));
@property int64_t startSystemTimestamp __attribute__((swift_name("startSystemTimestamp")));
@property (readonly) NSMutableArray<VpsReplayStartPosition *> *starts __attribute__((swift_name("starts")));
@property int64_t stopNanoTimestamp __attribute__((swift_name("stopNanoTimestamp")));
@property int64_t stopSystemTimestamp __attribute__((swift_name("stopSystemTimestamp")));
@property (readonly) NSMutableArray<VpsReplaySyncLngLat *> *syncLngLats __attribute__((swift_name("syncLngLats")));
@property (readonly) NSMutableArray<VpsReplaySyncPosition *> *syncPositions __attribute__((swift_name("syncPositions")));
@property (readonly) NSMutableArray<VpsWifiScanUpdate *> *wifiScanUpdates __attribute__((swift_name("wifiScanUpdates")));
@property (readonly) NSMutableArray<VpsWifiStatusUpdate *> *wifiStatusUpdates __attribute__((swift_name("wifiStatusUpdates")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayDataV1.Companion")))
@interface VpsReplayDataV1Companion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayDataV1Companion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayExit")))
@interface VpsReplayExit : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayExitCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayExit *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayExit.Companion")))
@interface VpsReplayExitCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayExitCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayFloorChange")))
@interface VpsReplayFloorChange : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp floorLevelId:(int64_t)floorLevelId startPosition:(VpsCoordinateF *)startPosition __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:floorLevelId:startPosition:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayFloorChangeCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayFloorChange *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp floorLevelId:(int64_t)floorLevelId startPosition:(VpsCoordinateF *)startPosition __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:floorLevelId:startPosition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorLevelId __attribute__((swift_name("floorLevelId")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) VpsCoordinateF *startPosition __attribute__((swift_name("startPosition")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayFloorChange.Companion")))
@interface VpsReplayFloorChangeCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayFloorChangeCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayLngLat")))
@interface VpsReplayLngLat : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp longitude:(double)longitude latitude:(double)latitude accuracy:(VpsDouble * _Nullable)accuracy bearing:(VpsDouble * _Nullable)bearing bearingAccuracy:(VpsDouble * _Nullable)bearingAccuracy altitude:(VpsDouble * _Nullable)altitude verticalAccuracy:(VpsDouble * _Nullable)verticalAccuracy speed:(VpsDouble * _Nullable)speed speedAccuracy:(VpsDouble * _Nullable)speedAccuracy ellipsoidalAltitude:(VpsDouble * _Nullable)ellipsoidalAltitude __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:longitude:latitude:accuracy:bearing:bearingAccuracy:altitude:verticalAccuracy:speed:speedAccuracy:ellipsoidalAltitude:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayLngLatCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayLngLat *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp longitude:(double)longitude latitude:(double)latitude accuracy:(VpsDouble * _Nullable)accuracy bearing:(VpsDouble * _Nullable)bearing bearingAccuracy:(VpsDouble * _Nullable)bearingAccuracy altitude:(VpsDouble * _Nullable)altitude verticalAccuracy:(VpsDouble * _Nullable)verticalAccuracy speed:(VpsDouble * _Nullable)speed speedAccuracy:(VpsDouble * _Nullable)speedAccuracy ellipsoidalAltitude:(VpsDouble * _Nullable)ellipsoidalAltitude __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:longitude:latitude:accuracy:bearing:bearingAccuracy:altitude:verticalAccuracy:speed:speedAccuracy:ellipsoidalAltitude:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsDouble * _Nullable accuracy __attribute__((swift_name("accuracy")));
@property (readonly) VpsDouble * _Nullable altitude __attribute__((swift_name("altitude")));
@property (readonly) VpsDouble * _Nullable bearing __attribute__((swift_name("bearing")));
@property (readonly) VpsDouble * _Nullable bearingAccuracy __attribute__((swift_name("bearingAccuracy")));
@property (readonly) VpsDouble * _Nullable ellipsoidalAltitude __attribute__((swift_name("ellipsoidalAltitude")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) VpsDouble * _Nullable speed __attribute__((swift_name("speed")));
@property (readonly) VpsDouble * _Nullable speedAccuracy __attribute__((swift_name("speedAccuracy")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@property (readonly) VpsDouble * _Nullable verticalAccuracy __attribute__((swift_name("verticalAccuracy")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayLngLat.Companion")))
@interface VpsReplayLngLatCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayLngLatCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplaySensorData")))
@interface VpsReplaySensorData : VpsBase
- (instancetype)initWithValues:(VpsKotlinFloatArray *)values nT:(int64_t)nT sensorTimestamp:(int64_t)sensorTimestamp sysT:(int64_t)sysT __attribute__((swift_name("init(values:nT:sensorTimestamp:sysT:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplaySensorDataCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplaySensorData *)doCopyValues:(VpsKotlinFloatArray *)values nT:(int64_t)nT sensorTimestamp:(int64_t)sensorTimestamp sysT:(int64_t)sysT __attribute__((swift_name("doCopy(values:nT:sensorTimestamp:sysT:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t nT __attribute__((swift_name("nT")));
@property (readonly) int64_t sensorTimestamp __attribute__((swift_name("sensorTimestamp")));
@property (readonly) int64_t sysT __attribute__((swift_name("sysT")));
@property (readonly) VpsKotlinFloatArray *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplaySensorData.Companion")))
@interface VpsReplaySensorDataCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplaySensorDataCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayStartLngLat")))
@interface VpsReplayStartLngLat : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation *)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:location:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayStartLngLatCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayStartLngLat *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation *)location __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsLocation *location __attribute__((swift_name("location")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayStartLngLat.Companion")))
@interface VpsReplayStartLngLatCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayStartLngLatCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayStartPosition")))
@interface VpsReplayStartPosition : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp positions:(NSArray<VpsCoordinateF *> *)positions syncPosition:(BOOL)syncPosition syncAngle:(BOOL)syncAngle angle:(float)angle uncertainAngle:(BOOL)uncertainAngle __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:positions:syncPosition:syncAngle:angle:uncertainAngle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayStartPositionCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayStartPosition *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp positions:(NSArray<VpsCoordinateF *> *)positions syncPosition:(BOOL)syncPosition syncAngle:(BOOL)syncAngle angle:(float)angle uncertainAngle:(BOOL)uncertainAngle __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:positions:syncPosition:syncAngle:angle:uncertainAngle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float angle __attribute__((swift_name("angle")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) NSArray<VpsCoordinateF *> *positions __attribute__((swift_name("positions")));
@property (readonly) BOOL syncAngle __attribute__((swift_name("syncAngle")));
@property (readonly) BOOL syncPosition __attribute__((swift_name("syncPosition")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@property (readonly) BOOL uncertainAngle __attribute__((swift_name("uncertainAngle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayStartPosition.Companion")))
@interface VpsReplayStartPositionCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayStartPositionCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplaySyncLngLat")))
@interface VpsReplaySyncLngLat : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation *)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:location:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplaySyncLngLatCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplaySyncLngLat *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation *)location __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsLocation *location __attribute__((swift_name("location")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplaySyncLngLat.Companion")))
@interface VpsReplaySyncLngLatCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplaySyncLngLatCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplaySyncPosition")))
@interface VpsReplaySyncPosition : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp positions:(NSArray<VpsCoordinateF *> *)positions syncPosition:(BOOL)syncPosition syncAngle:(BOOL)syncAngle angle:(float)angle uncertainAngle:(BOOL)uncertainAngle __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:positions:syncPosition:syncAngle:angle:uncertainAngle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplaySyncPositionCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplaySyncPosition *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp positions:(NSArray<VpsCoordinateF *> *)positions syncPosition:(BOOL)syncPosition syncAngle:(BOOL)syncAngle angle:(float)angle uncertainAngle:(BOOL)uncertainAngle __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:positions:syncPosition:syncAngle:angle:uncertainAngle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float angle __attribute__((swift_name("angle")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) NSArray<VpsCoordinateF *> *positions __attribute__((swift_name("positions")));
@property (readonly) BOOL syncAngle __attribute__((swift_name("syncAngle")));
@property (readonly) BOOL syncPosition __attribute__((swift_name("syncPosition")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@property (readonly) BOOL uncertainAngle __attribute__((swift_name("uncertainAngle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplaySyncPosition.Companion")))
@interface VpsReplaySyncPositionCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplaySyncPositionCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("PartitionRecorder")))
@interface VpsPartitionRecorder<T> : VpsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)fullReset __attribute__((swift_name("fullReset()")));
- (BOOL)isItTimeToDoPartialUploadLastSystemTimestamp:(int64_t)lastSystemTimestamp __attribute__((swift_name("isItTimeToDoPartialUpload(lastSystemTimestamp:)")));
- (void)onFullReset __attribute__((swift_name("onFullReset()")));
- (void)onNextRecordingPartReset __attribute__((swift_name("onNextRecordingPartReset()")));
- (void)onPartialDataDataPackage:(VpsPartitionRecorderDataPackage *)dataPackage __attribute__((swift_name("onPartialData(dataPackage:)")));
- (VpsPartitionRecorderDataPackage *)packageDataIdentifier:(NSString *)identifier __attribute__((swift_name("packageData(identifier:)")));
- (void)partialUploadLastNanoTimestamp:(int64_t)lastNanoTimestamp __attribute__((swift_name("partialUpload(lastNanoTimestamp:)")));
- (void)startRecordingSessionId:(NSString *)sessionId startNanoTimestamp:(int64_t)startNanoTimestamp startSystemTimeStamp:(int64_t)startSystemTimeStamp __attribute__((swift_name("startRecording(sessionId:startNanoTimestamp:startSystemTimeStamp:)")));
- (void)stopRecordingStopNanoTimestamp:(int64_t)stopNanoTimestamp stopSystemTimeStamp:(int64_t)stopSystemTimeStamp __attribute__((swift_name("stopRecording(stopNanoTimestamp:stopSystemTimeStamp:)")));
@property T _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString *dataFileNamePrefix __attribute__((swift_name("dataFileNamePrefix")));
@property VpsLong * _Nullable firstDataPointSystemTimestamp __attribute__((swift_name("firstDataPointSystemTimestamp")));
@property BOOL isRecording __attribute__((swift_name("isRecording")));
@property (readonly) int64_t maxRecordingTimePerPartMillis __attribute__((swift_name("maxRecordingTimePerPartMillis")));
@property int32_t partRecordingNumber __attribute__((swift_name("partRecordingNumber")));
@property NSString *sessionId __attribute__((swift_name("sessionId")));
@property int64_t startNanoTime __attribute__((swift_name("startNanoTime")));
@property int64_t startSystemTime __attribute__((swift_name("startSystemTime")));
@property int64_t stopNanoTime __attribute__((swift_name("stopNanoTime")));
@property int64_t stopSystemTime __attribute__((swift_name("stopSystemTime")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PartitionRecorderDataPackage")))
@interface VpsPartitionRecorderDataPackage : VpsBase
- (instancetype)initWithData:(NSString *)data identifier:(NSString *)identifier __attribute__((swift_name("init(data:identifier:)"))) __attribute__((objc_designated_initializer));
- (VpsPartitionRecorderDataPackage *)doCopyData:(NSString *)data identifier:(NSString *)identifier __attribute__((swift_name("doCopy(data:identifier:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *data __attribute__((swift_name("data")));
@property (readonly) NSString *identifier __attribute__((swift_name("identifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayV1Recorder")))
@interface VpsReplayV1Recorder : VpsPartitionRecorder<VpsReplayDataV1 *>
- (instancetype)initWithUploader:(id<VpsUploader>)uploader recordingPartInterval:(VpsLong * _Nullable)recordingPartInterval __attribute__((swift_name("init(uploader:recordingPartInterval:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onFullReset __attribute__((swift_name("onFullReset()")));
- (void)onInputSignalSignal:(VpsInputSignal *)signal __attribute__((swift_name("onInputSignal(signal:)")));
- (void)onNextRecordingPartReset __attribute__((swift_name("onNextRecordingPartReset()")));
- (void)onPartialDataDataPackage:(VpsPartitionRecorderDataPackage *)dataPackage __attribute__((swift_name("onPartialData(dataPackage:)")));
- (VpsPartitionRecorderDataPackage *)packageDataIdentifier:(NSString *)identifier __attribute__((swift_name("packageData(identifier:)")));
- (void)startRecordingSessionId:(NSString *)sessionId startNanoTimestamp:(int64_t)startNanoTimestamp startSystemTimeStamp:(int64_t)startSystemTimeStamp __attribute__((swift_name("startRecording(sessionId:startNanoTimestamp:startSystemTimeStamp:)")));
- (void)stopRecordingStopNanoTimestamp:(int64_t)stopNanoTimestamp stopSystemTimeStamp:(int64_t)stopSystemTimeStamp __attribute__((swift_name("stopRecording(stopNanoTimestamp:stopSystemTimeStamp:)")));
@property VpsReplayDataV1 *data __attribute__((swift_name("data")));
@property (readonly) NSString *dataFileNamePrefix __attribute__((swift_name("dataFileNamePrefix")));
@property (readonly) int64_t maxRecordingTimePerPartMillis __attribute__((swift_name("maxRecordingTimePerPartMillis")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((swift_name("Uploader")))
@protocol VpsUploader
@required
- (void)onEndUploadDataPackage:(VpsPartitionRecorderDataPackage *)dataPackage __attribute__((swift_name("onEndUpload(dataPackage:)")));
- (void)onPartialUploadDataPackage:(VpsPartitionRecorderDataPackage *)dataPackage __attribute__((swift_name("onPartialUpload(dataPackage:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RotationHandlerSettings")))
@interface VpsRotationHandlerSettings : VpsBase
- (instancetype)initWithRotationOutputLimit:(int32_t)rotationOutputLimit __attribute__((swift_name("init(rotationOutputLimit:)"))) __attribute__((objc_designated_initializer));
- (VpsRotationHandlerSettings *)doCopyRotationOutputLimit:(int32_t)rotationOutputLimit __attribute__((swift_name("doCopy(rotationOutputLimit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t rotationOutputLimit __attribute__((swift_name("rotationOutputLimit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Features")))
@interface VpsFeatures : VpsBase
- (instancetype)initWithTimestamp:(int64_t)timestamp data:(VpsKotlinFloatArray *)data __attribute__((swift_name("init(timestamp:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsFeaturesCompanion *companion __attribute__((swift_name("companion")));
- (VpsFeatures *)doCopyTimestamp:(int64_t)timestamp data:(VpsKotlinFloatArray *)data __attribute__((swift_name("doCopy(timestamp:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsKotlinFloatArray *data __attribute__((swift_name("data")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Features.Companion")))
@interface VpsFeaturesCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsFeaturesCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NLModelOutput")))
@interface VpsNLModelOutput : VpsBase
- (instancetype)initWithPatchCenter:(VpsKotlinFloatArray *)patchCenter heatmap:(VpsKotlinArray<VpsKotlinFloatArray *> *)heatmap resolution:(float)resolution __attribute__((swift_name("init(patchCenter:heatmap:resolution:)"))) __attribute__((objc_designated_initializer));
- (VpsNLModelOutput *)doCopyPatchCenter:(VpsKotlinFloatArray *)patchCenter heatmap:(VpsKotlinArray<VpsKotlinFloatArray *> *)heatmap resolution:(float)resolution __attribute__((swift_name("doCopy(patchCenter:heatmap:resolution:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsKotlinArray<VpsKotlinFloatArray *> *heatmap __attribute__((swift_name("heatmap")));
@property (readonly) VpsKotlinFloatArray *patchCenter __attribute__((swift_name("patchCenter")));
@property (readonly) float resolution __attribute__((swift_name("resolution")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RawSensorData")))
@interface VpsRawSensorData : VpsBase
- (instancetype)initWithValues:(VpsKotlinFloatArray *)values sensorType:(VpsSensorDataType *)sensorType nanoTimestamp:(int64_t)nanoTimestamp sensorTimestamp:(int64_t)sensorTimestamp systemTimestamp:(int64_t)systemTimestamp __attribute__((swift_name("init(values:sensorType:nanoTimestamp:sensorTimestamp:systemTimestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsRawSensorDataCompanion *companion __attribute__((swift_name("companion")));
- (VpsRawSensorData *)doCopyValues:(VpsKotlinFloatArray *)values sensorType:(VpsSensorDataType *)sensorType nanoTimestamp:(int64_t)nanoTimestamp sensorTimestamp:(int64_t)sensorTimestamp systemTimestamp:(int64_t)systemTimestamp __attribute__((swift_name("doCopy(values:sensorType:nanoTimestamp:sensorTimestamp:systemTimestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t sensorTimestamp __attribute__((swift_name("sensorTimestamp")));
@property VpsSensorDataType *sensorType __attribute__((swift_name("sensorType")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@property (readonly) VpsKotlinFloatArray *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RawSensorData.Companion")))
@interface VpsRawSensorDataCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsRawSensorDataCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RawSensorPack")))
@interface VpsRawSensorPack : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp accelerometer:(VpsKotlinFloatArray *)accelerometer gyroscope:(VpsKotlinFloatArray *)gyroscope rotation:(VpsKotlinFloatArray *)rotation magnetometer:(VpsKotlinFloatArray * _Nullable)magnetometer __attribute__((swift_name("init(nanoTimestamp:accelerometer:gyroscope:rotation:magnetometer:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsRawSensorPackCompanion *companion __attribute__((swift_name("companion")));
- (VpsRawSensorPack *)doCopyNanoTimestamp:(int64_t)nanoTimestamp accelerometer:(VpsKotlinFloatArray *)accelerometer gyroscope:(VpsKotlinFloatArray *)gyroscope rotation:(VpsKotlinFloatArray *)rotation magnetometer:(VpsKotlinFloatArray * _Nullable)magnetometer __attribute__((swift_name("doCopy(nanoTimestamp:accelerometer:gyroscope:rotation:magnetometer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsKotlinFloatArray *accelerometer __attribute__((swift_name("accelerometer")));
@property (readonly) VpsKotlinFloatArray *gyroscope __attribute__((swift_name("gyroscope")));
@property (readonly) VpsKotlinFloatArray * _Nullable magnetometer __attribute__((swift_name("magnetometer")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) VpsKotlinFloatArray *rotation __attribute__((swift_name("rotation")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RawSensorPack.Companion")))
@interface VpsRawSensorPackCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsRawSensorPackCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SensorDataType")))
@interface VpsSensorDataType : VpsKotlinEnum<VpsSensorDataType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsSensorDataType *acceleration __attribute__((swift_name("acceleration")));
@property (class, readonly) VpsSensorDataType *accelerationUncalibrated __attribute__((swift_name("accelerationUncalibrated")));
@property (class, readonly) VpsSensorDataType *accelerometer __attribute__((swift_name("accelerometer")));
@property (class, readonly) VpsSensorDataType *accelerometerUncalibrated __attribute__((swift_name("accelerometerUncalibrated")));
@property (class, readonly) VpsSensorDataType *altitude __attribute__((swift_name("altitude")));
@property (class, readonly) VpsSensorDataType *ambientLight __attribute__((swift_name("ambientLight")));
@property (class, readonly) VpsSensorDataType *barometer __attribute__((swift_name("barometer")));
@property (class, readonly) VpsSensorDataType *geomagnetic __attribute__((swift_name("geomagnetic")));
@property (class, readonly) VpsSensorDataType *gravity __attribute__((swift_name("gravity")));
@property (class, readonly) VpsSensorDataType *gyroscopeUncalibrated __attribute__((swift_name("gyroscopeUncalibrated")));
@property (class, readonly) VpsSensorDataType *locked __attribute__((swift_name("locked")));
@property (class, readonly) VpsSensorDataType *lux __attribute__((swift_name("lux")));
@property (class, readonly) VpsSensorDataType *proximity __attribute__((swift_name("proximity")));
@property (class, readonly) VpsSensorDataType *radiusSync __attribute__((swift_name("radiusSync")));
@property (class, readonly) VpsSensorDataType *rotation __attribute__((swift_name("rotation")));
@property (class, readonly) VpsSensorDataType *rotationAlternative __attribute__((swift_name("rotationAlternative")));
@property (class, readonly) VpsSensorDataType *screenBrightness __attribute__((swift_name("screenBrightness")));
@property (class, readonly) VpsSensorDataType *sync __attribute__((swift_name("sync")));
@property (class, readonly) VpsSensorDataType *timestampDiff __attribute__((swift_name("timestampDiff")));
@property (class, readonly) VpsSensorDataType *wifiStatus __attribute__((swift_name("wifiStatus")));
@property (class, readonly) VpsSensorDataType *wifiScan __attribute__((swift_name("wifiScan")));
+ (VpsKotlinArray<VpsSensorDataType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsSensorDataType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tensor")))
@interface VpsTensor : VpsBase
- (instancetype)initWithTimestamp:(int64_t)timestamp data:(VpsKotlinArray<VpsKotlinFloatArray *> *)data __attribute__((swift_name("init(timestamp:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsTensorCompanion *companion __attribute__((swift_name("companion")));
- (VpsTensor *)doCopyTimestamp:(int64_t)timestamp data:(VpsKotlinArray<VpsKotlinFloatArray *> *)data __attribute__((swift_name("doCopy(timestamp:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsKotlinArray<VpsKotlinFloatArray *> *data __attribute__((swift_name("data")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tensor.Companion")))
@interface VpsTensorCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsTensorCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VelocityModelOutput")))
@interface VpsVelocityModelOutput : VpsBase
- (instancetype)initWithTimestamp:(int64_t)timestamp data:(NSArray<VpsFloat *> *)data __attribute__((swift_name("init(timestamp:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsVelocityModelOutputCompanion *companion __attribute__((swift_name("companion")));
- (VpsVelocityModelOutput *)doCopyTimestamp:(int64_t)timestamp data:(NSArray<VpsFloat *> *)data __attribute__((swift_name("doCopy(timestamp:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<VpsFloat *> *data __attribute__((swift_name("data")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VelocityModelOutput.Companion")))
@interface VpsVelocityModelOutputCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsVelocityModelOutputCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeatureToTensorValueParams")))
@interface VpsFeatureToTensorValueParams : VpsBase
- (instancetype)initWithPackageFrequency:(int32_t)packageFrequency __attribute__((swift_name("init(packageFrequency:)"))) __attribute__((objc_designated_initializer));
- (VpsFeatureToTensorValueParams *)doCopyPackageFrequency:(int32_t)packageFrequency __attribute__((swift_name("doCopy(packageFrequency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t packageFrequency __attribute__((swift_name("packageFrequency")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterpolationModuleParams")))
@interface VpsInterpolationModuleParams : VpsBase
- (instancetype)initWithFrequency:(float)frequency useMagnetometer:(BOOL)useMagnetometer __attribute__((swift_name("init(frequency:useMagnetometer:)"))) __attribute__((objc_designated_initializer));
- (VpsInterpolationModuleParams *)doCopyFrequency:(float)frequency useMagnetometer:(BOOL)useMagnetometer __attribute__((swift_name("doCopy(frequency:useMagnetometer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float frequency __attribute__((swift_name("frequency")));
@property (readonly) BOOL useMagnetometer __attribute__((swift_name("useMagnetometer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosInterpolationModuleParams")))
@interface VpsIosInterpolationModuleParams : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iosInterpolationModuleParams __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsIosInterpolationModuleParams *shared __attribute__((swift_name("shared")));
@property (readonly, getter=default) VpsInterpolationModuleParams *default_ __attribute__((swift_name("default_")));
@end

__attribute__((swift_name("InputSignal")))
@interface VpsInputSignal : VpsBase
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@property (readonly) VpsInputSignalType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.AngleCorrection")))
@interface VpsInputSignalAngleCorrection : VpsInputSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp angle:(float)angle __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:angle:)"))) __attribute__((objc_designated_initializer));
@property (readonly) float angle __attribute__((swift_name("angle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.Exit")))
@interface VpsInputSignalExit : VpsInputSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.FloorChange")))
@interface VpsInputSignalFloorChange : VpsInputSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp floorLevelId:(int64_t)floorLevelId startPosition:(VpsCoordinateF *)startPosition __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:floorLevelId:startPosition:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int64_t floorLevelId __attribute__((swift_name("floorLevelId")));
@property (readonly) VpsCoordinateF *startPosition __attribute__((swift_name("startPosition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.Flush")))
@interface VpsInputSignalFlush : VpsInputSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.LngLat")))
@interface VpsInputSignalLngLat : VpsInputSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation *)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:location:)"))) __attribute__((objc_designated_initializer));
@property (readonly) VpsLocation *location __attribute__((swift_name("location")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.SensorData")))
@interface VpsInputSignalSensorData : VpsInputSignal
- (instancetype)initWithRawSensorData:(VpsRawSensorData *)rawSensorData __attribute__((swift_name("init(rawSensorData:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsRawSensorData *rawSensorData __attribute__((swift_name("rawSensorData")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.StairInfo")))
@interface VpsInputSignalStairInfo : VpsInputSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp isInStair:(BOOL)isInStair __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:isInStair:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL isInStair __attribute__((swift_name("isInStair")));
@end

__attribute__((swift_name("InputSignal.Start")))
@interface VpsInputSignalStart : VpsInputSignal
@property (readonly) VpsInputSignalStartStartType *startType __attribute__((swift_name("startType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.StartLngLat")))
@interface VpsInputSignalStartLngLat : VpsInputSignalStart
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation *)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:location:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsLocation *location __attribute__((swift_name("location")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.StartPosition")))
@interface VpsInputSignalStartPosition : VpsInputSignalStart
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp positions:(NSArray<VpsCoordinateF *> *)positions syncPosition:(BOOL)syncPosition syncAngle:(BOOL)syncAngle angle:(float)angle uncertainAngle:(BOOL)uncertainAngle __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:positions:syncPosition:syncAngle:angle:uncertainAngle:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float angle __attribute__((swift_name("angle")));
@property (readonly) NSArray<VpsCoordinateF *> *positions __attribute__((swift_name("positions")));
@property (readonly) BOOL syncAngle __attribute__((swift_name("syncAngle")));
@property (readonly) BOOL syncPosition __attribute__((swift_name("syncPosition")));
@property (readonly) BOOL uncertainAngle __attribute__((swift_name("uncertainAngle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.StartStartType")))
@interface VpsInputSignalStartStartType : VpsKotlinEnum<VpsInputSignalStartStartType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsInputSignalStartStartType *position __attribute__((swift_name("position")));
@property (class, readonly) VpsInputSignalStartStartType *lngLat __attribute__((swift_name("lngLat")));
+ (VpsKotlinArray<VpsInputSignalStartStartType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsInputSignalStartStartType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("InputSignal.Sync")))
@interface VpsInputSignalSync : VpsInputSignal
@property (readonly) VpsInputSignalSyncSyncType *syncType __attribute__((swift_name("syncType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.SyncAccessPointFloorSwapSync")))
@interface VpsInputSignalSyncAccessPointFloorSwapSync : VpsInputSignalSync
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp wifiStatusUpdate:(VpsBaseEventWifiStatusUpdate *)wifiStatusUpdate possibleEntries:(NSArray<VpsCoordinateF *> *)possibleEntries __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:wifiStatusUpdate:possibleEntries:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<VpsCoordinateF *> *possibleEntries __attribute__((swift_name("possibleEntries")));
@property (readonly) VpsBaseEventWifiStatusUpdate *wifiStatusUpdate __attribute__((swift_name("wifiStatusUpdate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.SyncLngLat")))
@interface VpsInputSignalSyncLngLat : VpsInputSignalSync
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation *)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:location:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsLocation *location __attribute__((swift_name("location")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.SyncPosition")))
@interface VpsInputSignalSyncPosition : VpsInputSignalSync
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp positions:(NSArray<VpsCoordinateF *> *)positions syncPosition:(BOOL)syncPosition syncAngle:(BOOL)syncAngle angle:(float)angle uncertainAngle:(BOOL)uncertainAngle __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:positions:syncPosition:syncAngle:angle:uncertainAngle:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float angle __attribute__((swift_name("angle")));
@property (readonly) NSArray<VpsCoordinateF *> *positions __attribute__((swift_name("positions")));
@property (readonly) BOOL syncAngle __attribute__((swift_name("syncAngle")));
@property (readonly) BOOL syncPosition __attribute__((swift_name("syncPosition")));
@property (readonly) BOOL uncertainAngle __attribute__((swift_name("uncertainAngle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.SyncSyncType")))
@interface VpsInputSignalSyncSyncType : VpsKotlinEnum<VpsInputSignalSyncSyncType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsInputSignalSyncSyncType *position __attribute__((swift_name("position")));
@property (class, readonly) VpsInputSignalSyncSyncType *lngLat __attribute__((swift_name("lngLat")));
@property (class, readonly) VpsInputSignalSyncSyncType *floorSwap __attribute__((swift_name("floorSwap")));
+ (VpsKotlinArray<VpsInputSignalSyncSyncType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsInputSignalSyncSyncType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.Type_")))
@interface VpsInputSignalType : VpsKotlinEnum<VpsInputSignalType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsInputSignalType *start __attribute__((swift_name("start")));
@property (class, readonly) VpsInputSignalType *sensorData __attribute__((swift_name("sensorData")));
@property (class, readonly) VpsInputSignalType *sync __attribute__((swift_name("sync")));
@property (class, readonly) VpsInputSignalType *wifiStatus __attribute__((swift_name("wifiStatus")));
@property (class, readonly) VpsInputSignalType *wifiScan __attribute__((swift_name("wifiScan")));
@property (class, readonly) VpsInputSignalType *angleCorrection __attribute__((swift_name("angleCorrection")));
@property (class, readonly) VpsInputSignalType *floorChange __attribute__((swift_name("floorChange")));
@property (class, readonly) VpsInputSignalType *lngLat __attribute__((swift_name("lngLat")));
@property (class, readonly) VpsInputSignalType *exit __attribute__((swift_name("exit")));
@property (class, readonly) VpsInputSignalType *stairs __attribute__((swift_name("stairs")));
@property (class, readonly) VpsInputSignalType *flush __attribute__((swift_name("flush")));
+ (VpsKotlinArray<VpsInputSignalType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsInputSignalType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.WifiScan")))
@interface VpsInputSignalWifiScan : VpsInputSignal
- (instancetype)initWithWifiScanUpdate:(VpsWifiScanUpdate *)wifiScanUpdate __attribute__((swift_name("init(wifiScanUpdate:)"))) __attribute__((objc_designated_initializer));
@property (readonly) VpsWifiScanUpdate *wifiScanUpdate __attribute__((swift_name("wifiScanUpdate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.WifiStatus")))
@interface VpsInputSignalWifiStatus : VpsInputSignal
- (instancetype)initWithWifiStatusUpdate:(VpsWifiStatusUpdate *)wifiStatusUpdate __attribute__((swift_name("init(wifiStatusUpdate:)"))) __attribute__((objc_designated_initializer));
@property (readonly) VpsWifiStatusUpdate *wifiStatusUpdate __attribute__((swift_name("wifiStatusUpdate")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("OutputSignal")))
@interface VpsOutputSignal : VpsBase
@property (class, readonly, getter=companion) VpsOutputSignalCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) VpsOutputSignalType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.Companion")))
@interface VpsOutputSignalCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.FloorChangeSignal")))
@interface VpsOutputSignalFloorChangeSignal : VpsOutputSignal
- (instancetype)initWithFloorLevelId:(int64_t)floorLevelId __attribute__((swift_name("init(floorLevelId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalFloorChangeSignalCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorLevelId __attribute__((swift_name("floorLevelId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.FloorChangeSignalCompanion")))
@interface VpsOutputSignalFloorChangeSignalCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalFloorChangeSignalCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.LngLatLocation")))
@interface VpsOutputSignalLngLatLocation : VpsOutputSignal
- (instancetype)initWithMlLocation:(VpsLocation *)mlLocation gpsLocation:(VpsLocation *)gpsLocation reliableSource:(VpsOutputSignalLngLatLocationSource *)reliableSource __attribute__((swift_name("init(mlLocation:gpsLocation:reliableSource:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalLngLatLocationCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsLocation *gpsLocation __attribute__((swift_name("gpsLocation")));
@property (readonly) VpsLocation *mlLocation __attribute__((swift_name("mlLocation")));
@property (readonly) VpsOutputSignalLngLatLocationSource *reliableSource __attribute__((swift_name("reliableSource")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.LngLatLocationCompanion")))
@interface VpsOutputSignalLngLatLocationCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalLngLatLocationCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.LngLatLocationSource")))
@interface VpsOutputSignalLngLatLocationSource : VpsKotlinEnum<VpsOutputSignalLngLatLocationSource *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VpsOutputSignalLngLatLocationSourceCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) VpsOutputSignalLngLatLocationSource *undefined __attribute__((swift_name("undefined")));
@property (class, readonly) VpsOutputSignalLngLatLocationSource *gps __attribute__((swift_name("gps")));
@property (class, readonly) VpsOutputSignalLngLatLocationSource *vpsMl __attribute__((swift_name("vpsMl")));
+ (VpsKotlinArray<VpsOutputSignalLngLatLocationSource *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsOutputSignalLngLatLocationSource *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.LngLatLocationSourceCompanion")))
@interface VpsOutputSignalLngLatLocationSourceCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalLngLatLocationSourceCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.MLOutputPosition")))
@interface VpsOutputSignalMLOutputPosition : VpsOutputSignal
- (instancetype)initWithPosition:(VpsCoordinateF *)position std:(float)std __attribute__((swift_name("init(position:std:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalMLOutputPositionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsCoordinateF *position __attribute__((swift_name("position")));
@property (readonly) float std __attribute__((swift_name("std")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.MLOutputPositionCompanion")))
@interface VpsOutputSignalMLOutputPositionCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalMLOutputPositionCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.ParticleSignal")))
@interface VpsOutputSignalParticleSignal : VpsOutputSignal
- (instancetype)initWithParticles:(NSMutableArray<VpsKotlinFloatArray *> *)particles timestamp:(int64_t)timestamp __attribute__((swift_name("init(particles:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalParticleSignalCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSMutableArray<VpsKotlinFloatArray *> *particles __attribute__((swift_name("particles")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.ParticleSignalCompanion")))
@interface VpsOutputSignalParticleSignalCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalParticleSignalCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.Position")))
@interface VpsOutputSignalPosition : VpsOutputSignal
- (instancetype)initWithPosition:(VpsCoordinateF *)position std:(float)std status:(VpsOutputSignalPositionStatus *)status currentFloorLevelId:(int64_t)currentFloorLevelId currentWiFiObservation:(VpsBaseEventWiFiObservation * _Nullable)currentWiFiObservation currentWiFiScan:(VpsBaseEventWiFiScan * _Nullable)currentWiFiScan __attribute__((swift_name("init(position:std:status:currentFloorLevelId:currentWiFiObservation:currentWiFiScan:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalPositionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t currentFloorLevelId __attribute__((swift_name("currentFloorLevelId")));
@property (readonly) VpsBaseEventWiFiObservation * _Nullable currentWiFiObservation __attribute__((swift_name("currentWiFiObservation")));
@property (readonly) VpsBaseEventWiFiScan * _Nullable currentWiFiScan __attribute__((swift_name("currentWiFiScan")));
@property (readonly) VpsCoordinateF *position __attribute__((swift_name("position")));
@property (readonly) VpsOutputSignalPositionStatus *status __attribute__((swift_name("status")));
@property (readonly) float std __attribute__((swift_name("std")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.PositionCompanion")))
@interface VpsOutputSignalPositionCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalPositionCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.PositionStatus")))
@interface VpsOutputSignalPositionStatus : VpsKotlinEnum<VpsOutputSignalPositionStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VpsOutputSignalPositionStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) VpsOutputSignalPositionStatus *confident __attribute__((swift_name("confident")));
@property (class, readonly) VpsOutputSignalPositionStatus *uncertain __attribute__((swift_name("uncertain")));
+ (VpsKotlinArray<VpsOutputSignalPositionStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsOutputSignalPositionStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.PositionStatusCompanion")))
@interface VpsOutputSignalPositionStatusCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalPositionStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.RescueModeSignal")))
@interface VpsOutputSignalRescueModeSignal : VpsOutputSignal
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) VpsOutputSignalRescueModeSignalCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.RescueModeSignalCompanion")))
@interface VpsOutputSignalRescueModeSignalCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalRescueModeSignalCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.Rotation")))
@interface VpsOutputSignalRotation : VpsOutputSignal
- (instancetype)initWithHeading:(float)heading __attribute__((swift_name("init(heading:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalRotationCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float heading __attribute__((swift_name("heading")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.RotationCompanion")))
@interface VpsOutputSignalRotationCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalRotationCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.RotationDeviationAngle")))
@interface VpsOutputSignalRotationDeviationAngle : VpsOutputSignal
- (instancetype)initWithAngle:(float)angle __attribute__((swift_name("init(angle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalRotationDeviationAngleCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float angle __attribute__((swift_name("angle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.RotationDeviationAngleCompanion")))
@interface VpsOutputSignalRotationDeviationAngleCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalRotationDeviationAngleCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.SyncSignal")))
@interface VpsOutputSignalSyncSignal : VpsOutputSignal
- (instancetype)initWithFrom_position:(VpsCoordinateF *)from_position to_position:(VpsCoordinateF *)to_position correct_aisle:(VpsBoolean * _Nullable)correct_aisle __attribute__((swift_name("init(from_position:to_position:correct_aisle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalSyncSignalCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsBoolean * _Nullable correct_aisle __attribute__((swift_name("correct_aisle")));
@property (readonly) VpsCoordinateF *from_position __attribute__((swift_name("from_position")));
@property (readonly) VpsCoordinateF *to_position __attribute__((swift_name("to_position")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.SyncSignalCompanion")))
@interface VpsOutputSignalSyncSignalCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalSyncSignalCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.Type_")))
@interface VpsOutputSignalType : VpsKotlinEnum<VpsOutputSignalType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VpsOutputSignalTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) VpsOutputSignalType *position __attribute__((swift_name("position")));
@property (class, readonly) VpsOutputSignalType *rotation __attribute__((swift_name("rotation")));
@property (class, readonly) VpsOutputSignalType *mlOutputPosition __attribute__((swift_name("mlOutputPosition")));
@property (class, readonly) VpsOutputSignalType *uxPosition __attribute__((swift_name("uxPosition")));
@property (class, readonly) VpsOutputSignalType *lngLatLocation __attribute__((swift_name("lngLatLocation")));
@property (class, readonly) VpsOutputSignalType *rotationDeviationAngle __attribute__((swift_name("rotationDeviationAngle")));
@property (class, readonly) VpsOutputSignalType *sync __attribute__((swift_name("sync")));
@property (class, readonly) VpsOutputSignalType *floorChange __attribute__((swift_name("floorChange")));
@property (class, readonly) VpsOutputSignalType *wifiFloorChange __attribute__((swift_name("wifiFloorChange")));
@property (class, readonly) VpsOutputSignalType *rescueMode __attribute__((swift_name("rescueMode")));
@property (class, readonly) VpsOutputSignalType *particles __attribute__((swift_name("particles")));
+ (VpsKotlinArray<VpsOutputSignalType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsOutputSignalType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.Type_Companion")))
@interface VpsOutputSignalTypeCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.UXPosition")))
@interface VpsOutputSignalUXPosition : VpsOutputSignal
- (instancetype)initWithPosition:(VpsCoordinateF *)position std:(float)std status:(VpsOutputSignalUXPositionStatus *)status __attribute__((swift_name("init(position:std:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalUXPositionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsCoordinateF *position __attribute__((swift_name("position")));
@property (readonly) VpsOutputSignalUXPositionStatus *status __attribute__((swift_name("status")));
@property (readonly) float std __attribute__((swift_name("std")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.UXPositionCompanion")))
@interface VpsOutputSignalUXPositionCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalUXPositionCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.UXPositionStatus")))
@interface VpsOutputSignalUXPositionStatus : VpsKotlinEnum<VpsOutputSignalUXPositionStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsOutputSignalUXPositionStatus *confident __attribute__((swift_name("confident")));
@property (class, readonly) VpsOutputSignalUXPositionStatus *uncertain __attribute__((swift_name("uncertain")));
+ (VpsKotlinArray<VpsOutputSignalUXPositionStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsOutputSignalUXPositionStatus *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.WiFiFloorChangeSignal")))
@interface VpsOutputSignalWiFiFloorChangeSignal : VpsOutputSignal
- (instancetype)initWithFloorLevelId:(VpsLong * _Nullable)floorLevelId __attribute__((swift_name("init(floorLevelId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalWiFiFloorChangeSignalCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsLong * _Nullable floorLevelId __attribute__((swift_name("floorLevelId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.WiFiFloorChangeSignalCompanion")))
@interface VpsOutputSignalWiFiFloorChangeSignalCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalWiFiFloorChangeSignalCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SwapLocation")))
@interface VpsSwapLocation : VpsBase
- (instancetype)initWithId:(int64_t)id rtlsOptionsId:(int64_t)rtlsOptionsId name:(NSString *)name point:(VpsSwapLocationSwapLocationPoint * _Nullable)point paths:(NSArray<VpsSwapLocationSwapLocationPath *> *)paths coordinates:(NSArray<NSArray<VpsDouble *> *> *)coordinates __attribute__((swift_name("init(id:rtlsOptionsId:name:point:paths:coordinates:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsSwapLocationCompanion *companion __attribute__((swift_name("companion")));
- (VpsSwapLocation *)doCopyId:(int64_t)id rtlsOptionsId:(int64_t)rtlsOptionsId name:(NSString *)name point:(VpsSwapLocationSwapLocationPoint * _Nullable)point paths:(NSArray<VpsSwapLocationSwapLocationPath *> *)paths coordinates:(NSArray<NSArray<VpsDouble *> *> *)coordinates __attribute__((swift_name("doCopy(id:rtlsOptionsId:name:point:paths:coordinates:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<NSArray<VpsDouble *> *> *coordinates __attribute__((swift_name("coordinates")));
@property int64_t id __attribute__((swift_name("id")));
@property NSString *name __attribute__((swift_name("name")));
@property NSArray<VpsSwapLocationSwapLocationPath *> *paths __attribute__((swift_name("paths")));
@property VpsSwapLocationSwapLocationPoint * _Nullable point __attribute__((swift_name("point")));
@property int64_t rtlsOptionsId __attribute__((swift_name("rtlsOptionsId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SwapLocation.Companion")))
@interface VpsSwapLocationCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsSwapLocationCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SwapLocation.SwapLocationPath")))
@interface VpsSwapLocationSwapLocationPath : VpsBase <VpsKotlinComparable>
- (instancetype)initWithSwapLocationToId:(int64_t)swapLocationToId heightDiffInMeters:(float)heightDiffInMeters direction:(int32_t)direction type:(int32_t)type __attribute__((swift_name("init(swapLocationToId:heightDiffInMeters:direction:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsSwapLocationSwapLocationPathCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(VpsSwapLocationSwapLocationPath *)other __attribute__((swift_name("compareTo(other:)")));
- (VpsSwapLocationSwapLocationPath *)doCopySwapLocationToId:(int64_t)swapLocationToId heightDiffInMeters:(float)heightDiffInMeters direction:(int32_t)direction type:(int32_t)type __attribute__((swift_name("doCopy(swapLocationToId:heightDiffInMeters:direction:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsSwapLocationSwapLocationPathDirection * _Nullable directionEnum __attribute__((swift_name("directionEnum")));
@property float heightDiffInMeters __attribute__((swift_name("heightDiffInMeters")));
@property int64_t swapLocationToId __attribute__((swift_name("swapLocationToId")));
@property int32_t type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SwapLocation.SwapLocationPathCompanion")))
@interface VpsSwapLocationSwapLocationPathCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsSwapLocationSwapLocationPathCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SwapLocation.SwapLocationPathDirection")))
@interface VpsSwapLocationSwapLocationPathDirection : VpsKotlinEnum<VpsSwapLocationSwapLocationPathDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsSwapLocationSwapLocationPathDirection *none __attribute__((swift_name("none")));
@property (class, readonly) VpsSwapLocationSwapLocationPathDirection *up __attribute__((swift_name("up")));
@property (class, readonly) VpsSwapLocationSwapLocationPathDirection *down __attribute__((swift_name("down")));
@property (class, readonly) VpsSwapLocationSwapLocationPathDirection *upAndDown __attribute__((swift_name("upAndDown")));
+ (VpsKotlinArray<VpsSwapLocationSwapLocationPathDirection *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsSwapLocationSwapLocationPathDirection *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t number __attribute__((swift_name("number")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SwapLocation.SwapLocationPoint")))
@interface VpsSwapLocationSwapLocationPoint : VpsBase
- (instancetype)initWithName:(NSString *)name angle:(double)angle coordinate:(NSArray<VpsDouble *> *)coordinate __attribute__((swift_name("init(name:angle:coordinate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsSwapLocationSwapLocationPointCompanion *companion __attribute__((swift_name("companion")));
- (VpsSwapLocationSwapLocationPoint *)doCopyName:(NSString *)name angle:(double)angle coordinate:(NSArray<VpsDouble *> *)coordinate __attribute__((swift_name("doCopy(name:angle:coordinate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property double angle __attribute__((swift_name("angle")));
@property NSArray<VpsDouble *> *coordinate __attribute__((swift_name("coordinate")));
@property NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SwapLocation.SwapLocationPointCompanion")))
@interface VpsSwapLocationSwapLocationPointCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsSwapLocationSwapLocationPointCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("NLModel")))
@protocol VpsNLModel
@required
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (VpsNLModelOutput * _Nullable)onInputData__:(VpsTensor *)data __attribute__((swift_name("onInput(data__:)")));
- (void)setFloorLevelHandlerFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("setFloorLevelHandler(floorLevelHandler:)")));
@property (readonly) VpsKotlinArray<VpsKotlinFloatArray *> * _Nullable map2D __attribute__((swift_name("map2D")));
@property (readonly) VpsNLModelParams *params __attribute__((swift_name("params")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NLModelParams")))
@interface VpsNLModelParams : VpsBase
- (instancetype)initWithResolution:(float)resolution __attribute__((swift_name("init(resolution:)"))) __attribute__((objc_designated_initializer));
- (VpsNLModelParams *)doCopyResolution:(float)resolution __attribute__((swift_name("doCopy(resolution:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float resolution __attribute__((swift_name("resolution")));
@end

__attribute__((swift_name("VelocityModel")))
@protocol VpsVelocityModel
@required
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onFlush __attribute__((swift_name("onFlush()")));
- (void)onInputData___:(VpsTensor *)data __attribute__((swift_name("onInput(data___:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)setHandlerHandler:(id<VpsVelocityModelHandler>)handler __attribute__((swift_name("setHandler(handler:)")));
@property (readonly) VpsVelocityModelParams *params __attribute__((swift_name("params")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VelocityModelParams")))
@interface VpsVelocityModelParams : VpsBase
- (instancetype)initWithBatchComputeSize:(int32_t)batchComputeSize windowSize:(int32_t)windowSize smoothing:(BOOL)smoothing featureSequence:(NSArray<VpsVelocityModelParamsFeaturesEntries *> *)featureSequence stepNumberInput:(BOOL)stepNumberInput __attribute__((swift_name("init(batchComputeSize:windowSize:smoothing:featureSequence:stepNumberInput:)"))) __attribute__((objc_designated_initializer));
- (VpsVelocityModelParams *)doCopyBatchComputeSize:(int32_t)batchComputeSize windowSize:(int32_t)windowSize smoothing:(BOOL)smoothing featureSequence:(NSArray<VpsVelocityModelParamsFeaturesEntries *> *)featureSequence stepNumberInput:(BOOL)stepNumberInput __attribute__((swift_name("doCopy(batchComputeSize:windowSize:smoothing:featureSequence:stepNumberInput:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t batchComputeSize __attribute__((swift_name("batchComputeSize")));
@property (readonly) NSArray<VpsVelocityModelParamsFeaturesEntries *> *featureSequence __attribute__((swift_name("featureSequence")));
@property (readonly) BOOL smoothing __attribute__((swift_name("smoothing")));
@property (readonly) BOOL stepNumberInput __attribute__((swift_name("stepNumberInput")));
@property (readonly) int32_t windowSize __attribute__((swift_name("windowSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VelocityModelParams.FeaturesEntries")))
@interface VpsVelocityModelParamsFeaturesEntries : VpsKotlinEnum<VpsVelocityModelParamsFeaturesEntries *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *gx __attribute__((swift_name("gx")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *gy __attribute__((swift_name("gy")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *gz __attribute__((swift_name("gz")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *ax __attribute__((swift_name("ax")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *ay __attribute__((swift_name("ay")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *az __attribute__((swift_name("az")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *gxd __attribute__((swift_name("gxd")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *gyd __attribute__((swift_name("gyd")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *gzd __attribute__((swift_name("gzd")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *axd __attribute__((swift_name("axd")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *ayd __attribute__((swift_name("ayd")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *azd __attribute__((swift_name("azd")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *r00 __attribute__((swift_name("r00")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *r01 __attribute__((swift_name("r01")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *r02 __attribute__((swift_name("r02")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *r10 __attribute__((swift_name("r10")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *r11 __attribute__((swift_name("r11")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *r12 __attribute__((swift_name("r12")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *r20 __attribute__((swift_name("r20")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *r21 __attribute__((swift_name("r21")));
@property (class, readonly) VpsVelocityModelParamsFeaturesEntries *r22 __attribute__((swift_name("r22")));
+ (VpsKotlinArray<VpsVelocityModelParamsFeaturesEntries *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsVelocityModelParamsFeaturesEntries *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAndOut")))
@interface VpsInAndOut : VpsBase
- (instancetype)initWithTriggers:(NSArray<VpsInAndOutTrigger *> *)triggers listener:(id<VpsInAndOutListener> _Nullable)listener positionCheckInterval:(VpsInt * _Nullable)positionCheckInterval __attribute__((swift_name("init(triggers:listener:positionCheckInterval:)"))) __attribute__((objc_designated_initializer));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)onNewPositionCurrentPosition:(VpsCoordinateF *)currentPosition __attribute__((swift_name("onNewPosition(currentPosition:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (readonly) id<VpsInAndOutListener> _Nullable listener __attribute__((swift_name("listener")));
@property (readonly) VpsInt * _Nullable positionCheckInterval __attribute__((swift_name("positionCheckInterval")));
@property (readonly) NSArray<VpsInAndOutTrigger *> *triggers __attribute__((swift_name("triggers")));
@end

__attribute__((swift_name("InAndOut.Trigger")))
@interface VpsInAndOutTrigger : VpsBase
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAndOut.TriggerRadius")))
@interface VpsInAndOutTriggerRadius : VpsInAndOutTrigger
- (instancetype)initWithId:(NSString *)id centerPoint:(VpsCoordinateF *)centerPoint radius:(double)radius __attribute__((swift_name("init(id:centerPoint:radius:)"))) __attribute__((objc_designated_initializer));
@property (readonly) VpsCoordinateF *centerPoint __attribute__((swift_name("centerPoint")));
@property (readonly) double radius __attribute__((swift_name("radius")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAndOut.TriggerZone")))
@interface VpsInAndOutTriggerZone : VpsInAndOutTrigger
- (instancetype)initWithId:(NSString *)id zoneId:(NSString *)zoneId polygon:(NSArray<NSArray<VpsDouble *> *> *)polygon __attribute__((swift_name("init(id:zoneId:polygon:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<NSArray<VpsDouble *> *> *polygon __attribute__((swift_name("polygon")));
@property (readonly) NSString *zoneId __attribute__((swift_name("zoneId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Log")))
@interface VpsLog : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)log __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsLog *shared __attribute__((swift_name("shared")));
- (void)edTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("ed(tag:message:)")));
- (void)eeTag:(NSString *)tag message:(NSString *)message cause:(VpsKotlinException * _Nullable)cause __attribute__((swift_name("ee(tag:message:cause:)")));
- (void)eelTag:(NSString *)tag message:(NSString *)message cause:(VpsKotlinException * _Nullable)cause id:(NSString * _Nullable)id __attribute__((swift_name("eel(tag:message:cause:id:)")));
- (void)elTag:(NSString *)tag message:(NSString *)message id:(NSString * _Nullable)id __attribute__((swift_name("el(tag:message:id:)")));
- (void)lTag:(NSString *)tag message:(NSString *)message id:(NSString * _Nullable)id __attribute__((swift_name("l(tag:message:id:)")));
@property id<VpsLogOutputHandler> _Nullable outputHandler __attribute__((swift_name("outputHandler")));
@end

__attribute__((swift_name("LogOutputHandler")))
@protocol VpsLogOutputHandler
@required
- (void)onLogText:(NSString *)text id:(NSString * _Nullable)id __attribute__((swift_name("onLog(text:id:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MaxQueue")))
@interface VpsMaxQueue<T> : VpsBase
- (instancetype)initWithMaxSize:(VpsInt * _Nullable)maxSize __attribute__((swift_name("init(maxSize:)"))) __attribute__((objc_designated_initializer));
- (void)clear __attribute__((swift_name("clear()")));
- (T _Nullable)dequeue __attribute__((swift_name("dequeue()")));
- (void)enqueueValue:(T _Nullable)value __attribute__((swift_name("enqueue(value:)")));
- (T _Nullable)peekEndN:(int32_t)n __attribute__((swift_name("peekEnd(n:)")));
- (NSMutableArray<id> *)toArrayListFromTail:(BOOL)fromTail __attribute__((swift_name("toArrayList(fromTail:)")));
- (NSArray<id> *)toListFromTail:(BOOL)fromTail __attribute__((swift_name("toList(fromTail:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) VpsInt * _Nullable maxSize __attribute__((swift_name("maxSize")));
@property (readonly) T _Nullable peek __attribute__((swift_name("peek")));
@property (readonly) T _Nullable peekLast __attribute__((swift_name("peekLast")));
@property int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MaxQueueCircularArray")))
@interface VpsMaxQueueCircularArray<T> : VpsBase
- (instancetype)initWithCapacity:(int32_t)capacity __attribute__((swift_name("init(capacity:)"))) __attribute__((objc_designated_initializer));
- (void)enqueueElement:(T _Nullable)element __attribute__((swift_name("enqueue(element:)")));
- (int32_t)getSize __attribute__((swift_name("getSize()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isFull __attribute__((swift_name("isFull()")));
- (T _Nullable)peek __attribute__((swift_name("peek()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsKotlinArray<id> *array __attribute__((swift_name("array")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeoutQueue")))
@interface VpsTimeoutQueue<T> : VpsBase
- (instancetype)initWithMaxSize:(VpsInt * _Nullable)maxSize timeout:(int64_t)timeout __attribute__((swift_name("init(maxSize:timeout:)"))) __attribute__((objc_designated_initializer));
- (void)clear __attribute__((swift_name("clear()")));
- (T _Nullable)dequeue __attribute__((swift_name("dequeue()")));
- (void)enqueueValue:(T _Nullable)value timestamp:(int64_t)timestamp __attribute__((swift_name("enqueue(value:timestamp:)")));
- (NSArray<id> *)toListFromTail:(BOOL)fromTail __attribute__((swift_name("toList(fromTail:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) VpsInt * _Nullable maxSize __attribute__((swift_name("maxSize")));
@property (readonly) T _Nullable peek __attribute__((swift_name("peek")));
@property (readonly) T _Nullable peekLast __attribute__((swift_name("peekLast")));
@property int32_t size __attribute__((swift_name("size")));
@property (readonly) int64_t timeout __attribute__((swift_name("timeout")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessPoint")))
@interface VpsAccessPoint : VpsBase
- (instancetype)initWithIdentifier:(NSString *)identifier floorLevelId:(int64_t)floorLevelId bssids:(NSArray<NSString *> *)bssids coordinate:(VpsAccessPointCoordinate *)coordinate __attribute__((swift_name("init(identifier:floorLevelId:bssids:coordinate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsAccessPointCompanion *companion __attribute__((swift_name("companion")));
- (VpsAccessPoint *)doCopyIdentifier:(NSString *)identifier floorLevelId:(int64_t)floorLevelId bssids:(NSArray<NSString *> *)bssids coordinate:(VpsAccessPointCoordinate *)coordinate __attribute__((swift_name("doCopy(identifier:floorLevelId:bssids:coordinate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *bssids __attribute__((swift_name("bssids")));
@property (readonly) VpsAccessPointCoordinate *coordinate __attribute__((swift_name("coordinate")));
@property (readonly) int64_t floorLevelId __attribute__((swift_name("floorLevelId")));
@property (readonly) NSString *identifier __attribute__((swift_name("identifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessPoint.Companion")))
@interface VpsAccessPointCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsAccessPointCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessPoint.Coordinate")))
@interface VpsAccessPointCoordinate : VpsBase
- (instancetype)initWithX:(float)x y:(float)y z:(float)z __attribute__((swift_name("init(x:y:z:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsAccessPointCoordinateCompanion *companion __attribute__((swift_name("companion")));
- (VpsAccessPointCoordinate *)doCopyX:(float)x y:(float)y z:(float)z __attribute__((swift_name("doCopy(x:y:z:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@property (readonly) float z __attribute__((swift_name("z")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessPoint.CoordinateCompanion")))
@interface VpsAccessPointCoordinateCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsAccessPointCoordinateCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiScanUpdate")))
@interface VpsWifiScanUpdate : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp data:(NSArray<VpsWifiScanUpdateScanResult *> *)data __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsWifiScanUpdateCompanion *companion __attribute__((swift_name("companion")));
- (VpsWifiScanUpdate *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp data:(NSArray<VpsWifiScanUpdateScanResult *> *)data __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<VpsWifiScanUpdateScanResult *> *data __attribute__((swift_name("data")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiScanUpdate.Companion")))
@interface VpsWifiScanUpdateCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsWifiScanUpdateCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiScanUpdate.ScanResult")))
@interface VpsWifiScanUpdateScanResult : VpsBase
- (instancetype)initWithSsid:(NSString *)ssid bssid:(NSString *)bssid rssi:(int32_t)rssi frequency:(int32_t)frequency centerFreq0:(int32_t)centerFreq0 _80211mcResponder:(BOOL)_80211mcResponder __attribute__((swift_name("init(ssid:bssid:rssi:frequency:centerFreq0:_80211mcResponder:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsWifiScanUpdateScanResultCompanion *companion __attribute__((swift_name("companion")));
- (VpsWifiScanUpdateScanResult *)doCopySsid:(NSString *)ssid bssid:(NSString *)bssid rssi:(int32_t)rssi frequency:(int32_t)frequency centerFreq0:(int32_t)centerFreq0 _80211mcResponder:(BOOL)_80211mcResponder __attribute__((swift_name("doCopy(ssid:bssid:rssi:frequency:centerFreq0:_80211mcResponder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL _80211mcResponder __attribute__((swift_name("_80211mcResponder")));
@property (readonly) NSString *bssid __attribute__((swift_name("bssid")));
@property (readonly) int32_t centerFreq0 __attribute__((swift_name("centerFreq0")));
@property (readonly) int32_t frequency __attribute__((swift_name("frequency")));
@property (readonly) int32_t rssi __attribute__((swift_name("rssi")));
@property (readonly) NSString *ssid __attribute__((swift_name("ssid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiScanUpdate.ScanResultCompanion")))
@interface VpsWifiScanUpdateScanResultCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsWifiScanUpdateScanResultCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiStatusUpdate")))
@interface VpsWifiStatusUpdate : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp bssid:(NSString *)bssid identifier:(NSString * _Nullable)identifier rtlsOptionsId:(VpsLong * _Nullable)rtlsOptionsId rssi:(VpsInt * _Nullable)rssi frequency:(VpsInt * _Nullable)frequency __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:bssid:identifier:rtlsOptionsId:rssi:frequency:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsWifiStatusUpdateCompanion *companion __attribute__((swift_name("companion")));
- (VpsWifiStatusUpdate *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp bssid:(NSString *)bssid identifier:(NSString * _Nullable)identifier rtlsOptionsId:(VpsLong * _Nullable)rtlsOptionsId rssi:(VpsInt * _Nullable)rssi frequency:(VpsInt * _Nullable)frequency __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:bssid:identifier:rtlsOptionsId:rssi:frequency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *bssid __attribute__((swift_name("bssid")));
@property VpsInt * _Nullable frequency __attribute__((swift_name("frequency")));
@property (readonly) NSString * _Nullable identifier __attribute__((swift_name("identifier")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property VpsInt * _Nullable rssi __attribute__((swift_name("rssi")));
@property (readonly) VpsLong * _Nullable rtlsOptionsId __attribute__((swift_name("rtlsOptionsId")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiStatusUpdate.Companion")))
@interface VpsWifiStatusUpdateCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsWifiStatusUpdateCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSParams")))
@interface VpsVPSParams : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vPSParams __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsVPSParams *shared __attribute__((swift_name("shared")));
@property BOOL debugMode __attribute__((swift_name("debugMode")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property BOOL extendedDebugMode __attribute__((swift_name("extendedDebugMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSParams.Package")))
@interface VpsVPSParamsPackage : VpsKotlinEnum<VpsVPSParamsPackage *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsVPSParamsPackage *retail __attribute__((swift_name("retail")));
@property (class, readonly) VpsVPSParamsPackage *ps20 __attribute__((swift_name("ps20")));
@property (class, readonly) VpsVPSParamsPackage *warehouse __attribute__((swift_name("warehouse")));
@property (class, readonly) VpsVPSParamsPackage *jula __attribute__((swift_name("jula")));
@property (class, readonly) VpsVPSParamsPackage *ikea __attribute__((swift_name("ikea")));
+ (VpsKotlinArray<VpsVPSParamsPackage *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsVPSParamsPackage *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSParams.System")))
@interface VpsVPSParamsSystem : VpsKotlinEnum<VpsVPSParamsSystem *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsVPSParamsSystem *android __attribute__((swift_name("android")));
@property (class, readonly) VpsVPSParamsSystem *ios __attribute__((swift_name("ios")));
+ (VpsKotlinArray<VpsVPSParamsSystem *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsVPSParamsSystem *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("RandomNumberGenerator")))
@protocol VpsRandomNumberGenerator
@required
- (int32_t)nextBitsBitCount:(int32_t)bitCount __attribute__((swift_name("nextBits(bitCount:)")));
- (BOOL)nextBoolean __attribute__((swift_name("nextBoolean()")));
- (double)nextDouble __attribute__((swift_name("nextDouble()")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
- (int32_t)nextIntUntil:(int32_t)until __attribute__((swift_name("nextInt(until:)")));
- (void)shuffleList:(NSMutableArray<id> *)list __attribute__((swift_name("shuffle(list:)")));
@property (readonly) VpsKotlinRandom *generator __attribute__((swift_name("generator")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultRandom")))
@interface VpsDefaultRandom : VpsBase <VpsRandomNumberGenerator>
- (instancetype)initWithSeed:(VpsLong * _Nullable)seed __attribute__((swift_name("init(seed:)"))) __attribute__((objc_designated_initializer));
- (int32_t)nextBitsBitCount:(int32_t)bitCount __attribute__((swift_name("nextBits(bitCount:)")));
- (BOOL)nextBoolean __attribute__((swift_name("nextBoolean()")));
- (double)nextDouble __attribute__((swift_name("nextDouble()")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
- (int32_t)nextIntUntil:(int32_t)until __attribute__((swift_name("nextInt(until:)")));
- (void)shuffleList:(NSMutableArray<id> *)list __attribute__((swift_name("shuffle(list:)")));
@property (readonly) VpsKotlinRandom *generator __attribute__((swift_name("generator")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Gunnis")))
@interface VpsGunnis : VpsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)gunnisInput:(NSString *)input __attribute__((swift_name("gunnis(input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MLPathProcessor")))
@interface VpsMLPathProcessor : VpsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsMLProcessedPath *)processPathPath:(NSArray<VpsKotlinDoubleArray *> *)path pathEndPoint:(VpsKotlinDoubleArray *)pathEndPoint __attribute__((swift_name("processPath(path:pathEndPoint:)")));
- (NSArray<VpsKotlinDoubleArray *> *)rotateAngle:(double)angle trajectory:(NSArray<VpsKotlinDoubleArray *> *)trajectory __attribute__((swift_name("rotate(angle:trajectory:)")));
- (NSArray<VpsKotlinDoubleArray *> *)stretchSpeedFactor:(double)speedFactor trajectory:(NSArray<VpsKotlinDoubleArray *> *)trajectory __attribute__((swift_name("stretch(speedFactor:trajectory:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MLProcessedPath")))
@interface VpsMLProcessedPath : VpsBase
- (instancetype)initWithPath:(NSArray<VpsKotlinDoubleArray *> *)path angleCorrection:(double)angleCorrection speedAdjustment:(double)speedAdjustment __attribute__((swift_name("init(path:angleCorrection:speedAdjustment:)"))) __attribute__((objc_designated_initializer));
- (VpsMLProcessedPath *)doCopyPath:(NSArray<VpsKotlinDoubleArray *> *)path angleCorrection:(double)angleCorrection speedAdjustment:(double)speedAdjustment __attribute__((swift_name("doCopy(path:angleCorrection:speedAdjustment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double angleCorrection __attribute__((swift_name("angleCorrection")));
@property (readonly) NSArray<VpsKotlinDoubleArray *> *path __attribute__((swift_name("path")));
@property (readonly) double speedAdjustment __attribute__((swift_name("speedAdjustment")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LFiltInitCond")))
@interface VpsLFiltInitCond : VpsKotlinEnum<VpsLFiltInitCond *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsLFiltInitCond *stationary __attribute__((swift_name("stationary")));
@property (class, readonly) VpsLFiltInitCond *ramp __attribute__((swift_name("ramp")));
@property (class, readonly) VpsLFiltInitCond *zero __attribute__((swift_name("zero")));
+ (VpsKotlinArray<VpsLFiltInitCond *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsLFiltInitCond *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MaxDoubleArrayQueue")))
@interface VpsMaxDoubleArrayQueue : VpsBase
- (instancetype)initWithSize:(int32_t)size startValue:(double)startValue __attribute__((swift_name("init(size:startValue:)"))) __attribute__((objc_designated_initializer));
- (void)appendValue:(double)value __attribute__((swift_name("append(value:)")));
- (void)backwardAppendValue:(double)value __attribute__((swift_name("backwardAppend(value:)")));
- (id<VpsKotlinIterator>)reversedIterator __attribute__((swift_name("reversedIterator()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@property (readonly) double startValue __attribute__((swift_name("startValue")));
@property (readonly) VpsKotlinDoubleArray *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MaxFloatArrayQueue")))
@interface VpsMaxFloatArrayQueue : VpsBase
- (instancetype)initWithSize:(int32_t)size startValue:(float)startValue __attribute__((swift_name("init(size:startValue:)"))) __attribute__((objc_designated_initializer));
- (void)appendValue:(float)value __attribute__((swift_name("append(value:)")));
- (void)backwardAppendValue:(float)value __attribute__((swift_name("backwardAppend(value:)")));
- (id<VpsKotlinIterator>)reversedIterator __attribute__((swift_name("reversedIterator()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@property (readonly) float startValue __attribute__((swift_name("startValue")));
@property (readonly) VpsKotlinFloatArray *values __attribute__((swift_name("values")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol VpsKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReverseArrayIterator")))
@interface VpsReverseArrayIterator : VpsBase <VpsKotlinIterator>
- (instancetype)initWithArray:(VpsKotlinDoubleArray *)array __attribute__((swift_name("init(array:)"))) __attribute__((objc_designated_initializer));
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (VpsDouble *)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReverseFloatArrayIterator")))
@interface VpsReverseFloatArrayIterator : VpsBase <VpsKotlinIterator>
- (instancetype)initWithArray:(VpsKotlinFloatArray *)array __attribute__((swift_name("init(array:)"))) __attribute__((objc_designated_initializer));
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (VpsFloat *)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SOSFilt")))
@interface VpsSOSFilt : VpsBase
- (instancetype)initWithParams:(VpsKotlinArray<VpsKotlinFloatArray *> *)params initialCondition:(VpsLFiltInitCond *)initialCondition __attribute__((swift_name("init(params:initialCondition:)"))) __attribute__((objc_designated_initializer));
- (void)reset __attribute__((swift_name("reset()")));
- (float)updateX:(float)x __attribute__((swift_name("update(x:)")));
@property (readonly) int32_t n_sections __attribute__((swift_name("n_sections")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SecondOrderLinearDigitalFilter")))
@interface VpsSecondOrderLinearDigitalFilter : VpsBase
- (instancetype)initWithParams:(VpsKotlinFloatArray *)params __attribute__((swift_name("init(params:)"))) __attribute__((objc_designated_initializer));
- (VpsKotlinPair<VpsFloat *, VpsFloat *> *)doInitParamsFirstInput:(float)firstInput secondInput:(float)secondInput __attribute__((swift_name("doInitParams(firstInput:secondInput:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (float)updateX:(float)x __attribute__((swift_name("update(x:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WindowedFiltFilt")))
@interface VpsWindowedFiltFilt : VpsBase
- (instancetype)initWithWindowSize:(int32_t)windowSize params:(VpsKotlinArray<VpsKotlinFloatArray *> *)params initialCondition:(VpsLFiltInitCond *)initialCondition __attribute__((swift_name("init(windowSize:params:initialCondition:)"))) __attribute__((objc_designated_initializer));
- (void)reset __attribute__((swift_name("reset()")));
- (VpsKotlinFloatArray *)updateX:(float)x __attribute__((swift_name("update(x:)")));
@property (readonly) VpsKotlinArray<VpsKotlinFloatArray *> *params __attribute__((swift_name("params")));
@property (readonly) int32_t windowSize __attribute__((swift_name("windowSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartStep")))
@interface VpsStartStep : VpsBase
- (instancetype)initWithLen:(int32_t)len __attribute__((swift_name("init(len:)"))) __attribute__((objc_designated_initializer));
- (BOOL)addStepElement:(double)element __attribute__((swift_name("addStep(element:)")));
- (double)getFrequency __attribute__((swift_name("getFrequency()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSMutableArray<VpsDouble *> *x __attribute__((swift_name("x")));
@property NSMutableArray<VpsDouble *> *y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface VpsKotlinArray<T> : VpsBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(VpsInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<VpsKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface VpsKotlinArray (Extensions)
- (NSString *)printTensor __attribute__((swift_name("printTensor()")));
- (NSString *)printTensor_ __attribute__((swift_name("printTensor_()")));
- (NSString *)toPrintString __attribute__((swift_name("toPrintString()")));
- (NSString *)toPrintString_ __attribute__((swift_name("toPrintString_()")));
- (NSString *)toPrintString__ __attribute__((swift_name("toPrintString__()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinDoubleArray")))
@interface VpsKotlinDoubleArray : VpsBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(VpsDouble *(^)(VpsInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (double)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (VpsKotlinDoubleIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(double)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface VpsKotlinDoubleArray (Extensions)
- (double)dotV:(VpsKotlinDoubleArray *)v __attribute__((swift_name("dot(v:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinFloatArray")))
@interface VpsKotlinFloatArray : VpsBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(VpsFloat *(^)(VpsInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (float)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (VpsKotlinFloatIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(float)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface VpsKotlinFloatArray (Extensions)
- (int32_t)argMax __attribute__((swift_name("argMax()")));
- (float)distanceToOther:(VpsKotlinFloatArray *)other __attribute__((swift_name("distanceTo(other:)")));
- (VpsKotlinIntArray *)maxRepresentativeResamplingK:(int32_t)k random:(id<VpsRandomNumberGenerator>)random __attribute__((swift_name("maxRepresentativeResampling(k:random:)")));
- (float)normDiffV:(VpsKotlinFloatArray *)v __attribute__((swift_name("normDiff(v:)")));
- (float)quatDiffV:(VpsKotlinFloatArray *)v __attribute__((swift_name("quatDiff(v:)")));
- (VpsKotlinFloatArray *)quaternionExtractPitch __attribute__((swift_name("quaternionExtractPitch()")));
- (VpsKotlinFloatArray *)quaternionExtractYaw __attribute__((swift_name("quaternionExtractYaw()")));
- (float)quaternionExtractYawAngle __attribute__((swift_name("quaternionExtractYawAngle()")));
- (VpsKotlinFloatArray *)quaternionInverse __attribute__((swift_name("quaternionInverse()")));
- (VpsKotlinFloatArray *)quaternionMultiplyWithQuaternion:(VpsKotlinFloatArray *)quaternion __attribute__((swift_name("quaternionMultiplyWith(quaternion:)")));
- (VpsKotlinIntArray *)randomChoicesIndicesK:(int32_t)k random:(id<VpsRandomNumberGenerator>)random __attribute__((swift_name("randomChoicesIndices(k:random:)")));
- (NSArray<VpsInt *> *)randomChoicesIndicesOldK:(int32_t)k random:(id<VpsRandomNumberGenerator>)random __attribute__((swift_name("randomChoicesIndicesOld(k:random:)"))) __attribute__((deprecated("Old implementation")));
- (NSString *)toPrintString __attribute__((swift_name("toPrintString()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface VpsKotlinIntArray : VpsBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(VpsInt *(^)(VpsInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (VpsKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface VpsKotlinIntArray (Extensions)
- (NSString *)toPrintString __attribute__((swift_name("toPrintString()")));
@end

@interface VpsPathfinderCoordinateF (Extensions)
- (double)distanceToCoordinate:(VpsPathfinderCoordinateF *)coordinate __attribute__((swift_name("distanceTo(coordinate:)")));
- (VpsPathfinderCoordinateF *)flipYHeightInPixels:(float)heightInPixels __attribute__((swift_name("flipY(heightInPixels:)")));
- (VpsPathfinderCoordinateF *)meterToPixelsPixelsPerMeter:(float)pixelsPerMeter __attribute__((swift_name("meterToPixels(pixelsPerMeter:)")));
@end

@interface VpsBaseEventWiFiScan (Extensions)
- (void)setAPCoordinatesAccessPoints:(NSArray<VpsAccessPoint *> *)accessPoints __attribute__((swift_name("setAPCoordinates(accessPoints:)")));
@end

@interface VpsBaseEventWifiStatusUpdate (Extensions)
- (void)setAPCoordinateAccessPoints:(NSArray<VpsAccessPoint *> *)accessPoints __attribute__((swift_name("setAPCoordinate(accessPoints:)")));
@end

@interface VpsPose (Extensions)
- (NSArray<VpsFloat *> *)toList __attribute__((swift_name("toList()")));
@end

@interface VpsFlowBuilder (Extensions)
- (VpsFlowBuilder<id> *)addNodeBlock:(VpsNode<id> * _Nullable (^)(void))block __attribute__((swift_name("addNode(block:)")));
- (VpsFlowBuilder<id> *)connectToBlock:(id<VpsFlowConnection> _Nullable (^)(void))block __attribute__((swift_name("connectTo(block:)")));
- (VpsFlowBuilder<id> *)connectToAllBlock:(NSArray<id<VpsFlowConnection>> *(^)(void))block __attribute__((swift_name("connectToAll(block:)")));
@end

@interface VpsFlowConverterBuilder (Extensions)
- (VpsFlowConverterBuilder<id, id> *)connectToBlock:(id<VpsFlowConnection> _Nullable (^)(void))block __attribute__((swift_name("connectTo(block:)")));
- (VpsFlowConverterBuilder<id, id> *)connectToAllBlock:(NSArray<id<VpsFlowConnection>> *(^)(void))block __attribute__((swift_name("connectToAll(block:)")));
@end

@interface VpsLegacyReplaySensorData (Extensions)
- (VpsInputSignalSensorData *)toInputSignalSensorTypeName:(NSString *)sensorTypeName __attribute__((swift_name("toInputSignal(sensorTypeName:)")));
@end

@interface VpsLegacyReplayStartPosition (Extensions)
- (VpsInputSignalStartPosition *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsLegacyReplaySyncPosition (Extensions)
- (VpsInputSignalSyncPosition *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsLegacyReplayWiFiDataLegacyReplayWifiScan (Extensions)
- (VpsInputSignal *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsLegacyReplayWiFiDataLegacyReplayWifiScanLegacyReplayWifiScanResult (Extensions)
- (VpsWifiScanUpdateScanResult *)toScanResult __attribute__((swift_name("toScanResult()")));
@end

@interface VpsLegacyReplayWiFiDataLegacyReplayWifiStatusUpdate (Extensions)
- (VpsInputSignal *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayExit (Extensions)
- (VpsInputSignalExit *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayLngLat (Extensions)
- (VpsInputSignalLngLat *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplaySensorData (Extensions)
- (VpsInputSignalSensorData *)toInputSignalSensorTypeName:(NSString *)sensorTypeName __attribute__((swift_name("toInputSignal(sensorTypeName:)")));
@end

@interface VpsReplayStartLngLat (Extensions)
- (VpsInputSignalStart *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayStartPosition (Extensions)
- (VpsInputSignalStart *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplaySyncLngLat (Extensions)
- (VpsInputSignalSyncLngLat *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplaySyncPosition (Extensions)
- (VpsInputSignalSyncPosition *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsInputSignalAngleCorrection (Extensions)
- (VpsBaseEventAngleCorrectionEvent *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
- (VpsReplayAngleCorrection *)toReplayAngleCorrection __attribute__((swift_name("toReplayAngleCorrection()")));
@end

@interface VpsInputSignalExit (Extensions)
- (VpsReplayExit *)toReplayExit __attribute__((swift_name("toReplayExit()")));
@end

@interface VpsInputSignalFloorChange (Extensions)
- (VpsBaseEventFloorChangeEvent *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
- (VpsReplayFloorChange *)toReplayFloorChange __attribute__((swift_name("toReplayFloorChange()")));
@end

@interface VpsInputSignalLngLat (Extensions)
- (VpsBaseEventLngLatEvent *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
- (VpsReplayLngLat *)toReplayLngLat __attribute__((swift_name("toReplayLngLat()")));
@end

@interface VpsInputSignalSensorData (Extensions)
- (VpsReplaySensorData *)toReplaySensorData __attribute__((swift_name("toReplaySensorData()")));
@end

@interface VpsInputSignalStairInfo (Extensions)
- (VpsBaseEventStairEvent *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
@end

@interface VpsInputSignalStart (Extensions)
- (VpsBaseEventStart *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
@property (readonly) float angle_ __attribute__((swift_name("angle_")));
@end

@interface VpsInputSignalStartLngLat (Extensions)
- (VpsReplayStartLngLat *)toReplayStartLngLat __attribute__((swift_name("toReplayStartLngLat()")));
@end

@interface VpsInputSignalStartPosition (Extensions)
- (VpsReplayStartPosition *)toReplayStartPosition __attribute__((swift_name("toReplayStartPosition()")));
@end

@interface VpsInputSignalSync (Extensions)
- (VpsBaseEventSync *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
@end

@interface VpsInputSignalSyncLngLat (Extensions)
- (VpsReplaySyncLngLat *)toReplaySyncLngLat __attribute__((swift_name("toReplaySyncLngLat()")));
@end

@interface VpsInputSignalSyncPosition (Extensions)
- (VpsBaseEventSyncPositionEvent *)toBaseEvent_ __attribute__((swift_name("toBaseEvent_()")));
- (VpsReplaySyncPosition *)toReplaySyncPosition __attribute__((swift_name("toReplaySyncPosition()")));
@end

@interface VpsInputSignalWifiScan (Extensions)
- (VpsBaseEventWiFiScan *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
@end

@interface VpsInputSignalWifiStatus (Extensions)
- (VpsBaseEventWifiStatusUpdate *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
@end

@interface VpsSwapLocation (Extensions)
- (BOOL)isPointingToAnotherSwapLocationSwapLocationToId:(int64_t)swapLocationToId __attribute__((swift_name("isPointingToAnotherSwapLocation(swapLocationToId:)")));
- (BOOL)isPointingToFloorLevelIdFloorLevelId:(int64_t)floorLevelId __attribute__((swift_name("isPointingToFloorLevelId(floorLevelId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BooleanExtKt")))
@interface VpsBooleanExtKt : VpsBase
+ (float)toFloat:(BOOL)receiver __attribute__((swift_name("toFloat(_:)")));
+ (int32_t)toInt:(BOOL)receiver __attribute__((swift_name("toInt(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonMathExtKt")))
@interface VpsCommonMathExtKt : VpsBase
+ (NSArray<VpsFloat *> *)convolve:(NSArray<VpsFloat *> *)receiver kernel:(NSArray<VpsFloat *> *)kernel mode:(VpsConvolveMode *)mode stride:(int32_t)stride __attribute__((swift_name("convolve(_:kernel:mode:stride:)")));
+ (int32_t)roundUpToOdd:(float)receiver __attribute__((swift_name("roundUpToOdd(_:)")));
+ (NSArray<VpsFloat *> *)valid1DConvolve:(NSArray<VpsFloat *> *)receiver windowSize:(int32_t)windowSize __attribute__((swift_name("valid1DConvolve(_:windowSize:)")));
+ (NSArray<VpsFloat *> *)vectorDot:(NSArray<VpsFloat *> *)receiver other:(NSArray<VpsFloat *> *)other __attribute__((swift_name("vectorDot(_:other:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoubleExtKt")))
@interface VpsDoubleExtKt : VpsBase
+ (double)degreesToRadians:(double)receiver __attribute__((swift_name("degreesToRadians(_:)")));
+ (double)meterToPixels:(double)receiver pixelsPerMeters:(double)pixelsPerMeters __attribute__((swift_name("meterToPixels(_:pixelsPerMeters:)")));
+ (double)pixelsToMeters:(double)receiver pixelsPerMeters:(double)pixelsPerMeters __attribute__((swift_name("pixelsToMeters(_:pixelsPerMeters:)")));
+ (double)radiansToDegrees:(double)receiver __attribute__((swift_name("radiansToDegrees(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoubleListExtKt")))
@interface VpsDoubleListExtKt : VpsBase
+ (NSArray<VpsDouble *> *)getCenterPoint:(NSArray<NSArray<VpsDouble *> *> *)receiver __attribute__((swift_name("getCenterPoint(_:)")));
+ (NSString *)printValues:(NSArray<VpsKotlinDoubleArray *> *)receiver __attribute__((swift_name("printValues(_:)")));
+ (VpsCoordinateF *)toCoordinateF:(NSArray<VpsDouble *> *)receiver __attribute__((swift_name("toCoordinateF(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpectsKt")))
@interface VpsExpectsKt : VpsBase
+ (int64_t)getSystemTimeInMillis __attribute__((swift_name("getSystemTimeInMillis()")));
+ (int64_t)getSystemTimeInNanos __attribute__((swift_name("getSystemTimeInNanos()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloatArrayExtKt")))
@interface VpsFloatArrayExtKt : VpsBase
+ (float)normDiff:(NSArray<VpsFloat *> *)receiver v:(VpsKotlinFloatArray *)v __attribute__((swift_name("normDiff(_:v:)")));
+ (NSString *)toPrintString:(NSArray<VpsFloat *> *)receiver __attribute__((swift_name("toPrintString(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloatExtKt")))
@interface VpsFloatExtKt : VpsBase
+ (float)convertStartAngleToExpectedRadians:(float)receiver __attribute__((swift_name("convertStartAngleToExpectedRadians(_:)")));
+ (float)degreesToRadians:(float)receiver __attribute__((swift_name("degreesToRadians(_:)")));
+ (float)meterToPixels:(float)receiver pixelsPerMeters:(float)pixelsPerMeters __attribute__((swift_name("meterToPixels(_:pixelsPerMeters:)")));
+ (float)radiansToDegrees:(float)receiver __attribute__((swift_name("radiansToDegrees(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IntExtKt")))
@interface VpsIntExtKt : VpsBase
+ (double)pixelsToMeters:(int32_t)receiver pixelsPerMeters:(double)pixelsPerMeters __attribute__((swift_name("pixelsToMeters(_:pixelsPerMeters:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListExtKt")))
@interface VpsListExtKt : VpsBase
+ (float)alreadySortedListMedian:(NSArray<VpsFloat *> *)receiver __attribute__((swift_name("alreadySortedListMedian(_:)")));
+ (NSArray<NSArray<id> *> *)chunkedNice:(NSArray<id> *)receiver n:(int32_t)n __attribute__((swift_name("chunkedNice(_:n:)")));
+ (VpsAccessPoint * _Nullable)findMatchForBssid:(NSArray<VpsAccessPoint *> *)receiver bssid:(NSString *)bssid __attribute__((swift_name("findMatchForBssid(_:bssid:)")));
+ (float)getTotalDistance:(NSMutableArray<VpsKotlinFloatArray *> *)receiver __attribute__((swift_name("getTotalDistance(_:)")));
+ (VpsFloat * _Nullable)mean:(NSMutableArray<VpsFloat *> *)receiver __attribute__((swift_name("mean(_:)")));
+ (VpsFloat * _Nullable)median:(NSMutableArray<VpsFloat *> *)receiver __attribute__((swift_name("median(_:)")));
+ (void)shuffle:(NSMutableArray<id> *)receiver generator:(id<VpsRandomNumberGenerator> _Nullable)generator __attribute__((swift_name("shuffle(_:generator:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MCLKt")))
@interface VpsMCLKt : VpsBase
+ (float)distance_to_ap_simplfiedRssi:(int32_t)rssi N:(float)N measured_power:(int32_t)measured_power __attribute__((swift_name("distance_to_ap_simplfied(rssi:N:measured_power:)")));
+ (VpsKotlinPair<VpsInt *, VpsInt *> *)find_max_indexHistogram:(VpsKotlinArray<VpsKotlinArray<VpsInt *> *> *)histogram __attribute__((swift_name("find_max_index(histogram:)")));
+ (float)gauss_pdf_1dX:(float)x loc:(float)loc scale:(float)scale __attribute__((swift_name("gauss_pdf_1d(x:loc:scale:)")));
+ (float)gauss_pdf_2dX:(float)x y:(float)y loc:(VpsCoordinateF *)loc scale:(VpsKotlinPair<VpsFloat *, VpsFloat *> *)scale __attribute__((swift_name("gauss_pdf_2d(x:y:loc:scale:)")));
+ (VpsCoordinateF *)get_modeParticles:(VpsKotlinArray<VpsPose *> *)particles __attribute__((swift_name("get_mode(particles:)")));
+ (float)harmonic_meanData:(VpsKotlinFloatArray *)data __attribute__((swift_name("harmonic_mean(data:)")));
+ (VpsKotlinTriple<VpsKotlinArray<VpsKotlinArray<VpsInt *> *> *, VpsKotlinFloatArray *, VpsKotlinFloatArray *> *)histogram2DX_array:(VpsKotlinFloatArray *)x_array y_array:(VpsKotlinFloatArray *)y_array bin_size:(int32_t)bin_size __attribute__((swift_name("histogram2D(x_array:y_array:bin_size:)")));
+ (VpsKotlinTriple<VpsKotlinFloatArray *, VpsFloat *, VpsFloat *> *)make_binArray:(VpsKotlinFloatArray *)array bin_size:(int32_t)bin_size __attribute__((swift_name("make_bin(array:bin_size:)")));
+ (VpsKotlinArray<id> *)random_choiceElements:(VpsKotlinArray<id> *)elements weights:(VpsKotlinFloatArray *)weights size:(int32_t)size __attribute__((swift_name("random_choice(elements:weights:size:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MathUtilsKt")))
@interface VpsMathUtilsKt : VpsBase
+ (NSArray<VpsKotlinDoubleArray *> *)matrixMultiplication:(NSArray<VpsKotlinDoubleArray *> *)receiver matrix2:(NSArray<VpsKotlinDoubleArray *> *)matrix2 __attribute__((swift_name("matrixMultiplication(_:matrix2:)")));
+ (NSArray<VpsKotlinDoubleArray *> *)matrixTranspose:(NSArray<VpsKotlinDoubleArray *> *)receiver __attribute__((swift_name("matrixTranspose(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeRawSensorDataRotationSensorFilterKt")))
@interface VpsNodeRawSensorDataRotationSensorFilterKt : VpsBase
@property (class, readonly) float pi __attribute__((swift_name("pi")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignalExtKt")))
@interface VpsOutputSignalExtKt : VpsBase
+ (NSString *)description:(NSArray<VpsOutputSignal *> *)receiver __attribute__((swift_name("description(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PathfinderCoordinateFExtKt")))
@interface VpsPathfinderCoordinateFExtKt : VpsBase
+ (VpsPathfinderCoordinateF * _Nullable)getMinOrNull:(NSArray<VpsPathfinderCoordinateF *> *)receiver selector:(VpsDouble *(^)(VpsPathfinderCoordinateF *))selector __attribute__((swift_name("getMinOrNull(_:selector:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiMethodsKt")))
@interface VpsWifiMethodsKt : VpsBase
+ (float)distanceToApSimpleRssi:(int32_t)rssi N:(float)N measuredPower:(int32_t)measuredPower __attribute__((swift_name("distanceToApSimple(rssi:N:measuredPower:)")));
+ (VpsCoordinateF * _Nullable)getScanPosSimpleScan:(VpsBaseEventWiFiScan *)scan N:(float)N measuredPower:(int32_t)measuredPower __attribute__((swift_name("getScanPosSimple(scan:N:measuredPower:)")));
+ (VpsCoordinateF *)weightedMassCenterCenters:(NSArray<VpsCoordinateF *> *)centers radii:(NSArray<VpsFloat *> *)radii __attribute__((swift_name("weightedMassCenter(centers:radii:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface VpsKotlinEnumCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface VpsKotlinPair<__covariant A, __covariant B> : VpsBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (VpsKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinRandom")))
@interface VpsKotlinRandom : VpsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) VpsKotlinRandomDefault *companion __attribute__((swift_name("companion")));
- (int32_t)nextBitsBitCount:(int32_t)bitCount __attribute__((swift_name("nextBits(bitCount:)")));
- (BOOL)nextBoolean __attribute__((swift_name("nextBoolean()")));
- (VpsKotlinByteArray *)nextBytesArray:(VpsKotlinByteArray *)array __attribute__((swift_name("nextBytes(array:)")));
- (VpsKotlinByteArray *)nextBytesSize:(int32_t)size __attribute__((swift_name("nextBytes(size:)")));
- (VpsKotlinByteArray *)nextBytesArray:(VpsKotlinByteArray *)array fromIndex:(int32_t)fromIndex toIndex:(int32_t)toIndex __attribute__((swift_name("nextBytes(array:fromIndex:toIndex:)")));
- (double)nextDouble __attribute__((swift_name("nextDouble()")));
- (double)nextDoubleUntil:(double)until __attribute__((swift_name("nextDouble(until:)")));
- (double)nextDoubleFrom:(double)from until:(double)until __attribute__((swift_name("nextDouble(from:until:)")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
- (int32_t)nextIntUntil:(int32_t)until __attribute__((swift_name("nextInt(until:)")));
- (int32_t)nextIntFrom:(int32_t)from until:(int32_t)until __attribute__((swift_name("nextInt(from:until:)")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
- (int64_t)nextLongUntil:(int64_t)until __attribute__((swift_name("nextLong(until:)")));
- (int64_t)nextLongFrom:(int64_t)from until:(int64_t)until __attribute__((swift_name("nextLong(from:until:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol VpsKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<VpsKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<VpsKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol VpsKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<VpsKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<VpsKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol VpsKotlinx_serialization_coreKSerializer <VpsKotlinx_serialization_coreSerializationStrategy, VpsKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinTriple")))
@interface VpsKotlinTriple<__covariant A, __covariant B, __covariant C> : VpsBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("init(first:second:third:)"))) __attribute__((objc_designated_initializer));
- (VpsKotlinTriple<A, B, C> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("doCopy(first:second:third:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@property (readonly) C _Nullable third __attribute__((swift_name("third")));
@end

__attribute__((swift_name("KotlinDoubleIterator")))
@interface VpsKotlinDoubleIterator : VpsBase <VpsKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsDouble *)next __attribute__((swift_name("next()")));
- (double)nextDouble __attribute__((swift_name("nextDouble()")));
@end

__attribute__((swift_name("KotlinFloatIterator")))
@interface VpsKotlinFloatIterator : VpsBase <VpsKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsFloat *)next __attribute__((swift_name("next()")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface VpsKotlinIntIterator : VpsBase <VpsKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRandom.Default")))
@interface VpsKotlinRandomDefault : VpsKotlinRandom
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsKotlinRandomDefault *shared __attribute__((swift_name("shared")));
- (int32_t)nextBitsBitCount:(int32_t)bitCount __attribute__((swift_name("nextBits(bitCount:)")));
- (BOOL)nextBoolean __attribute__((swift_name("nextBoolean()")));
- (VpsKotlinByteArray *)nextBytesArray:(VpsKotlinByteArray *)array __attribute__((swift_name("nextBytes(array:)")));
- (VpsKotlinByteArray *)nextBytesSize:(int32_t)size __attribute__((swift_name("nextBytes(size:)")));
- (VpsKotlinByteArray *)nextBytesArray:(VpsKotlinByteArray *)array fromIndex:(int32_t)fromIndex toIndex:(int32_t)toIndex __attribute__((swift_name("nextBytes(array:fromIndex:toIndex:)")));
- (double)nextDouble __attribute__((swift_name("nextDouble()")));
- (double)nextDoubleUntil:(double)until __attribute__((swift_name("nextDouble(until:)")));
- (double)nextDoubleFrom:(double)from until:(double)until __attribute__((swift_name("nextDouble(from:until:)")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
- (int32_t)nextIntUntil:(int32_t)until __attribute__((swift_name("nextInt(until:)")));
- (int32_t)nextIntFrom:(int32_t)from until:(int32_t)until __attribute__((swift_name("nextInt(from:until:)")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
- (int64_t)nextLongUntil:(int64_t)until __attribute__((swift_name("nextLong(until:)")));
- (int64_t)nextLongFrom:(int64_t)from until:(int64_t)until __attribute__((swift_name("nextLong(from:until:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface VpsKotlinByteArray : VpsBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(VpsByte *(^)(VpsInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (VpsKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol VpsKotlinx_serialization_coreEncoder
@required
- (id<VpsKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<VpsKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<VpsKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<VpsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<VpsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) VpsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol VpsKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<VpsKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<VpsKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<VpsKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) VpsKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol VpsKotlinx_serialization_coreDecoder
@required
- (id<VpsKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<VpsKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (VpsKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<VpsKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<VpsKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) VpsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface VpsKotlinByteIterator : VpsBase <VpsKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol VpsKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<VpsKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<VpsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<VpsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) VpsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface VpsKotlinx_serialization_coreSerializersModule : VpsBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<VpsKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<VpsKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<VpsKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<VpsKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<VpsKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<VpsKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<VpsKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol VpsKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface VpsKotlinx_serialization_coreSerialKind : VpsBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol VpsKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<VpsKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<VpsKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<VpsKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<VpsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) VpsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface VpsKotlinNothing : VpsBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol VpsKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<VpsKotlinKClass>)kClass provider:(id<VpsKotlinx_serialization_coreKSerializer> (^)(NSArray<id<VpsKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<VpsKotlinKClass>)kClass serializer:(id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<VpsKotlinKClass>)baseClass actualClass:(id<VpsKotlinKClass>)actualClass actualSerializer:(id<VpsKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<VpsKotlinKClass>)baseClass defaultDeserializerProvider:(id<VpsKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultDeserializerBaseClass:(id<VpsKotlinKClass>)baseClass defaultDeserializerProvider:(id<VpsKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultSerializerBaseClass:(id<VpsKotlinKClass>)baseClass defaultSerializerProvider:(id<VpsKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol VpsKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol VpsKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol VpsKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol VpsKotlinKClass <VpsKotlinKDeclarationContainer, VpsKotlinKAnnotatedElement, VpsKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
