#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class VpsVPSConfig, VpsPathfinderCoordinateF, VpsNavGraph, VpsPathProcessorPathProcess, VpsDjikstrasOptimizedCompanion, VpsDjikstrasOptimizedOldNodeGraph, VpsNavGraphVertex, VpsPriorityQueueUsingSinglyLinkedList<T>, VpsPathProcessor, VpsPathProcessorBSpline, VpsKotlinDoubleArray, VpsKotlinArray<T>, VpsKotlinEnumCompanion, VpsKotlinEnum<E>, VpsTSPThreeOptAlgorithmCompanion, VpsKotlinIntArray, VpsKotlinRandom, VpsKotlinPair<__covariant A, __covariant B>, VpsIPathfinderGoalType, VpsNavGraphCompanion, VpsNavGraphVertexCompanion, VpsPathfinderCoordinateFCompanion, VpsConvolveMode, VpsCoordinateF, VpsSwapLocation, VpsBaseEventCompassHeadingEvent, VpsDeviationTable, VpsEphemerideData, VpsGNSSAttack, VpsMagInfo, VpsMagneticField, VpsOutputSignalPositionActivityState, VpsOutputSignalPositionStatus, VpsKotlinFloatArray, VpsConstellationType, VpsStepType, VpsMaxQueue<T>, VpsBaseEventWiFiObservation, VpsBaseEventWiFiScan, VpsFloorChangeInterpreterType, VpsVPSProfile, VpsMagnetometerCalibration, VpsOutputSignal, VpsMagnetometerMappingEngine, VpsFlowConverter<T, S>, VpsVPSParamsSystem, VpsFloorLevelHandler, VpsFloorChangeInterpreterSettings, VpsRawSensorData, VpsBaseEvent, VpsFloorChangeSignal, VpsFlowConverterBuilder<T, S>, VpsFloorChangeInterpreter, VpsFloorChangeInterpreterBuilder, VpsInAndOutTrigger, VpsInputSignal, VpsFloorChangeControllerCompanion, VpsFloorChangeSignalWiFiFloorChangeSignal, VpsFloorChangeController, VpsFloorChangeControllerBuilder, VpsFloorChangeDetector, VpsBaseEventWifiStatusUpdate, VpsAltitudeClassifierParams, VpsClassifierState, VpsClassifierEvent, VpsConvertAltitudeToClassifierEvent, VpsConvertAltitudeToClassifierEventBuilder, VpsNode<T>, VpsAltitudeBasedFloorChangeInterpreterFloorState, VpsAverageVariance, VpsFloorSensorParameters, VpsAltitudeBasedFloorChangeInterpreter, VpsAltitudeBasedFloorChangeInterpreterBuilder, VpsFloorSensorParametersCompanion, VpsSensorDataType, VpsSensorFrequencyDetector, VpsAverageVarianceDoublePack, VpsAverageVarianceFloatPack, VpsWiFiStairsFusionParams, VpsRawSensorPack, VpsMagnetometerMappingEngineBuilder, VpsBaseEventStart, VpsPositionEngine, VpsPositionEngineBuilder, VpsPositionEngineSettings, VpsNoMapFilterParams, VpsGNSSBand, VpsExtendedKalmanFilter2DINSFusion, VpsAttackDetectorParams, VpsGnssMeasurement, VpsKotlinTriple<__covariant A, __covariant B, __covariant C>, VpsGnssClock, VpsAbstractAttackDetectionFilter, VpsGNSSAttackJamming, VpsGNSSAttackSpoofing, VpsAttackDetectionFilter, VpsDropState, VpsRiseState, VpsTrend, VpsLocation, VpsBaseEventLngLatEvent, VpsOutputSignalSource, VpsNoMapFilter, VpsPositionFilter, VpsHiResDateTimeCompanion, VpsHiResDateTime, VpsKeplerParams, VpsCoordinateD, VpsPositionAndVelocity2DInput, VpsPosition2DInput, VpsVelocity2DInput, VpsKalmanFilter2DConstantVelocity, VpsPositionAndVelocity2DOSInput, VpsStepInput, VpsParticleFilterParams, VpsScoringParams, VpsTrustedPositionParams, VpsPose, VpsParticleFilterEvent, VpsNLModelOutput, VpsEventHandler, VpsEventHandlerBuilder, VpsEventHandlerNaiveOutput, VpsEventHandlerNaiveOutputBuilder, VpsParticleFilterSettings, VpsParticleFilter, VpsParticleFilterBuilder, VpsOutputSignalUXPosition, VpsAbstractParticleFilter, VpsOutputSignalSyncSignal, VpsBaseEventStepEvent, VpsGaussianKDE, VpsFloorLevelHandlerMapInformation, VpsStartMethod, VpsSyncMethod, VpsParticleFilterKLD, VpsParticleFilterKLDV2, VpsFeatures, VpsTensor, VpsFeatureToTensorValue, VpsFeatureToTensorValueBuilder, VpsRotationHandlerSettings, VpsInputSignalSync, VpsFlowConverterRawSensorDataToRotation, VpsFlowConverterRawSensorDataToRotationBuilder, VpsFlowConverterRotationToOutputSignal, VpsFlowConverterRotationToOutputSignalBuilder, VpsModelToEventParameters, VpsVelocityModelOutput, VpsModeClassifierOutput, VpsModelToEvent, VpsModelToEventBuilder, VpsTensorToModelOutput, VpsTensorToModelOutputBuilder, VpsModeKalmanFilterParams, VpsStairSimpleFilterParams, VpsStepSurfaceType, VpsDeviceAxis, VpsOutputSignalObservationGyroBias, VpsOrientationModuleParams, VpsInputSignalDeviceInfoTemperature, VpsInputSignalEnvironmentSignalSetGyroBiasObservations, VpsOrientationFilterSensorPack, VpsCalibrationModule, VpsOrientationFilter, VpsOrientationFilterBuilder, VpsOrientationFilterParams, VpsGyroRestResult, VpsRestDetector, VpsRestDetectorBuilder, VpsRestDetectorParams, VpsGyroRestDetector, VpsTemperatureFilter, VpsTemperatureFilterBuilder, VpsTemperatureFilterParams, VpsTRFFusion, VpsTRFFusionBuilder, VpsTRFFusionParams, VpsBackTrackers, VpsMagnetometerDriftEstimatorParams, VpsCompassDriftEstimatorOutdoors, VpsCompassDriftEstimatorOutdoorsBuilder, VpsInterpolationModule, VpsInterpolationModuleBuilder, VpsInterpolationModuleParams, VpsMagnetometerDriftEstimator, VpsMagnetometerDriftEstimatorBuilder, VpsMagnetometerDriftEstimatorOutdoors, VpsMagnetometerDriftEstimatorOutdoorsBuilder, VpsMathUtil, VpsVelocityModelParamsFeaturesEntries, VpsFeaturePacker, VpsFeaturePackerBuilder, VpsInputSignalSyncForce, VpsNorthPredictorDriftEstimator, VpsNorthPredictorDriftEstimatorInDoors, VpsNorthPredictorDriftEstimatorInDoorsBuilder, VpsNorthPredictorDriftEstimatorOutDoors, VpsNorthPredictorDriftEstimatorOutDoorsBuilder, VpsEmbeddedRotationHandler, VpsEmbeddedRotationHandlerBuilder, VpsSpeedCalibrator, VpsSpeedCalibratorBuilder, VpsStairsInterpreter, VpsStairsInterpreterBuilder, VpsLegacyReplaySensorData, VpsLegacyReplaySyncPosition, VpsLegacyReplayStartPosition, VpsLegacyReplayWiFiDataLegacyReplayWifiStatusUpdate, VpsLegacyReplayWiFiDataLegacyReplayWifiScan, VpsLegacyReplayDataV9Companion, VpsLegacyReplayDataV9, VpsLegacyReplaySensorDataCompanion, VpsLegacyReplayStartPositionCompanion, VpsLegacyReplaySyncPositionCompanion, VpsLegacyReplayWiFiDataCompanion, VpsLegacyReplayWiFiData, VpsLegacyReplayWiFiDataLegacyReplayWifiScanLegacyReplayWifiScanResult, VpsLegacyReplayWiFiDataLegacyReplayWifiScanCompanion, VpsLegacyReplayWiFiDataLegacyReplayWifiScanLegacyReplayWifiScanResultCompanion, VpsLegacyReplayWiFiDataLegacyReplayWifiStatusUpdateCompanion, VpsFeaturesCompanion, VpsMagMappingRawSensorPackCompanion, VpsMagMappingRawSensorPack, VpsRawSensorPackCompanion, VpsEventType, VpsEventTypeHolderCompanion, VpsEventTypeHolder, VpsPoseCompanion, VpsSyncCritera, VpsKotlinThrowable, VpsKotlinException, VpsWifiScanDataCompanion, VpsWifiScanData, VpsConvolveOption, VpsMLProcessedPath, VpsLFiltInitCond, VpsCircularBuffer<T>, VpsPolynomial, VpsAccessPoint, VpsZone, VpsFeatureToTensorValueParams, VpsInterpolationModuleParams_, VpsOrientationParams, VpsFlow<T>, VpsOutputSignalUserInfoStatus, VpsInputSignalStart, VpsVPSLog, VpsCoordinateDCompanion, VpsAccessPointCoordinate, VpsCoordinateFCompanion, VpsLocationCompanion, VpsMagnetometerCalibrationCompanion, VpsMagnetometerCalibrationConfigCompanion, VpsMagnetometerCalibrationConfig, VpsWiFiAltitudeFusionParams, VpsVPSFloorChangeHandlerSettings, VpsFlowBuilder<T>, VpsAttackFamilyCompanion, VpsAttackFamily, VpsConstellationTypeCompanion, VpsDataType, VpsEphemerideDataCompanion, VpsGNSSAttackCompanion, VpsIndicator, VpsPowerProfile, VpsGNSSAttackJammingCompanion, VpsGNSSAttackJammingContinuousWaveCompanion, VpsGNSSAttackJammingContinuousWave, VpsGNSSAttackJammingJammingDefaultCompanion, VpsGNSSAttackJammingJammingDefault, VpsGNSSAttackJammingPRNCompanion, VpsGNSSAttackJammingPRN, VpsGNSSAttackJammingSweepCompanion, VpsGNSSAttackJammingSweep, VpsGNSSAttackSpoofingCompanion, VpsGNSSAttackSpoofingDirectedCoherentCompanion, VpsGNSSAttackSpoofingDirectedCoherent, VpsGNSSAttackSpoofingIncoherentCompanion, VpsGNSSAttackSpoofingIncoherent, VpsGNSSAttackSpoofingMeaconingCompanion, VpsGNSSAttackSpoofingMeaconing, VpsGNSSAttackSpoofingSpoofingDefaultCompanion, VpsGNSSAttackSpoofingSpoofingDefault, VpsGNSSAttackSpoofingTimeManipulationCompanion, VpsGNSSAttackSpoofingTimeManipulation, VpsGNSSBandCompanion, VpsGNSSBands, VpsGnssClockCompanion, VpsGnssMeasurementCompanion, VpsKotlinByteArray, VpsGnssNavigationMessageCompanion, VpsGnssNavigationMessage, VpsIndicatorCompanion, VpsNewtonParams, VpsPowerProfileCompanion, VpsPartitionRecorderDataPackage<T>, VpsPartitionRecorder<T>, VpsPartitionRecorderPackageOption, VpsMagMappingDataV1, VpsMagnetometerMapDataReading, VpsMagMappingDataV1Companion, VpsMagnetometerMapDataReadingCompanion, VpsVPSModelToEventParameters, VpsTrendParams, VpsCodeCarrierParams, VpsDetectorVersion, VpsNoMapFilterParamsVersion, VpsVPSAttackDetectorParams, VpsVPSNoMapFilterParams, VpsOrientationParamsVersion, VpsVPSOrientationParams, VpsOrientationFilterParamsBiasTypes, VpsOrientationFilterParamsCompanion, VpsRestDetectorParamsCompanion, VpsTemperatureFilterParamsCompanion, VpsVPSOrientationModuleParams, VpsGyroBiasObservationCompanion, VpsGyroBiasObservation, VpsParticleFilterParamsVersion, VpsParticleFilterSettingsVersion, VpsParticleFilterSettingsParticleFilterVersion, VpsPositionStdSettings, VpsPositionStdSettingsStrategy, VpsVPSParticleFilterParams, VpsVPSParticleFilterSettings, VpsVPSPositionStdSettings, VpsPositionEngineType, VpsVPSProfileCompanion, VpsReplayAngleCorrectionCompanion, VpsReplayAngleCorrection, VpsReplayCompassHeadingCompanion, VpsReplayCompassHeading, VpsReplayStartPosition, VpsReplayStartLngLat, VpsReplayStartLngLatFixedNorth, VpsReplayStartQuickStart, VpsReplayExit, VpsReplaySyncPosition, VpsReplaySyncLngLat, VpsWifiStatusUpdate, VpsWifiScanUpdate, VpsReplayFloorChange, VpsReplayLngLat, VpsReplaySyncForce, VpsReplaySyncGNSS, VpsReplaySyncManual, VpsReplayGyroCalibration, VpsReplayMagnetometerCalibration, VpsReplaySensorData, VpsReplayGnssMeasurements, VpsReplayGnssNavigationMessage, VpsReplaySpeedCalibration, VpsReplaySetProfile, VpsReplayEnvironmentSetMagneticField, VpsReplayEnvironmentSetEphemerides, VpsReplayEnvironmentSetMagnetometerCalibration, VpsReplayEnvironmentSetConstellations, VpsReplaySyncStop, VpsReplayDeviceInfoTemperature, VpsReplayEnvironmentGyroBiasObservations, VpsReplayDataV1Companion, VpsReplayDataV1, VpsReplayDeviceInfoTemperatureCompanion, VpsReplayGyroBiasObservation, VpsReplayEnvironmentGyroBiasObservationsCompanion, VpsReplayEnvironmentSetConstellationsCompanion, VpsReplayEnvironmentSetEphemeridesCompanion, VpsReplayEnvironmentSetMagneticFieldCompanion, VpsReplayEnvironmentSetMagnetometerCalibrationCompanion, VpsReplayExitCompanion, VpsReplayFloorChangeCompanion, VpsReplayGnssMeasurementsCompanion, VpsReplayGnssNavigationMessageCompanion, VpsReplayGyroBiasObservationCompanion, VpsReplayGyroCalibrationCompanion, VpsReplayLngLatCompanion, VpsReplayMagnetometerCalibrationCompanion, VpsReplaySensorDataCompanion, VpsReplaySetProfileCompanion, VpsReplaySpeedCalibrationCompanion, VpsReplayStartLngLatCompanion, VpsReplayStartLngLatFixedNorthCompanion, VpsReplayStartPositionCompanion, VpsReplayStartQuickStartCompanion, VpsReplaySyncForceCompanion, VpsReplaySyncGNSSCompanion, VpsReplaySyncLngLatCompanion, VpsReplaySyncManualCompanion, VpsReplaySyncPositionCompanion, VpsReplaySyncStopCompanion, VpsScoringParamsVersion, VpsVPSScoringParams, VpsADModelOutput, VpsModeClassifierOutputCompanion, VpsRawSensorDataCompanion, VpsTensorCompanion, VpsTensorBufferCompanion, VpsTensorBuffer, VpsVelocityModelOutputCompanion, VpsIosInterpolationModuleParams, VpsMagnetometerDriftEstimatorParamsVersion, VpsVPSMagnetometerDriftEstimatorParams, VpsVPSModeKalmanFilterParams, VpsVPSStairSimpleFilterParams, VpsBaseEventCompanion, VpsBaseEventAngleCorrectionEventCompanion, VpsBaseEventAngleCorrectionEvent, VpsBaseEventCompassHeadingEventCompanion, VpsBaseEventFloorChangeEventCompanion, VpsBaseEventFloorChangeEvent, VpsBaseEventGnssMeasurementEventCompanion, VpsBaseEventGnssMeasurementEvent, VpsBaseEventGyroCalibrationEventCompanion, VpsBaseEventGyroCalibrationEvent, VpsBaseEventLngLatEventCompanion, VpsBaseEventMagnetometerCalibrationEventCompanion, VpsBaseEventMagnetometerCalibrationEvent, VpsBaseEventModePredictionEventCompanion, VpsBaseEventModePredictionEvent, VpsBaseEventStairEventCompanion, VpsBaseEventStairEvent, VpsBaseEventStairPredictionEventCompanion, VpsBaseEventStairPredictionEvent, VpsBaseEventStartCompanion, VpsBaseEventStartStartType, VpsBaseEventStartLngLatEventCompanion, VpsBaseEventStartLngLatEvent, VpsBaseEventStartLngLatFixedNorthEventCompanion, VpsBaseEventStartLngLatFixedNorthEvent, VpsBaseEventStartPositionEventCompanion, VpsBaseEventStartPositionEvent, VpsBaseEventStartQuickStartEventCompanion, VpsBaseEventStartQuickStartEvent, VpsBaseEventStepEventCompanion, VpsBaseEventSyncCompanion, VpsBaseEventSyncSyncType, VpsBaseEventSync, VpsBaseEventSyncAccessPointFloorSwapSyncEventCompanion, VpsBaseEventSyncAccessPointFloorSwapSyncEvent, VpsBaseEventSyncForceEventCompanion, VpsBaseEventSyncForceEvent, VpsBaseEventSyncGNSSSyncEventCompanion, VpsBaseEventSyncGNSSSyncEvent, VpsBaseEventSyncLngLatEventCompanion, VpsBaseEventSyncLngLatEvent, VpsBaseEventSyncMagSprinkleEventCompanion, VpsBaseEventSyncMagSprinkleEvent, VpsBaseEventSyncManualSyncEventCompanion, VpsBaseEventSyncManualSyncEvent, VpsBaseEventSyncPositionEventCompanion, VpsBaseEventSyncPositionEvent, VpsBaseEventSyncStopEventCompanion, VpsBaseEventSyncStopEvent, VpsBaseEventWiFiObservationCompanion, VpsBaseEventWiFiScanCompanion, VpsBaseEventWifiStatusUpdateCompanion, VpsBaseEventSetConstellationsEventCompanion, VpsBaseEventSetConstellationsEvent, VpsInputSignalType, VpsInputSignalDeviceInfo, VpsInputSignalEnvironmentSignal, VpsInputSignalSpeedCalibrationAction, VpsInputSignalStartStartType, VpsInputSignalSyncSyncType, VpsOutputSignalCompanion, VpsOutputSignalType, VpsOutputSignalClearMLHistorySignalCompanion, VpsOutputSignalClusterSwapSignalCompanion, VpsOutputSignalConsistencyScoreSignalCompanion, VpsOutputSignalFloorChangeSignalCompanion, VpsOutputSignalLngLatLocationCompanion, VpsOutputSignalMLOutputPositionCompanion, VpsOutputSignalMagnetometerMapDataCompanion, VpsOutputSignalMagnetometerMapData, VpsOutputSignalModePredictionCompanion, VpsOutputSignalObservationCompanion, VpsOutputSignalObservation, VpsOutputSignalObservationGyroBiasCompanion, VpsOutputSignalParticleSignalCompanion, VpsOutputSignalPositionCompanion, VpsOutputSignalPositionActivityStateCompanion, VpsOutputSignalPositionStatusCompanion, VpsOutputSignalRescueModeSignalCompanion, VpsOutputSignalRotationCompanion, VpsOutputSignalRotationDeviationAngleCompanion, VpsOutputSignalSourceCompanion, VpsOutputSignalSpeedCalibrationCompanion, VpsOutputSignalSpeedCalibration, VpsOutputSignalSyncSignalCompanion, VpsOutputSignalTypeCompanion, VpsOutputSignalUXPositionStatus, VpsOutputSignalUXPositionCompanion, VpsOutputSignalUserInfoCompanion, VpsOutputSignalUserInfo, VpsOutputSignalUserInfoGnssAttackInfoCompanion, VpsOutputSignalUserInfoInsStatusCompanion, VpsOutputSignalUserInfoStatusCompanion, VpsKotlinError, VpsOutputSignalUserInfoVPSErrorCompanion, VpsOutputSignalWiFiFloorChangeSignalCompanion, VpsStepSurfaceTypeCompanion, VpsStepTypeCompanion, VpsSwapLocationSwapLocationPoint, VpsSwapLocationSwapLocationPath, VpsSwapLocationCompanion, VpsSwapLocationSwapLocationPathCompanion, VpsSwapLocationSwapLocationPathDirection, VpsSwapLocationSwapLocationPointCompanion, VpsADModelParams, VpsModeClassifierModelParams, VpsModeClassifierModelParamsFeaturesEntries, VpsNLModelParams, VpsVelocityModelParams, VpsTrustedPositionParamsVersion, VpsVPSTrustedPositionParams, VpsAccessPointCompanion, VpsAccessPointCoordinateCompanion, VpsWifiScanUpdateScanResult, VpsWifiScanUpdateCompanion, VpsWifiScanUpdateScanResultCompanion, VpsWifiStatusUpdateCompanion, VpsZoneType, VpsZoneCompanion, VpsZoneTypeCompanion, VpsVPSParams, VpsVPSParamsPackage, VpsKotlinDoubleIterator, VpsKotlinFloatIterator, VpsKotlinIntIterator, VpsInputSignalSensorData, VpsInputSignalStartPosition, VpsInputSignalSyncPosition, VpsInputSignalAngleCorrection, VpsInputSignalCompassHeading, VpsInputSignalEnvironmentSignalSetConstellations, VpsInputSignalEnvironmentSignalSetEphemerides, VpsInputSignalEnvironmentSignalSetMagneticField, VpsInputSignalEnvironmentSignalSetMagnetometerCalibration, VpsInputSignalExit, VpsInputSignalGnssMeasurements, VpsInputSignalGnssNavigationMessage, VpsInputSignalGyroCalibration, VpsInputSignalLngLat, VpsInputSignalManualMagnetometerCalibration, VpsInputSignalSetProfile, VpsInputSignalSpeedCalibration, VpsInputSignalSyncGNSSSync, VpsInputSignalSyncLngLat, VpsInputSignalSyncManualSync, VpsInputSignalSyncStop, VpsInputSignalFloorChange, VpsInputSignalStairInfo, VpsInputSignalStairPrediction, VpsInputSignalStartLngLat, VpsInputSignalStartLngLatFixedNorth, VpsInputSignalStartQuickStart, VpsInputSignalWifiScan, VpsInputSignalWifiStatus, VpsSatelliteVehicleKeplerian, VpsKotlinBooleanArray, VpsKotlinRandomDefault, VpsKotlinByteIterator, VpsKotlinBooleanIterator, VpsKotlinx_serialization_coreSerializersModule, VpsKotlinx_serialization_coreSerialKind, VpsKotlinNothing;

@protocol VpsIPathfinderGoal, VpsIPathfinderListener, VpsIPathfinder, VpsKotlinComparable, VpsIPathfinderPath, VpsKotlinx_serialization_coreKSerializer, VpsPositionEngineRepositoryRead, VpsPositionEngineRepositoryWrite, VpsPositionEngineRepository, VpsFlowConnection, VpsVPSOutputHandler, VpsFlowListener, VpsInAndOutListener, VpsNodeHandler, VpsADModel, VpsNLModel, VpsCoordinateConverter, VpsSatelliteVehicle, VpsFusionFilter, VpsEphemerisParams, VpsFilterInput, VpsRandomNumberGenerator, VpsAbstractParticleFilterRescueModeHelper, VpsVelocityModelHandler, VpsModeClassifierModelHandler, VpsVelocityModel, VpsModeClassifierModel, VpsTRFFusionListener, VpsNorthPredictorModel, VpsKotlinIterator, VpsVPSFloorLevel, VpsVPSLogOutputHandler, VpsUploader, VpsOutputSignalUserInfoSignal, VpsKotlinx_serialization_coreEncoder, VpsKotlinx_serialization_coreSerialDescriptor, VpsKotlinx_serialization_coreSerializationStrategy, VpsKotlinx_serialization_coreDecoder, VpsKotlinx_serialization_coreDeserializationStrategy, VpsKotlinx_serialization_coreCompositeEncoder, VpsKotlinAnnotation, VpsKotlinx_serialization_coreCompositeDecoder, VpsKotlinx_serialization_coreSerializersModuleCollector, VpsKotlinKClass, VpsKotlinKDeclarationContainer, VpsKotlinKAnnotatedElement, VpsKotlinKClassifier;

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
- (void)clearUserPosition __attribute__((swift_name("clearUserPosition()")));
- (void)dispose __attribute__((swift_name("dispose()")));
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
@property (readonly) VpsPathfinderCoordinateF * _Nullable startPosition __attribute__((swift_name("startPosition")));
@property (readonly) VpsPathfinderCoordinateF *stopPosition __attribute__((swift_name("stopPosition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasePathfinder")))
@interface VpsBasePathfinder : VpsBase <VpsIPathfinder>
- (instancetype)initWithHeightInPixels:(float)heightInPixels widthInPixels:(float)widthInPixels pixelsPerMeter:(float)pixelsPerMeter navGraph:(VpsNavGraph *)navGraph pathRefreshDistance:(float)pathRefreshDistance pathProcess:(VpsPathProcessorPathProcess *)pathProcess windowSize:(int32_t)windowSize startPosition:(VpsPathfinderCoordinateF * _Nullable)startPosition stopPosition:(VpsPathfinderCoordinateF *)stopPosition __attribute__((swift_name("init(heightInPixels:widthInPixels:pixelsPerMeter:navGraph:pathRefreshDistance:pathProcess:windowSize:startPosition:stopPosition:)"))) __attribute__((objc_designated_initializer));
- (void)addGoalGoal:(id<VpsIPathfinderGoal>)goal callback:(void (^ _Nullable)(void))callback __attribute__((swift_name("addGoal(goal:callback:)")));
- (void)addGoalsGoals:(id)goals callback:(void (^ _Nullable)(void))callback __attribute__((swift_name("addGoals(goals:callback:)")));
- (void)addListenerListener:(id<VpsIPathfinderListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (void)clearUserPosition __attribute__((swift_name("clearUserPosition()")));
- (void)dispose __attribute__((swift_name("dispose()")));
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
@property (readonly) VpsPathfinderCoordinateF * _Nullable startPosition __attribute__((swift_name("startPosition")));
@property (readonly) VpsPathfinderCoordinateF *stopPosition __attribute__((swift_name("stopPosition")));
@property (readonly) float widthInPixels __attribute__((swift_name("widthInPixels")));
@property (readonly) int32_t windowSize __attribute__((swift_name("windowSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DjikstrasOptimized")))
@interface VpsDjikstrasOptimized : VpsBase
- (instancetype)initWithGraph:(VpsNavGraph * _Nullable)graph __attribute__((swift_name("init(graph:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsDjikstrasOptimizedCompanion *companion __attribute__((swift_name("companion")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (NSArray<VpsPathfinderCoordinateF *> * _Nullable)getPixelScalePathFrom:(VpsPathfinderCoordinateF *)from to:(VpsPathfinderCoordinateF *)to __attribute__((swift_name("getPixelScalePath(from:to:)")));
- (void)resetHistory __attribute__((swift_name("resetHistory()")));
@property VpsDjikstrasOptimizedOldNodeGraph * _Nullable currentGoalGraph __attribute__((swift_name("currentGoalGraph")));
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
- (void)dispose __attribute__((swift_name("dispose()")));
@property (readonly) VpsMutableDictionary<NSString *, id> *cameFrom __attribute__((swift_name("cameFrom")));
@property (readonly) VpsMutableDictionary<NSString *, VpsInt *> *costSoFar __attribute__((swift_name("costSoFar")));
@property VpsPriorityQueueUsingSinglyLinkedList<VpsNavGraphVertex *> * _Nullable frontier __attribute__((swift_name("frontier")));
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
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) VpsTSPThreeOptAlgorithmCompanion *companion __attribute__((swift_name("companion")));
- (void)shuffle:(VpsKotlinIntArray *)receiver random:(VpsKotlinRandom *)random __attribute__((swift_name("shuffle(_:random:)")));
- (VpsKotlinIntArray *)solveSize:(int32_t)size dist:(VpsKotlinArray<VpsKotlinDoubleArray *> *)dist nodes:(VpsKotlinArray<VpsKotlinPair<VpsDouble *, VpsDouble *> *> *)nodes __attribute__((swift_name("solve(size:dist:nodes:)")));
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
- (void)onGoalsUpdatedGoals:(NSArray<id<VpsIPathfinderGoal>> *)goals __attribute__((swift_name("onGoalsUpdated(goals:)")));
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
- (void)dispose __attribute__((swift_name("dispose()")));
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
- (void)dispose __attribute__((swift_name("dispose()")));
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

__attribute__((swift_name("PositionEngineRepositoryRead")))
@protocol VpsPositionEngineRepositoryRead
@required
@property (readonly) VpsCoordinateF * _Nullable currentBacktrackPosition __attribute__((swift_name("currentBacktrackPosition")));
@property (readonly) VpsSwapLocation * _Nullable currentClosestSwapLocationToAP __attribute__((swift_name("currentClosestSwapLocationToAP")));
@property (readonly) VpsBaseEventCompassHeadingEvent * _Nullable currentCompassHeadingEvent __attribute__((swift_name("currentCompassHeadingEvent")));
@property (readonly) VpsDeviationTable *currentDeviationTable __attribute__((swift_name("currentDeviationTable")));
@property (readonly) BOOL currentDidSync __attribute__((swift_name("currentDidSync")));
@property (readonly) float currentDistanceTraveled __attribute__((swift_name("currentDistanceTraveled")));
@property (readonly) VpsEphemerideData * _Nullable currentEphemeridesData __attribute__((swift_name("currentEphemeridesData")));
@property (readonly) float currentGNSSAngleAdjustment __attribute__((swift_name("currentGNSSAngleAdjustment")));
@property (readonly) NSArray<VpsGNSSAttack *> *currentGNSSAttacks __attribute__((swift_name("currentGNSSAttacks")));
@property (readonly) VpsMagInfo * _Nullable currentMagInfo __attribute__((swift_name("currentMagInfo")));
@property (readonly) VpsFloat * _Nullable currentMagneticDeviation __attribute__((swift_name("currentMagneticDeviation")));
@property (readonly) VpsFloat * _Nullable currentMagneticDeviationFast __attribute__((swift_name("currentMagneticDeviationFast")));
@property (readonly) VpsFloat * _Nullable currentMagneticDeviationOutdoors __attribute__((swift_name("currentMagneticDeviationOutdoors")));
@property (readonly) VpsMagneticField * _Nullable currentMagneticField __attribute__((swift_name("currentMagneticField")));
@property (readonly) NSArray<VpsKotlinDoubleArray *> * _Nullable currentMagnetometerCalibrationMatrix __attribute__((swift_name("currentMagnetometerCalibrationMatrix")));
@property (readonly) VpsInt * _Nullable currentMagnetometerTimeLagMS __attribute__((swift_name("currentMagnetometerTimeLagMS")));
@property (readonly) float currentOrientationFilterOffset __attribute__((swift_name("currentOrientationFilterOffset")));
@property (readonly) VpsCoordinateF *currentPosition __attribute__((swift_name("currentPosition")));
@property (readonly) VpsOutputSignalPositionActivityState *currentPositionActivityState __attribute__((swift_name("currentPositionActivityState")));
@property (readonly) float currentPositionSTD __attribute__((swift_name("currentPositionSTD")));
@property (readonly) VpsOutputSignalPositionStatus *currentPositionStatus __attribute__((swift_name("currentPositionStatus")));
@property (readonly) BOOL currentPositionTrusted __attribute__((swift_name("currentPositionTrusted")));
@property (readonly) VpsKotlinFloatArray * _Nullable currentQuaternion __attribute__((swift_name("currentQuaternion")));
@property (readonly) VpsFloat * _Nullable currentRotation __attribute__((swift_name("currentRotation")));
@property (readonly) VpsMutableDictionary<VpsConstellationType *, VpsMutableDictionary<NSString *, id> *> *currentSatelliteVehicles __attribute__((swift_name("currentSatelliteVehicles")));
@property (readonly) VpsKotlinPair<VpsFloat *, VpsFloat *> *currentSpeedCalibrationAccumulators __attribute__((swift_name("currentSpeedCalibrationAccumulators")));
@property (readonly) VpsStepType *currentStepType __attribute__((swift_name("currentStepType")));
@property (readonly) VpsKotlinPair<VpsMaxQueue<VpsFloat *> *, VpsMaxQueue<VpsFloat *> *> * _Nullable currentVelocityQueues __attribute__((swift_name("currentVelocityQueues")));
@property (readonly) VpsBaseEventWiFiObservation * _Nullable currentWiFiObservation __attribute__((swift_name("currentWiFiObservation")));
@property (readonly) VpsBaseEventWiFiScan * _Nullable currentWiFiScan __attribute__((swift_name("currentWiFiScan")));
@property (readonly) NSString *deviceModel __attribute__((swift_name("deviceModel")));
@property (readonly) VpsFloorChangeInterpreterType * _Nullable floorChangeInterpreterType __attribute__((swift_name("floorChangeInterpreterType")));
@property (readonly) BOOL hasDoneAngleCorrection __attribute__((swift_name("hasDoneAngleCorrection")));
@property (readonly) BOOL insReady __attribute__((swift_name("insReady")));
@property (readonly) BOOL isCalibratingGyro __attribute__((swift_name("isCalibratingGyro")));
@property (readonly) BOOL isCalibratingMagnetometer __attribute__((swift_name("isCalibratingMagnetometer")));
@property (readonly) BOOL isCalibratingSpeed __attribute__((swift_name("isCalibratingSpeed")));
@property (readonly) BOOL isTooLargeKFInnovation __attribute__((swift_name("isTooLargeKFInnovation")));
@property (readonly) BOOL isUncertainStartAngle __attribute__((swift_name("isUncertainStartAngle")));
@property (readonly) BOOL justGotWiFiScan __attribute__((swift_name("justGotWiFiScan")));
@property (readonly) VpsCoordinateF *lastStartPosition __attribute__((swift_name("lastStartPosition")));
@property (readonly) VpsKotlinDoubleArray * _Nullable navigationFrameTransform __attribute__((swift_name("navigationFrameTransform")));
@property (readonly) float originalStartAngleRadian __attribute__((swift_name("originalStartAngleRadian")));
@property (readonly) VpsVPSProfile * _Nullable profile __attribute__((swift_name("profile")));
@property (readonly) BOOL recentFloorSwap __attribute__((swift_name("recentFloorSwap")));
@property (readonly) BOOL recentOutOfBounds __attribute__((swift_name("recentOutOfBounds")));
@property (readonly) BOOL recentRescueMode __attribute__((swift_name("recentRescueMode")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) BOOL temperatureBiasInUse __attribute__((swift_name("temperatureBiasInUse")));
@end

__attribute__((swift_name("PositionEngineRepositoryWrite")))
@protocol VpsPositionEngineRepositoryWrite
@required
- (void)addDistanceTraveledMagnitude:(float)magnitude __attribute__((swift_name("addDistanceTraveled(magnitude:)")));
- (void)addSpeedCalibrationAccumulatorsAccumulators:(VpsKotlinPair<VpsFloat *, VpsFloat *> *)accumulators __attribute__((swift_name("addSpeedCalibrationAccumulators(accumulators:)")));
- (void)resetSpeedCalibrationAccumulators __attribute__((swift_name("resetSpeedCalibrationAccumulators()")));
- (void)setCurrentBacktrackPositionBacktrackPosition:(VpsCoordinateF * _Nullable)backtrackPosition __attribute__((swift_name("setCurrentBacktrackPosition(backtrackPosition:)")));
- (void)setCurrentClosestSwapLocationToAPSwapLocation:(VpsSwapLocation *)swapLocation __attribute__((swift_name("setCurrentClosestSwapLocationToAP(swapLocation:)")));
- (void)setCurrentCompassHeadingEventCompassHeadingEvent:(VpsBaseEventCompassHeadingEvent *)compassHeadingEvent __attribute__((swift_name("setCurrentCompassHeadingEvent(compassHeadingEvent:)")));
- (void)setCurrentGNSSAngleAdjustmentAngleAdjustment:(float)angleAdjustment __attribute__((swift_name("setCurrentGNSSAngleAdjustment(angleAdjustment:)")));
- (void)setCurrentMagInfoMagInfo:(VpsMagInfo *)magInfo __attribute__((swift_name("setCurrentMagInfo(magInfo:)")));
- (void)setCurrentMagneticDeviationDeviationAngle:(float)deviationAngle __attribute__((swift_name("setCurrentMagneticDeviation(deviationAngle:)")));
- (void)setCurrentMagneticDeviationFastDeviationAngle:(float)deviationAngle __attribute__((swift_name("setCurrentMagneticDeviationFast(deviationAngle:)")));
- (void)setCurrentMagneticDeviationOutdoorsDeviationAngle:(VpsFloat * _Nullable)deviationAngle __attribute__((swift_name("setCurrentMagneticDeviationOutdoors(deviationAngle:)")));
- (void)setCurrentOrientationFilterOffsetOffset:(float)offset __attribute__((swift_name("setCurrentOrientationFilterOffset(offset:)")));
- (void)setCurrentPositionPosition:(VpsCoordinateF *)position __attribute__((swift_name("setCurrentPosition(position:)")));
- (void)setCurrentPositionActivityStateState:(VpsOutputSignalPositionActivityState *)state __attribute__((swift_name("setCurrentPositionActivityState(state:)")));
- (void)setCurrentPositionSTDStd:(float)std __attribute__((swift_name("setCurrentPositionSTD(std:)")));
- (void)setCurrentPositionStatusStatus:(VpsOutputSignalPositionStatus *)status __attribute__((swift_name("setCurrentPositionStatus(status:)")));
- (void)setCurrentPositionTrustedTrusted:(BOOL)trusted __attribute__((swift_name("setCurrentPositionTrusted(trusted:)")));
- (void)setCurrentQuaternionQ:(VpsKotlinFloatArray * _Nullable)q __attribute__((swift_name("setCurrentQuaternion(q:)")));
- (void)setCurrentRotationRotation:(float)rotation __attribute__((swift_name("setCurrentRotation(rotation:)")));
- (void)setCurrentStepTypeStepType:(VpsStepType *)stepType __attribute__((swift_name("setCurrentStepType(stepType:)")));
- (void)setCurrentWifiObservationWiFiObservation:(VpsBaseEventWiFiObservation * _Nullable)wiFiObservation __attribute__((swift_name("setCurrentWifiObservation(wiFiObservation:)")));
- (void)setCurrentWifiScanWifiScan:(VpsBaseEventWiFiScan * _Nullable)wifiScan __attribute__((swift_name("setCurrentWifiScan(wifiScan:)")));
- (void)setDeviationTableToleranceTol:(float)tol __attribute__((swift_name("setDeviationTableTolerance(tol:)")));
- (void)setDeviceModelDeviceModel:(NSString *)deviceModel __attribute__((swift_name("setDeviceModel(deviceModel:)")));
- (void)setDidSyncDidSync:(BOOL)didSync __attribute__((swift_name("setDidSync(didSync:)")));
- (void)setEphemeridesEphemerideData:(VpsEphemerideData *)ephemerideData __attribute__((swift_name("setEphemerides(ephemerideData:)")));
- (void)setFloorChangeInterpreterTypeType:(VpsFloorChangeInterpreterType *)type __attribute__((swift_name("setFloorChangeInterpreterType(type:)")));
- (void)setHasDoneAngleCorrectionHasDoneAngleCorrection:(BOOL)hasDoneAngleCorrection __attribute__((swift_name("setHasDoneAngleCorrection(hasDoneAngleCorrection:)")));
- (void)setINSReadyInsReady:(BOOL)insReady __attribute__((swift_name("setINSReady(insReady:)")));
- (void)setIsCalibratingGyroIsCalibratingGyro:(BOOL)isCalibratingGyro __attribute__((swift_name("setIsCalibratingGyro(isCalibratingGyro:)")));
- (void)setIsCalibratingMagnetometerIsCalibratingMagnetometer:(BOOL)isCalibratingMagnetometer __attribute__((swift_name("setIsCalibratingMagnetometer(isCalibratingMagnetometer:)")));
- (void)setIsCalibratingSpeedIsCalibratingSpeed:(BOOL)isCalibratingSpeed __attribute__((swift_name("setIsCalibratingSpeed(isCalibratingSpeed:)")));
- (void)setIsUncertainStartAngleIsUncertainStartAngle:(BOOL)isUncertainStartAngle __attribute__((swift_name("setIsUncertainStartAngle(isUncertainStartAngle:)")));
- (void)setJustGotWiFiScanInput:(BOOL)input __attribute__((swift_name("setJustGotWiFiScan(input:)")));
- (void)setLastStartPositionLastStartPosition:(VpsCoordinateF *)lastStartPosition __attribute__((swift_name("setLastStartPosition(lastStartPosition:)")));
- (void)setMagneticFieldMagneticField:(VpsMagneticField *)magneticField __attribute__((swift_name("setMagneticField(magneticField:)")));
- (void)setMagnetometerCalibrationMagnetometerCalibration:(VpsMagnetometerCalibration *)magnetometerCalibration __attribute__((swift_name("setMagnetometerCalibration(magnetometerCalibration:)")));
- (void)setNavigationFrameTransformNavigationFrameTransform:(VpsKotlinDoubleArray *)navigationFrameTransform __attribute__((swift_name("setNavigationFrameTransform(navigationFrameTransform:)")));
- (void)setOriginalStartAngleRadianAngle:(float)angle __attribute__((swift_name("setOriginalStartAngleRadian(angle:)")));
- (void)setProfileProfile:(VpsVPSProfile * _Nullable)profile __attribute__((swift_name("setProfile(profile:)")));
- (void)setRecentFloorSwapRecent:(BOOL)recent __attribute__((swift_name("setRecentFloorSwap(recent:)")));
- (void)setRecentOutOfBoundsRecent:(BOOL)recent __attribute__((swift_name("setRecentOutOfBounds(recent:)")));
- (void)setRecentRescueModeRecent:(BOOL)recent __attribute__((swift_name("setRecentRescueMode(recent:)")));
- (void)setSessionIdId:(NSString *)id __attribute__((swift_name("setSessionId(id:)")));
- (void)setTemperatureBiasInUseInUse:(BOOL)inUse __attribute__((swift_name("setTemperatureBiasInUse(inUse:)")));
- (void)setVelocityHistoryDisplacementQueue:(VpsMaxQueue<VpsFloat *> *)displacementQueue directionQueue:(VpsMaxQueue<VpsFloat *> *)directionQueue __attribute__((swift_name("setVelocityHistory(displacementQueue:directionQueue:)")));
- (void)updateCurrentGNSSAttacksAttacks:(NSArray<VpsGNSSAttack *> *)attacks __attribute__((swift_name("updateCurrentGNSSAttacks(attacks:)")));
- (void)updateDeviationTableDirection:(float)direction deviation:(float)deviation __attribute__((swift_name("updateDeviationTable(direction:deviation:)")));
- (void)updateIsTooLargeKFInnovationIsTooLarge:(BOOL)isTooLarge __attribute__((swift_name("updateIsTooLargeKFInnovation(isTooLarge:)")));
- (void)updateSatelliteVehiclesEphemerideData:(VpsEphemerideData *)ephemerideData __attribute__((swift_name("updateSatelliteVehicles(ephemerideData:)")));
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
- (void)addDistanceTraveledMagnitude:(float)magnitude __attribute__((swift_name("addDistanceTraveled(magnitude:)")));
- (void)addSpeedCalibrationAccumulatorsAccumulators:(VpsKotlinPair<VpsFloat *, VpsFloat *> *)accumulators __attribute__((swift_name("addSpeedCalibrationAccumulators(accumulators:)")));
- (void)resetSpeedCalibrationAccumulators __attribute__((swift_name("resetSpeedCalibrationAccumulators()")));
- (void)setCurrentBacktrackPositionBacktrackPosition:(VpsCoordinateF * _Nullable)backtrackPosition __attribute__((swift_name("setCurrentBacktrackPosition(backtrackPosition:)")));
- (void)setCurrentClosestSwapLocationToAPSwapLocation:(VpsSwapLocation *)swapLocation __attribute__((swift_name("setCurrentClosestSwapLocationToAP(swapLocation:)")));
- (void)setCurrentCompassHeadingEventCompassHeadingEvent:(VpsBaseEventCompassHeadingEvent *)compassHeadingEvent __attribute__((swift_name("setCurrentCompassHeadingEvent(compassHeadingEvent:)")));
- (void)setCurrentGNSSAngleAdjustmentAngleAdjustment:(float)angleAdjustment __attribute__((swift_name("setCurrentGNSSAngleAdjustment(angleAdjustment:)")));
- (void)setCurrentMagInfoMagInfo:(VpsMagInfo *)magInfo __attribute__((swift_name("setCurrentMagInfo(magInfo:)")));
- (void)setCurrentMagneticDeviationDeviationAngle:(float)deviationAngle __attribute__((swift_name("setCurrentMagneticDeviation(deviationAngle:)")));
- (void)setCurrentMagneticDeviationFastDeviationAngle:(float)deviationAngle __attribute__((swift_name("setCurrentMagneticDeviationFast(deviationAngle:)")));
- (void)setCurrentMagneticDeviationOutdoorsDeviationAngle:(VpsFloat * _Nullable)deviationAngle __attribute__((swift_name("setCurrentMagneticDeviationOutdoors(deviationAngle:)")));
- (void)setCurrentOrientationFilterOffsetOffset:(float)offset __attribute__((swift_name("setCurrentOrientationFilterOffset(offset:)")));
- (void)setCurrentPositionPosition:(VpsCoordinateF *)position __attribute__((swift_name("setCurrentPosition(position:)")));
- (void)setCurrentPositionActivityStateState:(VpsOutputSignalPositionActivityState *)state __attribute__((swift_name("setCurrentPositionActivityState(state:)")));
- (void)setCurrentPositionSTDStd:(float)std __attribute__((swift_name("setCurrentPositionSTD(std:)")));
- (void)setCurrentPositionStatusStatus:(VpsOutputSignalPositionStatus *)status __attribute__((swift_name("setCurrentPositionStatus(status:)")));
- (void)setCurrentPositionTrustedTrusted:(BOOL)trusted __attribute__((swift_name("setCurrentPositionTrusted(trusted:)")));
- (void)setCurrentQuaternionQ:(VpsKotlinFloatArray * _Nullable)q __attribute__((swift_name("setCurrentQuaternion(q:)")));
- (void)setCurrentRotationRotation:(float)rotation __attribute__((swift_name("setCurrentRotation(rotation:)")));
- (void)setCurrentStepTypeStepType:(VpsStepType *)stepType __attribute__((swift_name("setCurrentStepType(stepType:)")));
- (void)setCurrentWifiObservationWiFiObservation:(VpsBaseEventWiFiObservation * _Nullable)wiFiObservation __attribute__((swift_name("setCurrentWifiObservation(wiFiObservation:)")));
- (void)setCurrentWifiScanWifiScan:(VpsBaseEventWiFiScan * _Nullable)wifiScan __attribute__((swift_name("setCurrentWifiScan(wifiScan:)")));
- (void)setDeviationTableToleranceTol:(float)tol __attribute__((swift_name("setDeviationTableTolerance(tol:)")));
- (void)setDeviceModelDeviceModel:(NSString *)deviceModel __attribute__((swift_name("setDeviceModel(deviceModel:)")));
- (void)setDidSyncDidSync:(BOOL)didSync __attribute__((swift_name("setDidSync(didSync:)")));
- (void)setEphemeridesEphemerideData:(VpsEphemerideData *)ephemerideData __attribute__((swift_name("setEphemerides(ephemerideData:)")));
- (void)setFloorChangeInterpreterTypeType:(VpsFloorChangeInterpreterType *)type __attribute__((swift_name("setFloorChangeInterpreterType(type:)")));
- (void)setHasDoneAngleCorrectionHasDoneAngleCorrection:(BOOL)hasDoneAngleCorrection __attribute__((swift_name("setHasDoneAngleCorrection(hasDoneAngleCorrection:)")));
- (void)setINSReadyInsReady:(BOOL)insReady __attribute__((swift_name("setINSReady(insReady:)")));
- (void)setIsCalibratingGyroIsCalibratingGyro:(BOOL)isCalibratingGyro __attribute__((swift_name("setIsCalibratingGyro(isCalibratingGyro:)")));
- (void)setIsCalibratingMagnetometerIsCalibratingMagnetometer:(BOOL)isCalibratingMagnetometer __attribute__((swift_name("setIsCalibratingMagnetometer(isCalibratingMagnetometer:)")));
- (void)setIsCalibratingSpeedIsCalibratingSpeed:(BOOL)isCalibratingSpeed __attribute__((swift_name("setIsCalibratingSpeed(isCalibratingSpeed:)")));
- (void)setIsUncertainStartAngleIsUncertainStartAngle:(BOOL)isUncertainStartAngle __attribute__((swift_name("setIsUncertainStartAngle(isUncertainStartAngle:)")));
- (void)setJustGotWiFiScanInput:(BOOL)input __attribute__((swift_name("setJustGotWiFiScan(input:)")));
- (void)setLastStartPositionLastStartPosition:(VpsCoordinateF *)lastStartPosition __attribute__((swift_name("setLastStartPosition(lastStartPosition:)")));
- (void)setMagneticFieldMagneticField:(VpsMagneticField *)magneticField __attribute__((swift_name("setMagneticField(magneticField:)")));
- (void)setMagnetometerCalibrationMagnetometerCalibration:(VpsMagnetometerCalibration *)magnetometerCalibration __attribute__((swift_name("setMagnetometerCalibration(magnetometerCalibration:)")));
- (void)setNavigationFrameTransformNavigationFrameTransform:(VpsKotlinDoubleArray *)navigationFrameTransform __attribute__((swift_name("setNavigationFrameTransform(navigationFrameTransform:)")));
- (void)setOriginalStartAngleRadianAngle:(float)angle __attribute__((swift_name("setOriginalStartAngleRadian(angle:)")));
- (void)setProfileProfile:(VpsVPSProfile * _Nullable)profile __attribute__((swift_name("setProfile(profile:)")));
- (void)setRecentFloorSwapRecent:(BOOL)recent __attribute__((swift_name("setRecentFloorSwap(recent:)")));
- (void)setRecentOutOfBoundsRecent:(BOOL)recent __attribute__((swift_name("setRecentOutOfBounds(recent:)")));
- (void)setRecentRescueModeRecent:(BOOL)recent __attribute__((swift_name("setRecentRescueMode(recent:)")));
- (void)setSessionIdId:(NSString *)id __attribute__((swift_name("setSessionId(id:)")));
- (void)setTemperatureBiasInUseInUse:(BOOL)inUse __attribute__((swift_name("setTemperatureBiasInUse(inUse:)")));
- (void)setVelocityHistoryDisplacementQueue:(VpsMaxQueue<VpsFloat *> *)displacementQueue directionQueue:(VpsMaxQueue<VpsFloat *> *)directionQueue __attribute__((swift_name("setVelocityHistory(displacementQueue:directionQueue:)")));
- (void)updateCurrentGNSSAttacksAttacks:(NSArray<VpsGNSSAttack *> *)attacks __attribute__((swift_name("updateCurrentGNSSAttacks(attacks:)")));
- (void)updateDeviationTableDirection:(float)direction deviation:(float)deviation __attribute__((swift_name("updateDeviationTable(direction:deviation:)")));
- (void)updateIsTooLargeKFInnovationIsTooLarge:(BOOL)isTooLarge __attribute__((swift_name("updateIsTooLargeKFInnovation(isTooLarge:)")));
- (void)updateSatelliteVehiclesEphemerideData:(VpsEphemerideData *)ephemerideData __attribute__((swift_name("updateSatelliteVehicles(ephemerideData:)")));
@property (readonly) VpsCoordinateF * _Nullable currentBacktrackPosition __attribute__((swift_name("currentBacktrackPosition")));
@property (readonly) VpsSwapLocation * _Nullable currentClosestSwapLocationToAP __attribute__((swift_name("currentClosestSwapLocationToAP")));
@property (readonly) VpsBaseEventCompassHeadingEvent * _Nullable currentCompassHeadingEvent __attribute__((swift_name("currentCompassHeadingEvent")));
@property (readonly) VpsDeviationTable *currentDeviationTable __attribute__((swift_name("currentDeviationTable")));
@property (readonly) BOOL currentDidSync __attribute__((swift_name("currentDidSync")));
@property (readonly) float currentDistanceTraveled __attribute__((swift_name("currentDistanceTraveled")));
@property (readonly) VpsEphemerideData * _Nullable currentEphemeridesData __attribute__((swift_name("currentEphemeridesData")));
@property (readonly) float currentGNSSAngleAdjustment __attribute__((swift_name("currentGNSSAngleAdjustment")));
@property (readonly) NSArray<VpsGNSSAttack *> *currentGNSSAttacks __attribute__((swift_name("currentGNSSAttacks")));
@property (readonly) VpsMagInfo * _Nullable currentMagInfo __attribute__((swift_name("currentMagInfo")));
@property (readonly) VpsFloat * _Nullable currentMagneticDeviation __attribute__((swift_name("currentMagneticDeviation")));
@property (readonly) VpsFloat * _Nullable currentMagneticDeviationFast __attribute__((swift_name("currentMagneticDeviationFast")));
@property (readonly) VpsFloat * _Nullable currentMagneticDeviationOutdoors __attribute__((swift_name("currentMagneticDeviationOutdoors")));
@property (readonly) VpsMagneticField * _Nullable currentMagneticField __attribute__((swift_name("currentMagneticField")));
@property (readonly) NSArray<VpsKotlinDoubleArray *> * _Nullable currentMagnetometerCalibrationMatrix __attribute__((swift_name("currentMagnetometerCalibrationMatrix")));
@property (readonly) VpsInt * _Nullable currentMagnetometerTimeLagMS __attribute__((swift_name("currentMagnetometerTimeLagMS")));
@property (readonly) float currentOrientationFilterOffset __attribute__((swift_name("currentOrientationFilterOffset")));
@property (readonly) VpsCoordinateF *currentPosition __attribute__((swift_name("currentPosition")));
@property (readonly) VpsOutputSignalPositionActivityState *currentPositionActivityState __attribute__((swift_name("currentPositionActivityState")));
@property (readonly) float currentPositionSTD __attribute__((swift_name("currentPositionSTD")));
@property (readonly) VpsOutputSignalPositionStatus *currentPositionStatus __attribute__((swift_name("currentPositionStatus")));
@property (readonly) BOOL currentPositionTrusted __attribute__((swift_name("currentPositionTrusted")));
@property (readonly) VpsKotlinFloatArray * _Nullable currentQuaternion __attribute__((swift_name("currentQuaternion")));
@property (readonly) VpsFloat * _Nullable currentRotation __attribute__((swift_name("currentRotation")));
@property (readonly) VpsMutableDictionary<VpsConstellationType *, VpsMutableDictionary<NSString *, id> *> *currentSatelliteVehicles __attribute__((swift_name("currentSatelliteVehicles")));
@property (readonly) VpsKotlinPair<VpsFloat *, VpsFloat *> *currentSpeedCalibrationAccumulators __attribute__((swift_name("currentSpeedCalibrationAccumulators")));
@property (readonly) VpsStepType *currentStepType __attribute__((swift_name("currentStepType")));
@property (readonly) VpsKotlinPair<VpsMaxQueue<VpsFloat *> *, VpsMaxQueue<VpsFloat *> *> * _Nullable currentVelocityQueues __attribute__((swift_name("currentVelocityQueues")));
@property (readonly) VpsBaseEventWiFiObservation * _Nullable currentWiFiObservation __attribute__((swift_name("currentWiFiObservation")));
@property (readonly) VpsBaseEventWiFiScan * _Nullable currentWiFiScan __attribute__((swift_name("currentWiFiScan")));
@property (readonly) NSString *deviceModel __attribute__((swift_name("deviceModel")));
@property (readonly) VpsFloorChangeInterpreterType * _Nullable floorChangeInterpreterType __attribute__((swift_name("floorChangeInterpreterType")));
@property (readonly) BOOL hasDoneAngleCorrection __attribute__((swift_name("hasDoneAngleCorrection")));
@property (readonly) BOOL insReady __attribute__((swift_name("insReady")));
@property (readonly) BOOL isCalibratingGyro __attribute__((swift_name("isCalibratingGyro")));
@property (readonly) BOOL isCalibratingMagnetometer __attribute__((swift_name("isCalibratingMagnetometer")));
@property (readonly) BOOL isCalibratingSpeed __attribute__((swift_name("isCalibratingSpeed")));
@property (readonly) BOOL isTooLargeKFInnovation __attribute__((swift_name("isTooLargeKFInnovation")));
@property (readonly) BOOL isUncertainStartAngle __attribute__((swift_name("isUncertainStartAngle")));
@property (readonly) BOOL justGotWiFiScan __attribute__((swift_name("justGotWiFiScan")));
@property (readonly) VpsCoordinateF *lastStartPosition __attribute__((swift_name("lastStartPosition")));
@property (readonly) VpsKotlinDoubleArray * _Nullable navigationFrameTransform __attribute__((swift_name("navigationFrameTransform")));
@property (readonly) float originalStartAngleRadian __attribute__((swift_name("originalStartAngleRadian")));
@property (readonly) VpsVPSProfile * _Nullable profile __attribute__((swift_name("profile")));
@property (readonly) BOOL recentFloorSwap __attribute__((swift_name("recentFloorSwap")));
@property (readonly) BOOL recentOutOfBounds __attribute__((swift_name("recentOutOfBounds")));
@property (readonly) BOOL recentRescueMode __attribute__((swift_name("recentRescueMode")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) BOOL temperatureBiasInUse __attribute__((swift_name("temperatureBiasInUse")));
@end

__attribute__((swift_name("FlowConnection")))
@protocol VpsFlowConnection
@required
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(id _Nullable)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputCentral")))
@interface VpsOutputCentral : VpsBase <VpsFlowConnection>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(VpsOutputSignal *)data __attribute__((swift_name("onInput(data:)")));
- (void)setMagnetometerMappingEngineMagnetometerMappingEngine:(VpsMagnetometerMappingEngine * _Nullable)magnetometerMappingEngine __attribute__((swift_name("setMagnetometerMappingEngine(magnetometerMappingEngine:)")));
- (void)setVPSOutputHandlerVpsOutputHandler:(id<VpsVPSOutputHandler> _Nullable)vpsOutputHandler __attribute__((swift_name("setVPSOutputHandler(vpsOutputHandler:)")));
@end

__attribute__((swift_name("FlowConverter")))
@interface VpsFlowConverter<T, S> : VpsBase <VpsFlowConnection>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsFlowConverter<T, S> *)connectToConnections:(NSArray<id<VpsFlowConnection>> *)connections __attribute__((swift_name("connectTo(connections:)")));
- (VpsFlowConverter<T, S> *)connectToConnection:(id<VpsFlowConnection>)connection __attribute__((swift_name("connectTo(connection:)")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)outputData:(S _Nullable)data __attribute__((swift_name("output(data:)")));
- (VpsFlowConverter<T, S> *)setListenerConsumer:(id<VpsFlowListener>)consumer __attribute__((swift_name("setListener(consumer:)")));
- (VpsFlowConverter<T, S> *)setListenersConsumers:(NSArray<id<VpsFlowListener>> *)consumers __attribute__((swift_name("setListeners(consumers:)")));
@property (readonly) NSArray<id<VpsFlowConnection>> *connections __attribute__((swift_name("connections")));
@property (readonly) NSArray<id<VpsFlowListener>> *listeners __attribute__((swift_name("listeners")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorChangeInterpreter")))
@interface VpsFloorChangeInterpreter : VpsFlowConverter<VpsRawSensorData *, VpsFloorChangeSignal *>
- (instancetype)initWithSystem:(VpsVPSParamsSystem *)system floorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler floorChangeInterpreterSettings:(VpsFloorChangeInterpreterSettings *)floorChangeInterpreterSettings __attribute__((swift_name("init(system:floorLevelHandler:floorChangeInterpreterSettings:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)doInit __attribute__((swift_name("doInit()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
- (void)onInputEvent:(VpsBaseEvent *)event __attribute__((swift_name("onInput(event:)")));
@property (readonly) VpsFloorLevelHandler *floorLevelHandler __attribute__((swift_name("floorLevelHandler")));
@property (readonly) VpsVPSParamsSystem *system __attribute__((swift_name("system")));
@end

__attribute__((swift_name("FlowConverterBuilder")))
@interface VpsFlowConverterBuilder<T, S> : VpsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (T _Nullable)build __attribute__((swift_name("build()")));
@property NSMutableArray<id<VpsFlowConnection>> *builderConnections __attribute__((swift_name("builderConnections")));
@property NSMutableArray<id<VpsFlowListener>> *builderListeners __attribute__((swift_name("builderListeners")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorChangeInterpreter.Builder")))
@interface VpsFloorChangeInterpreterBuilder : VpsFlowConverterBuilder<VpsFloorChangeInterpreter *, VpsFloorChangeSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsFloorChangeInterpreter *)build __attribute__((swift_name("build()")));
- (VpsFloorChangeInterpreterBuilder *)setFloorHandlerSettingsFloorChangeInterpreterSettings:(VpsFloorChangeInterpreterSettings *)floorChangeInterpreterSettings __attribute__((swift_name("setFloorHandlerSettings(floorChangeInterpreterSettings:)")));
- (VpsFloorChangeInterpreterBuilder *)setFloorLevelHandlerFloorLevelHandler:(VpsFloorLevelHandler * _Nullable)floorLevelHandler __attribute__((swift_name("setFloorLevelHandler(floorLevelHandler:)")));
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
- (instancetype)initWithFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository listener:(void (^ _Nullable)(VpsInputSignal *))listener __attribute__((swift_name("init(floorLevelHandler:positionEngineRepository:listener:)"))) __attribute__((objc_designated_initializer));
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
@property (readonly) id<VpsPositionEngineRepository> positionEngineRepository __attribute__((swift_name("positionEngineRepository")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorChangeController.Builder")))
@interface VpsFloorChangeControllerBuilder : VpsFlowConverterBuilder<VpsFloorChangeController *, VpsOutputSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsFloorChangeController *)build __attribute__((swift_name("build()")));
- (VpsFloorChangeControllerBuilder *)setFloorLevelHandlerFloorLevelHandler:(VpsFloorLevelHandler * _Nullable)floorLevelHandler __attribute__((swift_name("setFloorLevelHandler(floorLevelHandler:)")));
- (VpsFloorChangeControllerBuilder *)setListenerListener:(void (^)(VpsInputSignal *))listener __attribute__((swift_name("setListener(listener:)")));
- (VpsFloorChangeControllerBuilder *)setPositionEngineRepositoryPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository __attribute__((swift_name("setPositionEngineRepository(positionEngineRepository:)")));
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
- (void)onInputData_:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data_:)")));
- (void)onInputEvent:(VpsBaseEvent *)event __attribute__((swift_name("onInput(event:)")));
- (void)setOutPutListenerListener:(void (^)(VpsFloorChangeSignal *))listener __attribute__((swift_name("setOutPutListener(listener:)")));
@property void (^ _Nullable listener)(VpsFloorChangeSignal *) __attribute__((swift_name("listener")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AltitudeWifiFusionFloorChangeInterpreter")))
@interface VpsAltitudeWifiFusionFloorChangeInterpreter : VpsFloorChangeDetector
- (instancetype)initWithFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler floorChangeInterpreterSettings:(VpsFloorChangeInterpreterSettings *)floorChangeInterpreterSettings __attribute__((swift_name("init(floorLevelHandler:floorChangeInterpreterSettings:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputData_:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data_:)")));
- (void)onInputEvent:(VpsBaseEvent *)event __attribute__((swift_name("onInput(event:)")));
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
- (void)dispose __attribute__((swift_name("dispose()")));
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
- (void)dispose __attribute__((swift_name("dispose()")));
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
- (void)dispose __attribute__((swift_name("dispose()")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WiFiStairsFusionFloorChangeInterpreter")))
@interface VpsWiFiStairsFusionFloorChangeInterpreter : VpsFloorChangeDetector
- (instancetype)initWithFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler params:(VpsWiFiStairsFusionParams *)params __attribute__((swift_name("init(floorLevelHandler:params:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputEvent:(VpsBaseEvent *)event __attribute__((swift_name("onInput(event:)")));
@property (readonly) VpsFloorLevelHandler *floorLevelHandler __attribute__((swift_name("floorLevelHandler")));
@property (readonly) VpsWiFiStairsFusionParams *params __attribute__((swift_name("params")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MagnetometerMappingEngine")))
@interface VpsMagnetometerMappingEngine : VpsFlowConverter<VpsRawSensorPack *, VpsOutputSignal *>
- (instancetype)initWithPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository __attribute__((swift_name("init(positionEngineRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputData:(VpsRawSensorPack *)data __attribute__((swift_name("onInput(data:)")));
- (void)onOutputSignalSignal:(VpsOutputSignal *)signal __attribute__((swift_name("onOutputSignal(signal:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MagnetometerMappingEngine.Builder")))
@interface VpsMagnetometerMappingEngineBuilder : VpsFlowConverterBuilder<VpsMagnetometerMappingEngine *, VpsOutputSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsMagnetometerMappingEngine *)build __attribute__((swift_name("build()")));
- (VpsMagnetometerMappingEngineBuilder *)setPositionEngineRepositoryPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository __attribute__((swift_name("setPositionEngineRepository(positionEngineRepository:)")));
@end

__attribute__((swift_name("PositionEngine")))
@interface VpsPositionEngine : VpsFlowConverter<VpsBaseEvent *, VpsOutputSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)setStartData:(VpsBaseEventStart *)data __attribute__((swift_name("setStart(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositionEngine.Builder")))
@interface VpsPositionEngineBuilder : VpsFlowConverterBuilder<VpsPositionEngine *, VpsOutputSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsPositionEngine *)build __attribute__((swift_name("build()")));
- (VpsPositionEngineBuilder *)setADModelAdModel:(id<VpsADModel> _Nullable)adModel __attribute__((swift_name("setADModel(adModel:)")));
- (VpsPositionEngineBuilder *)setFloorLevelHandlerFloorLevelHandler:(VpsFloorLevelHandler * _Nullable)floorLevelHandler __attribute__((swift_name("setFloorLevelHandler(floorLevelHandler:)")));
- (VpsPositionEngineBuilder *)setListenerListener:(void (^)(VpsInputSignal *))listener __attribute__((swift_name("setListener(listener:)")));
- (VpsPositionEngineBuilder *)setNlModelNlModel:(id<VpsNLModel> _Nullable)nlModel __attribute__((swift_name("setNlModel(nlModel:)")));
- (VpsPositionEngineBuilder *)setPositionEngineRepositoryPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository __attribute__((swift_name("setPositionEngineRepository(positionEngineRepository:)")));
- (VpsPositionEngineBuilder *)setSettingsSettings:(VpsPositionEngineSettings *)settings __attribute__((swift_name("setSettings(settings:)")));
- (VpsPositionEngineBuilder *)setStartDataStartData:(VpsBaseEventStart *)startData __attribute__((swift_name("setStartData(startData:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviationTable")))
@interface VpsDeviationTable : VpsBase
- (instancetype)initWithTol:(float)tol __attribute__((swift_name("init(tol:)"))) __attribute__((objc_designated_initializer));
- (void)addEntryDirection:(float)direction deviation:(float)deviation __attribute__((swift_name("addEntry(direction:deviation:)")));
- (void)clear __attribute__((swift_name("clear()")));
- (VpsFloat * _Nullable)computeDeviationDirection:(float)direction __attribute__((swift_name("computeDeviation(direction:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoMapEngine")))
@interface VpsNoMapEngine : VpsPositionEngine
- (instancetype)initWithNoMapFilterParams:(VpsNoMapFilterParams *)noMapFilterParams adModel:(id<VpsADModel> _Nullable)adModel positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository listener:(void (^)(VpsInputSignal *))listener __attribute__((swift_name("init(noMapFilterParams:adModel:positionEngineRepository:listener:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(VpsBaseEvent *)data __attribute__((swift_name("onInput(data:)")));
- (void)setStartData:(VpsBaseEventStart *)data __attribute__((swift_name("setStart(data:)")));
@property (readonly) void (^listener)(VpsInputSignal *) __attribute__((swift_name("listener")));
@property (readonly) id<VpsPositionEngineRepository> positionEngineRepository __attribute__((swift_name("positionEngineRepository")));
@end

__attribute__((swift_name("AbstractAttackDetectionFilter")))
@interface VpsAbstractAttackDetectionFilter : VpsBase
- (instancetype)initWithAvailableBands:(VpsMutableSet<VpsGNSSBand *> *)availableBands positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository positionFilter:(VpsExtendedKalmanFilter2DINSFusion *)positionFilter ecefCoordinateConverter:(id<VpsCoordinateConverter> _Nullable)ecefCoordinateConverter ecefToEnuRotation:(NSArray<VpsKotlinDoubleArray *> * _Nullable)ecefToEnuRotation params:(VpsAttackDetectorParams *)params __attribute__((swift_name("init(availableBands:positionEngineRepository:positionFilter:ecefCoordinateConverter:ecefToEnuRotation:params:)"))) __attribute__((objc_designated_initializer));
- (VpsKotlinPair<NSArray<VpsKotlinPair<VpsGnssMeasurement *, id<VpsSatelliteVehicle>> *> *, NSArray<VpsGNSSAttack *> *> *)updateMeasSvPairs:(NSArray<VpsKotlinPair<VpsGnssMeasurement *, id<VpsSatelliteVehicle>> *> *)measSvPairs initGuess:(VpsKotlinTriple<VpsDouble *, VpsDouble *, VpsDouble *> *)initGuess clock:(VpsGnssClock *)clock systemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp __attribute__((swift_name("update(measSvPairs:initGuess:clock:systemTimestamp:nanoTimestamp:)")));
- (void)updateEcefToEnuConvertersCc:(id<VpsCoordinateConverter>)cc rotation:(NSArray<VpsKotlinDoubleArray *> *)rotation __attribute__((swift_name("updateEcefToEnuConverters(cc:rotation:)")));
@end

__attribute__((swift_name("AttackDetectionFilter")))
@interface VpsAttackDetectionFilter : VpsAbstractAttackDetectionFilter
- (instancetype)initWithAvailableBands:(VpsMutableSet<VpsGNSSBand *> *)availableBands positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository positionFilter:(VpsExtendedKalmanFilter2DINSFusion *)positionFilter ecefCoordinateConverter:(id<VpsCoordinateConverter> _Nullable)ecefCoordinateConverter ecefToEnuRotation:(NSArray<VpsKotlinDoubleArray *> * _Nullable)ecefToEnuRotation params:(VpsAttackDetectorParams *)params __attribute__((swift_name("init(availableBands:positionEngineRepository:positionFilter:ecefCoordinateConverter:ecefToEnuRotation:params:)"))) __attribute__((objc_designated_initializer));
- (void)bandSpecificIndicatorRulesFixes:(NSMutableArray<VpsKotlinPair<NSDictionary<NSString *, id> *, VpsGNSSBand *> *> *)fixes __attribute__((swift_name("bandSpecificIndicatorRules(fixes:)")));
- (NSMutableArray<VpsKotlinPair<NSDictionary<NSString *, id> *, VpsGNSSBand *> *> *)bandSpecificStateFeaturizationMeasSvPairs:(NSArray<VpsKotlinPair<VpsGnssMeasurement *, id<VpsSatelliteVehicle>> *> *)measSvPairs initGuess:(VpsKotlinTriple<VpsDouble *, VpsDouble *, VpsDouble *> *)initGuess clock:(VpsGnssClock *)clock systemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp __attribute__((swift_name("bandSpecificStateFeaturization(measSvPairs:initGuess:clock:systemTimestamp:nanoTimestamp:)")));
- (void)generalAttackDetectionAttacks:(NSMutableArray<VpsGNSSAttack *> *)attacks __attribute__((swift_name("generalAttackDetection(attacks:)")));
- (void)globalIndicatorRules __attribute__((swift_name("globalIndicatorRules()")));
- (void)globalStateFeaturizationMeasSvPairs:(NSArray<VpsKotlinPair<VpsGnssMeasurement *, id<VpsSatelliteVehicle>> *> *)measSvPairs clock:(VpsGnssClock *)clock systemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp __attribute__((swift_name("globalStateFeaturization(measSvPairs:clock:systemTimestamp:nanoTimestamp:)")));
- (VpsKotlinPair<NSSet<VpsGNSSBand *> *, VpsMutableSet<VpsGNSSAttack *> *> *)internalStateUpdateAttacks:(NSMutableArray<VpsGNSSAttack *> *)attacks nanoTimestamp:(int64_t)nanoTimestamp __attribute__((swift_name("internalStateUpdate(attacks:nanoTimestamp:)")));
- (void)separateWideBandNarrowBand __attribute__((swift_name("separateWideBandNarrowBand()")));
- (VpsKotlinPair<NSArray<VpsKotlinPair<VpsGnssMeasurement *, id<VpsSatelliteVehicle>> *> *, NSArray<VpsGNSSAttack *> *> *)updateMeasSvPairs:(NSArray<VpsKotlinPair<VpsGnssMeasurement *, id<VpsSatelliteVehicle>> *> *)measSvPairs initGuess:(VpsKotlinTriple<VpsDouble *, VpsDouble *, VpsDouble *> *)initGuess clock:(VpsGnssClock *)clock systemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp __attribute__((swift_name("update(measSvPairs:initGuess:clock:systemTimestamp:nanoTimestamp:)")));
- (int32_t)weightJammingA:(VpsGNSSAttackJamming *)a __attribute__((swift_name("weightJamming(a:)")));
- (int32_t)weightSpoofingA:(VpsGNSSAttackSpoofing *)a __attribute__((swift_name("weightSpoofing(a:)")));
@end

__attribute__((swift_name("AttackDetectionFilterDL")))
@interface VpsAttackDetectionFilterDL : VpsAttackDetectionFilter
- (instancetype)initWithAvailableBands:(VpsMutableSet<VpsGNSSBand *> *)availableBands positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository positionFilter:(VpsExtendedKalmanFilter2DINSFusion *)positionFilter ecefCoordinateConverter:(id<VpsCoordinateConverter> _Nullable)ecefCoordinateConverter ecefToEnuRotation:(NSArray<VpsKotlinDoubleArray *> * _Nullable)ecefToEnuRotation params:(VpsAttackDetectorParams *)params adModel:(id<VpsADModel>)adModel __attribute__((swift_name("init(availableBands:positionEngineRepository:positionFilter:ecefCoordinateConverter:ecefToEnuRotation:params:adModel:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAvailableBands:(VpsMutableSet<VpsGNSSBand *> *)availableBands positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository positionFilter:(VpsExtendedKalmanFilter2DINSFusion *)positionFilter ecefCoordinateConverter:(id<VpsCoordinateConverter> _Nullable)ecefCoordinateConverter ecefToEnuRotation:(NSArray<VpsKotlinDoubleArray *> * _Nullable)ecefToEnuRotation params:(VpsAttackDetectorParams *)params __attribute__((swift_name("init(availableBands:positionEngineRepository:positionFilter:ecefCoordinateConverter:ecefToEnuRotation:params:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (VpsKotlinPair<NSSet<VpsGNSSBand *> *, VpsMutableSet<VpsGNSSAttack *> *> *)internalStateUpdateAttacks:(NSMutableArray<VpsGNSSAttack *> *)attacks nanoTimestamp:(int64_t)nanoTimestamp __attribute__((swift_name("internalStateUpdate(attacks:nanoTimestamp:)")));
- (VpsKotlinPair<NSArray<VpsKotlinPair<VpsGnssMeasurement *, id<VpsSatelliteVehicle>> *> *, NSArray<VpsGNSSAttack *> *> *)updateMeasSvPairs:(NSArray<VpsKotlinPair<VpsGnssMeasurement *, id<VpsSatelliteVehicle>> *> *)measSvPairs initGuess:(VpsKotlinTriple<VpsDouble *, VpsDouble *, VpsDouble *> *)initGuess clock:(VpsGnssClock *)clock systemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp __attribute__((swift_name("update(measSvPairs:initGuess:clock:systemTimestamp:nanoTimestamp:)")));
@end

__attribute__((swift_name("AttackDetectionFilterEmpiric")))
@interface VpsAttackDetectionFilterEmpiric : VpsAttackDetectionFilter
- (instancetype)initWithAvailableBands:(VpsMutableSet<VpsGNSSBand *> *)availableBands positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository positionFilter:(VpsExtendedKalmanFilter2DINSFusion *)positionFilter ecefCoordinateConverter:(id<VpsCoordinateConverter> _Nullable)ecefCoordinateConverter ecefToEnuRotation:(NSArray<VpsKotlinDoubleArray *> * _Nullable)ecefToEnuRotation params:(VpsAttackDetectorParams *)params __attribute__((swift_name("init(availableBands:positionEngineRepository:positionFilter:ecefCoordinateConverter:ecefToEnuRotation:params:)"))) __attribute__((objc_designated_initializer));
- (VpsKotlinPair<NSArray<VpsKotlinPair<VpsGnssMeasurement *, id<VpsSatelliteVehicle>> *> *, NSArray<VpsGNSSAttack *> *> *)updateMeasSvPairs:(NSArray<VpsKotlinPair<VpsGnssMeasurement *, id<VpsSatelliteVehicle>> *> *)measSvPairs initGuess:(VpsKotlinTriple<VpsDouble *, VpsDouble *, VpsDouble *> *)initGuess clock:(VpsGnssClock *)clock systemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp __attribute__((swift_name("update(measSvPairs:initGuess:clock:systemTimestamp:nanoTimestamp:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AttackDetectionModelFeatureBuffer")))
@interface VpsAttackDetectionModelFeatureBuffer : VpsBase
- (instancetype)initWithTimeDimension:(int32_t)timeDimension featureSize:(int32_t)featureSize __attribute__((swift_name("init(timeDimension:featureSize:)"))) __attribute__((objc_designated_initializer));
- (void)addSample:(VpsKotlinFloatArray *)sample __attribute__((swift_name("add(sample:)")));
- (void)addAllSamples:(NSArray<VpsKotlinFloatArray *> *)samples __attribute__((swift_name("addAll(samples:)")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)fillValue:(float)value __attribute__((swift_name("fill(value:)")));
- (VpsKotlinArray<VpsKotlinFloatArray *> *)toArray __attribute__((swift_name("toArray()")));
- (NSMutableArray<VpsKotlinFloatArray *> *)toMutableList __attribute__((swift_name("toMutableList()")));
@property int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DropState")))
@interface VpsDropState : VpsBase
- (instancetype)initWithIdx:(int32_t)idx level:(double)level __attribute__((swift_name("init(idx:level:)"))) __attribute__((objc_designated_initializer));
- (VpsDropState *)doCopyIdx:(int32_t)idx level:(double)level __attribute__((swift_name("doCopy(idx:level:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t idx __attribute__((swift_name("idx")));
@property (readonly) double level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RiseState")))
@interface VpsRiseState : VpsBase
- (instancetype)initWithIdx:(int32_t)idx level:(double)level __attribute__((swift_name("init(idx:level:)"))) __attribute__((objc_designated_initializer));
- (VpsRiseState *)doCopyIdx:(int32_t)idx level:(double)level __attribute__((swift_name("doCopy(idx:level:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t idx __attribute__((swift_name("idx")));
@property (readonly) double level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Trend")))
@interface VpsTrend : VpsKotlinEnum<VpsTrend *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsTrend *down __attribute__((swift_name("down")));
@property (class, readonly) VpsTrend *stable __attribute__((swift_name("stable")));
@property (class, readonly) VpsTrend *up __attribute__((swift_name("up")));
+ (VpsKotlinArray<VpsTrend *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsTrend *> *entries __attribute__((swift_name("entries")));
- (VpsTrend *)negate __attribute__((swift_name("negate()")));
@end

__attribute__((swift_name("FusionFilter")))
@protocol VpsFusionFilter
@required
- (void)setStartStart:(VpsBaseEventStart *)start __attribute__((swift_name("setStart(start:)")));
- (VpsKotlinPair<VpsLocation *, VpsLocation *> * _Nullable)updateEvent:(VpsBaseEvent *)event __attribute__((swift_name("update(event:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GPSFusionFilter")))
@interface VpsGPSFusionFilter : VpsBase <VpsFusionFilter>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Old! Do not use")));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)end __attribute__((swift_name("end()")));
- (void)setStartStart:(VpsBaseEventStart *)start __attribute__((swift_name("setStart(start:)")));
- (VpsKotlinPair<VpsLocation *, VpsLocation *> * _Nullable)updateEvent:(VpsBaseEvent *)event __attribute__((swift_name("update(event:)")));
@end

__attribute__((swift_name("NoMapFilter")))
@interface VpsNoMapFilter : VpsBase <VpsFusionFilter>
- (instancetype)initWithPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository listener:(void (^)(VpsInputSignal *))listener params:(VpsNoMapFilterParams *)params __attribute__((swift_name("init(positionEngineRepository:listener:params:)"))) __attribute__((objc_designated_initializer));
- (void)setStartStart:(VpsBaseEventStart *)start __attribute__((swift_name("setStart(start:)")));
- (VpsKotlinPair<VpsLocation *, VpsLocation *> * _Nullable)updateEvent:(VpsBaseEvent *)event __attribute__((swift_name("update(event:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property id<VpsCoordinateConverter> coordinateConverter __attribute__((swift_name("coordinateConverter")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property float currentAngleCorrection __attribute__((swift_name("currentAngleCorrection")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property VpsBaseEventLngLatEvent *currentGNSSPosition __attribute__((swift_name("currentGNSSPosition")));
@property BOOL hasGottenGNSSReading __attribute__((swift_name("hasGottenGNSSReading")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) void (^listener)(VpsInputSignal *) __attribute__((swift_name("listener")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) VpsNoMapFilterParams *params __attribute__((swift_name("params")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<VpsPositionEngineRepository> positionEngineRepository __attribute__((swift_name("positionEngineRepository")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property VpsOutputSignalSource *source __attribute__((swift_name("source")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property NSArray<VpsConstellationType *> * _Nullable usedConstellations __attribute__((swift_name("usedConstellations")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GnssInsFilter")))
@interface VpsGnssInsFilter : VpsNoMapFilter
- (instancetype)initWithPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository listener:(void (^)(VpsInputSignal *))listener params:(VpsNoMapFilterParams *)params adModel:(id<VpsADModel> _Nullable)adModel useConstellations:(NSArray<VpsConstellationType *> *)useConstellations filter:(VpsExtendedKalmanFilter2DINSFusion *)filter __attribute__((swift_name("init(positionEngineRepository:listener:params:adModel:useConstellations:filter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository listener:(void (^)(VpsInputSignal *))listener params:(VpsNoMapFilterParams *)params __attribute__((swift_name("init(positionEngineRepository:listener:params:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)setStartStart:(VpsBaseEventStart *)start __attribute__((swift_name("setStart(start:)")));
- (VpsKotlinPair<VpsLocation *, VpsLocation *> * _Nullable)updateEvent:(VpsBaseEvent *)event __attribute__((swift_name("update(event:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultiGNSSFilter")))
@interface VpsMultiGNSSFilter : VpsNoMapFilter
- (instancetype)initWithPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository listener:(void (^)(VpsInputSignal *))listener params:(VpsNoMapFilterParams *)params useConstellations:(NSArray<VpsConstellationType *> *)useConstellations filter:(VpsPositionFilter *)filter __attribute__((swift_name("init(positionEngineRepository:listener:params:useConstellations:filter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository listener:(void (^)(VpsInputSignal *))listener params:(VpsNoMapFilterParams *)params __attribute__((swift_name("init(positionEngineRepository:listener:params:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)setStartStart:(VpsBaseEventStart *)start __attribute__((swift_name("setStart(start:)")));
- (VpsKotlinPair<VpsLocation *, VpsLocation *> * _Nullable)updateEvent:(VpsBaseEvent *)event __attribute__((swift_name("update(event:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenTerrainFusionFilter")))
@interface VpsOpenTerrainFusionFilter : VpsBase <VpsFusionFilter>
- (instancetype)initWithPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository __attribute__((swift_name("init(positionEngineRepository:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Old! Do not use")));
- (void)end __attribute__((swift_name("end()")));
- (VpsKotlinPair<VpsKotlinArray<VpsKotlinFloatArray *> *, VpsFloat *> *)getMLPositions __attribute__((swift_name("getMLPositions()")));
- (void)setStartStart:(VpsBaseEventStart *)start __attribute__((swift_name("setStart(start:)")));
- (VpsKotlinPair<VpsLocation *, VpsLocation *> * _Nullable)updateEvent:(VpsBaseEvent *)event __attribute__((swift_name("update(event:)")));
@property id<VpsPositionEngineRepository> positionEngineRepository __attribute__((swift_name("positionEngineRepository")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HiResDateTime")))
@interface VpsHiResDateTime : VpsBase <VpsKotlinComparable>
- (instancetype)initWithWholeNs:(int64_t)wholeNs subPs:(int32_t)subPs __attribute__((swift_name("init(wholeNs:subPs:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsHiResDateTimeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(VpsHiResDateTime *)other __attribute__((swift_name("compareTo(other:)")));
- (VpsHiResDateTime *)doCopyWholeNs:(int64_t)wholeNs subPs:(int32_t)subPs __attribute__((swift_name("doCopy(wholeNs:subPs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (VpsHiResDateTime *)minusDelta:(int64_t)delta __attribute__((swift_name("minus(delta:)")));
- (VpsHiResDateTime *)minusOther:(VpsHiResDateTime *)other __attribute__((swift_name("minus(other:)")));
- (VpsHiResDateTime *)plusDelta:(int64_t)delta __attribute__((swift_name("plus(delta:)")));
- (VpsHiResDateTime *)plusOther:(VpsHiResDateTime *)other __attribute__((swift_name("plus(other:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (double)totalSeconds __attribute__((swift_name("totalSeconds()")));
@property (readonly) int32_t subPs __attribute__((swift_name("subPs")));
@property (readonly) int64_t wholeNs __attribute__((swift_name("wholeNs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HiResDateTime.Companion")))
@interface VpsHiResDateTimeCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsHiResDateTimeCompanion *shared __attribute__((swift_name("shared")));
- (VpsHiResDateTime *)fromNanosNs:(int64_t)ns ps:(int32_t)ps __attribute__((swift_name("fromNanos(ns:ps:)")));
@end

__attribute__((swift_name("SatelliteVehicle")))
@protocol VpsSatelliteVehicle
@required
- (double)getGroupDelay __attribute__((swift_name("getGroupDelay()")));
- (VpsKotlinTriple<VpsDouble *, VpsDouble *, VpsDouble *> *)positionECEFTN:(int64_t)tN __attribute__((swift_name("positionECEF(tN:)")));
- (void)updateParams:(id<VpsEphemerisParams>)params __attribute__((swift_name("update(params:)")));
- (VpsKotlinTriple<VpsDouble *, VpsDouble *, VpsDouble *> *)velocityECEFTN:(int64_t)tN __attribute__((swift_name("velocityECEF(tN:)")));
@property (readonly) VpsConstellationType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SatelliteVehicleKeplerian")))
@interface VpsSatelliteVehicleKeplerian : VpsBase <VpsSatelliteVehicle>
- (instancetype)initWithParams:(VpsKeplerParams *)params __attribute__((swift_name("init(params:)"))) __attribute__((objc_designated_initializer));
- (double)getGroupDelay __attribute__((swift_name("getGroupDelay()")));
- (VpsKotlinTriple<VpsDouble *, VpsDouble *, VpsDouble *> *)positionECEFTN:(int64_t)tN __attribute__((swift_name("positionECEF(tN:)")));
- (void)updateParams:(id<VpsEphemerisParams>)params __attribute__((swift_name("update(params:)")));
- (VpsKotlinTriple<VpsDouble *, VpsDouble *, VpsDouble *> *)velocityECEFTN:(int64_t)tN __attribute__((swift_name("velocityECEF(tN:)")));
@property (readonly) double a __attribute__((swift_name("a")));
@property (readonly) double af0 __attribute__((swift_name("af0")));
@property (readonly) double af1 __attribute__((swift_name("af1")));
@property (readonly) double af2 __attribute__((swift_name("af2")));
@property (readonly) VpsDouble * _Nullable bgdE1e5a __attribute__((swift_name("bgdE1e5a")));
@property (readonly) VpsDouble * _Nullable bgdE1e5b __attribute__((swift_name("bgdE1e5b")));
@property (readonly) double cic __attribute__((swift_name("cic")));
@property (readonly) double cis __attribute__((swift_name("cis")));
@property (readonly) double crc __attribute__((swift_name("crc")));
@property (readonly) double crs __attribute__((swift_name("crs")));
@property (readonly) double cuc __attribute__((swift_name("cuc")));
@property (readonly) double cus __attribute__((swift_name("cus")));
@property (readonly) double deltaN __attribute__((swift_name("deltaN")));
@property (readonly) double ecc __attribute__((swift_name("ecc")));
@property (readonly) double i0 __attribute__((swift_name("i0")));
@property (readonly) double idot __attribute__((swift_name("idot")));
@property (readonly) NSArray<VpsDouble *> *ionosphereParams __attribute__((swift_name("ionosphereParams")));
@property (readonly) double m0 __attribute__((swift_name("m0")));
@property (readonly) double n __attribute__((swift_name("n")));
@property (readonly) double n0 __attribute__((swift_name("n0")));
@property (readonly) double omega __attribute__((swift_name("omega")));
@property (readonly) double omega0 __attribute__((swift_name("omega0")));
@property (readonly) double omegaDot __attribute__((swift_name("omegaDot")));
@property (readonly) double sqrtA __attribute__((swift_name("sqrtA")));
@property (readonly) NSString *svid __attribute__((swift_name("svid")));
@property (readonly) VpsDouble * _Nullable tgd __attribute__((swift_name("tgd")));
@property (readonly) VpsDouble * _Nullable tgd1 __attribute__((swift_name("tgd1")));
@property (readonly) VpsDouble * _Nullable tgd2 __attribute__((swift_name("tgd2")));
@property (readonly) VpsHiResDateTime *time __attribute__((swift_name("time")));
@property (readonly) double toe __attribute__((swift_name("toe")));
@property (readonly) VpsConstellationType *type __attribute__((swift_name("type")));
@property (readonly) int32_t week __attribute__((swift_name("week")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SatelliteVehicleNewtonian")))
@interface VpsSatelliteVehicleNewtonian : VpsBase <VpsSatelliteVehicle>
- (instancetype)initWithParams:(id<VpsEphemerisParams>)params __attribute__((swift_name("init(params:)"))) __attribute__((objc_designated_initializer));
- (double)getGroupDelay __attribute__((swift_name("getGroupDelay()")));
- (VpsKotlinTriple<VpsDouble *, VpsDouble *, VpsDouble *> *)positionECEFTN:(int64_t)tN __attribute__((swift_name("positionECEF(tN:)")));
- (void)updateParams:(id<VpsEphemerisParams>)params __attribute__((swift_name("update(params:)")));
- (VpsKotlinTriple<VpsDouble *, VpsDouble *, VpsDouble *> *)velocityECEFTN:(int64_t)tN __attribute__((swift_name("velocityECEF(tN:)")));
@property (readonly) VpsConstellationType *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("PositionFilter")))
@interface VpsPositionFilter : VpsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)backTrackUpdateSystemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp backTrackPosition:(VpsCoordinateF *)backTrackPosition __attribute__((swift_name("backTrackUpdate(systemTimestamp:nanoTimestamp:backTrackPosition:)")));
- (VpsCoordinateD *)getPosition __attribute__((swift_name("getPosition()")));
- (VpsKotlinDoubleArray *)getPosition3D __attribute__((swift_name("getPosition3D()")));
- (double)getUncertaintyRadiusK:(double)k __attribute__((swift_name("getUncertaintyRadius(k:)")));
- (VpsCoordinateD *)getVelocity __attribute__((swift_name("getVelocity()")));
- (VpsKotlinDoubleArray *)getVelocity3D __attribute__((swift_name("getVelocity3D()")));
- (void)setStateNewState:(VpsPositionAndVelocity2DInput *)newState __attribute__((swift_name("setState(newState:)")));
- (void)setStateNewPosition:(VpsPosition2DInput *)newPosition newVelocity:(VpsVelocity2DInput *)newVelocity __attribute__((swift_name("setState(newPosition:newVelocity:)")));
- (void)updateInput:(id<VpsFilterInput>)input __attribute__((swift_name("update(input:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property VpsKotlinDoubleArray *position __attribute__((swift_name("position")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property VpsKotlinDoubleArray *velocity __attribute__((swift_name("velocity")));
@end

__attribute__((swift_name("EWMAFilter")))
@interface VpsEWMAFilter : VpsPositionFilter
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)updateNewPosition:(VpsPosition2DInput *)newPosition weight:(double)weight __attribute__((swift_name("update(newPosition:weight:)")));
@end

__attribute__((swift_name("ExtendedKalmanFilter2DINSFusion")))
@interface VpsExtendedKalmanFilter2DINSFusion : VpsPositionFilter
- (instancetype)initWithDt:(double)dt rVar:(double)rVar rVelVar:(double)rVelVar qv:(double)qv sigmaU:(double)sigmaU cvBlend:(double)cvBlend qs:(double)qs qtheta:(double)qtheta blendTimeout:(double)blendTimeout maxRInflation:(double)maxRInflation maxPosStep:(double)maxPosStep maxVelStep:(double)maxVelStep gateProb:(double)gateProb positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository mahalanobisDistanceMultiplierThreshold:(double)mahalanobisDistanceMultiplierThreshold pPosInit:(double)pPosInit pVelInit:(double)pVelInit psInit:(double)psInit pThetaInit:(double)pThetaInit backTrackTimeout:(double)backTrackTimeout correctionDistanceMultiplierThreshold:(double)correctionDistanceMultiplierThreshold stepsWithoutOutCorrectionShrinkDenominator:(int32_t)stepsWithoutOutCorrectionShrinkDenominator __attribute__((swift_name("init(dt:rVar:rVelVar:qv:sigmaU:cvBlend:qs:qtheta:blendTimeout:maxRInflation:maxPosStep:maxVelStep:gateProb:positionEngineRepository:mahalanobisDistanceMultiplierThreshold:pPosInit:pVelInit:psInit:pThetaInit:backTrackTimeout:correctionDistanceMultiplierThreshold:stepsWithoutOutCorrectionShrinkDenominator:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)backTrackUpdateSystemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp backTrackPosition:(VpsCoordinateF *)backTrackPosition __attribute__((swift_name("backTrackUpdate(systemTimestamp:nanoTimestamp:backTrackPosition:)")));
- (VpsDouble * _Nullable)getMahalnobisDistanceInput:(VpsPositionAndVelocity2DInput *)input __attribute__((swift_name("getMahalnobisDistance(input:)")));
- (double)getUncertaintyRadiusK:(double)k __attribute__((swift_name("getUncertaintyRadius(k:)")));
- (void)setStateNewState:(VpsPositionAndVelocity2DInput *)newState __attribute__((swift_name("setState(newState:)")));
- (void)setStateNewPosition:(VpsPosition2DInput *)newPosition newVelocity:(VpsVelocity2DInput *)newVelocity __attribute__((swift_name("setState(newPosition:newVelocity:)")));
- (void)updateInput:(id<VpsFilterInput>)input __attribute__((swift_name("update(input:)")));
@property (readonly) double dt __attribute__((swift_name("dt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtendedKalmanFilter2DINSFusionWithAngleCorrection")))
@interface VpsExtendedKalmanFilter2DINSFusionWithAngleCorrection : VpsExtendedKalmanFilter2DINSFusion
- (instancetype)initWithDt:(double)dt rVar:(double)rVar rVelVar:(double)rVelVar qv:(double)qv sigmaU:(double)sigmaU cvBlend:(double)cvBlend qs:(double)qs qtheta:(double)qtheta blendTimeout:(double)blendTimeout maxRInflation:(double)maxRInflation maxPosStep:(double)maxPosStep maxVelStep:(double)maxVelStep gateProb:(double)gateProb positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository mahalanobisDistanceMultiplierThreshold:(double)mahalanobisDistanceMultiplierThreshold pPosInit:(double)pPosInit pVelInit:(double)pVelInit psInit:(double)psInit pThetaInit:(double)pThetaInit backTrackTimeout:(double)backTrackTimeout correctionDistanceMultiplierThreshold:(double)correctionDistanceMultiplierThreshold directionQueueSize:(int32_t)directionQueueSize stepsWithoutOutCorrectionShrinkDenominator:(int32_t)stepsWithoutOutCorrectionShrinkDenominator osDiffThreshold:(float)osDiffThreshold filterOffsetThreshold:(float)filterOffsetThreshold distanceThresholdForAngleCorrection:(float)distanceThresholdForAngleCorrection maxAngleUpdate:(float)maxAngleUpdate useGNSSAngleCorrection:(BOOL)useGNSSAngleCorrection __attribute__((swift_name("init(dt:rVar:rVelVar:qv:sigmaU:cvBlend:qs:qtheta:blendTimeout:maxRInflation:maxPosStep:maxVelStep:gateProb:positionEngineRepository:mahalanobisDistanceMultiplierThreshold:pPosInit:pVelInit:psInit:pThetaInit:backTrackTimeout:correctionDistanceMultiplierThreshold:directionQueueSize:stepsWithoutOutCorrectionShrinkDenominator:osDiffThreshold:filterOffsetThreshold:distanceThresholdForAngleCorrection:maxAngleUpdate:useGNSSAngleCorrection:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDt:(double)dt rVar:(double)rVar rVelVar:(double)rVelVar qv:(double)qv sigmaU:(double)sigmaU cvBlend:(double)cvBlend qs:(double)qs qtheta:(double)qtheta blendTimeout:(double)blendTimeout maxRInflation:(double)maxRInflation maxPosStep:(double)maxPosStep maxVelStep:(double)maxVelStep gateProb:(double)gateProb positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository mahalanobisDistanceMultiplierThreshold:(double)mahalanobisDistanceMultiplierThreshold pPosInit:(double)pPosInit pVelInit:(double)pVelInit psInit:(double)psInit pThetaInit:(double)pThetaInit backTrackTimeout:(double)backTrackTimeout correctionDistanceMultiplierThreshold:(double)correctionDistanceMultiplierThreshold stepsWithoutOutCorrectionShrinkDenominator:(int32_t)stepsWithoutOutCorrectionShrinkDenominator __attribute__((swift_name("init(dt:rVar:rVelVar:qv:sigmaU:cvBlend:qs:qtheta:blendTimeout:maxRInflation:maxPosStep:maxVelStep:gateProb:positionEngineRepository:mahalanobisDistanceMultiplierThreshold:pPosInit:pVelInit:psInit:pThetaInit:backTrackTimeout:correctionDistanceMultiplierThreshold:stepsWithoutOutCorrectionShrinkDenominator:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)setStateNewState:(VpsPositionAndVelocity2DInput *)newState __attribute__((swift_name("setState(newState:)")));
- (void)updateInput:(id<VpsFilterInput>)input __attribute__((swift_name("update(input:)")));
@end

__attribute__((swift_name("FilterInput")))
@protocol VpsFilterInput
@required
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((swift_name("KalmanFilter2DConstantVelocity")))
@interface VpsKalmanFilter2DConstantVelocity : VpsPositionFilter
- (instancetype)initWithDt:(double)dt rVar:(double)rVar qAcc:(double)qAcc __attribute__((swift_name("init(dt:rVar:qAcc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (double)getUncertaintyRadiusK:(double)k __attribute__((swift_name("getUncertaintyRadius(k:)")));
- (void)updateInput:(id<VpsFilterInput>)input __attribute__((swift_name("update(input:)")));
- (void)updateNewPosition:(VpsPosition2DInput *)newPosition __attribute__((swift_name("update(newPosition:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSArray<VpsKotlinDoubleArray *> *F __attribute__((swift_name("F")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property NSArray<VpsKotlinDoubleArray *> *P __attribute__((swift_name("P")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property NSArray<VpsKotlinDoubleArray *> *PPred __attribute__((swift_name("PPred")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSArray<VpsKotlinDoubleArray *> *Q __attribute__((swift_name("Q")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property BOOL isInitialized __attribute__((swift_name("isInitialized")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property NSArray<VpsKotlinDoubleArray *> *state __attribute__((swift_name("state")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property NSArray<VpsKotlinDoubleArray *> *xPred __attribute__((swift_name("xPred")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KalmanFilter2DVelocityObservations")))
@interface VpsKalmanFilter2DVelocityObservations : VpsKalmanFilter2DConstantVelocity
- (instancetype)initWithDt:(double)dt rVar:(double)rVar qAcc:(double)qAcc rVelVar:(double)rVelVar maxV:(double)maxV zVelAlpha:(double)zVelAlpha __attribute__((swift_name("init(dt:rVar:qAcc:rVelVar:maxV:zVelAlpha:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDt:(double)dt rVar:(double)rVar qAcc:(double)qAcc __attribute__((swift_name("init(dt:rVar:qAcc:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (double)getUncertaintyRadiusK:(double)k __attribute__((swift_name("getUncertaintyRadius(k:)")));
- (void)updateInput:(id<VpsFilterInput>)input __attribute__((swift_name("update(input:)")));
- (void)updateNewPositionAndVelocity2DInput:(VpsPositionAndVelocity2DInput *)newPositionAndVelocity2DInput __attribute__((swift_name("update(newPositionAndVelocity2DInput:)")));
@end

__attribute__((swift_name("LowPassFilter")))
@interface VpsLowPassFilter : VpsPositionFilter
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)updateNewPosition:(VpsPosition2DInput *)newPosition __attribute__((swift_name("update(newPosition:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Position2DInput")))
@interface VpsPosition2DInput : VpsBase <VpsFilterInput>
- (instancetype)initWithSystemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp x:(double)x y:(double)y __attribute__((swift_name("init(systemTimestamp:nanoTimestamp:x:y:)"))) __attribute__((objc_designated_initializer));
- (VpsPosition2DInput *)doCopySystemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp x:(double)x y:(double)y __attribute__((swift_name("doCopy(systemTimestamp:nanoTimestamp:x:y:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@property (readonly) double x __attribute__((swift_name("x")));
@property (readonly) double y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositionAndVelocity2DInput")))
@interface VpsPositionAndVelocity2DInput : VpsBase <VpsFilterInput>
- (instancetype)initWithSystemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp x:(double)x y:(double)y vx:(double)vx vy:(double)vy __attribute__((swift_name("init(systemTimestamp:nanoTimestamp:x:y:vx:vy:)"))) __attribute__((objc_designated_initializer));
- (VpsPositionAndVelocity2DInput *)doCopySystemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp x:(double)x y:(double)y vx:(double)vx vy:(double)vy __attribute__((swift_name("doCopy(systemTimestamp:nanoTimestamp:x:y:vx:vy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@property (readonly) double vx __attribute__((swift_name("vx")));
@property (readonly) double vy __attribute__((swift_name("vy")));
@property (readonly) double x __attribute__((swift_name("x")));
@property (readonly) double y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositionAndVelocity2DOSInput")))
@interface VpsPositionAndVelocity2DOSInput : VpsBase <VpsFilterInput>
- (instancetype)initWithSystemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp x:(double)x y:(double)y vx:(double)vx vy:(double)vy __attribute__((swift_name("init(systemTimestamp:nanoTimestamp:x:y:vx:vy:)"))) __attribute__((objc_designated_initializer));
- (VpsPositionAndVelocity2DOSInput *)doCopySystemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp x:(double)x y:(double)y vx:(double)vx vy:(double)vy __attribute__((swift_name("doCopy(systemTimestamp:nanoTimestamp:x:y:vx:vy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@property (readonly) double vx __attribute__((swift_name("vx")));
@property (readonly) double vy __attribute__((swift_name("vy")));
@property (readonly) double x __attribute__((swift_name("x")));
@property (readonly) double y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StepInput")))
@interface VpsStepInput : VpsBase <VpsFilterInput>
- (instancetype)initWithSystemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp direction:(double)direction speed:(double)speed __attribute__((swift_name("init(systemTimestamp:nanoTimestamp:direction:speed:)"))) __attribute__((objc_designated_initializer));
- (VpsStepInput *)doCopySystemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp direction:(double)direction speed:(double)speed __attribute__((swift_name("doCopy(systemTimestamp:nanoTimestamp:direction:speed:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double direction __attribute__((swift_name("direction")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) double speed __attribute__((swift_name("speed")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Velocity2DInput")))
@interface VpsVelocity2DInput : VpsBase <VpsFilterInput>
- (instancetype)initWithSystemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp vx:(double)vx vy:(double)vy __attribute__((swift_name("init(systemTimestamp:nanoTimestamp:vx:vy:)"))) __attribute__((objc_designated_initializer));
- (VpsVelocity2DInput *)doCopySystemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp vx:(double)vx vy:(double)vy __attribute__((swift_name("doCopy(systemTimestamp:nanoTimestamp:vx:vy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@property (readonly) double vx __attribute__((swift_name("vx")));
@property (readonly) double vy __attribute__((swift_name("vy")));
@end

__attribute__((swift_name("AbstractParticleFilter")))
@interface VpsAbstractParticleFilter : VpsBase
- (instancetype)initWithMapData:(VpsFloorLevelHandler *)mapData positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository params:(VpsParticleFilterParams *)params random:(id<VpsRandomNumberGenerator>)random rescueModeHelper:(id<VpsAbstractParticleFilterRescueModeHelper> _Nullable)rescueModeHelper scoringParams:(VpsScoringParams *)scoringParams trustedPositionParams:(VpsTrustedPositionParams *)trustedPositionParams __attribute__((swift_name("init(mapData:positionEngineRepository:params:random:rescueModeHelper:scoringParams:trustedPositionParams:)"))) __attribute__((objc_designated_initializer));
- (void)end __attribute__((swift_name("end()")));
- (void)setStartStart:(VpsBaseEventStart *)start __attribute__((swift_name("setStart(start:)")));
- (VpsCoordinateF * _Nullable)updateEvent:(VpsBaseEvent *)event __attribute__((swift_name("update(event:)")));
- (void)updateCurrentClosestSwapLocationCurrentWiFiObservation:(VpsBaseEventWiFiObservation * _Nullable)currentWiFiObservation __attribute__((swift_name("updateCurrentClosestSwapLocation(currentWiFiObservation:)")));
- (void)updateCurrentPositionCurrentPosition:(VpsCoordinateF *)currentPosition __attribute__((swift_name("updateCurrentPosition(currentPosition:)")));
- (void)updateCurrentPositionSTDParticles:(NSMutableArray<VpsPose *> *)particles origin:(VpsCoordinateF *)origin quantile:(float)quantile __attribute__((swift_name("updateCurrentPositionSTD(particles:origin:quantile:)")));
- (void)updateCurrentPositionTrustedCurrentPositionTrusted:(BOOL)currentPositionTrusted __attribute__((swift_name("updateCurrentPositionTrusted(currentPositionTrusted:)")));
- (void)updateCurrentWiFiObservationCurrentWiFiObservation:(VpsBaseEventWiFiObservation * _Nullable)currentWiFiObservation __attribute__((swift_name("updateCurrentWiFiObservation(currentWiFiObservation:)")));
- (void)updateCurrentWiFiScanCurrentWiFiScan:(VpsBaseEventWiFiScan * _Nullable)currentWiFiScan __attribute__((swift_name("updateCurrentWiFiScan(currentWiFiScan:)")));
- (void)updatePositionStatusStatus:(VpsOutputSignalPositionStatus *)status __attribute__((swift_name("updatePositionStatus(status:)")));
@property void (^ _Nullable clusterSwapListener)(VpsParticleFilterEvent *) __attribute__((swift_name("clusterSwapListener")));
@property void (^ _Nullable consistencyScoreListener)(VpsParticleFilterEvent *) __attribute__((swift_name("consistencyScoreListener")));
@property (readonly) VpsCoordinateF *currentPosition __attribute__((swift_name("currentPosition")));
@property (readonly) VpsFloorLevelHandler *mapData __attribute__((swift_name("mapData")));
@property VpsParticleFilterParams *params __attribute__((swift_name("params")));
@property (readonly) id<VpsPositionEngineRepository> positionEngineRepository __attribute__((swift_name("positionEngineRepository")));
@property (readonly) id<VpsRandomNumberGenerator> random __attribute__((swift_name("random")));
@property (readonly) id<VpsAbstractParticleFilterRescueModeHelper> _Nullable rescueModeHelper __attribute__((swift_name("rescueModeHelper")));
@property void (^ _Nullable rescueModeListener)(VpsParticleFilterEvent *) __attribute__((swift_name("rescueModeListener")));
@property (readonly) VpsScoringParams *scoringParams __attribute__((swift_name("scoringParams")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) VpsTrustedPositionParams *trustedPositionParams __attribute__((swift_name("trustedPositionParams")));
@end

__attribute__((swift_name("AbstractParticleFilterRescueModeHelper")))
@protocol VpsAbstractParticleFilterRescueModeHelper
@required
- (void)clearAndFillMLHistoryNewPositions:(NSArray<VpsCoordinateF *> *)newPositions __attribute__((swift_name("clearAndFillMLHistory(newPositions:)")));
- (void)clearMLHistoryNewStartPosition:(VpsCoordinateF *)newStartPosition __attribute__((swift_name("clearMLHistory(newStartPosition:)")));
- (VpsNLModelOutput * _Nullable)getNLModelOutPutMlPositions:(VpsKotlinArray<VpsKotlinFloatArray *> *)mlPositions __attribute__((swift_name("getNLModelOutPut(mlPositions:)")));
- (VpsNLModelOutput * _Nullable)getNLModelOutPutForcePrediction:(BOOL)forcePrediction __attribute__((swift_name("getNLModelOutPut(forcePrediction:)")));
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
@interface VpsParticleFilter : VpsPositionEngine <VpsAbstractParticleFilterRescueModeHelper>
- (instancetype)initWithFloorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler settings:(VpsParticleFilterSettings *)settings nlModel:(id<VpsNLModel> _Nullable)nlModel positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository __attribute__((swift_name("init(floorLevelHandler:settings:nlModel:positionEngineRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)clearAndFillMLHistoryNewPositions:(NSArray<VpsCoordinateF *> *)newPositions __attribute__((swift_name("clearAndFillMLHistory(newPositions:)")));
- (void)clearMLHistoryNewStartPosition:(VpsCoordinateF *)newStartPosition __attribute__((swift_name("clearMLHistory(newStartPosition:)")));
- (VpsNLModelOutput * _Nullable)getNLModelOutPutMlPositions:(VpsKotlinArray<VpsKotlinFloatArray *> *)mlPositions __attribute__((swift_name("getNLModelOutPut(mlPositions:)")));
- (VpsNLModelOutput * _Nullable)getNLModelOutPutForcePrediction:(BOOL)forcePrediction __attribute__((swift_name("getNLModelOutPut(forcePrediction:)")));
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
- (VpsParticleFilterBuilder *)setPositionEngineRepositoryPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository __attribute__((swift_name("setPositionEngineRepository(positionEngineRepository:)")));
- (VpsParticleFilterBuilder *)setSettingsSettings:(VpsParticleFilterSettings *)settings __attribute__((swift_name("setSettings(settings:)")));
- (VpsParticleFilterBuilder *)setStartDataStartData:(VpsBaseEventStart *)startData __attribute__((swift_name("setStartData(startData:)")));
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
- (VpsOutputSignalUXPosition *)uncertaintyCircleSessionId:(NSString *)sessionId confidence:(float)confidence __attribute__((swift_name("uncertaintyCircle(sessionId:confidence:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NaiveMapOutputFilter")))
@interface VpsNaiveMapOutputFilter : VpsAbstractParticleFilter
- (instancetype)initWithMapData:(VpsFloorLevelHandler *)mapData params:(VpsParticleFilterParams *)params positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository __attribute__((swift_name("init(mapData:params:positionEngineRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMapData:(VpsFloorLevelHandler *)mapData positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository params:(VpsParticleFilterParams *)params random:(id<VpsRandomNumberGenerator>)random rescueModeHelper:(id<VpsAbstractParticleFilterRescueModeHelper> _Nullable)rescueModeHelper scoringParams:(VpsScoringParams *)scoringParams trustedPositionParams:(VpsTrustedPositionParams *)trustedPositionParams __attribute__((swift_name("init(mapData:positionEngineRepository:params:random:rescueModeHelper:scoringParams:trustedPositionParams:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)clearAndFillMLHistoryNewPositions:(NSArray<VpsCoordinateF *> *)newPositions __attribute__((swift_name("clearAndFillMLHistory(newPositions:)")));
- (void)clearMLHistoryNewStartPosition:(VpsCoordinateF *)newStartPosition __attribute__((swift_name("clearMLHistory(newStartPosition:)")));
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
- (instancetype)initWithMapData:(VpsFloorLevelHandler *)mapData positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository params:(VpsParticleFilterParams *)params randomNumberGenerator:(id<VpsRandomNumberGenerator>)randomNumberGenerator rescueModeHelper:(id<VpsAbstractParticleFilterRescueModeHelper> _Nullable)rescueModeHelper scoringParams:(VpsScoringParams *)scoringParams trustedPositionParams:(VpsTrustedPositionParams *)trustedPositionParams __attribute__((swift_name("init(mapData:positionEngineRepository:params:randomNumberGenerator:rescueModeHelper:scoringParams:trustedPositionParams:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMapData:(VpsFloorLevelHandler *)mapData positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository params:(VpsParticleFilterParams *)params random:(id<VpsRandomNumberGenerator>)random rescueModeHelper:(id<VpsAbstractParticleFilterRescueModeHelper> _Nullable)rescueModeHelper scoringParams:(VpsScoringParams *)scoringParams trustedPositionParams:(VpsTrustedPositionParams *)trustedPositionParams __attribute__((swift_name("init(mapData:positionEngineRepository:params:random:rescueModeHelper:scoringParams:trustedPositionParams:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (float)chiSquareQuantileK:(float)k __attribute__((swift_name("chiSquareQuantile(k:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (VpsPose *)createGaussSampleLoc_positionX:(float)loc_positionX loc_positionY:(float)loc_positionY scale_position:(float)scale_position loc_angle:(float)loc_angle scale_angle:(float)scale_angle scale_bias:(float)scale_bias scale_bias_2:(float)scale_bias_2 loc_speed_2:(float)loc_speed_2 mixing_factor:(float)mixing_factor bias_limit:(VpsKotlinPair<VpsFloat *, VpsFloat *> *)bias_limit second_bias_limit:(VpsKotlinPair<VpsFloat *, VpsFloat *> *)second_bias_limit __attribute__((swift_name("createGaussSample(loc_positionX:loc_positionY:scale_position:loc_angle:scale_angle:scale_bias:scale_bias_2:loc_speed_2:mixing_factor:bias_limit:second_bias_limit:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (VpsPose *)createGaussSampleRTLoc_positionX:(float)loc_positionX loc_positionY:(float)loc_positionY scale_position:(float)scale_position loc_angle:(float)loc_angle scale_angle:(float)scale_angle scale_bias:(float)scale_bias scale_bias_2:(float)scale_bias_2 loc_speed_2:(float)loc_speed_2 mixing_factor:(float)mixing_factor bias_limit:(VpsKotlinPair<VpsFloat *, VpsFloat *> *)bias_limit second_bias_limit:(VpsKotlinPair<VpsFloat *, VpsFloat *> *)second_bias_limit __attribute__((swift_name("createGaussSampleRT(loc_positionX:loc_positionY:scale_position:loc_angle:scale_angle:scale_bias:scale_bias_2:loc_speed_2:mixing_factor:bias_limit:second_bias_limit:)")));
- (VpsOutputSignalSyncSignal *)createSyncSignalPositionAfterSync:(VpsCoordinateF *)positionAfterSync __attribute__((swift_name("createSyncSignal(positionAfterSync:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (VpsCoordinateF *)deliverPositionUpdateKDE:(BOOL)updateKDE __attribute__((swift_name("deliverPosition(updateKDE:)")));
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
- (void)onExitConsistencyScore __attribute__((swift_name("onExitConsistencyScore()")));
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
@property (readonly) VpsKotlinPair<VpsFloat *, VpsFloat *> *biasLimit __attribute__((swift_name("biasLimit")));

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
@property VpsKotlinTriple<VpsKotlinTriple<VpsCoordinateF *, VpsFloat *, VpsFloat *> *, VpsBoolean *, VpsBoolean *> * _Nullable currentWiFiScanResult __attribute__((swift_name("currentWiFiScanResult")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float floorSwapDirectionStd __attribute__((swift_name("floorSwapDirectionStd")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float floorSwapPositionStd __attribute__((swift_name("floorSwapPositionStd")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float floorSwapSprinkleDirectionStd __attribute__((swift_name("floorSwapSprinkleDirectionStd")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float floorSwapSprinklePositionStd __attribute__((swift_name("floorSwapSprinklePositionStd")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property BOOL hasSprinkledRecentlyStdCondition __attribute__((swift_name("hasSprinkledRecentlyStdCondition")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property BOOL hasSprinkledRecentlyStdLargeCondition __attribute__((swift_name("hasSprinkledRecentlyStdLargeCondition")));

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
@property VpsCoordinateF * _Nullable previousPosition __attribute__((swift_name("previousPosition")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float rescueCompassAngRatio __attribute__((swift_name("rescueCompassAngRatio")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float rescueDirectionStd __attribute__((swift_name("rescueDirectionStd")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float rescueKDEAngRatio __attribute__((swift_name("rescueKDEAngRatio")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float rescuePositionStd __attribute__((swift_name("rescuePositionStd")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float rescueStartAngRatio __attribute__((swift_name("rescueStartAngRatio")));
@property float rotationDeviationAngle __attribute__((swift_name("rotationDeviationAngle")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) VpsKotlinPair<VpsFloat *, VpsFloat *> *secondBiasLimit __attribute__((swift_name("secondBiasLimit")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float secondBiasMean __attribute__((swift_name("secondBiasMean")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float secondBiasStd __attribute__((swift_name("secondBiasStd")));
@property float shiftAngle __attribute__((swift_name("shiftAngle")));

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
@property (readonly) float stdLimit __attribute__((swift_name("stdLimit")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float stdLimitLarge __attribute__((swift_name("stdLimitLarge")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float stdLimitOOB __attribute__((swift_name("stdLimitOOB")));

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
@property int32_t stepsSinceSprinkle __attribute__((swift_name("stepsSinceSprinkle")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t stepsSinceSprinkleLimit __attribute__((swift_name("stepsSinceSprinkleLimit")));

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
@property (readonly) float uncertainStartDirectionStd __attribute__((swift_name("uncertainStartDirectionStd")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float uncertainStartPositionStd __attribute__((swift_name("uncertainStartPositionStd")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL useGlobalKDESearch __attribute__((swift_name("useGlobalKDESearch")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL useKDEX0Step __attribute__((swift_name("useKDEX0Step")));

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
- (instancetype)initWithMapData:(VpsFloorLevelHandler *)mapData positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository params:(VpsParticleFilterParams *)params randomNumberGenerator:(id<VpsRandomNumberGenerator>)randomNumberGenerator rescueModeHelper:(id<VpsAbstractParticleFilterRescueModeHelper> _Nullable)rescueModeHelper scoringParams:(VpsScoringParams *)scoringParams trustedPositionParams:(VpsTrustedPositionParams *)trustedPositionParams __attribute__((swift_name("init(mapData:positionEngineRepository:params:randomNumberGenerator:rescueModeHelper:scoringParams:trustedPositionParams:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (VpsKotlinPair<NSMutableArray<VpsPose *> *, VpsKotlinFloatArray *> *)kullbackLeiblerSamplingStep:(VpsBaseEventStepEvent *)step __attribute__((swift_name("kullbackLeiblerSampling(step:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterKLDWiFi")))
@interface VpsParticleFilterKLDWiFi : VpsParticleFilterKLDV2
- (instancetype)initWithMapData:(VpsFloorLevelHandler *)mapData positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository params:(VpsParticleFilterParams *)params randomNumberGenerator:(id<VpsRandomNumberGenerator>)randomNumberGenerator rescueModeHelper:(id<VpsAbstractParticleFilterRescueModeHelper> _Nullable)rescueModeHelper scoringParams:(VpsScoringParams *)scoringParams trustedPositionParams:(VpsTrustedPositionParams *)trustedPositionParams __attribute__((swift_name("init(mapData:positionEngineRepository:params:randomNumberGenerator:rescueModeHelper:scoringParams:trustedPositionParams:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)handleScanScan:(VpsBaseEventWiFiScan *)scan __attribute__((swift_name("handleScan(scan:)")));
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
- (VpsFeatureToTensorValueBuilder *)setWindowSizeWindowSize:(VpsInt * _Nullable)windowSize __attribute__((swift_name("setWindowSize(windowSize:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowConverterRawSensorDataToRotation")))
@interface VpsFlowConverterRawSensorDataToRotation : VpsFlowConverter<VpsRawSensorData *, VpsFloat *>
- (instancetype)initWithRotationHandlerSettings:(VpsRotationHandlerSettings *)rotationHandlerSettings positionEngineRepository:(id<VpsPositionEngineRepository> _Nullable)positionEngineRepository useTT2OrientationFilter:(BOOL)useTT2OrientationFilter __attribute__((swift_name("init(rotationHandlerSettings:positionEngineRepository:useTT2OrientationFilter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
- (void)onSyncSignalSyncSignal:(VpsInputSignalSync *)syncSignal __attribute__((swift_name("onSyncSignal(syncSignal:)")));
@property (readonly) id<VpsPositionEngineRepository> _Nullable positionEngineRepository __attribute__((swift_name("positionEngineRepository")));
@property (readonly) VpsRotationHandlerSettings *rotationHandlerSettings __attribute__((swift_name("rotationHandlerSettings")));
@property (readonly) BOOL useTT2OrientationFilter __attribute__((swift_name("useTT2OrientationFilter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowConverterRawSensorDataToRotation.Builder")))
@interface VpsFlowConverterRawSensorDataToRotationBuilder : VpsFlowConverterBuilder<VpsFlowConverterRawSensorDataToRotation *, VpsFloat *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsFlowConverterRawSensorDataToRotation *)build __attribute__((swift_name("build()")));
- (VpsFlowConverterRawSensorDataToRotationBuilder *)setPositionEngineRepositoryPositionEngineRepository:(id<VpsPositionEngineRepository> _Nullable)positionEngineRepository __attribute__((swift_name("setPositionEngineRepository(positionEngineRepository:)")));
- (VpsFlowConverterRawSensorDataToRotationBuilder *)setRotationHandlerSettingsRotationHandlerSettings:(VpsRotationHandlerSettings *)rotationHandlerSettings __attribute__((swift_name("setRotationHandlerSettings(rotationHandlerSettings:)")));
- (VpsFlowConverterRawSensorDataToRotationBuilder *)setUseTT2OrientationFilterUseTT2OrientationFilter:(BOOL)useTT2OrientationFilter __attribute__((swift_name("setUseTT2OrientationFilter(useTT2OrientationFilter:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowConverterRotationToOutputSignal")))
@interface VpsFlowConverterRotationToOutputSignal : VpsFlowConverter<VpsFloat *, VpsOutputSignal *>
- (instancetype)initWithPositionEngineRepository:(id<VpsPositionEngineRepository> _Nullable)positionEngineRepository __attribute__((swift_name("init(positionEngineRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputData:(VpsFloat *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowConverterRotationToOutputSignal.Builder")))
@interface VpsFlowConverterRotationToOutputSignalBuilder : VpsFlowConverterBuilder<VpsFlowConverterRotationToOutputSignal *, VpsOutputSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsFlowConverterRotationToOutputSignal *)build __attribute__((swift_name("build()")));
- (VpsFlowConverterRotationToOutputSignalBuilder *)setPositionEngineRepositoryPositionEngineRepository:(id<VpsPositionEngineRepository> _Nullable)positionEngineRepository __attribute__((swift_name("setPositionEngineRepository(positionEngineRepository:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelToEvent")))
@interface VpsModelToEvent : VpsFlowConverter<VpsKotlinPair<VpsVelocityModelOutput *, VpsModeClassifierOutput *> *, VpsBaseEvent *>
- (instancetype)initWithParams:(VpsModelToEventParameters *)params positionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository floorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler onInputSignal:(void (^ _Nullable)(VpsInputSignal *))onInputSignal __attribute__((swift_name("init(params:positionEngineRepository:floorLevelHandler:onInputSignal:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)flush __attribute__((swift_name("flush()")));
- (void)onInputData:(VpsKotlinPair<VpsVelocityModelOutput *, VpsModeClassifierOutput *> *)data __attribute__((swift_name("onInput(data:)")));
@property (readonly) VpsFloorLevelHandler *floorLevelHandler __attribute__((swift_name("floorLevelHandler")));
@property (readonly) void (^ _Nullable onInputSignal)(VpsInputSignal *) __attribute__((swift_name("onInputSignal")));
@property (readonly) id<VpsPositionEngineRepository> positionEngineRepository __attribute__((swift_name("positionEngineRepository")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelToEvent.Builder")))
@interface VpsModelToEventBuilder : VpsFlowConverterBuilder<VpsModelToEvent *, VpsBaseEvent *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsModelToEvent *)build __attribute__((swift_name("build()")));
- (VpsModelToEventBuilder *)setFloorLevelHandlerFloorLevelHandler:(VpsFloorLevelHandler * _Nullable)floorLevelHandler __attribute__((swift_name("setFloorLevelHandler(floorLevelHandler:)")));
- (VpsModelToEventBuilder *)setOnInputSignalOnInputSignal:(void (^)(VpsInputSignal *))onInputSignal __attribute__((swift_name("setOnInputSignal(onInputSignal:)")));
- (VpsModelToEventBuilder *)setParamsParams:(VpsModelToEventParameters *)params __attribute__((swift_name("setParams(params:)")));
- (VpsModelToEventBuilder *)setPositionEngineRepositoryPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository __attribute__((swift_name("setPositionEngineRepository(positionEngineRepository:)")));
@end

__attribute__((swift_name("VelocityModelHandler")))
@protocol VpsVelocityModelHandler
@required
- (void)onVelocityModelOutPutModelOutput:(NSArray<VpsVelocityModelOutput *> *)modelOutput __attribute__((swift_name("onVelocityModelOutPut(modelOutput:)")));
@end

__attribute__((swift_name("ModeClassifierModelHandler")))
@protocol VpsModeClassifierModelHandler
@required
- (void)onModeClassifierOutputModelOutput:(NSArray<VpsModeClassifierOutput *> *)modelOutput __attribute__((swift_name("onModeClassifierOutput(modelOutput:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TensorToModelOutput")))
@interface VpsTensorToModelOutput : VpsFlowConverter<VpsTensor *, VpsKotlinPair<VpsVelocityModelOutput *, VpsModeClassifierOutput *> *> <VpsVelocityModelHandler, VpsModeClassifierModelHandler>
- (instancetype)initWithVelocityModel:(id<VpsVelocityModel> _Nullable)velocityModel modeClassifierModel:(id<VpsModeClassifierModel> _Nullable)modeClassifierModel __attribute__((swift_name("init(velocityModel:modeClassifierModel:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(VpsTensor *)data __attribute__((swift_name("onInput(data:)")));
- (void)onModeClassifierOutputModelOutput:(NSArray<VpsModeClassifierOutput *> *)modelOutput __attribute__((swift_name("onModeClassifierOutput(modelOutput:)")));
- (void)onVelocityModelOutPutModelOutput:(NSArray<VpsVelocityModelOutput *> *)modelOutput __attribute__((swift_name("onVelocityModelOutPut(modelOutput:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TensorToModelOutput.Builder")))
@interface VpsTensorToModelOutputBuilder : VpsFlowConverterBuilder<VpsTensorToModelOutput *, VpsKotlinPair<VpsVelocityModelOutput *, VpsModeClassifierOutput *> *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsTensorToModelOutput *)build __attribute__((swift_name("build()")));
- (VpsTensorToModelOutputBuilder *)setModeClassifierModelModeClassifierModel:(id<VpsModeClassifierModel> _Nullable)modeClassifierModel __attribute__((swift_name("setModeClassifierModel(modeClassifierModel:)")));
- (VpsTensorToModelOutputBuilder *)setVelocityModelVelocityModel:(id<VpsVelocityModel> _Nullable)velocityModel __attribute__((swift_name("setVelocityModel(velocityModel:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModeKalmanFilter")))
@interface VpsModeKalmanFilter : VpsBase
- (instancetype)initWithParams:(VpsModeKalmanFilterParams *)params __attribute__((swift_name("init(params:)"))) __attribute__((objc_designated_initializer));
- (VpsStepType *)filterModePredictionModeProbs:(NSArray<VpsFloat *> *)modeProbs currentSpeed:(float)currentSpeed speedThreshold:(float)speedThreshold __attribute__((swift_name("filterModePrediction(modeProbs:currentSpeed:speedThreshold:)")));
- (void)flush __attribute__((swift_name("flush()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StairSimpleFilter")))
@interface VpsStairSimpleFilter : VpsBase
- (instancetype)initWithParams:(VpsStairSimpleFilterParams *)params __attribute__((swift_name("init(params:)"))) __attribute__((objc_designated_initializer));
- (VpsStepSurfaceType *)filterStairPredictionProbabilities:(NSArray<VpsFloat *> *)probabilities speed:(float)speed __attribute__((swift_name("filterStairPrediction(probabilities:speed:)")));
- (void)flush __attribute__((swift_name("flush()")));
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
__attribute__((swift_name("NodeRawSensorDataMagTimeStamp")))
@interface VpsNodeRawSensorDataMagTimeStamp : VpsNode<VpsRawSensorData *>
- (instancetype)initWithPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository __attribute__((swift_name("init(positionEngineRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@property (readonly) id<VpsPositionEngineRepository> positionEngineRepository __attribute__((swift_name("positionEngineRepository")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeRawSensorDataRotationSensorFilter")))
@interface VpsNodeRawSensorDataRotationSensorFilter : VpsNode<VpsRawSensorData *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeRawSensorDataSplitGyroscopeValues")))
@interface VpsNodeRawSensorDataSplitGyroscopeValues : VpsNode<VpsRawSensorData *>
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
__attribute__((swift_name("NodeSetNavigationFrame")))
@interface VpsNodeSetNavigationFrame : VpsNode<VpsRawSensorData *>
- (instancetype)initWithPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository startAngleRadians:(double)startAngleRadians startAngleReferenceAxis:(VpsDeviceAxis * _Nullable)startAngleReferenceAxis __attribute__((swift_name("init(positionEngineRepository:startAngleRadians:startAngleReferenceAxis:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeOrientationFilterFilterUnwantedSensorDataTypes")))
@interface VpsNodeOrientationFilterFilterUnwantedSensorDataTypes : VpsNode<VpsRawSensorData *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((swift_name("FlowListener")))
@protocol VpsFlowListener
@required
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)onDataData:(id _Nullable)data __attribute__((swift_name("onData(data:)")));
@end

__attribute__((swift_name("TRFFusionListener")))
@protocol VpsTRFFusionListener
@required
- (void)onGyroBiasObservationSignal:(VpsOutputSignalObservationGyroBias *)signal __attribute__((swift_name("onGyroBiasObservation(signal:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeOrientationModule")))
@interface VpsNodeOrientationModule : VpsNode<VpsRawSensorData *> <VpsFlowListener, VpsTRFFusionListener>
- (instancetype)initWithPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository params:(VpsOrientationModuleParams *)params listener:(void (^ _Nullable)(VpsOutputSignal *))listener __attribute__((swift_name("init(positionEngineRepository:params:listener:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)onDataData:(VpsRawSensorData *)data __attribute__((swift_name("onData(data:)")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onGyroBiasObservationSignal:(VpsOutputSignalObservationGyroBias *)signal __attribute__((swift_name("onGyroBiasObservation(signal:)")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
- (void)onTemperatureSignalTemperature:(VpsInputSignalDeviceInfoTemperature *)temperature __attribute__((swift_name("onTemperatureSignal(temperature:)")));
- (void)setGyroBiasObservationsSignal:(VpsInputSignalEnvironmentSignalSetGyroBiasObservations *)signal __attribute__((swift_name("setGyroBiasObservations(signal:)")));
@end

__attribute__((swift_name("CalibrationModule")))
@interface VpsCalibrationModule : VpsFlowConverter<VpsOrientationFilterSensorPack *, VpsOrientationFilterSensorPack *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalibrationModule.Builder")))
@interface VpsCalibrationModuleBuilder : VpsFlowConverterBuilder<VpsCalibrationModule *, VpsOrientationFilterSensorPack *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsCalibrationModule *)build __attribute__((swift_name("build()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityCalibrationModule")))
@interface VpsIdentityCalibrationModule : VpsCalibrationModule
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onInputData:(VpsOrientationFilterSensorPack *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((swift_name("OrientationFilter")))
@interface VpsOrientationFilter : VpsFlowConverter<VpsOrientationFilterSensorPack *, VpsRawSensorData *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrientationFilter.Builder")))
@interface VpsOrientationFilterBuilder : VpsFlowConverterBuilder<VpsOrientationFilter *, VpsRawSensorData *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsOrientationFilter *)build __attribute__((swift_name("build()")));
- (VpsOrientationFilterBuilder *)setParamsOrientationFilterParams:(VpsOrientationFilterParams *)orientationFilterParams __attribute__((swift_name("setParams(orientationFilterParams:)")));
- (VpsOrientationFilterBuilder *)setPositionEngineRepositoryPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository __attribute__((swift_name("setPositionEngineRepository(positionEngineRepository:)")));
- (VpsOrientationFilterBuilder *)setUpdateFrequencyUpdateFrequency:(float)updateFrequency __attribute__((swift_name("setUpdateFrequency(updateFrequency:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComplementaryOrientationFilter")))
@interface VpsComplementaryOrientationFilter : VpsOrientationFilter
- (instancetype)initWithUpdateFrequency:(float)updateFrequency params:(VpsOrientationFilterParams *)params positionEngineRepository:(id<VpsPositionEngineRepository> _Nullable)positionEngineRepository __attribute__((swift_name("init(updateFrequency:params:positionEngineRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (VpsKotlinFloatArray *)getCurrentOrientation __attribute__((swift_name("getCurrentOrientation()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(VpsOrientationFilterSensorPack *)data __attribute__((swift_name("onInput(data:)")));
- (void)updateGyro:(VpsKotlinFloatArray *)gyro acc:(VpsKotlinFloatArray *)acc __attribute__((swift_name("update(gyro:acc:)")));
- (void)updateComplementaryGyro:(VpsKotlinFloatArray *)gyro systemOrientation:(VpsKotlinFloatArray *)systemOrientation __attribute__((swift_name("updateComplementary(gyro:systemOrientation:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GyroRestDetector")))
@interface VpsGyroRestDetector : VpsBase
- (instancetype)initWithFs:(float)fs relGyroTol:(float)relGyroTol absGyroTol:(float)absGyroTol smoothingWindowSize:(float)smoothingWindowSize minSize:(float)minSize maxSize:(float)maxSize __attribute__((swift_name("init(fs:relGyroTol:absGyroTol:smoothingWindowSize:minSize:maxSize:)"))) __attribute__((objc_designated_initializer));
- (VpsGyroRestResult *)updateGyro:(VpsKotlinFloatArray *)gyro __attribute__((swift_name("update(gyro:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GyroRestResult")))
@interface VpsGyroRestResult : VpsBase
- (instancetype)initWithVerifiedRest:(BOOL)verifiedRest restTime:(float)restTime restGyroBias:(VpsKotlinFloatArray * _Nullable)restGyroBias __attribute__((swift_name("init(verifiedRest:restTime:restGyroBias:)"))) __attribute__((objc_designated_initializer));
- (VpsGyroRestResult *)doCopyVerifiedRest:(BOOL)verifiedRest restTime:(float)restTime restGyroBias:(VpsKotlinFloatArray * _Nullable)restGyroBias __attribute__((swift_name("doCopy(verifiedRest:restTime:restGyroBias:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsKotlinFloatArray * _Nullable restGyroBias __attribute__((swift_name("restGyroBias")));
@property (readonly) float restTime __attribute__((swift_name("restTime")));
@property (readonly) BOOL verifiedRest __attribute__((swift_name("verifiedRest")));
@end

__attribute__((swift_name("RestDetector")))
@interface VpsRestDetector : VpsFlowConverter<VpsRawSensorPack *, VpsOrientationFilterSensorPack *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestDetector.Builder")))
@interface VpsRestDetectorBuilder : VpsFlowConverterBuilder<VpsRestDetector *, VpsOrientationFilterSensorPack *>
- (instancetype)initWithDeviceModel:(NSString *)deviceModel __attribute__((swift_name("init(deviceModel:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (VpsRestDetector *)build __attribute__((swift_name("build()")));
- (VpsRestDetectorBuilder *)setParamsRestDetectorParams:(VpsRestDetectorParams *)restDetectorParams __attribute__((swift_name("setParams(restDetectorParams:)")));
- (VpsRestDetectorBuilder *)setUpdateFrequencyUpdateFrequency:(float)updateFrequency __attribute__((swift_name("setUpdateFrequency(updateFrequency:)")));
@property (readonly) NSString *deviceModel __attribute__((swift_name("deviceModel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleRestDetector")))
@interface VpsSimpleRestDetector : VpsRestDetector
- (instancetype)initWithDetector:(VpsGyroRestDetector *)detector __attribute__((swift_name("init(detector:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputData:(VpsRawSensorPack *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((swift_name("TemperatureFilter")))
@interface VpsTemperatureFilter : VpsFlowConverter<VpsOrientationFilterSensorPack *, VpsOrientationFilterSensorPack *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onTemperatureSignalTemperature:(VpsInputSignalDeviceInfoTemperature *)temperature __attribute__((swift_name("onTemperatureSignal(temperature:)")));
- (void)setGyroBiasObservationsSignal:(VpsInputSignalEnvironmentSignalSetGyroBiasObservations *)signal __attribute__((swift_name("setGyroBiasObservations(signal:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TemperatureFilter.Builder")))
@interface VpsTemperatureFilterBuilder : VpsFlowConverterBuilder<VpsTemperatureFilter *, VpsOrientationFilterSensorPack *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsTemperatureFilter *)build __attribute__((swift_name("build()")));
- (VpsTemperatureFilterBuilder *)setParamsTemperatureFilterParams:(VpsTemperatureFilterParams *)temperatureFilterParams __attribute__((swift_name("setParams(temperatureFilterParams:)")));
- (VpsTemperatureFilterBuilder *)setTempSourceTempSource:(NSString * _Nullable)tempSource __attribute__((swift_name("setTempSource(tempSource:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TempGyroBiasInterpolationFilter")))
@interface VpsTempGyroBiasInterpolationFilter : VpsTemperatureFilter
- (instancetype)initWithTempSource:(NSString *)tempSource params:(VpsTemperatureFilterParams *)params __attribute__((swift_name("init(tempSource:params:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputData:(VpsOrientationFilterSensorPack *)data __attribute__((swift_name("onInput(data:)")));
- (void)onTemperatureSignalTemperature:(VpsInputSignalDeviceInfoTemperature *)temperature __attribute__((swift_name("onTemperatureSignal(temperature:)")));
- (void)setGyroBiasObservationsSignal:(VpsInputSignalEnvironmentSignalSetGyroBiasObservations *)signal __attribute__((swift_name("setGyroBiasObservations(signal:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityTemperatureFilter")))
@interface VpsIdentityTemperatureFilter : VpsTemperatureFilter
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onInputData:(VpsOrientationFilterSensorPack *)data __attribute__((swift_name("onInput(data:)")));
- (void)onTemperatureSignalTemperature:(VpsInputSignalDeviceInfoTemperature *)temperature __attribute__((swift_name("onTemperatureSignal(temperature:)")));
- (void)setGyroBiasObservationsSignal:(VpsInputSignalEnvironmentSignalSetGyroBiasObservations *)signal __attribute__((swift_name("setGyroBiasObservations(signal:)")));
@end

__attribute__((swift_name("TRFFusion")))
@interface VpsTRFFusion : VpsFlowConverter<VpsOrientationFilterSensorPack *, VpsOrientationFilterSensorPack *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TRFFusion.Builder")))
@interface VpsTRFFusionBuilder : VpsFlowConverterBuilder<VpsTRFFusion *, VpsOrientationFilterSensorPack *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsTRFFusion *)build __attribute__((swift_name("build()")));
- (VpsTRFFusionBuilder *)setListenerListener:(id<VpsTRFFusionListener>)listener __attribute__((swift_name("setListener(listener:)")));
- (VpsTRFFusionBuilder *)setParamsTrfFusionParams:(VpsTRFFusionParams *)trfFusionParams __attribute__((swift_name("setParams(trfFusionParams:)")));
- (VpsTRFFusionBuilder *)setSessionIdSessionId:(NSString *)sessionId __attribute__((swift_name("setSessionId(sessionId:)")));
- (VpsTRFFusionBuilder *)setTempSourceTempSource:(NSString * _Nullable)tempSource __attribute__((swift_name("setTempSource(tempSource:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityTRFFusion")))
@interface VpsIdentityTRFFusion : VpsTRFFusion
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onInputData:(VpsOrientationFilterSensorPack *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleTRFFusion")))
@interface VpsSimpleTRFFusion : VpsTRFFusion
- (instancetype)initWithParams:(VpsTRFFusionParams *)params sessionId:(NSString *)sessionId listener:(id<VpsTRFFusionListener>)listener __attribute__((swift_name("init(params:sessionId:listener:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputData:(VpsOrientationFilterSensorPack *)data __attribute__((swift_name("onInput(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BackTrackers")))
@interface VpsBackTrackers : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)backTrackers __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBackTrackers *shared __attribute__((swift_name("shared")));
- (VpsCoordinateF *)angleCorrectionBacktrackerAngles:(NSArray<VpsFloat *> *)angles speeds:(NSArray<VpsFloat *> *)speeds directions:(NSArray<VpsFloat *> *)directions startPosition:(VpsCoordinateF *)startPosition __attribute__((swift_name("angleCorrectionBacktracker(angles:speeds:directions:startPosition:)")));
- (VpsFloat * _Nullable)speedCalibrationSpeeds:(NSArray<VpsFloat *> * _Nullable)speeds directions:(NSArray<VpsFloat *> * _Nullable)directions realDistanceTravelled:(float)realDistanceTravelled speedFactorRange:(VpsKotlinPair<VpsFloat *, VpsFloat *> *)speedFactorRange expectedSpeedFactor:(VpsFloat * _Nullable)expectedSpeedFactor maxDifference:(float)maxDifference __attribute__((swift_name("speedCalibration(speeds:directions:realDistanceTravelled:speedFactorRange:expectedSpeedFactor:maxDifference:)")));
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

__attribute__((swift_name("CompassDriftEstimatorOutdoors")))
@interface VpsCompassDriftEstimatorOutdoors : VpsFlowConverter<VpsRawSensorPack *, VpsFeatures *>
- (instancetype)initWithPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository params:(VpsMagnetometerDriftEstimatorParams *)params __attribute__((swift_name("init(positionEngineRepository:params:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(VpsRawSensorPack *)data __attribute__((swift_name("onInput(data:)")));
- (void)updateData:(VpsRawSensorPack *)data __attribute__((swift_name("update(data:)")));
@property (readonly) VpsMagnetometerDriftEstimatorParams *params __attribute__((swift_name("params")));
@property (readonly) id<VpsPositionEngineRepository> positionEngineRepository __attribute__((swift_name("positionEngineRepository")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompassDriftEstimatorOutdoors.Builder")))
@interface VpsCompassDriftEstimatorOutdoorsBuilder : VpsFlowConverterBuilder<VpsCompassDriftEstimatorOutdoors *, VpsFeatures *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsCompassDriftEstimatorOutdoors *)build __attribute__((swift_name("build()")));
- (VpsCompassDriftEstimatorOutdoorsBuilder *)setParametersParameters:(VpsMagnetometerDriftEstimatorParams *)parameters __attribute__((swift_name("setParameters(parameters:)")));
- (VpsCompassDriftEstimatorOutdoorsBuilder *)setPositionEngineRepositoryPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository __attribute__((swift_name("setPositionEngineRepository(positionEngineRepository:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterpolationModule")))
@interface VpsInterpolationModule : VpsFlowConverter<VpsRawSensorData *, VpsRawSensorPack *>
- (instancetype)initWithF:(float)f useMagnetometer:(BOOL)useMagnetometer useGyroBias:(BOOL)useGyroBias useTT2OrientationFilter:(BOOL)useTT2OrientationFilter __attribute__((swift_name("init(f:useMagnetometer:useGyroBias:useTT2OrientationFilter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
@property (readonly) NSMutableArray<VpsKotlinPair<VpsLong *, VpsKotlinFloatArray *> *> *acc __attribute__((swift_name("acc")));
@property (readonly) int64_t dt __attribute__((swift_name("dt")));
@property (readonly) NSMutableArray<VpsKotlinPair<VpsLong *, VpsKotlinFloatArray *> *> *gyr __attribute__((swift_name("gyr")));
@property (readonly) NSMutableArray<VpsKotlinPair<VpsLong *, VpsKotlinFloatArray *> *> * _Nullable gyroBias __attribute__((swift_name("gyroBias")));
@property BOOL has_started __attribute__((swift_name("has_started")));
@property (readonly) NSMutableArray<VpsKotlinPair<VpsLong *, VpsKotlinFloatArray *> *> * _Nullable mag __attribute__((swift_name("mag")));
@property (readonly) NSMutableArray<VpsKotlinPair<VpsLong *, VpsKotlinFloatArray *> *> *rot __attribute__((swift_name("rot")));
@property int64_t t __attribute__((swift_name("t")));
@property (readonly) BOOL useGyroBias __attribute__((swift_name("useGyroBias")));
@property (readonly) BOOL useMagnetometer __attribute__((swift_name("useMagnetometer")));
@property (readonly) BOOL useTT2OrientationFilter __attribute__((swift_name("useTT2OrientationFilter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterpolationModule.Builder")))
@interface VpsInterpolationModuleBuilder : VpsFlowConverterBuilder<VpsInterpolationModule *, VpsRawSensorPack *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsInterpolationModule *)build __attribute__((swift_name("build()")));
- (VpsInterpolationModuleBuilder *)setFrequencyFrequency:(float)frequency __attribute__((swift_name("setFrequency(frequency:)")));
- (VpsInterpolationModuleBuilder *)setUseGyroBiasUseGyroBias:(BOOL)useGyroBias __attribute__((swift_name("setUseGyroBias(useGyroBias:)")));
- (VpsInterpolationModuleBuilder *)setUseMagnetometerUseMagnetometer:(BOOL)useMagnetometer __attribute__((swift_name("setUseMagnetometer(useMagnetometer:)")));
- (VpsInterpolationModuleBuilder *)setUseTT2OrientationFilterUseTT2OrientationFilter:(BOOL)useTT2OrientationFilter __attribute__((swift_name("setUseTT2OrientationFilter(useTT2OrientationFilter:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterpolationModule.Params")))
@interface VpsInterpolationModuleParams : VpsBase
- (instancetype)initWithF:(float)f useMagnetometer:(BOOL)useMagnetometer __attribute__((swift_name("init(f:useMagnetometer:)"))) __attribute__((objc_designated_initializer));
- (VpsInterpolationModuleParams *)doCopyF:(float)f useMagnetometer:(BOOL)useMagnetometer __attribute__((swift_name("doCopy(f:useMagnetometer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float f __attribute__((swift_name("f")));
@property (readonly) BOOL useMagnetometer __attribute__((swift_name("useMagnetometer")));
@end

__attribute__((swift_name("MagnetometerDriftEstimator")))
@interface VpsMagnetometerDriftEstimator : VpsFlowConverter<VpsRawSensorPack *, VpsFeatures *>
- (instancetype)initWithPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository floorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler params:(VpsMagnetometerDriftEstimatorParams *)params __attribute__((swift_name("init(positionEngineRepository:floorLevelHandler:params:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(VpsRawSensorPack *)data __attribute__((swift_name("onInput(data:)")));
- (void)updateData:(VpsRawSensorPack *)data __attribute__((swift_name("update(data:)")));
@property (readonly) VpsFloorLevelHandler *floorLevelHandler __attribute__((swift_name("floorLevelHandler")));
@property (readonly) VpsMagnetometerDriftEstimatorParams *params __attribute__((swift_name("params")));
@property (readonly) id<VpsPositionEngineRepository> positionEngineRepository __attribute__((swift_name("positionEngineRepository")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MagnetometerDriftEstimator.Builder")))
@interface VpsMagnetometerDriftEstimatorBuilder : VpsFlowConverterBuilder<VpsMagnetometerDriftEstimator *, VpsFeatures *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsMagnetometerDriftEstimator *)build __attribute__((swift_name("build()")));
- (VpsMagnetometerDriftEstimatorBuilder *)setFloorLevelHandlerHandler:(VpsFloorLevelHandler * _Nullable)handler __attribute__((swift_name("setFloorLevelHandler(handler:)")));
- (VpsMagnetometerDriftEstimatorBuilder *)setParametersParameters:(VpsMagnetometerDriftEstimatorParams *)parameters __attribute__((swift_name("setParameters(parameters:)")));
- (VpsMagnetometerDriftEstimatorBuilder *)setPositionEngineRepositoryPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository __attribute__((swift_name("setPositionEngineRepository(positionEngineRepository:)")));
@end

__attribute__((swift_name("MagnetometerDriftEstimatorOutdoors")))
@interface VpsMagnetometerDriftEstimatorOutdoors : VpsFlowConverter<VpsRawSensorPack *, VpsFeatures *>
- (instancetype)initWithPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository params:(VpsMagnetometerDriftEstimatorParams *)params __attribute__((swift_name("init(positionEngineRepository:params:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(VpsRawSensorPack *)data __attribute__((swift_name("onInput(data:)")));
- (void)updateData:(VpsRawSensorPack *)data __attribute__((swift_name("update(data:)")));
@property (readonly) VpsMagnetometerDriftEstimatorParams *params __attribute__((swift_name("params")));
@property (readonly) id<VpsPositionEngineRepository> positionEngineRepository __attribute__((swift_name("positionEngineRepository")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MagnetometerDriftEstimatorOutdoors.Builder")))
@interface VpsMagnetometerDriftEstimatorOutdoorsBuilder : VpsFlowConverterBuilder<VpsMagnetometerDriftEstimatorOutdoors *, VpsFeatures *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsMagnetometerDriftEstimatorOutdoors *)build __attribute__((swift_name("build()")));
- (VpsMagnetometerDriftEstimatorOutdoorsBuilder *)setParametersParameters:(VpsMagnetometerDriftEstimatorParams *)parameters __attribute__((swift_name("setParameters(parameters:)")));
- (VpsMagnetometerDriftEstimatorOutdoorsBuilder *)setPositionEngineRepositoryPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository __attribute__((swift_name("setPositionEngineRepository(positionEngineRepository:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MathUtil")))
@interface VpsMathUtil : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mathUtil __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsMathUtil *shared __attribute__((swift_name("shared")));
- (VpsKotlinFloatArray *)crossProduct:(VpsKotlinFloatArray *)receiver other:(VpsKotlinFloatArray *)other __attribute__((swift_name("crossProduct(_:other:)")));
- (VpsKotlinFloatArray *)cumulativeSum:(VpsKotlinFloatArray *)receiver __attribute__((swift_name("cumulativeSum(_:)")));
- (double)getGaussianDistributionMean:(double)mean std:(double)std random:(id<VpsRandomNumberGenerator> _Nullable)random __attribute__((swift_name("getGaussianDistribution(mean:std:random:)")));
- (float)getGaussianDistributionMean:(float)mean std:(float)std random_:(id<VpsRandomNumberGenerator> _Nullable)random __attribute__((swift_name("getGaussianDistribution(mean:std:random_:)")));
- (VpsKotlinArray<VpsKotlinFloatArray *> *)getRotationMatrixFromQuaternionQuaternion:(VpsKotlinFloatArray *)quaternion __attribute__((swift_name("getRotationMatrixFromQuaternion(quaternion:)")));
- (VpsKotlinDoubleArray *)getStartCorrectionQuaternionStartAngle:(double)startAngle q0:(VpsKotlinDoubleArray *)q0 deviceAxis:(VpsDeviceAxis * _Nullable)deviceAxis __attribute__((swift_name("getStartCorrectionQuaternion(startAngle:q0:deviceAxis:)")));
- (VpsKotlinDoubleArray *)getStartQuaternionQ:(VpsKotlinDoubleArray *)q __attribute__((swift_name("getStartQuaternion(q:)"))) __attribute__((deprecated("Use getStartCorrectionQuaternion instead.")));
- (VpsKotlinFloatArray *)getStartQuaternionQ_:(VpsKotlinFloatArray *)q __attribute__((swift_name("getStartQuaternion(q_:)"))) __attribute__((deprecated("Use getStartCorrectionQuaternion instead.")));
- (double)getYawQ:(VpsKotlinDoubleArray *)q deviceAxis:(VpsDeviceAxis * _Nullable)deviceAxis logAxis:(BOOL)logAxis __attribute__((swift_name("getYaw(q:deviceAxis:logAxis:)")));
- (float)getYawQ:(VpsKotlinFloatArray *)q deviceAxis:(VpsDeviceAxis * _Nullable)deviceAxis logAxis_:(BOOL)logAxis __attribute__((swift_name("getYaw(q:deviceAxis:logAxis_:)")));
- (VpsKotlinFloatArray *)linear_interpolateD0:(VpsKotlinPair<VpsLong *, VpsKotlinFloatArray *> *)d0 d1:(VpsKotlinPair<VpsLong *, VpsKotlinFloatArray *> *)d1 t:(int64_t)t __attribute__((swift_name("linear_interpolate(d0:d1:t:)")));
- (VpsKotlinDoubleArray *)q_conjQ:(VpsKotlinDoubleArray *)q __attribute__((swift_name("q_conj(q:)")));
- (VpsKotlinFloatArray *)q_conjQ_:(VpsKotlinFloatArray *)q __attribute__((swift_name("q_conj(q_:)")));
- (VpsKotlinFloatArray *)q_expQ:(VpsKotlinFloatArray *)q __attribute__((swift_name("q_exp(q:)")));
- (VpsKotlinDoubleArray *)q_invQ:(VpsKotlinDoubleArray *)q __attribute__((swift_name("q_inv(q:)")));
- (VpsKotlinFloatArray *)q_invQ_:(VpsKotlinFloatArray *)q __attribute__((swift_name("q_inv(q_:)")));
- (VpsKotlinFloatArray *)q_lnQ:(VpsKotlinFloatArray *)q __attribute__((swift_name("q_ln(q:)")));
- (VpsKotlinDoubleArray *)q_multQ:(VpsKotlinDoubleArray *)q r:(VpsKotlinDoubleArray *)r __attribute__((swift_name("q_mult(q:r:)")));
- (VpsKotlinFloatArray *)q_multQ:(VpsKotlinFloatArray *)q r_:(VpsKotlinFloatArray *)r __attribute__((swift_name("q_mult(q:r_:)")));
- (VpsKotlinFloatArray *)q_powQ:(VpsKotlinFloatArray *)q n:(float)n __attribute__((swift_name("q_pow(q:n:)")));
- (VpsKotlinFloatArray *)q_scaleQ:(VpsKotlinFloatArray *)q scale:(float)scale __attribute__((swift_name("q_scale(q:scale:)")));
- (VpsKotlinFloatArray *)quatVectorMulQ:(VpsKotlinFloatArray *)q v:(VpsKotlinFloatArray *)v __attribute__((swift_name("quatVectorMul(q:v:)")));
- (VpsKotlinDoubleArray *)quaternionExtractPitchFullRangeQ:(VpsKotlinDoubleArray *)q __attribute__((swift_name("quaternionExtractPitchFullRange(q:)")));
- (VpsKotlinFloatArray *)quaternionExtractPitchFullRangeQ_:(VpsKotlinFloatArray *)q __attribute__((swift_name("quaternionExtractPitchFullRange(q_:)")));
- (VpsKotlinDoubleArray *)quaternionExtractYawQ:(VpsKotlinDoubleArray *)q __attribute__((swift_name("quaternionExtractYaw(q:)")));
- (VpsKotlinFloatArray *)quaternionExtractYawQ_:(VpsKotlinFloatArray *)q __attribute__((swift_name("quaternionExtractYaw(q_:)")));
- (VpsKotlinDoubleArray *)quaternionToDoubleQ:(VpsKotlinFloatArray *)q __attribute__((swift_name("quaternionToDouble(q:)")));
- (VpsKotlinFloatArray *)quaternionToFloatQ:(VpsKotlinDoubleArray *)q __attribute__((swift_name("quaternionToFloat(q:)")));
- (VpsKotlinFloatArray *)removePitchQ:(VpsKotlinFloatArray *)q __attribute__((swift_name("removePitch(q:)")));
- (VpsKotlinDoubleArray *)rotateVectorQ:(VpsKotlinDoubleArray *)q v:(VpsKotlinDoubleArray *)v __attribute__((swift_name("rotateVector(q:v:)")));
- (VpsKotlinFloatArray *)rotateVectorQ:(VpsKotlinFloatArray *)q v:(VpsKotlinFloatArray *)v inverse:(BOOL)inverse __attribute__((swift_name("rotateVector(q:v:inverse:)")));
- (VpsKotlinFloatArray *)slerpD0:(VpsKotlinPair<VpsLong *, VpsKotlinFloatArray *> *)d0 d1:(VpsKotlinPair<VpsLong *, VpsKotlinFloatArray *> *)d1 t:(int64_t)t __attribute__((swift_name("slerp(d0:d1:t:)")));
- (VpsKotlinArray<VpsKotlinFloatArray *> *)unflip_rotorsQ0:(VpsKotlinFloatArray *)q0 q1:(VpsKotlinFloatArray *)q1 __attribute__((swift_name("unflip_rotors(q0:q1:)")));
@end

__attribute__((swift_name("FeaturePacker")))
@interface VpsFeaturePacker : VpsFlowConverter<VpsRawSensorPack *, VpsFeatures *>
- (instancetype)initWithSmoothing:(BOOL)smoothing flipAcc:(BOOL)flipAcc featureSequence:(NSArray<VpsVelocityModelParamsFeaturesEntries *> *)featureSequence positionEngineRepository:(id<VpsPositionEngineRepository> _Nullable)positionEngineRepository __attribute__((swift_name("init(smoothing:flipAcc:featureSequence:positionEngineRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (VpsKotlinFloatArray *)generateFeaturesGyroscope:(VpsKotlinFloatArray *)gyroscope acceleration:(VpsKotlinFloatArray *)acceleration rotation:(VpsKotlinFloatArray *)rotation __attribute__((swift_name("generateFeatures(gyroscope:acceleration:rotation:)")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(VpsRawSensorPack *)data __attribute__((swift_name("onInput(data:)")));
- (void)updateData:(VpsRawSensorPack *)data __attribute__((swift_name("update(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturePacker.Builder")))
@interface VpsFeaturePackerBuilder : VpsFlowConverterBuilder<VpsFeaturePacker *, VpsFeatures *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsFeaturePacker *)build __attribute__((swift_name("build()")));
- (VpsFeaturePackerBuilder *)setFeatureSequenceFeatureSequence:(NSArray<VpsVelocityModelParamsFeaturesEntries *> * _Nullable)featureSequence __attribute__((swift_name("setFeatureSequence(featureSequence:)")));
- (VpsFeaturePackerBuilder *)setFlipAccFlipAcc:(BOOL)flipAcc __attribute__((swift_name("setFlipAcc(flipAcc:)")));
- (VpsFeaturePackerBuilder *)setPositionEngineRepositoryPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository __attribute__((swift_name("setPositionEngineRepository(positionEngineRepository:)")));
- (VpsFeaturePackerBuilder *)setSmoothingUseSmoothing:(VpsBoolean * _Nullable)useSmoothing __attribute__((swift_name("setSmoothing(useSmoothing:)")));
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
@property NSMutableArray<VpsLong *> *systemTime __attribute__((swift_name("systemTime")));
@property NSMutableArray<VpsLong *> *time __attribute__((swift_name("time")));
@end

__attribute__((swift_name("NorthPredictorDriftEstimator")))
@interface VpsNorthPredictorDriftEstimator : VpsFlowConverter<VpsRawSensorPack *, VpsFeatures *>
- (instancetype)initWithPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository params:(VpsMagnetometerDriftEstimatorParams *)params listener:(void (^ _Nullable)(VpsInputSignal *))listener northPredictorModel:(id<VpsNorthPredictorModel> _Nullable)northPredictorModel __attribute__((swift_name("init(positionEngineRepository:params:listener:northPredictorModel:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (VpsDouble * _Nullable)bruteForce:(BOOL)force indoorUseCase:(BOOL)indoorUseCase __attribute__((swift_name("brute(force:indoorUseCase:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)checkRecentSimilarValuesValues:(NSArray<VpsFloat *> *)values n:(int32_t)n minAbsThreshold:(float)minAbsThreshold similarityThreshold:(float)similarityThreshold __attribute__((swift_name("checkRecentSimilarValues(values:n:minAbsThreshold:similarityThreshold:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSArray<VpsKotlinDoubleArray *> *)computeMagBiasSingleAlpha:(double)alpha q:(VpsKotlinDoubleArray *)q m:(VpsKotlinDoubleArray *)m __attribute__((swift_name("computeMagBiasSingle(alpha:q:m:)")));
- (void)doComputeNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp __attribute__((swift_name("doCompute(nanoTimestamp:systemTimestamp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (VpsDouble * _Nullable)getAlphaCenterForBounds __attribute__((swift_name("getAlphaCenterForBounds()")));
- (void)onForceSyncSync:(VpsInputSignalSyncForce *)sync __attribute__((swift_name("onForceSync(sync:)")));
- (void)onInputData:(VpsRawSensorPack *)data __attribute__((swift_name("onInput(data:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSArray<id> *)padToMatchSizeSource:(NSArray<id> *)source targetSize:(int32_t)targetSize __attribute__((swift_name("padToMatchSize(source:targetSize:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (VpsKotlinPair<NSArray<VpsKotlinDoubleArray *> *, NSArray<VpsKotlinDoubleArray *> *> *)prepareMagQuatLists __attribute__((swift_name("prepareMagQuatLists()")));
- (void)quickEstimationNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp __attribute__((swift_name("quickEstimation(nanoTimestamp:systemTimestamp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)setCurrentMagInfo __attribute__((swift_name("setCurrentMagInfo()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (double)tangentResidualsAlpha:(double)alpha quatList:(NSArray<VpsKotlinDoubleArray *> *)quatList magList:(NSArray<VpsKotlinDoubleArray *> *)magList __attribute__((swift_name("tangentResiduals(alpha:quatList:magList:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property NSMutableArray<VpsFloat *> *angleCorrections __attribute__((swift_name("angleCorrections")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) VpsKotlinPair<VpsDouble *, VpsDouble *> *bounds __attribute__((swift_name("bounds")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float bruteThreshold __attribute__((swift_name("bruteThreshold")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property int32_t computeCounter __attribute__((swift_name("computeCounter")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t computeInterval __attribute__((swift_name("computeInterval")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property int32_t countSinceLastCompute __attribute__((swift_name("countSinceLastCompute")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property VpsFloat * _Nullable currentAlpha __attribute__((swift_name("currentAlpha")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property VpsFloat * _Nullable currentAngleCorrection __attribute__((swift_name("currentAngleCorrection")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property VpsKotlinFloatArray * _Nullable currentBias __attribute__((swift_name("currentBias")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property VpsFloat * _Nullable currentLoss __attribute__((swift_name("currentLoss")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) double declination __attribute__((swift_name("declination")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float distanceThreshold __attribute__((swift_name("distanceThreshold")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL doBackTracking __attribute__((swift_name("doBackTracking")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float driftDiffToTriggerBackTrack __attribute__((swift_name("driftDiffToTriggerBackTrack")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float driftEstimateSimilarityThreshold __attribute__((swift_name("driftEstimateSimilarityThreshold")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) double fs __attribute__((swift_name("fs")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property BOOL hasDoneFirstBacktrack __attribute__((swift_name("hasDoneFirstBacktrack")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) double inclination __attribute__((swift_name("inclination")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property float lastAngleBackTrack __attribute__((swift_name("lastAngleBackTrack")));
@property (readonly) void (^ _Nullable listener)(VpsInputSignal *) __attribute__((swift_name("listener")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) VpsMaxQueue<VpsKotlinDoubleArray *> *magCalibrationQueue __attribute__((swift_name("magCalibrationQueue")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) VpsMaxQueue<VpsKotlinDoubleArray *> *magQueue __attribute__((swift_name("magQueue")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL magUseXChannel __attribute__((swift_name("magUseXChannel")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL magUseYChannel __attribute__((swift_name("magUseYChannel")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL magUseZChannel __attribute__((swift_name("magUseZChannel")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) double magnitude __attribute__((swift_name("magnitude")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSArray<VpsInt *> *nIters __attribute__((swift_name("nIters")));
@property (readonly) id<VpsNorthPredictorModel> _Nullable northPredictorModel __attribute__((swift_name("northPredictorModel")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t numSimilarDriftEstimatesToTriggerBackTrack __attribute__((swift_name("numSimilarDriftEstimatesToTriggerBackTrack")));
@property (readonly) VpsMagnetometerDriftEstimatorParams *params __attribute__((swift_name("params")));
@property (readonly) id<VpsPositionEngineRepository> positionEngineRepository __attribute__((swift_name("positionEngineRepository")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) VpsMaxQueue<VpsKotlinDoubleArray *> *quatQueue __attribute__((swift_name("quatQueue")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float queueFillThreshold __attribute__((swift_name("queueFillThreshold")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t sensorBufferSize __attribute__((swift_name("sensorBufferSize")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) double sigma1Coeff __attribute__((swift_name("sigma1Coeff")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) double sigma2Coeff __attribute__((swift_name("sigma2Coeff")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t subSampling __attribute__((swift_name("subSampling")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL useBatchedResiduals __attribute__((swift_name("useBatchedResiduals")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL useCheapGridSearch __attribute__((swift_name("useCheapGridSearch")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL useDistanceThreshold __attribute__((swift_name("useDistanceThreshold")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL useMLResiduals __attribute__((swift_name("useMLResiduals")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL useTangentResidual __attribute__((swift_name("useTangentResidual")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) VpsKotlinDoubleArray *weights __attribute__((swift_name("weights")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NorthPredictorDriftEstimatorInDoors")))
@interface VpsNorthPredictorDriftEstimatorInDoors : VpsNorthPredictorDriftEstimator
- (instancetype)initWithPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository params:(VpsMagnetometerDriftEstimatorParams *)params listener:(void (^ _Nullable)(VpsInputSignal *))listener northPredictorModel:(id<VpsNorthPredictorModel> _Nullable)northPredictorModel floorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler __attribute__((swift_name("init(positionEngineRepository:params:listener:northPredictorModel:floorLevelHandler:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository params:(VpsMagnetometerDriftEstimatorParams *)params listener:(void (^ _Nullable)(VpsInputSignal *))listener northPredictorModel:(id<VpsNorthPredictorModel> _Nullable)northPredictorModel __attribute__((swift_name("init(positionEngineRepository:params:listener:northPredictorModel:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)doComputeNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp __attribute__((swift_name("doCompute(nanoTimestamp:systemTimestamp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (VpsDouble *)getAlphaCenterForBounds __attribute__((swift_name("getAlphaCenterForBounds()")));
- (void)onForceSyncSync:(VpsInputSignalSyncForce *)sync __attribute__((swift_name("onForceSync(sync:)")));
- (void)onInputData:(VpsRawSensorPack *)data __attribute__((swift_name("onInput(data:)")));
- (void)quickEstimationNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp __attribute__((swift_name("quickEstimation(nanoTimestamp:systemTimestamp:)")));
@property (readonly) VpsFloorLevelHandler *floorLevelHandler __attribute__((swift_name("floorLevelHandler")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NorthPredictorDriftEstimatorInDoors.Builder")))
@interface VpsNorthPredictorDriftEstimatorInDoorsBuilder : VpsFlowConverterBuilder<VpsNorthPredictorDriftEstimator *, VpsFeatures *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsNorthPredictorDriftEstimatorInDoors *)build __attribute__((swift_name("build()")));
- (VpsNorthPredictorDriftEstimatorInDoorsBuilder *)setFloorLevelHandlerHandler:(VpsFloorLevelHandler * _Nullable)handler __attribute__((swift_name("setFloorLevelHandler(handler:)")));
- (VpsNorthPredictorDriftEstimatorInDoorsBuilder *)setListenerListener:(void (^)(VpsInputSignal *))listener __attribute__((swift_name("setListener(listener:)")));
- (VpsNorthPredictorDriftEstimatorInDoorsBuilder *)setNorthOptimizerModelNorthPredictorModel:(id<VpsNorthPredictorModel> _Nullable)northPredictorModel __attribute__((swift_name("setNorthOptimizerModel(northPredictorModel:)")));
- (VpsNorthPredictorDriftEstimatorInDoorsBuilder *)setParametersParameters:(VpsMagnetometerDriftEstimatorParams *)parameters __attribute__((swift_name("setParameters(parameters:)")));
- (VpsNorthPredictorDriftEstimatorInDoorsBuilder *)setPositionEngineRepositoryPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository __attribute__((swift_name("setPositionEngineRepository(positionEngineRepository:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NorthPredictorDriftEstimatorOutDoors")))
@interface VpsNorthPredictorDriftEstimatorOutDoors : VpsNorthPredictorDriftEstimator
- (instancetype)initWithPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository params:(VpsMagnetometerDriftEstimatorParams *)params listener:(void (^ _Nullable)(VpsInputSignal *))listener northPredictorModel:(id<VpsNorthPredictorModel> _Nullable)northPredictorModel __attribute__((swift_name("init(positionEngineRepository:params:listener:northPredictorModel:)"))) __attribute__((objc_designated_initializer));
- (void)doComputeNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp __attribute__((swift_name("doCompute(nanoTimestamp:systemTimestamp:)")));
- (void)quickEstimationNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp __attribute__((swift_name("quickEstimation(nanoTimestamp:systemTimestamp:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NorthPredictorDriftEstimatorOutDoors.Builder")))
@interface VpsNorthPredictorDriftEstimatorOutDoorsBuilder : VpsFlowConverterBuilder<VpsNorthPredictorDriftEstimator *, VpsFeatures *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsNorthPredictorDriftEstimatorOutDoors *)build __attribute__((swift_name("build()")));
- (VpsNorthPredictorDriftEstimatorOutDoorsBuilder *)setListenerListener:(void (^)(VpsInputSignal *))listener __attribute__((swift_name("setListener(listener:)")));
- (VpsNorthPredictorDriftEstimatorOutDoorsBuilder *)setNorthOptimizerModelNorthPredictorModel:(id<VpsNorthPredictorModel> _Nullable)northPredictorModel __attribute__((swift_name("setNorthOptimizerModel(northPredictorModel:)")));
- (VpsNorthPredictorDriftEstimatorOutDoorsBuilder *)setParametersParameters:(VpsMagnetometerDriftEstimatorParams *)parameters __attribute__((swift_name("setParameters(parameters:)")));
- (VpsNorthPredictorDriftEstimatorOutDoorsBuilder *)setPositionEngineRepositoryPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository __attribute__((swift_name("setPositionEngineRepository(positionEngineRepository:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmbeddedRotationHandler")))
@interface VpsEmbeddedRotationHandler : VpsFlowConverter<VpsRawSensorData *, VpsOutputSignal *>
- (instancetype)initWithRotationHandlerSettings:(VpsRotationHandlerSettings *)rotationHandlerSettings positionEngineRepository:(id<VpsPositionEngineRepository> _Nullable)positionEngineRepository useTT2OrientationFilter:(BOOL)useTT2OrientationFilter __attribute__((swift_name("init(rotationHandlerSettings:positionEngineRepository:useTT2OrientationFilter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)doInit __attribute__((swift_name("doInit()")));
- (void)onInputData:(VpsRawSensorData *)data __attribute__((swift_name("onInput(data:)")));
- (void)onSyncSignalSyncSignal:(VpsInputSignalSync *)syncSignal __attribute__((swift_name("onSyncSignal(syncSignal:)")));
@property VpsFlowConverterRawSensorDataToRotation *converterRawSensorDataToRotation __attribute__((swift_name("converterRawSensorDataToRotation")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmbeddedRotationHandler.Builder")))
@interface VpsEmbeddedRotationHandlerBuilder : VpsFlowConverterBuilder<VpsEmbeddedRotationHandler *, VpsOutputSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsEmbeddedRotationHandler *)build __attribute__((swift_name("build()")));
- (VpsEmbeddedRotationHandlerBuilder *)setPositionEngineRepositoryPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository __attribute__((swift_name("setPositionEngineRepository(positionEngineRepository:)")));
- (VpsEmbeddedRotationHandlerBuilder *)setRotationHandlerSettingsRotationHandlerSettings:(VpsRotationHandlerSettings *)rotationHandlerSettings __attribute__((swift_name("setRotationHandlerSettings(rotationHandlerSettings:)")));
- (VpsEmbeddedRotationHandlerBuilder *)setUseTT2OrientationFilterUseTT2OrientationFilter:(BOOL)useTT2OrientationFilter __attribute__((swift_name("setUseTT2OrientationFilter(useTT2OrientationFilter:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpeedCalibrator")))
@interface VpsSpeedCalibrator : VpsFlowConverter<VpsInputSignal *, VpsOutputSignal *>
- (instancetype)initWithPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository listener:(void (^)(VpsBaseEvent *))listener velocityModel:(id<VpsVelocityModel>)velocityModel __attribute__((swift_name("init(positionEngineRepository:listener:velocityModel:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onInputData:(VpsInputSignal *)data __attribute__((swift_name("onInput(data:)")));
@property (readonly) void (^listener)(VpsBaseEvent *) __attribute__((swift_name("listener")));
@property (readonly) id<VpsPositionEngineRepository> positionEngineRepository __attribute__((swift_name("positionEngineRepository")));
@property (readonly) id<VpsVelocityModel> velocityModel __attribute__((swift_name("velocityModel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpeedCalibrator.Builder")))
@interface VpsSpeedCalibratorBuilder : VpsFlowConverterBuilder<VpsSpeedCalibrator *, VpsOutputSignal *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsSpeedCalibrator *)build __attribute__((swift_name("build()")));
- (VpsSpeedCalibratorBuilder *)setListenerListener:(void (^)(VpsBaseEvent *))listener __attribute__((swift_name("setListener(listener:)")));
- (VpsSpeedCalibratorBuilder *)setPositionEngineRepositoryPositionEngineRepository:(id<VpsPositionEngineRepository>)positionEngineRepository __attribute__((swift_name("setPositionEngineRepository(positionEngineRepository:)")));
- (VpsSpeedCalibratorBuilder *)setVelocityModelVelocityModel:(id<VpsVelocityModel>)velocityModel __attribute__((swift_name("setVelocityModel(velocityModel:)")));
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
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Shouldn't be used")));
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
__attribute__((swift_name("MagInfo")))
@interface VpsMagInfo : VpsBase
- (instancetype)initWithMagnetometerBias:(VpsKotlinFloatArray * _Nullable)magnetometerBias magnetometerAngleCorrection:(VpsFloat * _Nullable)magnetometerAngleCorrection magnetometerLoss:(VpsFloat * _Nullable)magnetometerLoss __attribute__((swift_name("init(magnetometerBias:magnetometerAngleCorrection:magnetometerLoss:)"))) __attribute__((objc_designated_initializer));
- (VpsMagInfo *)doCopyMagnetometerBias:(VpsKotlinFloatArray * _Nullable)magnetometerBias magnetometerAngleCorrection:(VpsFloat * _Nullable)magnetometerAngleCorrection magnetometerLoss:(VpsFloat * _Nullable)magnetometerLoss __attribute__((swift_name("doCopy(magnetometerBias:magnetometerAngleCorrection:magnetometerLoss:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsFloat * _Nullable magnetometerAngleCorrection __attribute__((swift_name("magnetometerAngleCorrection")));
@property (readonly) VpsKotlinFloatArray * _Nullable magnetometerBias __attribute__((swift_name("magnetometerBias")));
@property (readonly) VpsFloat * _Nullable magnetometerLoss __attribute__((swift_name("magnetometerLoss")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterEvent")))
@interface VpsParticleFilterEvent : VpsKotlinEnum<VpsParticleFilterEvent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsParticleFilterEvent *rescueMode __attribute__((swift_name("rescueMode")));
@property (class, readonly) VpsParticleFilterEvent *clusterSwap __attribute__((swift_name("clusterSwap")));
@property (class, readonly) VpsParticleFilterEvent *consistencyScore __attribute__((swift_name("consistencyScore")));
+ (VpsKotlinArray<VpsParticleFilterEvent *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsParticleFilterEvent *> *entries __attribute__((swift_name("entries")));
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
__attribute__((swift_name("Features")))
@interface VpsFeatures : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp data:(VpsKotlinFloatArray *)data __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsFeaturesCompanion *companion __attribute__((swift_name("companion")));
- (VpsFeatures *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp data:(VpsKotlinFloatArray *)data __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsKotlinFloatArray *data __attribute__((swift_name("data")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
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


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MagMappingRawSensorPack")))
@interface VpsMagMappingRawSensorPack : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp magnetometer:(VpsKotlinFloatArray *)magnetometer rotation:(VpsKotlinFloatArray *)rotation __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:magnetometer:rotation:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsMagMappingRawSensorPackCompanion *companion __attribute__((swift_name("companion")));
- (VpsMagMappingRawSensorPack *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp magnetometer:(VpsKotlinFloatArray *)magnetometer rotation:(VpsKotlinFloatArray *)rotation __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:magnetometer:rotation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsKotlinFloatArray *magnetometer __attribute__((swift_name("magnetometer")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) VpsKotlinFloatArray *rotation __attribute__((swift_name("rotation")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MagMappingRawSensorPack.Companion")))
@interface VpsMagMappingRawSensorPackCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsMagMappingRawSensorPackCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrientationFilterSensorPack")))
@interface VpsOrientationFilterSensorPack : VpsBase
- (instancetype)initWithIsResting:(BOOL)isResting restTime:(float)restTime restGyroBias:(VpsKotlinFloatArray * _Nullable)restGyroBias temperatureGyroBias:(VpsKotlinFloatArray * _Nullable)temperatureGyroBias temperature:(VpsFloat * _Nullable)temperature sensorData:(VpsRawSensorPack *)sensorData tempSource:(NSString *)tempSource __attribute__((swift_name("init(isResting:restTime:restGyroBias:temperatureGyroBias:temperature:sensorData:tempSource:)"))) __attribute__((objc_designated_initializer));
- (VpsOrientationFilterSensorPack *)doCopyIsResting:(BOOL)isResting restTime:(float)restTime restGyroBias:(VpsKotlinFloatArray * _Nullable)restGyroBias temperatureGyroBias:(VpsKotlinFloatArray * _Nullable)temperatureGyroBias temperature:(VpsFloat * _Nullable)temperature sensorData:(VpsRawSensorPack *)sensorData tempSource:(NSString *)tempSource __attribute__((swift_name("doCopy(isResting:restTime:restGyroBias:temperatureGyroBias:temperature:sensorData:tempSource:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL isResting __attribute__((swift_name("isResting")));
@property VpsKotlinFloatArray * _Nullable restGyroBias __attribute__((swift_name("restGyroBias")));
@property float restTime __attribute__((swift_name("restTime")));
@property (readonly) VpsRawSensorPack *sensorData __attribute__((swift_name("sensorData")));
@property NSString *tempSource __attribute__((swift_name("tempSource")));
@property VpsFloat * _Nullable temperature __attribute__((swift_name("temperature")));
@property VpsKotlinFloatArray * _Nullable temperatureGyroBias __attribute__((swift_name("temperatureGyroBias")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RawSensorPack")))
@interface VpsRawSensorPack : VpsBase
- (instancetype)initWithSensorTimestamp:(int64_t)sensorTimestamp systemTimestamp:(int64_t)systemTimestamp accelerometer:(VpsKotlinFloatArray *)accelerometer gyroscope:(VpsKotlinFloatArray *)gyroscope rotation:(VpsKotlinFloatArray *)rotation magnetometer:(VpsKotlinFloatArray * _Nullable)magnetometer gyroBias:(VpsKotlinFloatArray * _Nullable)gyroBias __attribute__((swift_name("init(sensorTimestamp:systemTimestamp:accelerometer:gyroscope:rotation:magnetometer:gyroBias:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsRawSensorPackCompanion *companion __attribute__((swift_name("companion")));
- (VpsRawSensorPack *)doCopySensorTimestamp:(int64_t)sensorTimestamp systemTimestamp:(int64_t)systemTimestamp accelerometer:(VpsKotlinFloatArray *)accelerometer gyroscope:(VpsKotlinFloatArray *)gyroscope rotation:(VpsKotlinFloatArray *)rotation magnetometer:(VpsKotlinFloatArray * _Nullable)magnetometer gyroBias:(VpsKotlinFloatArray * _Nullable)gyroBias __attribute__((swift_name("doCopy(sensorTimestamp:systemTimestamp:accelerometer:gyroscope:rotation:magnetometer:gyroBias:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsKotlinFloatArray *accelerometer __attribute__((swift_name("accelerometer")));
@property (readonly) VpsKotlinFloatArray * _Nullable gyroBias __attribute__((swift_name("gyroBias")));
@property (readonly) VpsKotlinFloatArray *gyroscope __attribute__((swift_name("gyroscope")));
@property (readonly) VpsKotlinFloatArray * _Nullable magnetometer __attribute__((swift_name("magnetometer")));
@property (readonly) VpsKotlinFloatArray *rotation __attribute__((swift_name("rotation")));
@property (readonly) int64_t sensorTimestamp __attribute__((swift_name("sensorTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
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

__attribute__((swift_name("CircularBuffer")))
@interface VpsCircularBuffer<T> : VpsBase
- (instancetype)initWithCapacity:(int32_t)capacity __attribute__((swift_name("init(capacity:)"))) __attribute__((objc_designated_initializer));
- (void)addItem:(T _Nullable)item __attribute__((swift_name("add(item:)")));
- (void)addAllItems:(id)items __attribute__((swift_name("addAll(items:)")));
- (void)clear __attribute__((swift_name("clear()")));
- (T _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (NSArray<id> *)toList __attribute__((swift_name("toList()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property int32_t _size __attribute__((swift_name("_size")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSMutableArray<id> *buffer __attribute__((swift_name("buffer")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (setter=setHead:) int32_t head_ __attribute__((swift_name("head_")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isFull __attribute__((swift_name("isFull")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
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
__attribute__((swift_name("MaxQueue")))
@interface VpsMaxQueue<T> : VpsBase
- (instancetype)initWithMaxSize:(VpsInt * _Nullable)maxSize __attribute__((swift_name("init(maxSize:)"))) __attribute__((objc_designated_initializer));
- (void)clear __attribute__((swift_name("clear()")));
- (T _Nullable)dequeue __attribute__((swift_name("dequeue()")));
- (void)enqueueValue:(T _Nullable)value __attribute__((swift_name("enqueue(value:)")));
- (void)fillValue:(T _Nullable)value __attribute__((swift_name("fill(value:)")));
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
- (NSArray<VpsLong *> *)timestampsToListFromTail:(BOOL)fromTail __attribute__((swift_name("timestampsToList(fromTail:)")));
- (NSArray<id> *)toListFromTail:(BOOL)fromTail __attribute__((swift_name("toList(fromTail:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) VpsInt * _Nullable maxSize __attribute__((swift_name("maxSize")));
@property (readonly) T _Nullable peek __attribute__((swift_name("peek")));
@property (readonly) T _Nullable peekLast __attribute__((swift_name("peekLast")));
@property (readonly) VpsKotlinPair<T, VpsLong *> * _Nullable peekLastWithTime __attribute__((swift_name("peekLastWithTime")));
@property int32_t size __attribute__((swift_name("size")));
@property (readonly) int64_t timeout __attribute__((swift_name("timeout")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConvolveOption")))
@interface VpsConvolveOption : VpsKotlinEnum<VpsConvolveOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsConvolveOption *full __attribute__((swift_name("full")));
@property (class, readonly) VpsConvolveOption *same __attribute__((swift_name("same")));
@property (class, readonly) VpsConvolveOption *valid __attribute__((swift_name("valid")));
+ (VpsKotlinArray<VpsConvolveOption *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsConvolveOption *> *entries __attribute__((swift_name("entries")));
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
__attribute__((swift_name("WindowAverageFilter")))
@interface VpsWindowAverageFilter : VpsCircularBuffer<VpsKotlinFloatArray *>
- (instancetype)initWithCapacity:(int32_t)capacity __attribute__((swift_name("init(capacity:)"))) __attribute__((objc_designated_initializer));
- (void)addItem:(VpsKotlinFloatArray *)item weight:(VpsFloat * _Nullable)weight __attribute__((swift_name("add(item:weight:)")));
- (VpsKotlinFloatArray * _Nullable)invoke __attribute__((swift_name("invoke()")));
- (VpsKotlinFloatArray * _Nullable)updateItem:(VpsKotlinFloatArray *)item weight:(VpsFloat * _Nullable)weight __attribute__((swift_name("update(item:weight:)")));
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
__attribute__((swift_name("NDPolynomial")))
@interface VpsNDPolynomial : VpsBase
- (instancetype)initWithDim:(int32_t)dim degree:(int32_t)degree __attribute__((swift_name("init(dim:degree:)"))) __attribute__((objc_designated_initializer));
- (VpsKotlinDoubleArray * _Nullable)evaluateX:(double)x requireSupport:(BOOL)requireSupport __attribute__((swift_name("evaluate(x:requireSupport:)")));
- (BOOL)fitXData:(VpsKotlinDoubleArray *)xData yData:(NSArray<VpsKotlinDoubleArray *> *)yData rowVals:(BOOL)rowVals support:(VpsKotlinPair<VpsDouble *, VpsDouble *> * _Nullable)support xDomain:(VpsKotlinPair<VpsDouble *, VpsDouble *> * _Nullable)xDomain window:(VpsKotlinPair<VpsDouble *, VpsDouble *> *)window __attribute__((swift_name("fit(xData:yData:rowVals:support:xDomain:window:)")));
- (NSArray<VpsPolynomial *> *)get1DPolys __attribute__((swift_name("get1DPolys()")));
- (VpsKotlinDoubleArray * _Nullable)invokeX:(double)x requireSupport:(BOOL)requireSupport __attribute__((swift_name("invoke(x:requireSupport:)")));
@property (readonly) NSArray<VpsKotlinDoubleArray *> * _Nullable coef __attribute__((swift_name("coef")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Polynomial")))
@interface VpsPolynomial : VpsBase
- (instancetype)initWithDegree:(int32_t)degree __attribute__((swift_name("init(degree:)"))) __attribute__((objc_designated_initializer));
- (VpsDouble * _Nullable)evaluateX:(double)x requireSupport:(BOOL)requireSupport __attribute__((swift_name("evaluate(x:requireSupport:)")));
- (void)fitXData:(VpsKotlinDoubleArray *)xData yData:(VpsKotlinDoubleArray *)yData support:(VpsKotlinPair<VpsDouble *, VpsDouble *> * _Nullable)support xDomain:(VpsKotlinPair<VpsDouble *, VpsDouble *> * _Nullable)xDomain window:(VpsKotlinPair<VpsDouble *, VpsDouble *> *)window __attribute__((swift_name("fit(xData:yData:support:xDomain:window:)")));
- (VpsKotlinPair<VpsDouble *, VpsDouble *> *)getInputTransform __attribute__((swift_name("getInputTransform()")));
- (VpsDouble * _Nullable)invokeX:(double)x requireSupport:(BOOL)requireSupport __attribute__((swift_name("invoke(x:requireSupport:)")));
- (void)setParametersParams:(VpsKotlinDoubleArray * _Nullable)params __attribute__((swift_name("setParameters(params:)")));
- (void)setTransformOldMin:(double)oldMin oldMax:(double)oldMax newMin:(double)newMin newMax:(double)newMax __attribute__((swift_name("setTransform(oldMin:oldMax:newMin:newMax:)")));
@property (readonly) VpsKotlinDoubleArray * _Nullable coef __attribute__((swift_name("coef")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorLevelHandler")))
@interface VpsFloorLevelHandler : VpsBase
- (instancetype)initWithFloorLevels:(NSDictionary<VpsLong *, id<VpsVPSFloorLevel>> *)floorLevels initialFloorLevelId:(VpsLong * _Nullable)initialFloorLevelId debug:(BOOL)debug __attribute__((swift_name("init(floorLevels:initialFloorLevelId:debug:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isValidCoordinateX:(double)x y:(double)y __attribute__((swift_name("isValidCoordinate(x:y:)")));
- (BOOL)isValidPointP:(VpsPose *)p __attribute__((swift_name("isValidPoint(p:)")));
- (BOOL)isValidPointP_:(VpsCoordinateF *)p __attribute__((swift_name("isValidPoint(p_:)")));
- (BOOL)isValidPointX:(double)x y:(double)y __attribute__((swift_name("isValidPoint(x:y:)")));
- (BOOL)isValidPointX:(float)x y_:(float)y __attribute__((swift_name("isValidPoint(x:y_:)")));
- (void)setFloorLevelFloorLevelId:(int64_t)floorLevelId __attribute__((swift_name("setFloorLevel(floorLevelId:)")));
@property (readonly) NSArray<VpsAccessPoint *> *allAccessPoints __attribute__((swift_name("allAccessPoints")));
@property (readonly) NSArray<VpsSwapLocation *> *allSwapLocations __attribute__((swift_name("allSwapLocations")));
@property (readonly) NSArray<VpsZone *> *allZones __attribute__((swift_name("allZones")));
@property (readonly) NSArray<VpsAccessPoint *> *currentFloorAccessPoints __attribute__((swift_name("currentFloorAccessPoints")));
@property (readonly) VpsDouble * _Nullable currentFloorCeilingHeightInMeters __attribute__((swift_name("currentFloorCeilingHeightInMeters")));
@property (readonly) double currentFloorHeightInMeters __attribute__((swift_name("currentFloorHeightInMeters")));
@property (readonly) id<VpsVPSFloorLevel> currentFloorLevel __attribute__((swift_name("currentFloorLevel")));
@property (readonly) int64_t currentFloorLevelId __attribute__((swift_name("currentFloorLevelId")));
@property (readonly) NSArray<VpsSwapLocation *> *currentFloorSwapLocations __attribute__((swift_name("currentFloorSwapLocations")));
@property (readonly) double currentFloorWidthInMeters __attribute__((swift_name("currentFloorWidthInMeters")));
@property (readonly) VpsFloat * _Nullable currentGeomagneticDeclination __attribute__((swift_name("currentGeomagneticDeclination")));
@property (readonly) VpsFloat * _Nullable currentGeomagneticInclination __attribute__((swift_name("currentGeomagneticInclination")));
@property (readonly) VpsFloat * _Nullable currentGeomagneticMagnitude __attribute__((swift_name("currentGeomagneticMagnitude")));
@property (readonly) VpsFloorLevelHandlerMapInformation *currentMapInformation __attribute__((swift_name("currentMapInformation")));
@property (readonly) VpsFloat * _Nullable currentNorthOffset __attribute__((swift_name("currentNorthOffset")));
@property (readonly) double currentPixelsPerMeter __attribute__((swift_name("currentPixelsPerMeter")));
@property (readonly) NSArray<VpsZone *> *currentZones __attribute__((swift_name("currentZones")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPS")))
@interface VpsVPS : VpsBase
- (instancetype)initWithVelocityModel:(id<VpsVelocityModel>)velocityModel modeClassifierModel:(id<VpsModeClassifierModel> _Nullable)modeClassifierModel nlModel:(id<VpsNLModel> _Nullable)nlModel adModel:(id<VpsADModel> _Nullable)adModel floorLevelHandler:(VpsFloorLevelHandler *)floorLevelHandler outputHandler:(id<VpsVPSOutputHandler> _Nullable)outputHandler system:(VpsVPSParamsSystem *)system featureToTensorValueParams:(VpsFeatureToTensorValueParams *)featureToTensorValueParams interpolationParams:(VpsInterpolationModuleParams_ *)interpolationParams modelToEventParameters:(VpsModelToEventParameters *)modelToEventParameters positionEngineSettings:(VpsPositionEngineSettings *)positionEngineSettings floorChangeInterpreterSettings:(VpsFloorChangeInterpreterSettings *)floorChangeInterpreterSettings rotationHandlerSettings:(VpsRotationHandlerSettings *)rotationHandlerSettings magnetometerDriftEstimatorParams:(VpsMagnetometerDriftEstimatorParams *)magnetometerDriftEstimatorParams northPredictorModel:(id<VpsNorthPredictorModel> _Nullable)northPredictorModel orientationParams:(VpsOrientationParams *)orientationParams orientationModuleParams:(VpsOrientationModuleParams *)orientationModuleParams debugMode:(BOOL)debugMode extendedDebugMode:(BOOL)extendedDebugMode modelOutputHandler:(VpsFlow<VpsVelocityModelOutput *> * _Nullable)modelOutputHandler safeModeActivated:(BOOL)safeModeActivated __attribute__((swift_name("init(velocityModel:modeClassifierModel:nlModel:adModel:floorLevelHandler:outputHandler:system:featureToTensorValueParams:interpolationParams:modelToEventParameters:positionEngineSettings:floorChangeInterpreterSettings:rotationHandlerSettings:magnetometerDriftEstimatorParams:northPredictorModel:orientationParams:orientationModuleParams:debugMode:extendedDebugMode:modelOutputHandler:safeModeActivated:)"))) __attribute__((objc_designated_initializer));
- (VpsOutputSignalUserInfoStatus *)getStatus __attribute__((swift_name("getStatus()")));
- (void)doInitSignal:(VpsInputSignalStart *)signal __attribute__((swift_name("doInit(signal:)")));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)onInputSignalSignal:(VpsInputSignal *)signal __attribute__((swift_name("onInputSignal(signal:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSLog")))
@interface VpsVPSLog : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vPSLog __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsVPSLog *shared __attribute__((swift_name("shared")));
- (void)edTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("ed(tag:message:)")));
- (void)eeTag:(NSString *)tag message:(NSString *)message cause:(VpsKotlinException * _Nullable)cause __attribute__((swift_name("ee(tag:message:cause:)")));
- (void)eelTag:(NSString *)tag message:(NSString *)message cause:(VpsKotlinException * _Nullable)cause id:(NSString * _Nullable)id __attribute__((swift_name("eel(tag:message:cause:id:)")));
- (void)elTag:(NSString *)tag message:(NSString *)message id:(NSString * _Nullable)id __attribute__((swift_name("el(tag:message:id:)")));
- (void)lTag:(NSString *)tag message:(NSString *)message id:(NSString * _Nullable)id __attribute__((swift_name("l(tag:message:id:)")));
@property id<VpsVPSLogOutputHandler> _Nullable outputHandler __attribute__((swift_name("outputHandler")));
@end

__attribute__((swift_name("VPSLogOutputHandler")))
@protocol VpsVPSLogOutputHandler
@required
- (void)onLogText:(NSString *)text id:(NSString * _Nullable)id __attribute__((swift_name("onLog(text:id:)")));
@end

__attribute__((swift_name("VPSOutputHandler")))
@protocol VpsVPSOutputHandler
@required
- (void)onOutputSignalOutputSignal:(VpsOutputSignal *)outputSignal __attribute__((swift_name("onOutputSignal(outputSignal:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSRotation")))
@interface VpsVPSRotation : VpsBase <VpsFlowConnection>
- (instancetype)initWithOutputHandler:(id<VpsVPSOutputHandler>)outputHandler rotationHandlerSettings:(VpsRotationHandlerSettings *)rotationHandlerSettings orientationParams:(VpsOrientationParams *)orientationParams __attribute__((swift_name("init(outputHandler:rotationHandlerSettings:orientationParams:)"))) __attribute__((objc_designated_initializer));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)doInitSignal:(VpsInputSignalStart *)signal __attribute__((swift_name("doInit(signal:)")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onInputData:(VpsOutputSignal *)data __attribute__((swift_name("onInput(data:)")));
- (void)onInputSignalSignal:(VpsInputSignal *)signal __attribute__((swift_name("onInputSignal(signal:)")));
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
- (float)distanceToSquaredOther:(VpsCoordinateF *)other __attribute__((swift_name("distanceToSquared(other:)")));
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
- (instancetype)initWithLongitude:(double)longitude latitude:(double)latitude accuracy:(VpsDouble * _Nullable)accuracy bearing:(VpsDouble * _Nullable)bearing bearingAccuracy:(VpsDouble * _Nullable)bearingAccuracy altitude:(VpsDouble * _Nullable)altitude verticalAccuracy:(VpsDouble * _Nullable)verticalAccuracy speed:(VpsDouble * _Nullable)speed speedAccuracy:(VpsDouble * _Nullable)speedAccuracy ellipsoidalAltitude:(VpsDouble * _Nullable)ellipsoidalAltitude source:(VpsOutputSignalSource *)source usedConstellations:(NSArray<VpsConstellationType *> * _Nullable)usedConstellations __attribute__((swift_name("init(longitude:latitude:accuracy:bearing:bearingAccuracy:altitude:verticalAccuracy:speed:speedAccuracy:ellipsoidalAltitude:source:usedConstellations:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsLocationCompanion *companion __attribute__((swift_name("companion")));
- (VpsLocation *)doCopyLongitude:(double)longitude latitude:(double)latitude accuracy:(VpsDouble * _Nullable)accuracy bearing:(VpsDouble * _Nullable)bearing bearingAccuracy:(VpsDouble * _Nullable)bearingAccuracy altitude:(VpsDouble * _Nullable)altitude verticalAccuracy:(VpsDouble * _Nullable)verticalAccuracy speed:(VpsDouble * _Nullable)speed speedAccuracy:(VpsDouble * _Nullable)speedAccuracy ellipsoidalAltitude:(VpsDouble * _Nullable)ellipsoidalAltitude source:(VpsOutputSignalSource *)source usedConstellations:(NSArray<VpsConstellationType *> * _Nullable)usedConstellations __attribute__((swift_name("doCopy(longitude:latitude:accuracy:bearing:bearingAccuracy:altitude:verticalAccuracy:speed:speedAccuracy:ellipsoidalAltitude:source:usedConstellations:)")));
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
@property (readonly) VpsOutputSignalSource *source __attribute__((swift_name("source")));
@property (readonly) VpsDouble * _Nullable speed __attribute__((swift_name("speed")));
@property (readonly) VpsDouble * _Nullable speedAccuracy __attribute__((swift_name("speedAccuracy")));
@property (readonly) NSArray<VpsConstellationType *> * _Nullable usedConstellations __attribute__((swift_name("usedConstellations")));
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


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MagnetometerCalibration")))
@interface VpsMagnetometerCalibration : VpsBase
- (instancetype)initWithCalibrationMatrix:(NSArray<VpsKotlinDoubleArray *> *)calibrationMatrix offset:(int32_t)offset __attribute__((swift_name("init(calibrationMatrix:offset:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsMagnetometerCalibrationCompanion *companion __attribute__((swift_name("companion")));
- (VpsMagnetometerCalibration *)doCopyCalibrationMatrix:(NSArray<VpsKotlinDoubleArray *> *)calibrationMatrix offset:(int32_t)offset __attribute__((swift_name("doCopy(calibrationMatrix:offset:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<VpsKotlinDoubleArray *> *calibrationMatrix __attribute__((swift_name("calibrationMatrix")));
@property (readonly) int32_t offset __attribute__((swift_name("offset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MagnetometerCalibration.Companion")))
@interface VpsMagnetometerCalibrationCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsMagnetometerCalibrationCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MagnetometerCalibrationConfig")))
@interface VpsMagnetometerCalibrationConfig : VpsBase
- (instancetype)initWithDefaults:(NSDictionary<NSString *, VpsMagnetometerCalibration *> *)defaults override:(VpsMagnetometerCalibration * _Nullable)override __attribute__((swift_name("init(defaults:override:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsMagnetometerCalibrationConfigCompanion *companion __attribute__((swift_name("companion")));
- (VpsMagnetometerCalibrationConfig *)doCopyDefaults:(NSDictionary<NSString *, VpsMagnetometerCalibration *> *)defaults override:(VpsMagnetometerCalibration * _Nullable)override __attribute__((swift_name("doCopy(defaults:override:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, VpsMagnetometerCalibration *> *defaults __attribute__((swift_name("defaults")));
@property (readonly) VpsMagnetometerCalibration * _Nullable override __attribute__((swift_name("override")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MagnetometerCalibrationConfig.Companion")))
@interface VpsMagnetometerCalibrationConfigCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsMagnetometerCalibrationConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
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
@property (readonly) VpsFloat * _Nullable geomagneticDeclination __attribute__((swift_name("geomagneticDeclination")));
@property (readonly) VpsFloat * _Nullable geomagneticInclination __attribute__((swift_name("geomagneticInclination")));
@property (readonly) VpsFloat * _Nullable geomagneticMagnitude __attribute__((swift_name("geomagneticMagnitude")));
@property (readonly) double heightInMeters __attribute__((swift_name("heightInMeters")));
@property (readonly) int64_t id_ __attribute__((swift_name("id_")));
@property (readonly) VpsFloat * _Nullable northOffset __attribute__((swift_name("northOffset")));
@property (readonly) double pixelsPerMeter __attribute__((swift_name("pixelsPerMeter")));
@property (readonly) NSArray<VpsSwapLocation *> *swapLocations __attribute__((swift_name("swapLocations")));
@property (readonly) double widthInMeters __attribute__((swift_name("widthInMeters")));
@property (readonly) NSArray<VpsZone *> *zones __attribute__((swift_name("zones")));
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
- (instancetype)initWithType:(VpsFloorChangeInterpreterType *)type altitudeClassifierParams:(VpsAltitudeClassifierParams *)altitudeClassifierParams wiFiAltitudeFusionParams:(VpsWiFiAltitudeFusionParams *)wiFiAltitudeFusionParams wiFiStairsFusionParams:(VpsWiFiStairsFusionParams *)wiFiStairsFusionParams __attribute__((swift_name("init(type:altitudeClassifierParams:wiFiAltitudeFusionParams:wiFiStairsFusionParams:)"))) __attribute__((objc_designated_initializer));
- (VpsFloorChangeInterpreterSettings *)doCopyType:(VpsFloorChangeInterpreterType *)type altitudeClassifierParams:(VpsAltitudeClassifierParams *)altitudeClassifierParams wiFiAltitudeFusionParams:(VpsWiFiAltitudeFusionParams *)wiFiAltitudeFusionParams wiFiStairsFusionParams:(VpsWiFiStairsFusionParams *)wiFiStairsFusionParams __attribute__((swift_name("doCopy(type:altitudeClassifierParams:wiFiAltitudeFusionParams:wiFiStairsFusionParams:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsAltitudeClassifierParams *altitudeClassifierParams __attribute__((swift_name("altitudeClassifierParams")));
@property (readonly) VpsFloorChangeInterpreterType *type __attribute__((swift_name("type")));
@property (readonly) VpsWiFiAltitudeFusionParams *wiFiAltitudeFusionParams __attribute__((swift_name("wiFiAltitudeFusionParams")));
@property (readonly) VpsWiFiStairsFusionParams *wiFiStairsFusionParams __attribute__((swift_name("wiFiStairsFusionParams")));
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
@property (class, readonly) VpsFloorChangeInterpreterType *wifiStairsFusion __attribute__((swift_name("wifiStairsFusion")));
+ (VpsKotlinArray<VpsFloorChangeInterpreterType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsFloorChangeInterpreterType *> *entries __attribute__((swift_name("entries")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WiFiStairsFusionParams")))
@interface VpsWiFiStairsFusionParams : VpsBase
- (instancetype)initWithWifiForceGoCriteria:(int32_t)wifiForceGoCriteria numAPsDetectedThreshold:(int32_t)numAPsDetectedThreshold recentStairsQueueSize:(int32_t)recentStairsQueueSize stairsHistoryQueueSize:(int32_t)stairsHistoryQueueSize stairSegmentThreshold:(int32_t)stairSegmentThreshold resetSegmentThreshold:(int32_t)resetSegmentThreshold __attribute__((swift_name("init(wifiForceGoCriteria:numAPsDetectedThreshold:recentStairsQueueSize:stairsHistoryQueueSize:stairSegmentThreshold:resetSegmentThreshold:)"))) __attribute__((objc_designated_initializer));
- (VpsWiFiStairsFusionParams *)doCopyWifiForceGoCriteria:(int32_t)wifiForceGoCriteria numAPsDetectedThreshold:(int32_t)numAPsDetectedThreshold recentStairsQueueSize:(int32_t)recentStairsQueueSize stairsHistoryQueueSize:(int32_t)stairsHistoryQueueSize stairSegmentThreshold:(int32_t)stairSegmentThreshold resetSegmentThreshold:(int32_t)resetSegmentThreshold __attribute__((swift_name("doCopy(wifiForceGoCriteria:numAPsDetectedThreshold:recentStairsQueueSize:stairsHistoryQueueSize:stairSegmentThreshold:resetSegmentThreshold:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t numAPsDetectedThreshold __attribute__((swift_name("numAPsDetectedThreshold")));
@property (readonly) int32_t recentStairsQueueSize __attribute__((swift_name("recentStairsQueueSize")));
@property (readonly) int32_t resetSegmentThreshold __attribute__((swift_name("resetSegmentThreshold")));
@property (readonly) int32_t stairSegmentThreshold __attribute__((swift_name("stairSegmentThreshold")));
@property (readonly) int32_t stairsHistoryQueueSize __attribute__((swift_name("stairsHistoryQueueSize")));
@property (readonly) int32_t wifiForceGoCriteria __attribute__((swift_name("wifiForceGoCriteria")));
@end

__attribute__((swift_name("Flow")))
@interface VpsFlow<T> : VpsBase <VpsFlowConnection>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addNode:(VpsNode<T> *)node __attribute__((swift_name("add(node:)")));
- (VpsFlow<T> *)connectToConnections:(NSArray<id<VpsFlowConnection>> *)connections __attribute__((swift_name("connectTo(connections:)")));
- (VpsFlow<T> *)connectToConnection:(id<VpsFlowConnection>)connection __attribute__((swift_name("connectTo(connection:)")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)onDispose __attribute__((swift_name("onDispose()")));
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
- (void)onDispose __attribute__((swift_name("onDispose()")));
- (void)onFlush __attribute__((swift_name("onFlush()")));
- (void)onResultData_:(id _Nullable)data __attribute__((swift_name("onResult(data_:)")));
- (void)onResultExit __attribute__((swift_name("onResultExit()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AttackFamily")))
@interface VpsAttackFamily : VpsKotlinEnum<VpsAttackFamily *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VpsAttackFamilyCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) VpsAttackFamily *jamming __attribute__((swift_name("jamming")));
@property (class, readonly) VpsAttackFamily *spoofing __attribute__((swift_name("spoofing")));
+ (VpsKotlinArray<VpsAttackFamily *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsAttackFamily *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AttackFamily.Companion")))
@interface VpsAttackFamilyCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsAttackFamilyCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConstellationType")))
@interface VpsConstellationType : VpsKotlinEnum<VpsConstellationType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VpsConstellationTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) VpsConstellationType *constellationUnknown __attribute__((swift_name("constellationUnknown")));
@property (class, readonly) VpsConstellationType *constellationGps __attribute__((swift_name("constellationGps")));
@property (class, readonly) VpsConstellationType *constellationSbas __attribute__((swift_name("constellationSbas")));
@property (class, readonly) VpsConstellationType *constellationGlonass __attribute__((swift_name("constellationGlonass")));
@property (class, readonly) VpsConstellationType *constellationQzss __attribute__((swift_name("constellationQzss")));
@property (class, readonly) VpsConstellationType *constellationBeidou __attribute__((swift_name("constellationBeidou")));
@property (class, readonly) VpsConstellationType *constellationGalileo __attribute__((swift_name("constellationGalileo")));
@property (class, readonly) VpsConstellationType *constellationIrnss __attribute__((swift_name("constellationIrnss")));
+ (VpsKotlinArray<VpsConstellationType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsConstellationType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConstellationType.Companion")))
@interface VpsConstellationTypeCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsConstellationTypeCompanion *shared __attribute__((swift_name("shared")));
- (VpsConstellationType *)fromCodeCode:(NSString *)code __attribute__((swift_name("fromCode(code:)")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataType")))
@interface VpsDataType : VpsKotlinEnum<VpsDataType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsDataType *receivedSvTimeNanosMean __attribute__((swift_name("receivedSvTimeNanosMean")));
@property (class, readonly) VpsDataType *cn0Max __attribute__((swift_name("cn0Max")));
@property (class, readonly) VpsDataType *cn0Mean __attribute__((swift_name("cn0Mean")));
@property (class, readonly) VpsDataType *basebandCn0Max __attribute__((swift_name("basebandCn0Max")));
@property (class, readonly) VpsDataType *automaticGainControlLevelMean __attribute__((swift_name("automaticGainControlLevelMean")));
@property (class, readonly) VpsDataType *pseudoRangeMetersPerSecondMean __attribute__((swift_name("pseudoRangeMetersPerSecondMean")));
@property (class, readonly) VpsDataType *pseudoRangeMetersPerSecondUncertaintyMean __attribute__((swift_name("pseudoRangeMetersPerSecondUncertaintyMean")));
@property (class, readonly) VpsDataType *positionResidual __attribute__((swift_name("positionResidual")));
@property (class, readonly) VpsDataType *velocityResidual __attribute__((swift_name("velocityResidual")));
@property (class, readonly) VpsDataType *ecefPosition __attribute__((swift_name("ecefPosition")));
@property (class, readonly) VpsDataType *ecefVelocity __attribute__((swift_name("ecefVelocity")));
@property (class, readonly) VpsDataType *numSatellitesUsed __attribute__((swift_name("numSatellitesUsed")));
@property (class, readonly) VpsDataType *numSatellitesTotal __attribute__((swift_name("numSatellitesTotal")));
@property (class, readonly) VpsDataType *positionModeledClockBias __attribute__((swift_name("positionModeledClockBias")));
@property (class, readonly) VpsDataType *velocityModeledClockBias __attribute__((swift_name("velocityModeledClockBias")));
@property (class, readonly) VpsDataType *fixSuccessful __attribute__((swift_name("fixSuccessful")));
@property (class, readonly) VpsDataType *uniqueSatellitesDetected __attribute__((swift_name("uniqueSatellitesDetected")));
@property (class, readonly) VpsDataType *pseudoRange __attribute__((swift_name("pseudoRange")));
@property (class, readonly) VpsDataType *dopplerRate __attribute__((swift_name("dopplerRate")));
@property (class, readonly) VpsDataType *clockValues __attribute__((swift_name("clockValues")));
@property (class, readonly) VpsDataType *fixInnovation __attribute__((swift_name("fixInnovation")));
+ (VpsKotlinArray<VpsDataType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsDataType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EphemerideData")))
@interface VpsEphemerideData : VpsBase
- (instancetype)initWithDateCreated:(NSString *)dateCreated timestamp:(int64_t)timestamp type:(NSArray<NSString *> *)type svid:(NSArray<NSString *> *)svid toe:(NSArray<VpsDouble *> *)toe iode:(NSArray<id> *)iode sqrtA:(NSArray<VpsDouble *> *)sqrtA eccentricity:(NSArray<VpsDouble *> *)eccentricity m0:(NSArray<VpsDouble *> *)m0 omega:(NSArray<VpsDouble *> *)omega omega0:(NSArray<VpsDouble *> *)omega0 omegaDot:(NSArray<VpsDouble *> *)omegaDot i0:(NSArray<VpsDouble *> *)i0 idot:(NSArray<VpsDouble *> *)idot deltaN:(NSArray<VpsDouble *> *)deltaN cuc:(NSArray<VpsDouble *> *)cuc cus:(NSArray<VpsDouble *> *)cus crc:(NSArray<VpsDouble *> *)crc crs:(NSArray<VpsDouble *> *)crs cic:(NSArray<VpsDouble *> *)cic cis:(NSArray<VpsDouble *> *)cis af0:(NSArray<VpsDouble *> *)af0 af1:(NSArray<VpsDouble *> *)af1 af2:(NSArray<VpsDouble *> *)af2 gpsWeek:(NSArray<id> *)gpsWeek galWeek:(NSArray<id> *)galWeek bdtWeek:(NSArray<id> *)bdtWeek tgd:(NSArray<id> *)tgd tgd1:(NSArray<id> *)tgd1 tgd2:(NSArray<id> *)tgd2 bgdE1e5a:(NSArray<id> *)bgdE1e5a bgdE1e5b:(NSArray<id> *)bgdE1e5b ionoParams:(NSArray<NSArray<VpsDouble *> *> *)ionoParams time:(NSArray<NSString *> *)time __attribute__((swift_name("init(dateCreated:timestamp:type:svid:toe:iode:sqrtA:eccentricity:m0:omega:omega0:omegaDot:i0:idot:deltaN:cuc:cus:crc:crs:cic:cis:af0:af1:af2:gpsWeek:galWeek:bdtWeek:tgd:tgd1:tgd2:bgdE1e5a:bgdE1e5b:ionoParams:time:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsEphemerideDataCompanion *companion __attribute__((swift_name("companion")));
- (VpsEphemerideData *)doCopyDateCreated:(NSString *)dateCreated timestamp:(int64_t)timestamp type:(NSArray<NSString *> *)type svid:(NSArray<NSString *> *)svid toe:(NSArray<VpsDouble *> *)toe iode:(NSArray<id> *)iode sqrtA:(NSArray<VpsDouble *> *)sqrtA eccentricity:(NSArray<VpsDouble *> *)eccentricity m0:(NSArray<VpsDouble *> *)m0 omega:(NSArray<VpsDouble *> *)omega omega0:(NSArray<VpsDouble *> *)omega0 omegaDot:(NSArray<VpsDouble *> *)omegaDot i0:(NSArray<VpsDouble *> *)i0 idot:(NSArray<VpsDouble *> *)idot deltaN:(NSArray<VpsDouble *> *)deltaN cuc:(NSArray<VpsDouble *> *)cuc cus:(NSArray<VpsDouble *> *)cus crc:(NSArray<VpsDouble *> *)crc crs:(NSArray<VpsDouble *> *)crs cic:(NSArray<VpsDouble *> *)cic cis:(NSArray<VpsDouble *> *)cis af0:(NSArray<VpsDouble *> *)af0 af1:(NSArray<VpsDouble *> *)af1 af2:(NSArray<VpsDouble *> *)af2 gpsWeek:(NSArray<id> *)gpsWeek galWeek:(NSArray<id> *)galWeek bdtWeek:(NSArray<id> *)bdtWeek tgd:(NSArray<id> *)tgd tgd1:(NSArray<id> *)tgd1 tgd2:(NSArray<id> *)tgd2 bgdE1e5a:(NSArray<id> *)bgdE1e5a bgdE1e5b:(NSArray<id> *)bgdE1e5b ionoParams:(NSArray<NSArray<VpsDouble *> *> *)ionoParams time:(NSArray<NSString *> *)time __attribute__((swift_name("doCopy(dateCreated:timestamp:type:svid:toe:iode:sqrtA:eccentricity:m0:omega:omega0:omegaDot:i0:idot:deltaN:cuc:cus:crc:crs:cic:cis:af0:af1:af2:gpsWeek:galWeek:bdtWeek:tgd:tgd1:tgd2:bgdE1e5a:bgdE1e5b:ionoParams:time:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<VpsDouble *> *af0 __attribute__((swift_name("af0")));
@property (readonly) NSArray<VpsDouble *> *af1 __attribute__((swift_name("af1")));
@property (readonly) NSArray<VpsDouble *> *af2 __attribute__((swift_name("af2")));
@property (readonly) NSArray<id> *bdtWeek __attribute__((swift_name("bdtWeek")));
@property (readonly) NSArray<id> *bgdE1e5a __attribute__((swift_name("bgdE1e5a")));
@property (readonly) NSArray<id> *bgdE1e5b __attribute__((swift_name("bgdE1e5b")));
@property (readonly) NSArray<VpsDouble *> *cic __attribute__((swift_name("cic")));
@property (readonly) NSArray<VpsDouble *> *cis __attribute__((swift_name("cis")));
@property (readonly) NSArray<VpsDouble *> *crc __attribute__((swift_name("crc")));
@property (readonly) NSArray<VpsDouble *> *crs __attribute__((swift_name("crs")));
@property (readonly) NSArray<VpsDouble *> *cuc __attribute__((swift_name("cuc")));
@property (readonly) NSArray<VpsDouble *> *cus __attribute__((swift_name("cus")));
@property (readonly) NSString *dateCreated __attribute__((swift_name("dateCreated")));
@property (readonly) NSArray<VpsDouble *> *deltaN __attribute__((swift_name("deltaN")));
@property (readonly) NSArray<VpsDouble *> *eccentricity __attribute__((swift_name("eccentricity")));
@property (readonly) NSArray<id> *galWeek __attribute__((swift_name("galWeek")));
@property (readonly) NSArray<id> *gpsWeek __attribute__((swift_name("gpsWeek")));
@property (readonly) NSArray<VpsDouble *> *i0 __attribute__((swift_name("i0")));
@property (readonly) NSArray<VpsDouble *> *idot __attribute__((swift_name("idot")));
@property (readonly) NSArray<id> *iode __attribute__((swift_name("iode")));
@property (readonly) NSArray<NSArray<VpsDouble *> *> *ionoParams __attribute__((swift_name("ionoParams")));
@property (readonly) NSArray<VpsDouble *> *m0 __attribute__((swift_name("m0")));
@property (readonly) NSArray<VpsDouble *> *omega __attribute__((swift_name("omega")));
@property (readonly) NSArray<VpsDouble *> *omega0 __attribute__((swift_name("omega0")));
@property (readonly) NSArray<VpsDouble *> *omegaDot __attribute__((swift_name("omegaDot")));
@property (readonly) NSArray<VpsDouble *> *sqrtA __attribute__((swift_name("sqrtA")));
@property (readonly) NSArray<NSString *> *svid __attribute__((swift_name("svid")));
@property (readonly) NSArray<id> *tgd __attribute__((swift_name("tgd")));
@property (readonly) NSArray<id> *tgd1 __attribute__((swift_name("tgd1")));
@property (readonly) NSArray<id> *tgd2 __attribute__((swift_name("tgd2")));
@property (readonly) NSArray<NSString *> *time __attribute__((swift_name("time")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSArray<VpsDouble *> *toe __attribute__((swift_name("toe")));
@property (readonly) NSArray<NSString *> *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EphemerideData.Companion")))
@interface VpsEphemerideDataCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsEphemerideDataCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("EphemerisParams")))
@protocol VpsEphemerisParams
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("GNSSAttack")))
@interface VpsGNSSAttack : VpsBase
@property (class, readonly, getter=companion) VpsGNSSAttackCompanion *companion __attribute__((swift_name("companion")));
- (VpsGNSSAttack *)doCopyAffectedBands:(NSSet<VpsGNSSBand *> * _Nullable)affectedBands indicators:(NSSet<VpsIndicator *> * _Nullable)indicators __attribute__((swift_name("doCopy(affectedBands:indicators:)")));
@property NSSet<VpsGNSSBand *> *affectedBands __attribute__((swift_name("affectedBands")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) VpsAttackFamily *family __attribute__((swift_name("family")));
@property (readonly) NSSet<VpsIndicator *> *indicators __attribute__((swift_name("indicators")));
@property (readonly) NSString * _Nullable notes __attribute__((swift_name("notes")));
@property (readonly) VpsPowerProfile *powerProfile __attribute__((swift_name("powerProfile")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.Companion")))
@interface VpsGNSSAttackCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsGNSSAttackCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@property (readonly) NSArray<VpsGNSSAttack *> *all __attribute__((swift_name("all")));
@property (readonly) NSArray<VpsGNSSAttack *> *defaults __attribute__((swift_name("defaults")));
@property (readonly) NSArray<VpsGNSSAttack *> *jammingSpecific __attribute__((swift_name("jammingSpecific")));
@property (readonly) NSArray<VpsGNSSAttack *> *spoofingSpecific __attribute__((swift_name("spoofingSpecific")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("GNSSAttack.Jamming")))
@interface VpsGNSSAttackJamming : VpsGNSSAttack
@property (class, readonly, getter=companion) VpsGNSSAttackJammingCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) VpsAttackFamily *family __attribute__((swift_name("family")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.JammingCompanion")))
@interface VpsGNSSAttackJammingCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsGNSSAttackJammingCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.JammingContinuousWave")))
@interface VpsGNSSAttackJammingContinuousWave : VpsGNSSAttackJamming
- (instancetype)initWithAffectedBands:(NSSet<VpsGNSSBand *> *)affectedBands powerProfile:(VpsPowerProfile *)powerProfile indicators:(NSSet<VpsIndicator *> *)indicators notes:(NSString * _Nullable)notes title:(NSString *)title description:(NSString *)description __attribute__((swift_name("init(affectedBands:powerProfile:indicators:notes:title:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsGNSSAttackJammingContinuousWaveCompanion *companion __attribute__((swift_name("companion")));
- (VpsGNSSAttack *)doCopyAffectedBands:(NSSet<VpsGNSSBand *> * _Nullable)affectedBands indicators:(NSSet<VpsIndicator *> * _Nullable)indicators __attribute__((swift_name("doCopy(affectedBands:indicators:)")));
- (VpsGNSSAttackJammingContinuousWave *)doCopyAffectedBands:(NSSet<VpsGNSSBand *> *)affectedBands powerProfile:(VpsPowerProfile *)powerProfile indicators:(NSSet<VpsIndicator *> *)indicators notes:(NSString * _Nullable)notes title:(NSString *)title description:(NSString *)description __attribute__((swift_name("doCopy(affectedBands:powerProfile:indicators:notes:title:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSSet<VpsGNSSBand *> *affectedBands __attribute__((swift_name("affectedBands")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSSet<VpsIndicator *> *indicators __attribute__((swift_name("indicators")));
@property (readonly) NSString * _Nullable notes __attribute__((swift_name("notes")));
@property (readonly) VpsPowerProfile *powerProfile __attribute__((swift_name("powerProfile")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.JammingContinuousWaveCompanion")))
@interface VpsGNSSAttackJammingContinuousWaveCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsGNSSAttackJammingContinuousWaveCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.JammingJammingDefault")))
@interface VpsGNSSAttackJammingJammingDefault : VpsGNSSAttackJamming
- (instancetype)initWithAffectedBands:(NSSet<VpsGNSSBand *> *)affectedBands powerProfile:(VpsPowerProfile *)powerProfile indicators:(NSSet<VpsIndicator *> *)indicators notes:(NSString * _Nullable)notes title:(NSString *)title description:(NSString *)description __attribute__((swift_name("init(affectedBands:powerProfile:indicators:notes:title:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsGNSSAttackJammingJammingDefaultCompanion *companion __attribute__((swift_name("companion")));
- (VpsGNSSAttack *)doCopyAffectedBands:(NSSet<VpsGNSSBand *> * _Nullable)affectedBands indicators:(NSSet<VpsIndicator *> * _Nullable)indicators __attribute__((swift_name("doCopy(affectedBands:indicators:)")));
- (VpsGNSSAttackJammingJammingDefault *)doCopyAffectedBands:(NSSet<VpsGNSSBand *> *)affectedBands powerProfile:(VpsPowerProfile *)powerProfile indicators:(NSSet<VpsIndicator *> *)indicators notes:(NSString * _Nullable)notes title:(NSString *)title description:(NSString *)description __attribute__((swift_name("doCopy(affectedBands:powerProfile:indicators:notes:title:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSSet<VpsGNSSBand *> *affectedBands __attribute__((swift_name("affectedBands")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSSet<VpsIndicator *> *indicators __attribute__((swift_name("indicators")));
@property (readonly) NSString * _Nullable notes __attribute__((swift_name("notes")));
@property (readonly) VpsPowerProfile *powerProfile __attribute__((swift_name("powerProfile")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.JammingJammingDefaultCompanion")))
@interface VpsGNSSAttackJammingJammingDefaultCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsGNSSAttackJammingJammingDefaultCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.JammingPRN")))
@interface VpsGNSSAttackJammingPRN : VpsGNSSAttackJamming
- (instancetype)initWithAffectedBands:(NSSet<VpsGNSSBand *> *)affectedBands powerProfile:(VpsPowerProfile *)powerProfile indicators:(NSSet<VpsIndicator *> *)indicators notes:(NSString * _Nullable)notes title:(NSString *)title description:(NSString *)description __attribute__((swift_name("init(affectedBands:powerProfile:indicators:notes:title:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsGNSSAttackJammingPRNCompanion *companion __attribute__((swift_name("companion")));
- (VpsGNSSAttack *)doCopyAffectedBands:(NSSet<VpsGNSSBand *> * _Nullable)affectedBands indicators:(NSSet<VpsIndicator *> * _Nullable)indicators __attribute__((swift_name("doCopy(affectedBands:indicators:)")));
- (VpsGNSSAttackJammingPRN *)doCopyAffectedBands:(NSSet<VpsGNSSBand *> *)affectedBands powerProfile:(VpsPowerProfile *)powerProfile indicators:(NSSet<VpsIndicator *> *)indicators notes:(NSString * _Nullable)notes title:(NSString *)title description:(NSString *)description __attribute__((swift_name("doCopy(affectedBands:powerProfile:indicators:notes:title:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSSet<VpsGNSSBand *> *affectedBands __attribute__((swift_name("affectedBands")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSSet<VpsIndicator *> *indicators __attribute__((swift_name("indicators")));
@property (readonly) NSString * _Nullable notes __attribute__((swift_name("notes")));
@property (readonly) VpsPowerProfile *powerProfile __attribute__((swift_name("powerProfile")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.JammingPRNCompanion")))
@interface VpsGNSSAttackJammingPRNCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsGNSSAttackJammingPRNCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.JammingSweep")))
@interface VpsGNSSAttackJammingSweep : VpsGNSSAttackJamming
- (instancetype)initWithAffectedBands:(NSSet<VpsGNSSBand *> *)affectedBands powerProfile:(VpsPowerProfile *)powerProfile indicators:(NSSet<VpsIndicator *> *)indicators notes:(NSString * _Nullable)notes title:(NSString *)title description:(NSString *)description __attribute__((swift_name("init(affectedBands:powerProfile:indicators:notes:title:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsGNSSAttackJammingSweepCompanion *companion __attribute__((swift_name("companion")));
- (VpsGNSSAttack *)doCopyAffectedBands:(NSSet<VpsGNSSBand *> * _Nullable)affectedBands indicators:(NSSet<VpsIndicator *> * _Nullable)indicators __attribute__((swift_name("doCopy(affectedBands:indicators:)")));
- (VpsGNSSAttackJammingSweep *)doCopyAffectedBands:(NSSet<VpsGNSSBand *> *)affectedBands powerProfile:(VpsPowerProfile *)powerProfile indicators:(NSSet<VpsIndicator *> *)indicators notes:(NSString * _Nullable)notes title:(NSString *)title description:(NSString *)description __attribute__((swift_name("doCopy(affectedBands:powerProfile:indicators:notes:title:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSSet<VpsGNSSBand *> *affectedBands __attribute__((swift_name("affectedBands")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSSet<VpsIndicator *> *indicators __attribute__((swift_name("indicators")));
@property (readonly) NSString * _Nullable notes __attribute__((swift_name("notes")));
@property (readonly) VpsPowerProfile *powerProfile __attribute__((swift_name("powerProfile")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.JammingSweepCompanion")))
@interface VpsGNSSAttackJammingSweepCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsGNSSAttackJammingSweepCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("GNSSAttack.Spoofing")))
@interface VpsGNSSAttackSpoofing : VpsGNSSAttack
@property (class, readonly, getter=companion) VpsGNSSAttackSpoofingCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) VpsAttackFamily *family __attribute__((swift_name("family")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.SpoofingCompanion")))
@interface VpsGNSSAttackSpoofingCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsGNSSAttackSpoofingCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.SpoofingDirectedCoherent")))
@interface VpsGNSSAttackSpoofingDirectedCoherent : VpsGNSSAttackSpoofing
- (instancetype)initWithAffectedBands:(NSSet<VpsGNSSBand *> *)affectedBands powerProfile:(VpsPowerProfile *)powerProfile indicators:(NSSet<VpsIndicator *> *)indicators notes:(NSString * _Nullable)notes title:(NSString *)title description:(NSString *)description __attribute__((swift_name("init(affectedBands:powerProfile:indicators:notes:title:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsGNSSAttackSpoofingDirectedCoherentCompanion *companion __attribute__((swift_name("companion")));
- (VpsGNSSAttack *)doCopyAffectedBands:(NSSet<VpsGNSSBand *> * _Nullable)affectedBands indicators:(NSSet<VpsIndicator *> * _Nullable)indicators __attribute__((swift_name("doCopy(affectedBands:indicators:)")));
- (VpsGNSSAttackSpoofingDirectedCoherent *)doCopyAffectedBands:(NSSet<VpsGNSSBand *> *)affectedBands powerProfile:(VpsPowerProfile *)powerProfile indicators:(NSSet<VpsIndicator *> *)indicators notes:(NSString * _Nullable)notes title:(NSString *)title description:(NSString *)description __attribute__((swift_name("doCopy(affectedBands:powerProfile:indicators:notes:title:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSSet<VpsGNSSBand *> *affectedBands __attribute__((swift_name("affectedBands")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSSet<VpsIndicator *> *indicators __attribute__((swift_name("indicators")));
@property (readonly) NSString * _Nullable notes __attribute__((swift_name("notes")));
@property (readonly) VpsPowerProfile *powerProfile __attribute__((swift_name("powerProfile")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.SpoofingDirectedCoherentCompanion")))
@interface VpsGNSSAttackSpoofingDirectedCoherentCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsGNSSAttackSpoofingDirectedCoherentCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.SpoofingIncoherent")))
@interface VpsGNSSAttackSpoofingIncoherent : VpsGNSSAttackSpoofing
- (instancetype)initWithAffectedBands:(NSSet<VpsGNSSBand *> *)affectedBands powerProfile:(VpsPowerProfile *)powerProfile indicators:(NSSet<VpsIndicator *> *)indicators notes:(NSString * _Nullable)notes title:(NSString *)title description:(NSString *)description __attribute__((swift_name("init(affectedBands:powerProfile:indicators:notes:title:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsGNSSAttackSpoofingIncoherentCompanion *companion __attribute__((swift_name("companion")));
- (VpsGNSSAttack *)doCopyAffectedBands:(NSSet<VpsGNSSBand *> * _Nullable)affectedBands indicators:(NSSet<VpsIndicator *> * _Nullable)indicators __attribute__((swift_name("doCopy(affectedBands:indicators:)")));
- (VpsGNSSAttackSpoofingIncoherent *)doCopyAffectedBands:(NSSet<VpsGNSSBand *> *)affectedBands powerProfile:(VpsPowerProfile *)powerProfile indicators:(NSSet<VpsIndicator *> *)indicators notes:(NSString * _Nullable)notes title:(NSString *)title description:(NSString *)description __attribute__((swift_name("doCopy(affectedBands:powerProfile:indicators:notes:title:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSSet<VpsGNSSBand *> *affectedBands __attribute__((swift_name("affectedBands")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSSet<VpsIndicator *> *indicators __attribute__((swift_name("indicators")));
@property (readonly) NSString * _Nullable notes __attribute__((swift_name("notes")));
@property (readonly) VpsPowerProfile *powerProfile __attribute__((swift_name("powerProfile")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.SpoofingIncoherentCompanion")))
@interface VpsGNSSAttackSpoofingIncoherentCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsGNSSAttackSpoofingIncoherentCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.SpoofingMeaconing")))
@interface VpsGNSSAttackSpoofingMeaconing : VpsGNSSAttackSpoofing
- (instancetype)initWithAffectedBands:(NSSet<VpsGNSSBand *> *)affectedBands powerProfile:(VpsPowerProfile *)powerProfile indicators:(NSSet<VpsIndicator *> *)indicators notes:(NSString * _Nullable)notes title:(NSString *)title description:(NSString *)description __attribute__((swift_name("init(affectedBands:powerProfile:indicators:notes:title:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsGNSSAttackSpoofingMeaconingCompanion *companion __attribute__((swift_name("companion")));
- (VpsGNSSAttack *)doCopyAffectedBands:(NSSet<VpsGNSSBand *> * _Nullable)affectedBands indicators:(NSSet<VpsIndicator *> * _Nullable)indicators __attribute__((swift_name("doCopy(affectedBands:indicators:)")));
- (VpsGNSSAttackSpoofingMeaconing *)doCopyAffectedBands:(NSSet<VpsGNSSBand *> *)affectedBands powerProfile:(VpsPowerProfile *)powerProfile indicators:(NSSet<VpsIndicator *> *)indicators notes:(NSString * _Nullable)notes title:(NSString *)title description:(NSString *)description __attribute__((swift_name("doCopy(affectedBands:powerProfile:indicators:notes:title:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSSet<VpsGNSSBand *> *affectedBands __attribute__((swift_name("affectedBands")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSSet<VpsIndicator *> *indicators __attribute__((swift_name("indicators")));
@property (readonly) NSString * _Nullable notes __attribute__((swift_name("notes")));
@property (readonly) VpsPowerProfile *powerProfile __attribute__((swift_name("powerProfile")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.SpoofingMeaconingCompanion")))
@interface VpsGNSSAttackSpoofingMeaconingCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsGNSSAttackSpoofingMeaconingCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.SpoofingSpoofingDefault")))
@interface VpsGNSSAttackSpoofingSpoofingDefault : VpsGNSSAttackSpoofing
- (instancetype)initWithAffectedBands:(NSSet<VpsGNSSBand *> *)affectedBands powerProfile:(VpsPowerProfile *)powerProfile indicators:(NSSet<VpsIndicator *> *)indicators notes:(NSString * _Nullable)notes title:(NSString *)title description:(NSString *)description __attribute__((swift_name("init(affectedBands:powerProfile:indicators:notes:title:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsGNSSAttackSpoofingSpoofingDefaultCompanion *companion __attribute__((swift_name("companion")));
- (VpsGNSSAttack *)doCopyAffectedBands:(NSSet<VpsGNSSBand *> * _Nullable)affectedBands indicators:(NSSet<VpsIndicator *> * _Nullable)indicators __attribute__((swift_name("doCopy(affectedBands:indicators:)")));
- (VpsGNSSAttackSpoofingSpoofingDefault *)doCopyAffectedBands:(NSSet<VpsGNSSBand *> *)affectedBands powerProfile:(VpsPowerProfile *)powerProfile indicators:(NSSet<VpsIndicator *> *)indicators notes:(NSString * _Nullable)notes title:(NSString *)title description:(NSString *)description __attribute__((swift_name("doCopy(affectedBands:powerProfile:indicators:notes:title:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSSet<VpsGNSSBand *> *affectedBands __attribute__((swift_name("affectedBands")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSSet<VpsIndicator *> *indicators __attribute__((swift_name("indicators")));
@property (readonly) NSString * _Nullable notes __attribute__((swift_name("notes")));
@property (readonly) VpsPowerProfile *powerProfile __attribute__((swift_name("powerProfile")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.SpoofingSpoofingDefaultCompanion")))
@interface VpsGNSSAttackSpoofingSpoofingDefaultCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsGNSSAttackSpoofingSpoofingDefaultCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.SpoofingTimeManipulation")))
@interface VpsGNSSAttackSpoofingTimeManipulation : VpsGNSSAttackSpoofing
- (instancetype)initWithAffectedBands:(NSSet<VpsGNSSBand *> *)affectedBands powerProfile:(VpsPowerProfile *)powerProfile indicators:(NSSet<VpsIndicator *> *)indicators notes:(NSString * _Nullable)notes title:(NSString *)title description:(NSString *)description __attribute__((swift_name("init(affectedBands:powerProfile:indicators:notes:title:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsGNSSAttackSpoofingTimeManipulationCompanion *companion __attribute__((swift_name("companion")));
- (VpsGNSSAttack *)doCopyAffectedBands:(NSSet<VpsGNSSBand *> * _Nullable)affectedBands indicators:(NSSet<VpsIndicator *> * _Nullable)indicators __attribute__((swift_name("doCopy(affectedBands:indicators:)")));
- (VpsGNSSAttackSpoofingTimeManipulation *)doCopyAffectedBands:(NSSet<VpsGNSSBand *> *)affectedBands powerProfile:(VpsPowerProfile *)powerProfile indicators:(NSSet<VpsIndicator *> *)indicators notes:(NSString * _Nullable)notes title:(NSString *)title description:(NSString *)description __attribute__((swift_name("doCopy(affectedBands:powerProfile:indicators:notes:title:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSSet<VpsGNSSBand *> *affectedBands __attribute__((swift_name("affectedBands")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSSet<VpsIndicator *> *indicators __attribute__((swift_name("indicators")));
@property (readonly) NSString * _Nullable notes __attribute__((swift_name("notes")));
@property (readonly) VpsPowerProfile *powerProfile __attribute__((swift_name("powerProfile")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSAttack.SpoofingTimeManipulationCompanion")))
@interface VpsGNSSAttackSpoofingTimeManipulationCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsGNSSAttackSpoofingTimeManipulationCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSBand")))
@interface VpsGNSSBand : VpsBase
- (instancetype)initWithConstellation:(VpsConstellationType *)constellation codeType:(NSString *)codeType frequencyHz:(float)frequencyHz name:(NSString *)name __attribute__((swift_name("init(constellation:codeType:frequencyHz:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsGNSSBandCompanion *companion __attribute__((swift_name("companion")));
- (VpsGNSSBand *)doCopyConstellation:(VpsConstellationType *)constellation codeType:(NSString *)codeType frequencyHz:(float)frequencyHz name:(NSString *)name __attribute__((swift_name("doCopy(constellation:codeType:frequencyHz:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *codeType __attribute__((swift_name("codeType")));
@property (readonly) VpsConstellationType *constellation __attribute__((swift_name("constellation")));
@property (readonly) float frequencyHz __attribute__((swift_name("frequencyHz")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSBand.Companion")))
@interface VpsGNSSBandCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsGNSSBandCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GNSSBands")))
@interface VpsGNSSBands : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)gNSSBands __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsGNSSBands *shared __attribute__((swift_name("shared")));
- (VpsGNSSBand * _Nullable)fromCodeConstellation:(VpsConstellationType *)constellation codeType:(NSString *)codeType carrierHz:(float)carrierHz __attribute__((swift_name("fromCode(constellation:codeType:carrierHz:)")));
@property (readonly) NSArray<VpsGNSSBand *> *bands __attribute__((swift_name("bands")));
@property (readonly) NSDictionary<NSString *, VpsGNSSBand *> *nameToGNSSBand __attribute__((swift_name("nameToGNSSBand")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GnssClock")))
@interface VpsGnssClock : VpsBase
- (instancetype)initWithLeapSecond:(int32_t)leapSecond timeNanos:(int64_t)timeNanos timeUncertaintyNanos:(double)timeUncertaintyNanos fullBiasNanos:(int64_t)fullBiasNanos biasNanos:(double)biasNanos biasUncertaintyNanos:(double)biasUncertaintyNanos driftNanosPerSecond:(double)driftNanosPerSecond driftUncertaintyNanosPerSecond:(double)driftUncertaintyNanosPerSecond hardwareClockDiscontinuityCount:(int32_t)hardwareClockDiscontinuityCount elapsedRealtimeNanos:(int64_t)elapsedRealtimeNanos elapsedRealtimeUncertaintyNanos:(double)elapsedRealtimeUncertaintyNanos referenceConstellationTypeForIsbInt:(int32_t)referenceConstellationTypeForIsbInt referenceCarrierFrequencyHzForIsb:(double)referenceCarrierFrequencyHzForIsb referenceCodeTypeForIsb:(NSString *)referenceCodeTypeForIsb hasLeapSecond:(BOOL)hasLeapSecond hasTimeUncertaintyNanos:(BOOL)hasTimeUncertaintyNanos hasFullBiasNanos:(BOOL)hasFullBiasNanos hasBiasNanos:(BOOL)hasBiasNanos hasBiasUncertaintyNanos:(BOOL)hasBiasUncertaintyNanos hasDriftNanosPerSecond:(BOOL)hasDriftNanosPerSecond hasDriftUncertaintyNanosPerSecond:(BOOL)hasDriftUncertaintyNanosPerSecond hasElapsedRealtimeNanos:(BOOL)hasElapsedRealtimeNanos hasElapsedRealtimeUncertaintyNanos:(BOOL)hasElapsedRealtimeUncertaintyNanos hasReferenceConstellationTypeForIsb:(BOOL)hasReferenceConstellationTypeForIsb hasReferenceCarrierFrequencyHzForIsb:(BOOL)hasReferenceCarrierFrequencyHzForIsb hasReferenceCodeTypeForIsb:(BOOL)hasReferenceCodeTypeForIsb __attribute__((swift_name("init(leapSecond:timeNanos:timeUncertaintyNanos:fullBiasNanos:biasNanos:biasUncertaintyNanos:driftNanosPerSecond:driftUncertaintyNanosPerSecond:hardwareClockDiscontinuityCount:elapsedRealtimeNanos:elapsedRealtimeUncertaintyNanos:referenceConstellationTypeForIsbInt:referenceCarrierFrequencyHzForIsb:referenceCodeTypeForIsb:hasLeapSecond:hasTimeUncertaintyNanos:hasFullBiasNanos:hasBiasNanos:hasBiasUncertaintyNanos:hasDriftNanosPerSecond:hasDriftUncertaintyNanosPerSecond:hasElapsedRealtimeNanos:hasElapsedRealtimeUncertaintyNanos:hasReferenceConstellationTypeForIsb:hasReferenceCarrierFrequencyHzForIsb:hasReferenceCodeTypeForIsb:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsGnssClockCompanion *companion __attribute__((swift_name("companion")));
- (VpsGnssClock *)doCopyLeapSecond:(int32_t)leapSecond timeNanos:(int64_t)timeNanos timeUncertaintyNanos:(double)timeUncertaintyNanos fullBiasNanos:(int64_t)fullBiasNanos biasNanos:(double)biasNanos biasUncertaintyNanos:(double)biasUncertaintyNanos driftNanosPerSecond:(double)driftNanosPerSecond driftUncertaintyNanosPerSecond:(double)driftUncertaintyNanosPerSecond hardwareClockDiscontinuityCount:(int32_t)hardwareClockDiscontinuityCount elapsedRealtimeNanos:(int64_t)elapsedRealtimeNanos elapsedRealtimeUncertaintyNanos:(double)elapsedRealtimeUncertaintyNanos referenceConstellationTypeForIsbInt:(int32_t)referenceConstellationTypeForIsbInt referenceCarrierFrequencyHzForIsb:(double)referenceCarrierFrequencyHzForIsb referenceCodeTypeForIsb:(NSString *)referenceCodeTypeForIsb hasLeapSecond:(BOOL)hasLeapSecond hasTimeUncertaintyNanos:(BOOL)hasTimeUncertaintyNanos hasFullBiasNanos:(BOOL)hasFullBiasNanos hasBiasNanos:(BOOL)hasBiasNanos hasBiasUncertaintyNanos:(BOOL)hasBiasUncertaintyNanos hasDriftNanosPerSecond:(BOOL)hasDriftNanosPerSecond hasDriftUncertaintyNanosPerSecond:(BOOL)hasDriftUncertaintyNanosPerSecond hasElapsedRealtimeNanos:(BOOL)hasElapsedRealtimeNanos hasElapsedRealtimeUncertaintyNanos:(BOOL)hasElapsedRealtimeUncertaintyNanos hasReferenceConstellationTypeForIsb:(BOOL)hasReferenceConstellationTypeForIsb hasReferenceCarrierFrequencyHzForIsb:(BOOL)hasReferenceCarrierFrequencyHzForIsb hasReferenceCodeTypeForIsb:(BOOL)hasReferenceCodeTypeForIsb __attribute__((swift_name("doCopy(leapSecond:timeNanos:timeUncertaintyNanos:fullBiasNanos:biasNanos:biasUncertaintyNanos:driftNanosPerSecond:driftUncertaintyNanosPerSecond:hardwareClockDiscontinuityCount:elapsedRealtimeNanos:elapsedRealtimeUncertaintyNanos:referenceConstellationTypeForIsbInt:referenceCarrierFrequencyHzForIsb:referenceCodeTypeForIsb:hasLeapSecond:hasTimeUncertaintyNanos:hasFullBiasNanos:hasBiasNanos:hasBiasUncertaintyNanos:hasDriftNanosPerSecond:hasDriftUncertaintyNanosPerSecond:hasElapsedRealtimeNanos:hasElapsedRealtimeUncertaintyNanos:hasReferenceConstellationTypeForIsb:hasReferenceCarrierFrequencyHzForIsb:hasReferenceCodeTypeForIsb:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double biasNanos __attribute__((swift_name("biasNanos")));
@property (readonly) double biasUncertaintyNanos __attribute__((swift_name("biasUncertaintyNanos")));
@property (readonly) double driftNanosPerSecond __attribute__((swift_name("driftNanosPerSecond")));
@property (readonly) double driftUncertaintyNanosPerSecond __attribute__((swift_name("driftUncertaintyNanosPerSecond")));
@property (readonly) int64_t elapsedRealtimeNanos __attribute__((swift_name("elapsedRealtimeNanos")));
@property (readonly) double elapsedRealtimeUncertaintyNanos __attribute__((swift_name("elapsedRealtimeUncertaintyNanos")));
@property (readonly) int64_t fullBiasNanos __attribute__((swift_name("fullBiasNanos")));
@property (readonly) int32_t hardwareClockDiscontinuityCount __attribute__((swift_name("hardwareClockDiscontinuityCount")));
@property (readonly) BOOL hasBiasNanos __attribute__((swift_name("hasBiasNanos")));
@property (readonly) BOOL hasBiasUncertaintyNanos __attribute__((swift_name("hasBiasUncertaintyNanos")));
@property (readonly) BOOL hasDriftNanosPerSecond __attribute__((swift_name("hasDriftNanosPerSecond")));
@property (readonly) BOOL hasDriftUncertaintyNanosPerSecond __attribute__((swift_name("hasDriftUncertaintyNanosPerSecond")));
@property (readonly) BOOL hasElapsedRealtimeNanos __attribute__((swift_name("hasElapsedRealtimeNanos")));
@property (readonly) BOOL hasElapsedRealtimeUncertaintyNanos __attribute__((swift_name("hasElapsedRealtimeUncertaintyNanos")));
@property (readonly) BOOL hasFullBiasNanos __attribute__((swift_name("hasFullBiasNanos")));
@property (readonly) BOOL hasLeapSecond __attribute__((swift_name("hasLeapSecond")));
@property (readonly) BOOL hasReferenceCarrierFrequencyHzForIsb __attribute__((swift_name("hasReferenceCarrierFrequencyHzForIsb")));
@property (readonly) BOOL hasReferenceCodeTypeForIsb __attribute__((swift_name("hasReferenceCodeTypeForIsb")));
@property (readonly) BOOL hasReferenceConstellationTypeForIsb __attribute__((swift_name("hasReferenceConstellationTypeForIsb")));
@property (readonly) BOOL hasTimeUncertaintyNanos __attribute__((swift_name("hasTimeUncertaintyNanos")));
@property (readonly) int32_t leapSecond __attribute__((swift_name("leapSecond")));
@property (readonly) double referenceCarrierFrequencyHzForIsb __attribute__((swift_name("referenceCarrierFrequencyHzForIsb")));
@property (readonly) NSString *referenceCodeTypeForIsb __attribute__((swift_name("referenceCodeTypeForIsb")));
@property (readonly) VpsConstellationType *referenceConstellationTypeForIsb __attribute__((swift_name("referenceConstellationTypeForIsb")));
@property (readonly) int32_t referenceConstellationTypeForIsbInt __attribute__((swift_name("referenceConstellationTypeForIsbInt")));
@property (readonly) int64_t timeNanos __attribute__((swift_name("timeNanos")));
@property (readonly) double timeUncertaintyNanos __attribute__((swift_name("timeUncertaintyNanos")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GnssClock.Companion")))
@interface VpsGnssClockCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsGnssClockCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GnssMeasurement")))
@interface VpsGnssMeasurement : VpsBase
- (instancetype)initWithSvid:(int32_t)svid constellationTypeInt:(int32_t)constellationTypeInt timeOffsetNanos:(double)timeOffsetNanos state:(int32_t)state receivedSvTimeNanos:(int64_t)receivedSvTimeNanos receivedSvTimeUncertaintyNanos:(int64_t)receivedSvTimeUncertaintyNanos cn0DbHz:(double)cn0DbHz basebandCn0DbHz:(double)basebandCn0DbHz pseudorangeRateMetersPerSecond:(double)pseudorangeRateMetersPerSecond pseudorangeRateUncertaintyMetersPerSecond:(double)pseudorangeRateUncertaintyMetersPerSecond accumulatedDeltaRangeState:(int32_t)accumulatedDeltaRangeState accumulatedDeltaRangeMeters:(double)accumulatedDeltaRangeMeters accumulatedDeltaRangeUncertaintyMeters:(double)accumulatedDeltaRangeUncertaintyMeters carrierFrequencyHz:(float)carrierFrequencyHz carrierCycles:(int64_t)carrierCycles carrierPhase:(double)carrierPhase carrierPhaseUncertainty:(double)carrierPhaseUncertainty multipathIndicator:(int32_t)multipathIndicator snrInDb:(double)snrInDb automaticGainControlLevelInDb:(double)automaticGainControlLevelInDb codeType:(NSString *)codeType fullInterSignalBiasNanos:(double)fullInterSignalBiasNanos fullInterSignalBiasUncertaintyNanos:(double)fullInterSignalBiasUncertaintyNanos satelliteInterSignalBiasNanos:(double)satelliteInterSignalBiasNanos satelliteInterSignalBiasUncertaintyNanos:(double)satelliteInterSignalBiasUncertaintyNanos hasBasebandCn0DbHz:(BOOL)hasBasebandCn0DbHz hasCarrierFrequencyHz:(BOOL)hasCarrierFrequencyHz hasCarrierCycles:(BOOL)hasCarrierCycles hasCarrierPhase:(BOOL)hasCarrierPhase hasCarrierPhaseUncertainty:(BOOL)hasCarrierPhaseUncertainty hasSnrInDb:(BOOL)hasSnrInDb hasAutomaticGainControlLevelDb:(BOOL)hasAutomaticGainControlLevelDb hasCodeType:(BOOL)hasCodeType hasFullInterSignalBiasNanos:(BOOL)hasFullInterSignalBiasNanos hasFullInterSignalBiasUncertaintyNanos:(BOOL)hasFullInterSignalBiasUncertaintyNanos hasSatelliteInterSignalBiasNanos:(BOOL)hasSatelliteInterSignalBiasNanos hasSatelliteInterSignalBiasUncertaintyNanos:(BOOL)hasSatelliteInterSignalBiasUncertaintyNanos __attribute__((swift_name("init(svid:constellationTypeInt:timeOffsetNanos:state:receivedSvTimeNanos:receivedSvTimeUncertaintyNanos:cn0DbHz:basebandCn0DbHz:pseudorangeRateMetersPerSecond:pseudorangeRateUncertaintyMetersPerSecond:accumulatedDeltaRangeState:accumulatedDeltaRangeMeters:accumulatedDeltaRangeUncertaintyMeters:carrierFrequencyHz:carrierCycles:carrierPhase:carrierPhaseUncertainty:multipathIndicator:snrInDb:automaticGainControlLevelInDb:codeType:fullInterSignalBiasNanos:fullInterSignalBiasUncertaintyNanos:satelliteInterSignalBiasNanos:satelliteInterSignalBiasUncertaintyNanos:hasBasebandCn0DbHz:hasCarrierFrequencyHz:hasCarrierCycles:hasCarrierPhase:hasCarrierPhaseUncertainty:hasSnrInDb:hasAutomaticGainControlLevelDb:hasCodeType:hasFullInterSignalBiasNanos:hasFullInterSignalBiasUncertaintyNanos:hasSatelliteInterSignalBiasNanos:hasSatelliteInterSignalBiasUncertaintyNanos:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsGnssMeasurementCompanion *companion __attribute__((swift_name("companion")));
- (VpsGnssMeasurement *)doCopySvid:(int32_t)svid constellationTypeInt:(int32_t)constellationTypeInt timeOffsetNanos:(double)timeOffsetNanos state:(int32_t)state receivedSvTimeNanos:(int64_t)receivedSvTimeNanos receivedSvTimeUncertaintyNanos:(int64_t)receivedSvTimeUncertaintyNanos cn0DbHz:(double)cn0DbHz basebandCn0DbHz:(double)basebandCn0DbHz pseudorangeRateMetersPerSecond:(double)pseudorangeRateMetersPerSecond pseudorangeRateUncertaintyMetersPerSecond:(double)pseudorangeRateUncertaintyMetersPerSecond accumulatedDeltaRangeState:(int32_t)accumulatedDeltaRangeState accumulatedDeltaRangeMeters:(double)accumulatedDeltaRangeMeters accumulatedDeltaRangeUncertaintyMeters:(double)accumulatedDeltaRangeUncertaintyMeters carrierFrequencyHz:(float)carrierFrequencyHz carrierCycles:(int64_t)carrierCycles carrierPhase:(double)carrierPhase carrierPhaseUncertainty:(double)carrierPhaseUncertainty multipathIndicator:(int32_t)multipathIndicator snrInDb:(double)snrInDb automaticGainControlLevelInDb:(double)automaticGainControlLevelInDb codeType:(NSString *)codeType fullInterSignalBiasNanos:(double)fullInterSignalBiasNanos fullInterSignalBiasUncertaintyNanos:(double)fullInterSignalBiasUncertaintyNanos satelliteInterSignalBiasNanos:(double)satelliteInterSignalBiasNanos satelliteInterSignalBiasUncertaintyNanos:(double)satelliteInterSignalBiasUncertaintyNanos hasBasebandCn0DbHz:(BOOL)hasBasebandCn0DbHz hasCarrierFrequencyHz:(BOOL)hasCarrierFrequencyHz hasCarrierCycles:(BOOL)hasCarrierCycles hasCarrierPhase:(BOOL)hasCarrierPhase hasCarrierPhaseUncertainty:(BOOL)hasCarrierPhaseUncertainty hasSnrInDb:(BOOL)hasSnrInDb hasAutomaticGainControlLevelDb:(BOOL)hasAutomaticGainControlLevelDb hasCodeType:(BOOL)hasCodeType hasFullInterSignalBiasNanos:(BOOL)hasFullInterSignalBiasNanos hasFullInterSignalBiasUncertaintyNanos:(BOOL)hasFullInterSignalBiasUncertaintyNanos hasSatelliteInterSignalBiasNanos:(BOOL)hasSatelliteInterSignalBiasNanos hasSatelliteInterSignalBiasUncertaintyNanos:(BOOL)hasSatelliteInterSignalBiasUncertaintyNanos __attribute__((swift_name("doCopy(svid:constellationTypeInt:timeOffsetNanos:state:receivedSvTimeNanos:receivedSvTimeUncertaintyNanos:cn0DbHz:basebandCn0DbHz:pseudorangeRateMetersPerSecond:pseudorangeRateUncertaintyMetersPerSecond:accumulatedDeltaRangeState:accumulatedDeltaRangeMeters:accumulatedDeltaRangeUncertaintyMeters:carrierFrequencyHz:carrierCycles:carrierPhase:carrierPhaseUncertainty:multipathIndicator:snrInDb:automaticGainControlLevelInDb:codeType:fullInterSignalBiasNanos:fullInterSignalBiasUncertaintyNanos:satelliteInterSignalBiasNanos:satelliteInterSignalBiasUncertaintyNanos:hasBasebandCn0DbHz:hasCarrierFrequencyHz:hasCarrierCycles:hasCarrierPhase:hasCarrierPhaseUncertainty:hasSnrInDb:hasAutomaticGainControlLevelDb:hasCodeType:hasFullInterSignalBiasNanos:hasFullInterSignalBiasUncertaintyNanos:hasSatelliteInterSignalBiasNanos:hasSatelliteInterSignalBiasUncertaintyNanos:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double accumulatedDeltaRangeMeters __attribute__((swift_name("accumulatedDeltaRangeMeters")));
@property (readonly) int32_t accumulatedDeltaRangeState __attribute__((swift_name("accumulatedDeltaRangeState")));
@property (readonly) double accumulatedDeltaRangeUncertaintyMeters __attribute__((swift_name("accumulatedDeltaRangeUncertaintyMeters")));
@property (readonly) double automaticGainControlLevelInDb __attribute__((swift_name("automaticGainControlLevelInDb")));
@property (readonly) double basebandCn0DbHz __attribute__((swift_name("basebandCn0DbHz")));
@property (readonly) int64_t carrierCycles __attribute__((swift_name("carrierCycles")));
@property (readonly) float carrierFrequencyHz __attribute__((swift_name("carrierFrequencyHz")));
@property (readonly) double carrierPhase __attribute__((swift_name("carrierPhase")));
@property (readonly) double carrierPhaseUncertainty __attribute__((swift_name("carrierPhaseUncertainty")));
@property (readonly) double cn0DbHz __attribute__((swift_name("cn0DbHz")));
@property (readonly) NSString *codeType __attribute__((swift_name("codeType")));
@property (readonly) VpsConstellationType *constellationType __attribute__((swift_name("constellationType")));
@property (readonly) int32_t constellationTypeInt __attribute__((swift_name("constellationTypeInt")));
@property (readonly) double fullInterSignalBiasNanos __attribute__((swift_name("fullInterSignalBiasNanos")));
@property (readonly) double fullInterSignalBiasUncertaintyNanos __attribute__((swift_name("fullInterSignalBiasUncertaintyNanos")));
@property (readonly) VpsGNSSBand * _Nullable gnssBand __attribute__((swift_name("gnssBand")));
@property (readonly) BOOL hasAutomaticGainControlLevelDb __attribute__((swift_name("hasAutomaticGainControlLevelDb")));
@property (readonly) BOOL hasBasebandCn0DbHz __attribute__((swift_name("hasBasebandCn0DbHz")));
@property (readonly) BOOL hasCarrierCycles __attribute__((swift_name("hasCarrierCycles")));
@property (readonly) BOOL hasCarrierFrequencyHz __attribute__((swift_name("hasCarrierFrequencyHz")));
@property (readonly) BOOL hasCarrierPhase __attribute__((swift_name("hasCarrierPhase")));
@property (readonly) BOOL hasCarrierPhaseUncertainty __attribute__((swift_name("hasCarrierPhaseUncertainty")));
@property (readonly) BOOL hasCodeType __attribute__((swift_name("hasCodeType")));
@property (readonly) BOOL hasFullInterSignalBiasNanos __attribute__((swift_name("hasFullInterSignalBiasNanos")));
@property (readonly) BOOL hasFullInterSignalBiasUncertaintyNanos __attribute__((swift_name("hasFullInterSignalBiasUncertaintyNanos")));
@property (readonly) BOOL hasSatelliteInterSignalBiasNanos __attribute__((swift_name("hasSatelliteInterSignalBiasNanos")));
@property (readonly) BOOL hasSatelliteInterSignalBiasUncertaintyNanos __attribute__((swift_name("hasSatelliteInterSignalBiasUncertaintyNanos")));
@property (readonly) BOOL hasSnrInDb __attribute__((swift_name("hasSnrInDb")));
@property (readonly) int32_t multipathIndicator __attribute__((swift_name("multipathIndicator")));
@property (readonly) double pseudorangeRateMetersPerSecond __attribute__((swift_name("pseudorangeRateMetersPerSecond")));
@property (readonly) double pseudorangeRateUncertaintyMetersPerSecond __attribute__((swift_name("pseudorangeRateUncertaintyMetersPerSecond")));
@property (readonly) int64_t receivedSvTimeNanos __attribute__((swift_name("receivedSvTimeNanos")));
@property (readonly) int64_t receivedSvTimeUncertaintyNanos __attribute__((swift_name("receivedSvTimeUncertaintyNanos")));
@property (readonly) double satelliteInterSignalBiasNanos __attribute__((swift_name("satelliteInterSignalBiasNanos")));
@property (readonly) double satelliteInterSignalBiasUncertaintyNanos __attribute__((swift_name("satelliteInterSignalBiasUncertaintyNanos")));
@property (readonly) double snrInDb __attribute__((swift_name("snrInDb")));
@property (readonly) int32_t state __attribute__((swift_name("state")));
@property (readonly) int32_t svid __attribute__((swift_name("svid")));
@property (readonly) double timeOffsetNanos __attribute__((swift_name("timeOffsetNanos")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GnssMeasurement.Companion")))
@interface VpsGnssMeasurementCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsGnssMeasurementCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GnssNavigationMessage")))
@interface VpsGnssNavigationMessage : VpsBase
- (instancetype)initWithType:(int32_t)type svid:(int32_t)svid messageId:(int32_t)messageId submessageId:(int32_t)submessageId data:(VpsKotlinByteArray *)data status:(int32_t)status __attribute__((swift_name("init(type:svid:messageId:submessageId:data:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsGnssNavigationMessageCompanion *companion __attribute__((swift_name("companion")));
- (VpsGnssNavigationMessage *)doCopyType:(int32_t)type svid:(int32_t)svid messageId:(int32_t)messageId submessageId:(int32_t)submessageId data:(VpsKotlinByteArray *)data status:(int32_t)status __attribute__((swift_name("doCopy(type:svid:messageId:submessageId:data:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsKotlinByteArray *data __attribute__((swift_name("data")));
@property (readonly) int32_t messageId __attribute__((swift_name("messageId")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@property (readonly) int32_t submessageId __attribute__((swift_name("submessageId")));
@property (readonly) int32_t svid __attribute__((swift_name("svid")));
@property (readonly) int32_t type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GnssNavigationMessage.Companion")))
@interface VpsGnssNavigationMessageCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsGnssNavigationMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Indicator")))
@interface VpsIndicator : VpsKotlinEnum<VpsIndicator *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VpsIndicatorCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) VpsIndicator *cn0Drop __attribute__((swift_name("cn0Drop")));
@property (class, readonly) VpsIndicator *basebandCn0Drop __attribute__((swift_name("basebandCn0Drop")));
@property (class, readonly) VpsIndicator *noiseFloorRise __attribute__((swift_name("noiseFloorRise")));
@property (class, readonly) VpsIndicator *narrowbandTone __attribute__((swift_name("narrowbandTone")));
@property (class, readonly) VpsIndicator *widebandActivity __attribute__((swift_name("widebandActivity")));
@property (class, readonly) VpsIndicator *lossOfLock __attribute__((swift_name("lossOfLock")));
@property (class, readonly) VpsIndicator *satCountDrop __attribute__((swift_name("satCountDrop")));
@property (class, readonly) VpsIndicator *overallSatCountDrop __attribute__((swift_name("overallSatCountDrop")));
@property (class, readonly) VpsIndicator *dopSpike __attribute__((swift_name("dopSpike")));
@property (class, readonly) VpsIndicator *residualsSpike __attribute__((swift_name("residualsSpike")));
@property (class, readonly) VpsIndicator *positionJump __attribute__((swift_name("positionJump")));
@property (class, readonly) VpsIndicator *velocitySpike __attribute__((swift_name("velocitySpike")));
@property (class, readonly) VpsIndicator *timeStep __attribute__((swift_name("timeStep")));
@property (class, readonly) VpsIndicator *clockBiasJump __attribute__((swift_name("clockBiasJump")));
@property (class, readonly) VpsIndicator *towInconsistency __attribute__((swift_name("towInconsistency")));
@property (class, readonly) VpsIndicator *falseClock __attribute__((swift_name("falseClock")));
@property (class, readonly) VpsIndicator *cn0Spike __attribute__((swift_name("cn0Spike")));
@property (class, readonly) VpsIndicator *codeCarrierInconsistency __attribute__((swift_name("codeCarrierInconsistency")));
@property (class, readonly) VpsIndicator *divergentPseudoranges __attribute__((swift_name("divergentPseudoranges")));
@property (class, readonly) VpsIndicator *unrealisticSvGeometry __attribute__((swift_name("unrealisticSvGeometry")));
@property (class, readonly) VpsIndicator *multiSourceConflict __attribute__((swift_name("multiSourceConflict")));
@property (class, readonly) VpsIndicator *kfInnovationSpike __attribute__((swift_name("kfInnovationSpike")));
@property (class, readonly) VpsIndicator *fixInnovationDivergence __attribute__((swift_name("fixInnovationDivergence")));
@property (class, readonly) VpsIndicator *predictedJamming __attribute__((swift_name("predictedJamming")));
@property (class, readonly) VpsIndicator *predictedSpoofing __attribute__((swift_name("predictedSpoofing")));
@property (class, readonly) VpsIndicator *predictedMeaconing __attribute__((swift_name("predictedMeaconing")));
@property (class, readonly) VpsIndicator *predictedHealthy __attribute__((swift_name("predictedHealthy")));
+ (VpsKotlinArray<VpsIndicator *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsIndicator *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Indicator.Companion")))
@interface VpsIndicatorCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsIndicatorCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeplerParams")))
@interface VpsKeplerParams : VpsBase <VpsEphemerisParams>
- (instancetype)initWithUnitInSemiCircles:(BOOL)unitInSemiCircles svid:(NSString *)svid type:(VpsConstellationType *)type af0:(double)af0 af1:(double)af1 af2:(double)af2 m0:(double)m0 deltaN:(double)deltaN i0:(double)i0 omega0:(double)omega0 omega:(double)omega idot:(double)idot ecc:(double)ecc sqrtA:(double)sqrtA cuc:(double)cuc cus:(double)cus crc:(double)crc crs:(double)crs cic:(double)cic cis:(double)cis omegaDot:(double)omegaDot ionosphereParams:(NSArray<VpsDouble *> *)ionosphereParams toe:(double)toe tgd:(VpsDouble * _Nullable)tgd tgd1:(VpsDouble * _Nullable)tgd1 tgd2:(VpsDouble * _Nullable)tgd2 bgdE1e5a:(VpsDouble * _Nullable)bgdE1e5a bgdE1e5b:(VpsDouble * _Nullable)bgdE1e5b gpsWeek:(VpsDouble * _Nullable)gpsWeek galWeek:(VpsDouble * _Nullable)galWeek bdtWeek:(VpsDouble * _Nullable)bdtWeek __attribute__((swift_name("init(unitInSemiCircles:svid:type:af0:af1:af2:m0:deltaN:i0:omega0:omega:idot:ecc:sqrtA:cuc:cus:crc:crs:cic:cis:omegaDot:ionosphereParams:toe:tgd:tgd1:tgd2:bgdE1e5a:bgdE1e5b:gpsWeek:galWeek:bdtWeek:)"))) __attribute__((objc_designated_initializer));
- (VpsKeplerParams *)doCopyUnitInSemiCircles:(BOOL)unitInSemiCircles svid:(NSString *)svid type:(VpsConstellationType *)type af0:(double)af0 af1:(double)af1 af2:(double)af2 m0:(double)m0 deltaN:(double)deltaN i0:(double)i0 omega0:(double)omega0 omega:(double)omega idot:(double)idot ecc:(double)ecc sqrtA:(double)sqrtA cuc:(double)cuc cus:(double)cus crc:(double)crc crs:(double)crs cic:(double)cic cis:(double)cis omegaDot:(double)omegaDot ionosphereParams:(NSArray<VpsDouble *> *)ionosphereParams toe:(double)toe tgd:(VpsDouble * _Nullable)tgd tgd1:(VpsDouble * _Nullable)tgd1 tgd2:(VpsDouble * _Nullable)tgd2 bgdE1e5a:(VpsDouble * _Nullable)bgdE1e5a bgdE1e5b:(VpsDouble * _Nullable)bgdE1e5b gpsWeek:(VpsDouble * _Nullable)gpsWeek galWeek:(VpsDouble * _Nullable)galWeek bdtWeek:(VpsDouble * _Nullable)bdtWeek __attribute__((swift_name("doCopy(unitInSemiCircles:svid:type:af0:af1:af2:m0:deltaN:i0:omega0:omega:idot:ecc:sqrtA:cuc:cus:crc:crs:cic:cis:omegaDot:ionosphereParams:toe:tgd:tgd1:tgd2:bgdE1e5a:bgdE1e5b:gpsWeek:galWeek:bdtWeek:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double af0 __attribute__((swift_name("af0")));
@property (readonly) double af1 __attribute__((swift_name("af1")));
@property (readonly) double af2 __attribute__((swift_name("af2")));
@property (readonly) VpsDouble * _Nullable bdtWeek __attribute__((swift_name("bdtWeek")));
@property (readonly) VpsDouble * _Nullable bgdE1e5a __attribute__((swift_name("bgdE1e5a")));
@property (readonly) VpsDouble * _Nullable bgdE1e5b __attribute__((swift_name("bgdE1e5b")));
@property (readonly) double cic __attribute__((swift_name("cic")));
@property (readonly) double cis __attribute__((swift_name("cis")));
@property (readonly) double crc __attribute__((swift_name("crc")));
@property (readonly) double crs __attribute__((swift_name("crs")));
@property (readonly) double cuc __attribute__((swift_name("cuc")));
@property (readonly) double cus __attribute__((swift_name("cus")));
@property (readonly) double deltaN __attribute__((swift_name("deltaN")));
@property (readonly) double ecc __attribute__((swift_name("ecc")));
@property (readonly) VpsDouble * _Nullable galWeek __attribute__((swift_name("galWeek")));
@property (readonly) VpsDouble * _Nullable gpsWeek __attribute__((swift_name("gpsWeek")));
@property (readonly) double i0 __attribute__((swift_name("i0")));
@property (readonly) double idot __attribute__((swift_name("idot")));
@property (readonly) NSArray<VpsDouble *> *ionosphereParams __attribute__((swift_name("ionosphereParams")));
@property (readonly) double m0 __attribute__((swift_name("m0")));
@property (readonly) double omega __attribute__((swift_name("omega")));
@property (readonly) double omega0 __attribute__((swift_name("omega0")));
@property (readonly) double omegaDot __attribute__((swift_name("omegaDot")));
@property (readonly) double sqrtA __attribute__((swift_name("sqrtA")));
@property (readonly) NSString *svid __attribute__((swift_name("svid")));
@property (readonly) VpsDouble * _Nullable tgd __attribute__((swift_name("tgd")));
@property (readonly) VpsDouble * _Nullable tgd1 __attribute__((swift_name("tgd1")));
@property (readonly) VpsDouble * _Nullable tgd2 __attribute__((swift_name("tgd2")));
@property (readonly) double toe __attribute__((swift_name("toe")));
@property (readonly) VpsConstellationType *type __attribute__((swift_name("type")));
@property (readonly) BOOL unitInSemiCircles __attribute__((swift_name("unitInSemiCircles")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewtonParams")))
@interface VpsNewtonParams : VpsBase <VpsEphemerisParams>
- (instancetype)initWithSvid:(NSString *)svid type:(VpsConstellationType *)type __attribute__((swift_name("init(svid:type:)"))) __attribute__((objc_designated_initializer));
- (VpsNewtonParams *)doCopySvid:(NSString *)svid type:(VpsConstellationType *)type __attribute__((swift_name("doCopy(svid:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *svid __attribute__((swift_name("svid")));
@property (readonly) VpsConstellationType *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PowerProfile")))
@interface VpsPowerProfile : VpsKotlinEnum<VpsPowerProfile *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VpsPowerProfileCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) VpsPowerProfile *constant __attribute__((swift_name("constant")));
@property (class, readonly) VpsPowerProfile *varying __attribute__((swift_name("varying")));
@property (class, readonly) VpsPowerProfile *pulsed __attribute__((swift_name("pulsed")));
@property (class, readonly) VpsPowerProfile *swept __attribute__((swift_name("swept")));
+ (VpsKotlinArray<VpsPowerProfile *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsPowerProfile *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PowerProfile.Companion")))
@interface VpsPowerProfileCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsPowerProfileCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("PartitionRecorder")))
@interface VpsPartitionRecorder<T> : VpsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)fullReset __attribute__((swift_name("fullReset()")));
- (BOOL)isItTimeToDoPartialUploadLastSystemTimestamp:(int64_t)lastSystemTimestamp __attribute__((swift_name("isItTimeToDoPartialUpload(lastSystemTimestamp:)")));
- (void)onDispose __attribute__((swift_name("onDispose()")));
- (void)onFullReset __attribute__((swift_name("onFullReset()")));
- (void)onNextRecordingPartReset __attribute__((swift_name("onNextRecordingPartReset()")));
- (void)onPartialDataDataPackage:(VpsPartitionRecorderDataPackage<T> *)dataPackage __attribute__((swift_name("onPartialData(dataPackage:)")));
- (VpsPartitionRecorderDataPackage<T> *)packageDataIdentifier:(NSString *)identifier __attribute__((swift_name("packageData(identifier:)")));
- (void)partialUploadLastSystemTimestamp:(int64_t)lastSystemTimestamp __attribute__((swift_name("partialUpload(lastSystemTimestamp:)")));
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
__attribute__((swift_name("MagMapDataRecorderV1")))
@interface VpsMagMapDataRecorderV1 : VpsPartitionRecorder<VpsMagMappingDataV1 *>
- (instancetype)initWithUploader:(id<VpsUploader> _Nullable)uploader recordingPartInterval:(int64_t)recordingPartInterval packageOption:(VpsPartitionRecorderPackageOption *)packageOption description:(NSString *)description venueId:(NSString *)venueId deviceModel:(NSString *)deviceModel __attribute__((swift_name("init(uploader:recordingPartInterval:packageOption:description:venueId:deviceModel:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onDispose __attribute__((swift_name("onDispose()")));
- (void)onFullReset __attribute__((swift_name("onFullReset()")));
- (void)onNextRecordingPartReset __attribute__((swift_name("onNextRecordingPartReset()")));
- (void)onOutputSignalSignal:(VpsOutputSignal *)signal __attribute__((swift_name("onOutputSignal(signal:)")));
- (void)onPartialDataDataPackage:(VpsPartitionRecorderDataPackage<VpsMagMappingDataV1 *> *)dataPackage __attribute__((swift_name("onPartialData(dataPackage:)")));
- (VpsPartitionRecorderDataPackage<VpsMagMappingDataV1 *> *)packageDataIdentifier:(NSString *)identifier __attribute__((swift_name("packageData(identifier:)")));
- (void)startRecordingSessionId:(NSString *)sessionId startNanoTimestamp:(int64_t)startNanoTimestamp startSystemTimeStamp:(int64_t)startSystemTimeStamp __attribute__((swift_name("startRecording(sessionId:startNanoTimestamp:startSystemTimeStamp:)")));
- (void)stopRecordingStopNanoTimestamp:(int64_t)stopNanoTimestamp stopSystemTimeStamp:(int64_t)stopSystemTimeStamp __attribute__((swift_name("stopRecording(stopNanoTimestamp:stopSystemTimeStamp:)")));
@property VpsMagMappingDataV1 *data __attribute__((swift_name("data")));
@property (readonly) NSString *dataFileNamePrefix __attribute__((swift_name("dataFileNamePrefix")));
@property (readonly) int64_t maxRecordingTimePerPartMillis __attribute__((swift_name("maxRecordingTimePerPartMillis")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MagMappingDataV1")))
@interface VpsMagMappingDataV1 : VpsBase
- (instancetype)initWithSessionId:(NSString *)sessionId venueId:(NSString *)venueId description:(NSString *)description deviceModel:(NSString *)deviceModel sessionNavigationFrameTransform:(VpsKotlinDoubleArray * _Nullable)sessionNavigationFrameTransform startSystemTimestamp:(int64_t)startSystemTimestamp stopSystemTimestamp:(int64_t)stopSystemTimestamp startNanoTimestamp:(int64_t)startNanoTimestamp stopNanoTimestamp:(int64_t)stopNanoTimestamp magnetometerMapData:(NSMutableArray<VpsMagnetometerMapDataReading *> *)magnetometerMapData __attribute__((swift_name("init(sessionId:venueId:description:deviceModel:sessionNavigationFrameTransform:startSystemTimestamp:stopSystemTimestamp:startNanoTimestamp:stopNanoTimestamp:magnetometerMapData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsMagMappingDataV1Companion *companion __attribute__((swift_name("companion")));
- (VpsMagMappingDataV1 *)doCopySessionId:(NSString *)sessionId venueId:(NSString *)venueId description:(NSString *)description deviceModel:(NSString *)deviceModel sessionNavigationFrameTransform:(VpsKotlinDoubleArray * _Nullable)sessionNavigationFrameTransform startSystemTimestamp:(int64_t)startSystemTimestamp stopSystemTimestamp:(int64_t)stopSystemTimestamp startNanoTimestamp:(int64_t)startNanoTimestamp stopNanoTimestamp:(int64_t)stopNanoTimestamp magnetometerMapData:(NSMutableArray<VpsMagnetometerMapDataReading *> *)magnetometerMapData __attribute__((swift_name("doCopy(sessionId:venueId:description:deviceModel:sessionNavigationFrameTransform:startSystemTimestamp:stopSystemTimestamp:startNanoTimestamp:stopNanoTimestamp:magnetometerMapData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (setter=setDescription:) NSString *description_ __attribute__((swift_name("description_")));
@property NSString *deviceModel __attribute__((swift_name("deviceModel")));
@property (readonly) NSMutableArray<VpsMagnetometerMapDataReading *> *magnetometerMapData __attribute__((swift_name("magnetometerMapData")));
@property NSString *sessionId __attribute__((swift_name("sessionId")));
@property VpsKotlinDoubleArray * _Nullable sessionNavigationFrameTransform __attribute__((swift_name("sessionNavigationFrameTransform")));
@property int64_t startNanoTimestamp __attribute__((swift_name("startNanoTimestamp")));
@property int64_t startSystemTimestamp __attribute__((swift_name("startSystemTimestamp")));
@property int64_t stopNanoTimestamp __attribute__((swift_name("stopNanoTimestamp")));
@property int64_t stopSystemTimestamp __attribute__((swift_name("stopSystemTimestamp")));
@property NSString *venueId __attribute__((swift_name("venueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MagMappingDataV1.Companion")))
@interface VpsMagMappingDataV1Companion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsMagMappingDataV1Companion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MagnetometerMapDataReading")))
@interface VpsMagnetometerMapDataReading : VpsBase
- (instancetype)initWithNT:(int64_t)nT sysT:(int64_t)sysT p:(VpsCoordinateF *)p fId:(int64_t)fId rM:(NSArray<VpsMagMappingRawSensorPack *> *)rM b:(VpsKotlinFloatArray *)b aC:(float)aC mL:(float)mL __attribute__((swift_name("init(nT:sysT:p:fId:rM:b:aC:mL:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsMagnetometerMapDataReadingCompanion *companion __attribute__((swift_name("companion")));
- (VpsMagnetometerMapDataReading *)doCopyNT:(int64_t)nT sysT:(int64_t)sysT p:(VpsCoordinateF *)p fId:(int64_t)fId rM:(NSArray<VpsMagMappingRawSensorPack *> *)rM b:(VpsKotlinFloatArray *)b aC:(float)aC mL:(float)mL __attribute__((swift_name("doCopy(nT:sysT:p:fId:rM:b:aC:mL:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float aC __attribute__((swift_name("aC")));
@property (readonly) VpsKotlinFloatArray *b __attribute__((swift_name("b")));
@property (readonly) int64_t fId __attribute__((swift_name("fId")));
@property (readonly) float mL __attribute__((swift_name("mL")));
@property (readonly) int64_t nT __attribute__((swift_name("nT")));
@property (readonly) VpsCoordinateF *p __attribute__((swift_name("p")));
@property (readonly) NSArray<VpsMagMappingRawSensorPack *> *rM __attribute__((swift_name("rM")));
@property (readonly) int64_t sysT __attribute__((swift_name("sysT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MagnetometerMapDataReading.Companion")))
@interface VpsMagnetometerMapDataReadingCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsMagnetometerMapDataReadingCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MagneticField")))
@interface VpsMagneticField : VpsBase
- (instancetype)initWithDeclination:(VpsFloat * _Nullable)declination inclination:(VpsFloat * _Nullable)inclination magnitude:(VpsFloat * _Nullable)magnitude __attribute__((swift_name("init(declination:inclination:magnitude:)"))) __attribute__((objc_designated_initializer));
- (VpsMagneticField *)doCopyDeclination:(VpsFloat * _Nullable)declination inclination:(VpsFloat * _Nullable)inclination magnitude:(VpsFloat * _Nullable)magnitude __attribute__((swift_name("doCopy(declination:inclination:magnitude:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsFloat * _Nullable declination __attribute__((swift_name("declination")));
@property (readonly) VpsFloat * _Nullable inclination __attribute__((swift_name("inclination")));
@property (readonly) VpsFloat * _Nullable magnitude __attribute__((swift_name("magnitude")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelToEventParameters")))
@interface VpsModelToEventParameters : VpsBase
- (instancetype)initWithUseSquareDriftFilter:(BOOL)useSquareDriftFilter squareDriftFilterGain:(float)squareDriftFilterGain speedThresholdForStairClassification:(float)speedThresholdForStairClassification modeKalmanFilterParams:(VpsModeKalmanFilterParams *)modeKalmanFilterParams stairSimpleFilterParams:(VpsStairSimpleFilterParams *)stairSimpleFilterParams __attribute__((swift_name("init(useSquareDriftFilter:squareDriftFilterGain:speedThresholdForStairClassification:modeKalmanFilterParams:stairSimpleFilterParams:)"))) __attribute__((objc_designated_initializer));
- (VpsModelToEventParameters *)doCopyUseSquareDriftFilter:(BOOL)useSquareDriftFilter squareDriftFilterGain:(float)squareDriftFilterGain speedThresholdForStairClassification:(float)speedThresholdForStairClassification modeKalmanFilterParams:(VpsModeKalmanFilterParams *)modeKalmanFilterParams stairSimpleFilterParams:(VpsStairSimpleFilterParams *)stairSimpleFilterParams __attribute__((swift_name("doCopy(useSquareDriftFilter:squareDriftFilterGain:speedThresholdForStairClassification:modeKalmanFilterParams:stairSimpleFilterParams:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsModeKalmanFilterParams *modeKalmanFilterParams __attribute__((swift_name("modeKalmanFilterParams")));
@property (readonly) float speedThresholdForStairClassification __attribute__((swift_name("speedThresholdForStairClassification")));
@property (readonly) float squareDriftFilterGain __attribute__((swift_name("squareDriftFilterGain")));
@property (readonly) VpsStairSimpleFilterParams *stairSimpleFilterParams __attribute__((swift_name("stairSimpleFilterParams")));
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
__attribute__((swift_name("AttackDetectorParams")))
@interface VpsAttackDetectorParams : VpsBase
- (instancetype)initWithDataCollectionTimeout:(int64_t)dataCollectionTimeout cn0SpikeTrendParams:(VpsTrendParams *)cn0SpikeTrendParams cn0DropTrendParams:(VpsTrendParams *)cn0DropTrendParams basebandCn0TrendParams:(VpsTrendParams *)basebandCn0TrendParams automaticGainControlLevelTrendParams:(VpsTrendParams *)automaticGainControlLevelTrendParams lossOfLockThreshold:(int32_t)lossOfLockThreshold satCountingThreshold:(int32_t)satCountingThreshold positionResidualSpikeThreshold:(double)positionResidualSpikeThreshold narrowBandHzThreshold:(float)narrowBandHzThreshold positionResidualTrendParams:(VpsTrendParams *)positionResidualTrendParams wideBandRatioThreshold:(double)wideBandRatioThreshold uniqueSatsTrendParams:(VpsTrendParams *)uniqueSatsTrendParams cN0RatioThresholdForPRNDetection:(double)cN0RatioThresholdForPRNDetection startAttackThresholdNanos:(int64_t)startAttackThresholdNanos stopAttackThresholdNanos:(int64_t)stopAttackThresholdNanos satellitesLostRatioForDefaultJamming:(double)satellitesLostRatioForDefaultJamming noiseFloorRatioThresholdForPRNDetection:(double)noiseFloorRatioThresholdForPRNDetection codeCarrierParams:(VpsCodeCarrierParams *)codeCarrierParams expectedLeapSeconds:(int32_t)expectedLeapSeconds maxClockDiffMillis:(int64_t)maxClockDiffMillis clockTrendWindowSize:(int32_t)clockTrendWindowSize maxClockTrendDrift:(double)maxClockTrendDrift meaconingClockBiasThreshold:(double)meaconingClockBiasThreshold meaconingClockBiasInARow:(int32_t)meaconingClockBiasInARow cn0ThresholdMeaconingVsPRN:(double)cn0ThresholdMeaconingVsPRN version:(VpsDetectorVersion *)version __attribute__((swift_name("init(dataCollectionTimeout:cn0SpikeTrendParams:cn0DropTrendParams:basebandCn0TrendParams:automaticGainControlLevelTrendParams:lossOfLockThreshold:satCountingThreshold:positionResidualSpikeThreshold:narrowBandHzThreshold:positionResidualTrendParams:wideBandRatioThreshold:uniqueSatsTrendParams:cN0RatioThresholdForPRNDetection:startAttackThresholdNanos:stopAttackThresholdNanos:satellitesLostRatioForDefaultJamming:noiseFloorRatioThresholdForPRNDetection:codeCarrierParams:expectedLeapSeconds:maxClockDiffMillis:clockTrendWindowSize:maxClockTrendDrift:meaconingClockBiasThreshold:meaconingClockBiasInARow:cn0ThresholdMeaconingVsPRN:version:)"))) __attribute__((objc_designated_initializer));
- (VpsAttackDetectorParams *)doCopyDataCollectionTimeout:(int64_t)dataCollectionTimeout cn0SpikeTrendParams:(VpsTrendParams *)cn0SpikeTrendParams cn0DropTrendParams:(VpsTrendParams *)cn0DropTrendParams basebandCn0TrendParams:(VpsTrendParams *)basebandCn0TrendParams automaticGainControlLevelTrendParams:(VpsTrendParams *)automaticGainControlLevelTrendParams lossOfLockThreshold:(int32_t)lossOfLockThreshold satCountingThreshold:(int32_t)satCountingThreshold positionResidualSpikeThreshold:(double)positionResidualSpikeThreshold narrowBandHzThreshold:(float)narrowBandHzThreshold positionResidualTrendParams:(VpsTrendParams *)positionResidualTrendParams wideBandRatioThreshold:(double)wideBandRatioThreshold uniqueSatsTrendParams:(VpsTrendParams *)uniqueSatsTrendParams cN0RatioThresholdForPRNDetection:(double)cN0RatioThresholdForPRNDetection startAttackThresholdNanos:(int64_t)startAttackThresholdNanos stopAttackThresholdNanos:(int64_t)stopAttackThresholdNanos satellitesLostRatioForDefaultJamming:(double)satellitesLostRatioForDefaultJamming noiseFloorRatioThresholdForPRNDetection:(double)noiseFloorRatioThresholdForPRNDetection codeCarrierParams:(VpsCodeCarrierParams *)codeCarrierParams expectedLeapSeconds:(int32_t)expectedLeapSeconds maxClockDiffMillis:(int64_t)maxClockDiffMillis clockTrendWindowSize:(int32_t)clockTrendWindowSize maxClockTrendDrift:(double)maxClockTrendDrift meaconingClockBiasThreshold:(double)meaconingClockBiasThreshold meaconingClockBiasInARow:(int32_t)meaconingClockBiasInARow cn0ThresholdMeaconingVsPRN:(double)cn0ThresholdMeaconingVsPRN version:(VpsDetectorVersion *)version __attribute__((swift_name("doCopy(dataCollectionTimeout:cn0SpikeTrendParams:cn0DropTrendParams:basebandCn0TrendParams:automaticGainControlLevelTrendParams:lossOfLockThreshold:satCountingThreshold:positionResidualSpikeThreshold:narrowBandHzThreshold:positionResidualTrendParams:wideBandRatioThreshold:uniqueSatsTrendParams:cN0RatioThresholdForPRNDetection:startAttackThresholdNanos:stopAttackThresholdNanos:satellitesLostRatioForDefaultJamming:noiseFloorRatioThresholdForPRNDetection:codeCarrierParams:expectedLeapSeconds:maxClockDiffMillis:clockTrendWindowSize:maxClockTrendDrift:meaconingClockBiasThreshold:meaconingClockBiasInARow:cn0ThresholdMeaconingVsPRN:version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsTrendParams *automaticGainControlLevelTrendParams __attribute__((swift_name("automaticGainControlLevelTrendParams")));
@property (readonly) VpsTrendParams *basebandCn0TrendParams __attribute__((swift_name("basebandCn0TrendParams")));
@property (readonly) double cN0RatioThresholdForPRNDetection __attribute__((swift_name("cN0RatioThresholdForPRNDetection")));
@property (readonly) int32_t clockTrendWindowSize __attribute__((swift_name("clockTrendWindowSize")));
@property (readonly) VpsTrendParams *cn0DropTrendParams __attribute__((swift_name("cn0DropTrendParams")));
@property (readonly) VpsTrendParams *cn0SpikeTrendParams __attribute__((swift_name("cn0SpikeTrendParams")));
@property (readonly) double cn0ThresholdMeaconingVsPRN __attribute__((swift_name("cn0ThresholdMeaconingVsPRN")));
@property (readonly) VpsCodeCarrierParams *codeCarrierParams __attribute__((swift_name("codeCarrierParams")));
@property (readonly) int64_t dataCollectionTimeout __attribute__((swift_name("dataCollectionTimeout")));
@property (readonly) int32_t expectedLeapSeconds __attribute__((swift_name("expectedLeapSeconds")));
@property (readonly) int32_t lossOfLockThreshold __attribute__((swift_name("lossOfLockThreshold")));
@property (readonly) int64_t maxClockDiffMillis __attribute__((swift_name("maxClockDiffMillis")));
@property (readonly) double maxClockTrendDrift __attribute__((swift_name("maxClockTrendDrift")));
@property (readonly) int32_t meaconingClockBiasInARow __attribute__((swift_name("meaconingClockBiasInARow")));
@property (readonly) double meaconingClockBiasThreshold __attribute__((swift_name("meaconingClockBiasThreshold")));
@property (readonly) float narrowBandHzThreshold __attribute__((swift_name("narrowBandHzThreshold")));
@property (readonly) double noiseFloorRatioThresholdForPRNDetection __attribute__((swift_name("noiseFloorRatioThresholdForPRNDetection")));
@property (readonly) double positionResidualSpikeThreshold __attribute__((swift_name("positionResidualSpikeThreshold")));
@property (readonly) VpsTrendParams *positionResidualTrendParams __attribute__((swift_name("positionResidualTrendParams")));
@property (readonly) int32_t satCountingThreshold __attribute__((swift_name("satCountingThreshold")));
@property (readonly) double satellitesLostRatioForDefaultJamming __attribute__((swift_name("satellitesLostRatioForDefaultJamming")));
@property (readonly) int64_t startAttackThresholdNanos __attribute__((swift_name("startAttackThresholdNanos")));
@property (readonly) int64_t stopAttackThresholdNanos __attribute__((swift_name("stopAttackThresholdNanos")));
@property (readonly) VpsTrendParams *uniqueSatsTrendParams __attribute__((swift_name("uniqueSatsTrendParams")));
@property (readonly) VpsDetectorVersion *version __attribute__((swift_name("version")));
@property (readonly) double wideBandRatioThreshold __attribute__((swift_name("wideBandRatioThreshold")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CodeCarrierParams")))
@interface VpsCodeCarrierParams : VpsBase
- (instancetype)initWithThresholdMetersPerSecond:(double)thresholdMetersPerSecond thresholdRelative:(double)thresholdRelative windowSize:(int32_t)windowSize minimumNumberOfSats:(int32_t)minimumNumberOfSats satelliteWarningFraction:(double)satelliteWarningFraction __attribute__((swift_name("init(thresholdMetersPerSecond:thresholdRelative:windowSize:minimumNumberOfSats:satelliteWarningFraction:)"))) __attribute__((objc_designated_initializer));
- (VpsCodeCarrierParams *)doCopyThresholdMetersPerSecond:(double)thresholdMetersPerSecond thresholdRelative:(double)thresholdRelative windowSize:(int32_t)windowSize minimumNumberOfSats:(int32_t)minimumNumberOfSats satelliteWarningFraction:(double)satelliteWarningFraction __attribute__((swift_name("doCopy(thresholdMetersPerSecond:thresholdRelative:windowSize:minimumNumberOfSats:satelliteWarningFraction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t minimumNumberOfSats __attribute__((swift_name("minimumNumberOfSats")));
@property (readonly) double satelliteWarningFraction __attribute__((swift_name("satelliteWarningFraction")));
@property (readonly) double thresholdMetersPerSecond __attribute__((swift_name("thresholdMetersPerSecond")));
@property (readonly) double thresholdRelative __attribute__((swift_name("thresholdRelative")));
@property (readonly) int32_t windowSize __attribute__((swift_name("windowSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectorVersion")))
@interface VpsDetectorVersion : VpsKotlinEnum<VpsDetectorVersion *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsDetectorVersion *base __attribute__((swift_name("base")));
@property (class, readonly) VpsDetectorVersion *empiric __attribute__((swift_name("empiric")));
@property (class, readonly) VpsDetectorVersion *dl __attribute__((swift_name("dl")));
+ (VpsKotlinArray<VpsDetectorVersion *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsDetectorVersion *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoMapFilterParams")))
@interface VpsNoMapFilterParams : VpsBase
- (instancetype)initWithMaxQueueSize:(int32_t)maxQueueSize backTrackerQueueSize:(int32_t)backTrackerQueueSize useProfileSpeedFactor:(BOOL)useProfileSpeedFactor version:(VpsNoMapFilterParamsVersion *)version dt:(double)dt rVar:(double)rVar qAcc:(double)qAcc rVelVar:(double)rVelVar maxV:(double)maxV speedCalibrationQueueLength:(int32_t)speedCalibrationQueueLength speedCalibrationWindowMinDistance:(float)speedCalibrationWindowMinDistance stepDt:(double)stepDt qv:(double)qv sigmaU:(double)sigmaU cvBlend:(double)cvBlend qs:(double)qs qTheta:(double)qTheta attackDetectorParams:(VpsAttackDetectorParams *)attackDetectorParams correctionDistanceMultiplierThreshold:(double)correctionDistanceMultiplierThreshold useFallbackAngleCorrection:(BOOL)useFallbackAngleCorrection manualAngleSyncDistanceThreshold:(float)manualAngleSyncDistanceThreshold manualAngleSyncStraightnessThreshold:(float)manualAngleSyncStraightnessThreshold manualAngleSyncFactor:(float)manualAngleSyncFactor useDeviationTable:(BOOL)useDeviationTable deviationTableTolerance:(float)deviationTableTolerance blendTimeout:(double)blendTimeout maxRInflation:(double)maxRInflation maxPosStep:(double)maxPosStep maxVelStep:(double)maxVelStep gateProb:(double)gateProb mahalanobisDistanceMultiplierThreshold:(double)mahalanobisDistanceMultiplierThreshold pPosInit:(double)pPosInit pVelInit:(double)pVelInit psInit:(double)psInit pThetaInit:(double)pThetaInit backTrackTimeout:(double)backTrackTimeout directionQueueSize:(int32_t)directionQueueSize osDiffThreshold:(float)osDiffThreshold filterOffsetThreshold:(float)filterOffsetThreshold distanceThresholdForAngleCorrection:(float)distanceThresholdForAngleCorrection maxAngleUpdate:(float)maxAngleUpdate useGNSSAngleCorrection:(BOOL)useGNSSAngleCorrection stepsWithoutOutCorrectionShrinkDenominator:(int32_t)stepsWithoutOutCorrectionShrinkDenominator __attribute__((swift_name("init(maxQueueSize:backTrackerQueueSize:useProfileSpeedFactor:version:dt:rVar:qAcc:rVelVar:maxV:speedCalibrationQueueLength:speedCalibrationWindowMinDistance:stepDt:qv:sigmaU:cvBlend:qs:qTheta:attackDetectorParams:correctionDistanceMultiplierThreshold:useFallbackAngleCorrection:manualAngleSyncDistanceThreshold:manualAngleSyncStraightnessThreshold:manualAngleSyncFactor:useDeviationTable:deviationTableTolerance:blendTimeout:maxRInflation:maxPosStep:maxVelStep:gateProb:mahalanobisDistanceMultiplierThreshold:pPosInit:pVelInit:psInit:pThetaInit:backTrackTimeout:directionQueueSize:osDiffThreshold:filterOffsetThreshold:distanceThresholdForAngleCorrection:maxAngleUpdate:useGNSSAngleCorrection:stepsWithoutOutCorrectionShrinkDenominator:)"))) __attribute__((objc_designated_initializer));
- (VpsNoMapFilterParams *)doCopyMaxQueueSize:(int32_t)maxQueueSize backTrackerQueueSize:(int32_t)backTrackerQueueSize useProfileSpeedFactor:(BOOL)useProfileSpeedFactor version:(VpsNoMapFilterParamsVersion *)version dt:(double)dt rVar:(double)rVar qAcc:(double)qAcc rVelVar:(double)rVelVar maxV:(double)maxV speedCalibrationQueueLength:(int32_t)speedCalibrationQueueLength speedCalibrationWindowMinDistance:(float)speedCalibrationWindowMinDistance stepDt:(double)stepDt qv:(double)qv sigmaU:(double)sigmaU cvBlend:(double)cvBlend qs:(double)qs qTheta:(double)qTheta attackDetectorParams:(VpsAttackDetectorParams *)attackDetectorParams correctionDistanceMultiplierThreshold:(double)correctionDistanceMultiplierThreshold useFallbackAngleCorrection:(BOOL)useFallbackAngleCorrection manualAngleSyncDistanceThreshold:(float)manualAngleSyncDistanceThreshold manualAngleSyncStraightnessThreshold:(float)manualAngleSyncStraightnessThreshold manualAngleSyncFactor:(float)manualAngleSyncFactor useDeviationTable:(BOOL)useDeviationTable deviationTableTolerance:(float)deviationTableTolerance blendTimeout:(double)blendTimeout maxRInflation:(double)maxRInflation maxPosStep:(double)maxPosStep maxVelStep:(double)maxVelStep gateProb:(double)gateProb mahalanobisDistanceMultiplierThreshold:(double)mahalanobisDistanceMultiplierThreshold pPosInit:(double)pPosInit pVelInit:(double)pVelInit psInit:(double)psInit pThetaInit:(double)pThetaInit backTrackTimeout:(double)backTrackTimeout directionQueueSize:(int32_t)directionQueueSize osDiffThreshold:(float)osDiffThreshold filterOffsetThreshold:(float)filterOffsetThreshold distanceThresholdForAngleCorrection:(float)distanceThresholdForAngleCorrection maxAngleUpdate:(float)maxAngleUpdate useGNSSAngleCorrection:(BOOL)useGNSSAngleCorrection stepsWithoutOutCorrectionShrinkDenominator:(int32_t)stepsWithoutOutCorrectionShrinkDenominator __attribute__((swift_name("doCopy(maxQueueSize:backTrackerQueueSize:useProfileSpeedFactor:version:dt:rVar:qAcc:rVelVar:maxV:speedCalibrationQueueLength:speedCalibrationWindowMinDistance:stepDt:qv:sigmaU:cvBlend:qs:qTheta:attackDetectorParams:correctionDistanceMultiplierThreshold:useFallbackAngleCorrection:manualAngleSyncDistanceThreshold:manualAngleSyncStraightnessThreshold:manualAngleSyncFactor:useDeviationTable:deviationTableTolerance:blendTimeout:maxRInflation:maxPosStep:maxVelStep:gateProb:mahalanobisDistanceMultiplierThreshold:pPosInit:pVelInit:psInit:pThetaInit:backTrackTimeout:directionQueueSize:osDiffThreshold:filterOffsetThreshold:distanceThresholdForAngleCorrection:maxAngleUpdate:useGNSSAngleCorrection:stepsWithoutOutCorrectionShrinkDenominator:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, NSString *> *)map __attribute__((swift_name("map()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsAttackDetectorParams *attackDetectorParams __attribute__((swift_name("attackDetectorParams")));
@property (readonly) double backTrackTimeout __attribute__((swift_name("backTrackTimeout")));
@property (readonly) int32_t backTrackerQueueSize __attribute__((swift_name("backTrackerQueueSize")));
@property (readonly) double blendTimeout __attribute__((swift_name("blendTimeout")));
@property (readonly) double correctionDistanceMultiplierThreshold __attribute__((swift_name("correctionDistanceMultiplierThreshold")));
@property (readonly) double cvBlend __attribute__((swift_name("cvBlend")));
@property (readonly) float deviationTableTolerance __attribute__((swift_name("deviationTableTolerance")));
@property (readonly) int32_t directionQueueSize __attribute__((swift_name("directionQueueSize")));
@property (readonly) float distanceThresholdForAngleCorrection __attribute__((swift_name("distanceThresholdForAngleCorrection")));
@property (readonly) double dt __attribute__((swift_name("dt")));
@property (readonly) float filterOffsetThreshold __attribute__((swift_name("filterOffsetThreshold")));
@property (readonly) double gateProb __attribute__((swift_name("gateProb")));
@property (readonly) double mahalanobisDistanceMultiplierThreshold __attribute__((swift_name("mahalanobisDistanceMultiplierThreshold")));
@property (readonly) float manualAngleSyncDistanceThreshold __attribute__((swift_name("manualAngleSyncDistanceThreshold")));
@property (readonly) float manualAngleSyncFactor __attribute__((swift_name("manualAngleSyncFactor")));
@property (readonly) float manualAngleSyncStraightnessThreshold __attribute__((swift_name("manualAngleSyncStraightnessThreshold")));
@property (readonly) float maxAngleUpdate __attribute__((swift_name("maxAngleUpdate")));
@property (readonly) double maxPosStep __attribute__((swift_name("maxPosStep")));
@property (readonly) int32_t maxQueueSize __attribute__((swift_name("maxQueueSize")));
@property (readonly) double maxRInflation __attribute__((swift_name("maxRInflation")));
@property (readonly) double maxV __attribute__((swift_name("maxV")));
@property (readonly) double maxVelStep __attribute__((swift_name("maxVelStep")));
@property (readonly) float osDiffThreshold __attribute__((swift_name("osDiffThreshold")));
@property (readonly) double pPosInit __attribute__((swift_name("pPosInit")));
@property (readonly) double pThetaInit __attribute__((swift_name("pThetaInit")));
@property (readonly) double pVelInit __attribute__((swift_name("pVelInit")));
@property (readonly) double psInit __attribute__((swift_name("psInit")));
@property (readonly) double qAcc __attribute__((swift_name("qAcc")));
@property (readonly) double qTheta __attribute__((swift_name("qTheta")));
@property (readonly) double qs __attribute__((swift_name("qs")));
@property (readonly) double qv __attribute__((swift_name("qv")));
@property (readonly) double rVar __attribute__((swift_name("rVar")));
@property (readonly) double rVelVar __attribute__((swift_name("rVelVar")));
@property (readonly) double sigmaU __attribute__((swift_name("sigmaU")));
@property (readonly) int32_t speedCalibrationQueueLength __attribute__((swift_name("speedCalibrationQueueLength")));
@property (readonly) float speedCalibrationWindowMinDistance __attribute__((swift_name("speedCalibrationWindowMinDistance")));
@property (readonly) double stepDt __attribute__((swift_name("stepDt")));
@property (readonly) int32_t stepsWithoutOutCorrectionShrinkDenominator __attribute__((swift_name("stepsWithoutOutCorrectionShrinkDenominator")));
@property (readonly) BOOL useDeviationTable __attribute__((swift_name("useDeviationTable")));
@property (readonly) BOOL useFallbackAngleCorrection __attribute__((swift_name("useFallbackAngleCorrection")));
@property (readonly) BOOL useGNSSAngleCorrection __attribute__((swift_name("useGNSSAngleCorrection")));
@property (readonly) BOOL useProfileSpeedFactor __attribute__((swift_name("useProfileSpeedFactor")));
@property (readonly) VpsNoMapFilterParamsVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoMapFilterParams.Version")))
@interface VpsNoMapFilterParamsVersion : VpsKotlinEnum<VpsNoMapFilterParamsVersion *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsNoMapFilterParamsVersion *tt2Only __attribute__((swift_name("tt2Only")));
@property (class, readonly) VpsNoMapFilterParamsVersion *multiGnss __attribute__((swift_name("multiGnss")));
@property (class, readonly) VpsNoMapFilterParamsVersion *sensorFusion __attribute__((swift_name("sensorFusion")));
+ (VpsKotlinArray<VpsNoMapFilterParamsVersion *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsNoMapFilterParamsVersion *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrendParams")))
@interface VpsTrendParams : VpsBase
- (instancetype)initWithTrendWin:(int32_t)trendWin kSigma:(double)kSigma hSigma:(double)hSigma minSeparation:(int32_t)minSeparation dwell:(int32_t)dwell preBaselineWin:(int32_t)preBaselineWin recoveryWin:(int32_t)recoveryWin recoveryDwell:(int32_t)recoveryDwell recoveryFrac:(double)recoveryFrac recoveryDeltaAbs:(double)recoveryDeltaAbs minSpike:(double)minSpike maxDrop:(double)maxDrop upperThreshold:(double)upperThreshold lowerThreshold:(double)lowerThreshold __attribute__((swift_name("init(trendWin:kSigma:hSigma:minSeparation:dwell:preBaselineWin:recoveryWin:recoveryDwell:recoveryFrac:recoveryDeltaAbs:minSpike:maxDrop:upperThreshold:lowerThreshold:)"))) __attribute__((objc_designated_initializer));
- (VpsTrendParams *)doCopyTrendWin:(int32_t)trendWin kSigma:(double)kSigma hSigma:(double)hSigma minSeparation:(int32_t)minSeparation dwell:(int32_t)dwell preBaselineWin:(int32_t)preBaselineWin recoveryWin:(int32_t)recoveryWin recoveryDwell:(int32_t)recoveryDwell recoveryFrac:(double)recoveryFrac recoveryDeltaAbs:(double)recoveryDeltaAbs minSpike:(double)minSpike maxDrop:(double)maxDrop upperThreshold:(double)upperThreshold lowerThreshold:(double)lowerThreshold __attribute__((swift_name("doCopy(trendWin:kSigma:hSigma:minSeparation:dwell:preBaselineWin:recoveryWin:recoveryDwell:recoveryFrac:recoveryDeltaAbs:minSpike:maxDrop:upperThreshold:lowerThreshold:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dwell __attribute__((swift_name("dwell")));
@property (readonly) double hSigma __attribute__((swift_name("hSigma")));
@property (readonly) double kSigma __attribute__((swift_name("kSigma")));
@property (readonly) double lowerThreshold __attribute__((swift_name("lowerThreshold")));
@property (readonly) double maxDrop __attribute__((swift_name("maxDrop")));
@property (readonly) int32_t minSeparation __attribute__((swift_name("minSeparation")));
@property (readonly) double minSpike __attribute__((swift_name("minSpike")));
@property (readonly) int32_t preBaselineWin __attribute__((swift_name("preBaselineWin")));
@property (readonly) double recoveryDeltaAbs __attribute__((swift_name("recoveryDeltaAbs")));
@property (readonly) int32_t recoveryDwell __attribute__((swift_name("recoveryDwell")));
@property (readonly) double recoveryFrac __attribute__((swift_name("recoveryFrac")));
@property (readonly) int32_t recoveryWin __attribute__((swift_name("recoveryWin")));
@property (readonly) int32_t trendWin __attribute__((swift_name("trendWin")));
@property (readonly) double upperThreshold __attribute__((swift_name("upperThreshold")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSAttackDetectorParams")))
@interface VpsVPSAttackDetectorParams : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vPSAttackDetectorParams __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsVPSAttackDetectorParams *shared __attribute__((swift_name("shared")));
@property (readonly) VpsAttackDetectorParams *base __attribute__((swift_name("base")));
@property (readonly) VpsAttackDetectorParams *deepLearning __attribute__((swift_name("deepLearning")));
@property (readonly, getter=default) VpsAttackDetectorParams *default_ __attribute__((swift_name("default_")));
@property (readonly) VpsAttackDetectorParams *empiric __attribute__((swift_name("empiric")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSNoMapFilterParams")))
@interface VpsVPSNoMapFilterParams : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vPSNoMapFilterParams __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsVPSNoMapFilterParams *shared __attribute__((swift_name("shared")));
@property (readonly, getter=default) VpsNoMapFilterParams *default_ __attribute__((swift_name("default_")));
@property (readonly) VpsNoMapFilterParams *multiGNSS __attribute__((swift_name("multiGNSS")));
@property (readonly) VpsNoMapFilterParams *sensorFusion __attribute__((swift_name("sensorFusion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrientationParams")))
@interface VpsOrientationParams : VpsBase
- (instancetype)initWithVersion:(VpsOrientationParamsVersion *)version startAngleReferenceAxis:(VpsDeviceAxis * _Nullable)startAngleReferenceAxis uncertainStartAngleReferenceAxis:(VpsDeviceAxis * _Nullable)uncertainStartAngleReferenceAxis __attribute__((swift_name("init(version:startAngleReferenceAxis:uncertainStartAngleReferenceAxis:)"))) __attribute__((objc_designated_initializer));
- (VpsOrientationParams *)doCopyVersion:(VpsOrientationParamsVersion *)version startAngleReferenceAxis:(VpsDeviceAxis * _Nullable)startAngleReferenceAxis uncertainStartAngleReferenceAxis:(VpsDeviceAxis * _Nullable)uncertainStartAngleReferenceAxis __attribute__((swift_name("doCopy(version:startAngleReferenceAxis:uncertainStartAngleReferenceAxis:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, NSString *> *)map __attribute__((swift_name("map()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsDeviceAxis * _Nullable startAngleReferenceAxis __attribute__((swift_name("startAngleReferenceAxis")));
@property (readonly) VpsDeviceAxis * _Nullable uncertainStartAngleReferenceAxis __attribute__((swift_name("uncertainStartAngleReferenceAxis")));
@property (readonly) VpsOrientationParamsVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrientationParams.Version")))
@interface VpsOrientationParamsVersion : VpsKotlinEnum<VpsOrientationParamsVersion *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsOrientationParamsVersion *automatic __attribute__((swift_name("automatic")));
@property (class, readonly) VpsOrientationParamsVersion *xaxis __attribute__((swift_name("xaxis")));
@property (class, readonly) VpsOrientationParamsVersion *yaxis __attribute__((swift_name("yaxis")));
@property (class, readonly) VpsOrientationParamsVersion *zaxis __attribute__((swift_name("zaxis")));
@property (class, readonly) VpsOrientationParamsVersion *bilka __attribute__((swift_name("bilka")));
@property (class, readonly) VpsOrientationParamsVersion *tesco __attribute__((swift_name("tesco")));
+ (VpsKotlinArray<VpsOrientationParamsVersion *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsOrientationParamsVersion *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSOrientationParams")))
@interface VpsVPSOrientationParams : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vPSOrientationParams __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsVPSOrientationParams *shared __attribute__((swift_name("shared")));
@property (readonly) VpsOrientationParams *OrientationParamsAutomatic __attribute__((swift_name("OrientationParamsAutomatic")));
@property (readonly) VpsOrientationParams *OrientationParamsBilka __attribute__((swift_name("OrientationParamsBilka")));
@property (readonly) VpsOrientationParams *OrientationParamsTesco __attribute__((swift_name("OrientationParamsTesco")));
@property (readonly) VpsOrientationParams *OrientationParamsXAxis __attribute__((swift_name("OrientationParamsXAxis")));
@property (readonly) VpsOrientationParams *OrientationParamsYAxis __attribute__((swift_name("OrientationParamsYAxis")));
@property (readonly) VpsOrientationParams *OrientationParamsZAxis __attribute__((swift_name("OrientationParamsZAxis")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrientationFilterParams")))
@interface VpsOrientationFilterParams : VpsBase
- (instancetype)initWithGain:(float)gain maxUpdate:(VpsFloat * _Nullable)maxUpdate biasPrio:(NSArray<VpsOrientationFilterParamsBiasTypes *> *)biasPrio __attribute__((swift_name("init(gain:maxUpdate:biasPrio:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOrientationFilterParamsCompanion *companion __attribute__((swift_name("companion")));
- (VpsOrientationFilterParams *)doCopyGain:(float)gain maxUpdate:(VpsFloat * _Nullable)maxUpdate biasPrio:(NSArray<VpsOrientationFilterParamsBiasTypes *> *)biasPrio __attribute__((swift_name("doCopy(gain:maxUpdate:biasPrio:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<VpsOrientationFilterParamsBiasTypes *> *biasPrio __attribute__((swift_name("biasPrio")));
@property (readonly) float gain __attribute__((swift_name("gain")));
@property (readonly) VpsFloat * _Nullable maxUpdate __attribute__((swift_name("maxUpdate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrientationFilterParams.BiasTypes")))
@interface VpsOrientationFilterParamsBiasTypes : VpsKotlinEnum<VpsOrientationFilterParamsBiasTypes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsOrientationFilterParamsBiasTypes *system __attribute__((swift_name("system")));
@property (class, readonly) VpsOrientationFilterParamsBiasTypes *rest __attribute__((swift_name("rest")));
@property (class, readonly) VpsOrientationFilterParamsBiasTypes *temp __attribute__((swift_name("temp")));
+ (VpsKotlinArray<VpsOrientationFilterParamsBiasTypes *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsOrientationFilterParamsBiasTypes *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrientationFilterParams.Companion")))
@interface VpsOrientationFilterParamsCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOrientationFilterParamsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<VpsOrientationFilterParamsBiasTypes *> *defaultBiasPrio __attribute__((swift_name("defaultBiasPrio")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrientationModuleParams")))
@interface VpsOrientationModuleParams : VpsBase
- (instancetype)initWithIsActive:(BOOL)isActive useFilter:(BOOL)useFilter updateFrequency:(float)updateFrequency orientationFilterParams:(VpsOrientationFilterParams *)orientationFilterParams temperatureFilterParams:(VpsTemperatureFilterParams *)temperatureFilterParams restDetectorParams:(VpsRestDetectorParams *)restDetectorParams trfFusionParams:(VpsTRFFusionParams *)trfFusionParams __attribute__((swift_name("init(isActive:useFilter:updateFrequency:orientationFilterParams:temperatureFilterParams:restDetectorParams:trfFusionParams:)"))) __attribute__((objc_designated_initializer));
- (VpsOrientationModuleParams *)doCopyIsActive:(BOOL)isActive useFilter:(BOOL)useFilter updateFrequency:(float)updateFrequency orientationFilterParams:(VpsOrientationFilterParams *)orientationFilterParams temperatureFilterParams:(VpsTemperatureFilterParams *)temperatureFilterParams restDetectorParams:(VpsRestDetectorParams *)restDetectorParams trfFusionParams:(VpsTRFFusionParams *)trfFusionParams __attribute__((swift_name("doCopy(isActive:useFilter:updateFrequency:orientationFilterParams:temperatureFilterParams:restDetectorParams:trfFusionParams:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) VpsOrientationFilterParams *orientationFilterParams __attribute__((swift_name("orientationFilterParams")));
@property (readonly) VpsRestDetectorParams *restDetectorParams __attribute__((swift_name("restDetectorParams")));
@property (readonly) VpsTemperatureFilterParams *temperatureFilterParams __attribute__((swift_name("temperatureFilterParams")));
@property (readonly) VpsTRFFusionParams *trfFusionParams __attribute__((swift_name("trfFusionParams")));
@property (readonly) float updateFrequency __attribute__((swift_name("updateFrequency")));
@property (readonly) BOOL useFilter __attribute__((swift_name("useFilter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestDetectorParams")))
@interface VpsRestDetectorParams : VpsBase
- (instancetype)initWithRelGyroTolerances:(NSDictionary<NSString *, VpsFloat *> *)relGyroTolerances absGyroTolerances:(NSDictionary<NSString *, VpsFloat *> *)absGyroTolerances smoothingWindowSize:(float)smoothingWindowSize minSize:(float)minSize maxSize:(float)maxSize __attribute__((swift_name("init(relGyroTolerances:absGyroTolerances:smoothingWindowSize:minSize:maxSize:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsRestDetectorParamsCompanion *companion __attribute__((swift_name("companion")));
- (VpsRestDetectorParams *)doCopyRelGyroTolerances:(NSDictionary<NSString *, VpsFloat *> *)relGyroTolerances absGyroTolerances:(NSDictionary<NSString *, VpsFloat *> *)absGyroTolerances smoothingWindowSize:(float)smoothingWindowSize minSize:(float)minSize maxSize:(float)maxSize __attribute__((swift_name("doCopy(relGyroTolerances:absGyroTolerances:smoothingWindowSize:minSize:maxSize:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (float)getAbsGyroTolDeviceModel:(NSString *)deviceModel __attribute__((swift_name("getAbsGyroTol(deviceModel:)")));
- (float)getRelGyroTolDeviceModel:(NSString *)deviceModel __attribute__((swift_name("getRelGyroTol(deviceModel:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, VpsFloat *> *absGyroTolerances __attribute__((swift_name("absGyroTolerances")));
@property (readonly) float maxSize __attribute__((swift_name("maxSize")));
@property (readonly) float minSize __attribute__((swift_name("minSize")));
@property (readonly) NSDictionary<NSString *, VpsFloat *> *relGyroTolerances __attribute__((swift_name("relGyroTolerances")));
@property (readonly) float smoothingWindowSize __attribute__((swift_name("smoothingWindowSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestDetectorParams.Companion")))
@interface VpsRestDetectorParamsCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsRestDetectorParamsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) float defaultAbsGyroTol __attribute__((swift_name("defaultAbsGyroTol")));
@property (readonly) NSDictionary<NSString *, VpsFloat *> *defaultAbsGyroTolerances __attribute__((swift_name("defaultAbsGyroTolerances")));
@property (readonly) float defaultRelGyroTol __attribute__((swift_name("defaultRelGyroTol")));
@property (readonly) NSDictionary<NSString *, VpsFloat *> *defaultRelGyroTolerances __attribute__((swift_name("defaultRelGyroTolerances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TRFFusionParams")))
@interface VpsTRFFusionParams : VpsBase
- (instancetype)initWithObservationFilterCapacity:(int32_t)observationFilterCapacity __attribute__((swift_name("init(observationFilterCapacity:)"))) __attribute__((objc_designated_initializer));
- (VpsTRFFusionParams *)doCopyObservationFilterCapacity:(int32_t)observationFilterCapacity __attribute__((swift_name("doCopy(observationFilterCapacity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t observationFilterCapacity __attribute__((swift_name("observationFilterCapacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TemperatureFilterParams")))
@interface VpsTemperatureFilterParams : VpsBase
- (instancetype)initWithTempSources:(NSDictionary<NSString *, NSString *> *)tempSources biasPolyDegree:(int32_t)biasPolyDegree extrapolationLimit:(VpsDouble * _Nullable)extrapolationLimit minNumObservations:(int32_t)minNumObservations minTempObsRange:(float)minTempObsRange __attribute__((swift_name("init(tempSources:biasPolyDegree:extrapolationLimit:minNumObservations:minTempObsRange:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsTemperatureFilterParamsCompanion *companion __attribute__((swift_name("companion")));
- (VpsTemperatureFilterParams *)doCopyTempSources:(NSDictionary<NSString *, NSString *> *)tempSources biasPolyDegree:(int32_t)biasPolyDegree extrapolationLimit:(VpsDouble * _Nullable)extrapolationLimit minNumObservations:(int32_t)minNumObservations minTempObsRange:(float)minTempObsRange __attribute__((swift_name("doCopy(tempSources:biasPolyDegree:extrapolationLimit:minNumObservations:minTempObsRange:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString * _Nullable)getTempSourceDeviceModel:(NSString *)deviceModel __attribute__((swift_name("getTempSource(deviceModel:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t biasPolyDegree __attribute__((swift_name("biasPolyDegree")));
@property (readonly) VpsDouble * _Nullable extrapolationLimit __attribute__((swift_name("extrapolationLimit")));
@property (readonly) int32_t minNumObservations __attribute__((swift_name("minNumObservations")));
@property (readonly) float minTempObsRange __attribute__((swift_name("minTempObsRange")));
@property (readonly) NSDictionary<NSString *, NSString *> *tempSources __attribute__((swift_name("tempSources")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TemperatureFilterParams.Companion")))
@interface VpsTemperatureFilterParamsCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsTemperatureFilterParamsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSDictionary<NSString *, NSString *> *defaultTempSources __attribute__((swift_name("defaultTempSources")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSOrientationModuleParams")))
@interface VpsVPSOrientationModuleParams : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vPSOrientationModuleParams __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsVPSOrientationModuleParams *shared __attribute__((swift_name("shared")));
@property (readonly, getter=default) VpsOrientationModuleParams *default_ __attribute__((swift_name("default_")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GyroBiasObservation")))
@interface VpsGyroBiasObservation : VpsBase
- (instancetype)initWithSessionId:(NSString *)sessionId timestamp:(int64_t)timestamp tempSource:(NSString *)tempSource temp:(float)temp bX:(float)bX bY:(float)bY bZ:(float)bZ __attribute__((swift_name("init(sessionId:timestamp:tempSource:temp:bX:bY:bZ:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsGyroBiasObservationCompanion *companion __attribute__((swift_name("companion")));
- (VpsGyroBiasObservation *)doCopySessionId:(NSString *)sessionId timestamp:(int64_t)timestamp tempSource:(NSString *)tempSource temp:(float)temp bX:(float)bX bY:(float)bY bZ:(float)bZ __attribute__((swift_name("doCopy(sessionId:timestamp:tempSource:temp:bX:bY:bZ:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float bX __attribute__((swift_name("bX")));
@property (readonly) float bY __attribute__((swift_name("bY")));
@property (readonly) float bZ __attribute__((swift_name("bZ")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) float temp __attribute__((swift_name("temp")));
@property (readonly) NSString *tempSource __attribute__((swift_name("tempSource")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GyroBiasObservation.Companion")))
@interface VpsGyroBiasObservationCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsGyroBiasObservationCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterParams")))
@interface VpsParticleFilterParams : VpsBase
- (instancetype)initWithVersion:(VpsParticleFilterParamsVersion *)version maxNumParticles:(int32_t)maxNumParticles minNumParticles:(int32_t)minNumParticles stepLengthStd:(float)stepLengthStd stepDirectionStd:(float)stepDirectionStd biasStd:(float)biasStd biasLimit:(VpsKotlinPair<VpsFloat *, VpsFloat *> *)biasLimit secondBiasStd:(float)secondBiasStd secondBiasMean:(float)secondBiasMean secondBiasLimit:(VpsKotlinPair<VpsFloat *, VpsFloat *> *)secondBiasLimit mixingFactor:(float)mixingFactor startMethod:(VpsStartMethod *)startMethod startPositionStd:(float)startPositionStd startDirectionStd:(float)startDirectionStd syncMethod:(VpsSyncMethod *)syncMethod syncPositionStd:(float)syncPositionStd syncDirectionStd:(float)syncDirectionStd rescuePositionStd:(float)rescuePositionStd rescueDirectionStd:(float)rescueDirectionStd kldEpsilon:(float)kldEpsilon kldDelta:(float)kldDelta kldZ:(float)kldZ binSize:(VpsKotlinTriple<VpsFloat *, VpsFloat *, VpsFloat *> *)binSize uxPositionConfidence:(float)uxPositionConfidence angleOffsetGainDegPerMin:(float)angleOffsetGainDegPerMin speedFactor:(float)speedFactor naiveOutputSyncMovement:(BOOL)naiveOutputSyncMovement useMLSyncSpeedFilter:(BOOL)useMLSyncSpeedFilter sprinkleSyncThreshold:(float)sprinkleSyncThreshold sprinklePercentage:(float)sprinklePercentage useRayTraceSensorModel:(BOOL)useRayTraceSensorModel nlThreshold:(float)nlThreshold rescueOnNL:(BOOL)rescueOnNL wiFiDistanceSyncCriteria:(float)wiFiDistanceSyncCriteria idleWiFiSecondsCriteria:(float)idleWiFiSecondsCriteria wiFiPathLossCoefficient:(float)wiFiPathLossCoefficient wiFiMeasuredPower:(int32_t)wiFiMeasuredPower swapSprinkleInterval:(int32_t)swapSprinkleInterval swapSprinkleEndCount:(int32_t)swapSprinkleEndCount swapSprinkleRatio:(float)swapSprinkleRatio mlStepHistorySize:(int32_t)mlStepHistorySize idlePositionTimeThreshold:(int64_t)idlePositionTimeThreshold stdQuantile:(float)stdQuantile uncertainThreshold:(float)uncertainThreshold mlStepHistorySizeForOOBComeback:(int32_t)mlStepHistorySizeForOOBComeback wiFiStatusTimeLimit:(float)wiFiStatusTimeLimit allowOutOfBounds:(BOOL)allowOutOfBounds maxAllowedStd:(float)maxAllowedStd rssiScanThreshold:(int32_t)rssiScanThreshold bundleAPsInScan:(BOOL)bundleAPsInScan scanGridResolution:(float)scanGridResolution scanErrorRatioThreshold:(float)scanErrorRatioThreshold wiFiSprinkleDirectionStd:(float)wiFiSprinkleDirectionStd scanErrorSprinkleLocationStdCoefficient:(float)scanErrorSprinkleLocationStdCoefficient rescueKDEAngRatio:(float)rescueKDEAngRatio rescueStartAngRatio:(float)rescueStartAngRatio rescueCompassAngRatio:(float)rescueCompassAngRatio wifiSprinkleDistanceCriteria:(float)wifiSprinkleDistanceCriteria floorSwapPositionStd:(float)floorSwapPositionStd floorSwapDirectionStd:(float)floorSwapDirectionStd floorSwapSprinklePositionStd:(float)floorSwapSprinklePositionStd floorSwapSprinkleDirectionStd:(float)floorSwapSprinkleDirectionStd idleWiFiSprinkle:(BOOL)idleWiFiSprinkle strongRssiScanThreshold:(int32_t)strongRssiScanThreshold weakRssiScanThreshold:(int32_t)weakRssiScanThreshold nRequiredScans:(int32_t)nRequiredScans minDistanceOOB:(float)minDistanceOOB stairSpeedFactor:(float)stairSpeedFactor exitZoneRatioForOOB:(float)exitZoneRatioForOOB useKDEX0Step:(BOOL)useKDEX0Step uncertainStartPositionStd:(float)uncertainStartPositionStd uncertainStartDirectionStd:(float)uncertainStartDirectionStd useGlobalKDESearch:(BOOL)useGlobalKDESearch magSprinkleSyncThreshold:(float)magSprinkleSyncThreshold __attribute__((swift_name("init(version:maxNumParticles:minNumParticles:stepLengthStd:stepDirectionStd:biasStd:biasLimit:secondBiasStd:secondBiasMean:secondBiasLimit:mixingFactor:startMethod:startPositionStd:startDirectionStd:syncMethod:syncPositionStd:syncDirectionStd:rescuePositionStd:rescueDirectionStd:kldEpsilon:kldDelta:kldZ:binSize:uxPositionConfidence:angleOffsetGainDegPerMin:speedFactor:naiveOutputSyncMovement:useMLSyncSpeedFilter:sprinkleSyncThreshold:sprinklePercentage:useRayTraceSensorModel:nlThreshold:rescueOnNL:wiFiDistanceSyncCriteria:idleWiFiSecondsCriteria:wiFiPathLossCoefficient:wiFiMeasuredPower:swapSprinkleInterval:swapSprinkleEndCount:swapSprinkleRatio:mlStepHistorySize:idlePositionTimeThreshold:stdQuantile:uncertainThreshold:mlStepHistorySizeForOOBComeback:wiFiStatusTimeLimit:allowOutOfBounds:maxAllowedStd:rssiScanThreshold:bundleAPsInScan:scanGridResolution:scanErrorRatioThreshold:wiFiSprinkleDirectionStd:scanErrorSprinkleLocationStdCoefficient:rescueKDEAngRatio:rescueStartAngRatio:rescueCompassAngRatio:wifiSprinkleDistanceCriteria:floorSwapPositionStd:floorSwapDirectionStd:floorSwapSprinklePositionStd:floorSwapSprinkleDirectionStd:idleWiFiSprinkle:strongRssiScanThreshold:weakRssiScanThreshold:nRequiredScans:minDistanceOOB:stairSpeedFactor:exitZoneRatioForOOB:useKDEX0Step:uncertainStartPositionStd:uncertainStartDirectionStd:useGlobalKDESearch:magSprinkleSyncThreshold:)"))) __attribute__((objc_designated_initializer));
- (VpsParticleFilterParams *)doCopyVersion:(VpsParticleFilterParamsVersion *)version maxNumParticles:(int32_t)maxNumParticles minNumParticles:(int32_t)minNumParticles stepLengthStd:(float)stepLengthStd stepDirectionStd:(float)stepDirectionStd biasStd:(float)biasStd biasLimit:(VpsKotlinPair<VpsFloat *, VpsFloat *> *)biasLimit secondBiasStd:(float)secondBiasStd secondBiasMean:(float)secondBiasMean secondBiasLimit:(VpsKotlinPair<VpsFloat *, VpsFloat *> *)secondBiasLimit mixingFactor:(float)mixingFactor startMethod:(VpsStartMethod *)startMethod startPositionStd:(float)startPositionStd startDirectionStd:(float)startDirectionStd syncMethod:(VpsSyncMethod *)syncMethod syncPositionStd:(float)syncPositionStd syncDirectionStd:(float)syncDirectionStd rescuePositionStd:(float)rescuePositionStd rescueDirectionStd:(float)rescueDirectionStd kldEpsilon:(float)kldEpsilon kldDelta:(float)kldDelta kldZ:(float)kldZ binSize:(VpsKotlinTriple<VpsFloat *, VpsFloat *, VpsFloat *> *)binSize uxPositionConfidence:(float)uxPositionConfidence angleOffsetGainDegPerMin:(float)angleOffsetGainDegPerMin speedFactor:(float)speedFactor naiveOutputSyncMovement:(BOOL)naiveOutputSyncMovement useMLSyncSpeedFilter:(BOOL)useMLSyncSpeedFilter sprinkleSyncThreshold:(float)sprinkleSyncThreshold sprinklePercentage:(float)sprinklePercentage useRayTraceSensorModel:(BOOL)useRayTraceSensorModel nlThreshold:(float)nlThreshold rescueOnNL:(BOOL)rescueOnNL wiFiDistanceSyncCriteria:(float)wiFiDistanceSyncCriteria idleWiFiSecondsCriteria:(float)idleWiFiSecondsCriteria wiFiPathLossCoefficient:(float)wiFiPathLossCoefficient wiFiMeasuredPower:(int32_t)wiFiMeasuredPower swapSprinkleInterval:(int32_t)swapSprinkleInterval swapSprinkleEndCount:(int32_t)swapSprinkleEndCount swapSprinkleRatio:(float)swapSprinkleRatio mlStepHistorySize:(int32_t)mlStepHistorySize idlePositionTimeThreshold:(int64_t)idlePositionTimeThreshold stdQuantile:(float)stdQuantile uncertainThreshold:(float)uncertainThreshold mlStepHistorySizeForOOBComeback:(int32_t)mlStepHistorySizeForOOBComeback wiFiStatusTimeLimit:(float)wiFiStatusTimeLimit allowOutOfBounds:(BOOL)allowOutOfBounds maxAllowedStd:(float)maxAllowedStd rssiScanThreshold:(int32_t)rssiScanThreshold bundleAPsInScan:(BOOL)bundleAPsInScan scanGridResolution:(float)scanGridResolution scanErrorRatioThreshold:(float)scanErrorRatioThreshold wiFiSprinkleDirectionStd:(float)wiFiSprinkleDirectionStd scanErrorSprinkleLocationStdCoefficient:(float)scanErrorSprinkleLocationStdCoefficient rescueKDEAngRatio:(float)rescueKDEAngRatio rescueStartAngRatio:(float)rescueStartAngRatio rescueCompassAngRatio:(float)rescueCompassAngRatio wifiSprinkleDistanceCriteria:(float)wifiSprinkleDistanceCriteria floorSwapPositionStd:(float)floorSwapPositionStd floorSwapDirectionStd:(float)floorSwapDirectionStd floorSwapSprinklePositionStd:(float)floorSwapSprinklePositionStd floorSwapSprinkleDirectionStd:(float)floorSwapSprinkleDirectionStd idleWiFiSprinkle:(BOOL)idleWiFiSprinkle strongRssiScanThreshold:(int32_t)strongRssiScanThreshold weakRssiScanThreshold:(int32_t)weakRssiScanThreshold nRequiredScans:(int32_t)nRequiredScans minDistanceOOB:(float)minDistanceOOB stairSpeedFactor:(float)stairSpeedFactor exitZoneRatioForOOB:(float)exitZoneRatioForOOB useKDEX0Step:(BOOL)useKDEX0Step uncertainStartPositionStd:(float)uncertainStartPositionStd uncertainStartDirectionStd:(float)uncertainStartDirectionStd useGlobalKDESearch:(BOOL)useGlobalKDESearch magSprinkleSyncThreshold:(float)magSprinkleSyncThreshold __attribute__((swift_name("doCopy(version:maxNumParticles:minNumParticles:stepLengthStd:stepDirectionStd:biasStd:biasLimit:secondBiasStd:secondBiasMean:secondBiasLimit:mixingFactor:startMethod:startPositionStd:startDirectionStd:syncMethod:syncPositionStd:syncDirectionStd:rescuePositionStd:rescueDirectionStd:kldEpsilon:kldDelta:kldZ:binSize:uxPositionConfidence:angleOffsetGainDegPerMin:speedFactor:naiveOutputSyncMovement:useMLSyncSpeedFilter:sprinkleSyncThreshold:sprinklePercentage:useRayTraceSensorModel:nlThreshold:rescueOnNL:wiFiDistanceSyncCriteria:idleWiFiSecondsCriteria:wiFiPathLossCoefficient:wiFiMeasuredPower:swapSprinkleInterval:swapSprinkleEndCount:swapSprinkleRatio:mlStepHistorySize:idlePositionTimeThreshold:stdQuantile:uncertainThreshold:mlStepHistorySizeForOOBComeback:wiFiStatusTimeLimit:allowOutOfBounds:maxAllowedStd:rssiScanThreshold:bundleAPsInScan:scanGridResolution:scanErrorRatioThreshold:wiFiSprinkleDirectionStd:scanErrorSprinkleLocationStdCoefficient:rescueKDEAngRatio:rescueStartAngRatio:rescueCompassAngRatio:wifiSprinkleDistanceCriteria:floorSwapPositionStd:floorSwapDirectionStd:floorSwapSprinklePositionStd:floorSwapSprinkleDirectionStd:idleWiFiSprinkle:strongRssiScanThreshold:weakRssiScanThreshold:nRequiredScans:minDistanceOOB:stairSpeedFactor:exitZoneRatioForOOB:useKDEX0Step:uncertainStartPositionStd:uncertainStartDirectionStd:useGlobalKDESearch:magSprinkleSyncThreshold:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, NSString *> *)map __attribute__((swift_name("map()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowOutOfBounds __attribute__((swift_name("allowOutOfBounds")));
@property (readonly) float angleOffsetGainDegPerMin __attribute__((swift_name("angleOffsetGainDegPerMin")));
@property (readonly) VpsKotlinPair<VpsFloat *, VpsFloat *> *biasLimit __attribute__((swift_name("biasLimit")));
@property (readonly) float biasStd __attribute__((swift_name("biasStd")));
@property (readonly) VpsKotlinTriple<VpsFloat *, VpsFloat *, VpsFloat *> *binSize __attribute__((swift_name("binSize")));
@property (readonly) BOOL bundleAPsInScan __attribute__((swift_name("bundleAPsInScan")));
@property (readonly) float exitZoneRatioForOOB __attribute__((swift_name("exitZoneRatioForOOB")));
@property (readonly) float floorSwapDirectionStd __attribute__((swift_name("floorSwapDirectionStd")));
@property (readonly) float floorSwapPositionStd __attribute__((swift_name("floorSwapPositionStd")));
@property (readonly) float floorSwapSprinkleDirectionStd __attribute__((swift_name("floorSwapSprinkleDirectionStd")));
@property (readonly) float floorSwapSprinklePositionStd __attribute__((swift_name("floorSwapSprinklePositionStd")));
@property (readonly) int64_t idlePositionTimeThreshold __attribute__((swift_name("idlePositionTimeThreshold")));
@property (readonly) float idleWiFiSecondsCriteria __attribute__((swift_name("idleWiFiSecondsCriteria")));
@property (readonly) BOOL idleWiFiSprinkle __attribute__((swift_name("idleWiFiSprinkle")));
@property (readonly) float kldDelta __attribute__((swift_name("kldDelta")));
@property (readonly) float kldEpsilon __attribute__((swift_name("kldEpsilon")));
@property (readonly) float kldZ __attribute__((swift_name("kldZ")));
@property (readonly) float magSprinkleSyncThreshold __attribute__((swift_name("magSprinkleSyncThreshold")));
@property (readonly) float maxAllowedStd __attribute__((swift_name("maxAllowedStd")));
@property (readonly) int32_t maxNumParticles __attribute__((swift_name("maxNumParticles")));
@property (readonly) float minDistanceOOB __attribute__((swift_name("minDistanceOOB")));
@property (readonly) int32_t minNumParticles __attribute__((swift_name("minNumParticles")));
@property (readonly) float mixingFactor __attribute__((swift_name("mixingFactor")));
@property (readonly) int32_t mlStepHistorySize __attribute__((swift_name("mlStepHistorySize")));
@property (readonly) int32_t mlStepHistorySizeForOOBComeback __attribute__((swift_name("mlStepHistorySizeForOOBComeback")));
@property (readonly) int32_t nRequiredScans __attribute__((swift_name("nRequiredScans")));
@property (readonly) BOOL naiveOutputSyncMovement __attribute__((swift_name("naiveOutputSyncMovement")));
@property (readonly) float nlThreshold __attribute__((swift_name("nlThreshold")));
@property (readonly) float rescueCompassAngRatio __attribute__((swift_name("rescueCompassAngRatio")));
@property (readonly) float rescueDirectionStd __attribute__((swift_name("rescueDirectionStd")));
@property (readonly) float rescueKDEAngRatio __attribute__((swift_name("rescueKDEAngRatio")));
@property (readonly) BOOL rescueOnNL __attribute__((swift_name("rescueOnNL")));
@property (readonly) float rescuePositionStd __attribute__((swift_name("rescuePositionStd")));
@property (readonly) float rescueStartAngRatio __attribute__((swift_name("rescueStartAngRatio")));
@property (readonly) int32_t rssiScanThreshold __attribute__((swift_name("rssiScanThreshold")));
@property (readonly) float scanErrorRatioThreshold __attribute__((swift_name("scanErrorRatioThreshold")));
@property (readonly) float scanErrorSprinkleLocationStdCoefficient __attribute__((swift_name("scanErrorSprinkleLocationStdCoefficient")));
@property (readonly) float scanGridResolution __attribute__((swift_name("scanGridResolution")));
@property (readonly) VpsKotlinPair<VpsFloat *, VpsFloat *> *secondBiasLimit __attribute__((swift_name("secondBiasLimit")));
@property (readonly) float secondBiasMean __attribute__((swift_name("secondBiasMean")));
@property (readonly) float secondBiasStd __attribute__((swift_name("secondBiasStd")));
@property (readonly) float speedFactor __attribute__((swift_name("speedFactor")));
@property (readonly) float sprinklePercentage __attribute__((swift_name("sprinklePercentage")));
@property (readonly) float sprinkleSyncThreshold __attribute__((swift_name("sprinkleSyncThreshold")));
@property (readonly) float stairSpeedFactor __attribute__((swift_name("stairSpeedFactor")));
@property (readonly) float startDirectionStd __attribute__((swift_name("startDirectionStd")));
@property (readonly) VpsStartMethod *startMethod __attribute__((swift_name("startMethod")));
@property (readonly) float startPositionStd __attribute__((swift_name("startPositionStd")));
@property (readonly) float stdQuantile __attribute__((swift_name("stdQuantile")));
@property (readonly) float stepDirectionStd __attribute__((swift_name("stepDirectionStd")));
@property (readonly) float stepLengthStd __attribute__((swift_name("stepLengthStd")));
@property (readonly) int32_t strongRssiScanThreshold __attribute__((swift_name("strongRssiScanThreshold")));
@property (readonly) int32_t swapSprinkleEndCount __attribute__((swift_name("swapSprinkleEndCount")));
@property (readonly) int32_t swapSprinkleInterval __attribute__((swift_name("swapSprinkleInterval")));
@property (readonly) float swapSprinkleRatio __attribute__((swift_name("swapSprinkleRatio")));
@property (readonly) float syncDirectionStd __attribute__((swift_name("syncDirectionStd")));
@property (readonly) VpsSyncMethod *syncMethod __attribute__((swift_name("syncMethod")));
@property (readonly) float syncPositionStd __attribute__((swift_name("syncPositionStd")));
@property (readonly) float uncertainStartDirectionStd __attribute__((swift_name("uncertainStartDirectionStd")));
@property (readonly) float uncertainStartPositionStd __attribute__((swift_name("uncertainStartPositionStd")));
@property (readonly) float uncertainThreshold __attribute__((swift_name("uncertainThreshold")));
@property (readonly) BOOL useGlobalKDESearch __attribute__((swift_name("useGlobalKDESearch")));
@property (readonly) BOOL useKDEX0Step __attribute__((swift_name("useKDEX0Step")));
@property (readonly) BOOL useMLSyncSpeedFilter __attribute__((swift_name("useMLSyncSpeedFilter")));
@property (readonly) BOOL useRayTraceSensorModel __attribute__((swift_name("useRayTraceSensorModel")));
@property (readonly) float uxPositionConfidence __attribute__((swift_name("uxPositionConfidence")));
@property (readonly) VpsParticleFilterParamsVersion *version __attribute__((swift_name("version")));
@property (readonly) int32_t weakRssiScanThreshold __attribute__((swift_name("weakRssiScanThreshold")));
@property (readonly) float wiFiDistanceSyncCriteria __attribute__((swift_name("wiFiDistanceSyncCriteria")));
@property (readonly) int32_t wiFiMeasuredPower __attribute__((swift_name("wiFiMeasuredPower")));
@property (readonly) float wiFiPathLossCoefficient __attribute__((swift_name("wiFiPathLossCoefficient")));
@property (readonly) float wiFiSprinkleDirectionStd __attribute__((swift_name("wiFiSprinkleDirectionStd")));
@property (readonly) float wiFiStatusTimeLimit __attribute__((swift_name("wiFiStatusTimeLimit")));
@property (readonly) float wifiSprinkleDistanceCriteria __attribute__((swift_name("wifiSprinkleDistanceCriteria")));
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
@property (class, readonly) VpsParticleFilterParamsVersion *mixedGaussV2 __attribute__((swift_name("mixedGaussV2")));
@property (class, readonly) VpsParticleFilterParamsVersion *compass __attribute__((swift_name("compass")));
@property (class, readonly) VpsParticleFilterParamsVersion *sprinkle __attribute__((swift_name("sprinkle")));
@property (class, readonly) VpsParticleFilterParamsVersion *bilka __attribute__((swift_name("bilka")));
+ (VpsKotlinArray<VpsParticleFilterParamsVersion *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsParticleFilterParamsVersion *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterSettings")))
@interface VpsParticleFilterSettings : VpsBase
- (instancetype)initWithVersion:(VpsParticleFilterSettingsVersion *)version uxPositionActivated:(BOOL)uxPositionActivated mlPositionActivated:(BOOL)mlPositionActivated particlePositionActivated:(BOOL)particlePositionActivated particlesOutputActivated:(BOOL)particlesOutputActivated particleFilterVersion:(VpsParticleFilterSettingsParticleFilterVersion *)particleFilterVersion particleFilterParams:(VpsParticleFilterParams *)particleFilterParams randomNumberGeneratorSeed:(VpsLong * _Nullable)randomNumberGeneratorSeed saveOutputSignals:(BOOL)saveOutputSignals saveWiFiStatusUpdate:(BOOL)saveWiFiStatusUpdate saveWiFiScans:(BOOL)saveWiFiScans scoringParams:(VpsScoringParams *)scoringParams clusterSwapOutputActivated:(BOOL)clusterSwapOutputActivated trustedPositionParams:(VpsTrustedPositionParams *)trustedPositionParams positionStdSettings:(VpsPositionStdSettings *)positionStdSettings __attribute__((swift_name("init(version:uxPositionActivated:mlPositionActivated:particlePositionActivated:particlesOutputActivated:particleFilterVersion:particleFilterParams:randomNumberGeneratorSeed:saveOutputSignals:saveWiFiStatusUpdate:saveWiFiScans:scoringParams:clusterSwapOutputActivated:trustedPositionParams:positionStdSettings:)"))) __attribute__((objc_designated_initializer));
- (VpsParticleFilterSettings *)doCopyVersion:(VpsParticleFilterSettingsVersion *)version uxPositionActivated:(BOOL)uxPositionActivated mlPositionActivated:(BOOL)mlPositionActivated particlePositionActivated:(BOOL)particlePositionActivated particlesOutputActivated:(BOOL)particlesOutputActivated particleFilterVersion:(VpsParticleFilterSettingsParticleFilterVersion *)particleFilterVersion particleFilterParams:(VpsParticleFilterParams *)particleFilterParams randomNumberGeneratorSeed:(VpsLong * _Nullable)randomNumberGeneratorSeed saveOutputSignals:(BOOL)saveOutputSignals saveWiFiStatusUpdate:(BOOL)saveWiFiStatusUpdate saveWiFiScans:(BOOL)saveWiFiScans scoringParams:(VpsScoringParams *)scoringParams clusterSwapOutputActivated:(BOOL)clusterSwapOutputActivated trustedPositionParams:(VpsTrustedPositionParams *)trustedPositionParams positionStdSettings:(VpsPositionStdSettings *)positionStdSettings __attribute__((swift_name("doCopy(version:uxPositionActivated:mlPositionActivated:particlePositionActivated:particlesOutputActivated:particleFilterVersion:particleFilterParams:randomNumberGeneratorSeed:saveOutputSignals:saveWiFiStatusUpdate:saveWiFiScans:scoringParams:clusterSwapOutputActivated:trustedPositionParams:positionStdSettings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, NSString *> *)map __attribute__((swift_name("map()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL clusterSwapOutputActivated __attribute__((swift_name("clusterSwapOutputActivated")));
@property (readonly) BOOL mlPositionActivated __attribute__((swift_name("mlPositionActivated")));
@property (readonly) VpsParticleFilterParams *particleFilterParams __attribute__((swift_name("particleFilterParams")));
@property (readonly) VpsParticleFilterSettingsParticleFilterVersion *particleFilterVersion __attribute__((swift_name("particleFilterVersion")));
@property (readonly) BOOL particlePositionActivated __attribute__((swift_name("particlePositionActivated")));
@property (readonly) BOOL particlesOutputActivated __attribute__((swift_name("particlesOutputActivated")));
@property (readonly) VpsPositionStdSettings *positionStdSettings __attribute__((swift_name("positionStdSettings")));
@property (readonly) VpsLong * _Nullable randomNumberGeneratorSeed __attribute__((swift_name("randomNumberGeneratorSeed")));
@property (readonly) BOOL saveOutputSignals __attribute__((swift_name("saveOutputSignals")));
@property (readonly) BOOL saveWiFiScans __attribute__((swift_name("saveWiFiScans")));
@property (readonly) BOOL saveWiFiStatusUpdate __attribute__((swift_name("saveWiFiStatusUpdate")));
@property (readonly) VpsScoringParams *scoringParams __attribute__((swift_name("scoringParams")));
@property (readonly) VpsTrustedPositionParams *trustedPositionParams __attribute__((swift_name("trustedPositionParams")));
@property (readonly) BOOL uxPositionActivated __attribute__((swift_name("uxPositionActivated")));
@property (readonly) VpsParticleFilterSettingsVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterSettings.ParticleFilterVersion")))
@interface VpsParticleFilterSettingsParticleFilterVersion : VpsKotlinEnum<VpsParticleFilterSettingsParticleFilterVersion *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsParticleFilterSettingsParticleFilterVersion *v1 __attribute__((swift_name("v1")));
@property (class, readonly) VpsParticleFilterSettingsParticleFilterVersion *v2 __attribute__((swift_name("v2")));
@property (class, readonly) VpsParticleFilterSettingsParticleFilterVersion *wifi __attribute__((swift_name("wifi")));
+ (VpsKotlinArray<VpsParticleFilterSettingsParticleFilterVersion *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsParticleFilterSettingsParticleFilterVersion *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterSettings.Version")))
@interface VpsParticleFilterSettingsVersion : VpsKotlinEnum<VpsParticleFilterSettingsVersion *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsParticleFilterSettingsVersion *default_ __attribute__((swift_name("default_")));
@property (class, readonly) VpsParticleFilterSettingsVersion *v1 __attribute__((swift_name("v1")));
@property (class, readonly) VpsParticleFilterSettingsVersion *v2 __attribute__((swift_name("v2")));
@property (class, readonly) VpsParticleFilterSettingsVersion *v3 __attribute__((swift_name("v3")));
@property (class, readonly) VpsParticleFilterSettingsVersion *mixedGauss __attribute__((swift_name("mixedGauss")));
@property (class, readonly) VpsParticleFilterSettingsVersion *mixedGaussV2 __attribute__((swift_name("mixedGaussV2")));
@property (class, readonly) VpsParticleFilterSettingsVersion *wifi __attribute__((swift_name("wifi")));
+ (VpsKotlinArray<VpsParticleFilterSettingsVersion *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsParticleFilterSettingsVersion *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositionStdSettings")))
@interface VpsPositionStdSettings : VpsBase
- (instancetype)initWithStrategy:(VpsPositionStdSettingsStrategy *)strategy stdDefault:(float)stdDefault isCapped:(BOOL)isCapped minStd:(VpsFloat * _Nullable)minStd maxStd:(VpsFloat * _Nullable)maxStd __attribute__((swift_name("init(strategy:stdDefault:isCapped:minStd:maxStd:)"))) __attribute__((objc_designated_initializer));
- (VpsPositionStdSettings *)doCopyStrategy:(VpsPositionStdSettingsStrategy *)strategy stdDefault:(float)stdDefault isCapped:(BOOL)isCapped minStd:(VpsFloat * _Nullable)minStd maxStd:(VpsFloat * _Nullable)maxStd __attribute__((swift_name("doCopy(strategy:stdDefault:isCapped:minStd:maxStd:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (float)getCappedStdCurrentStd:(float)currentStd __attribute__((swift_name("getCappedStd(currentStd:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isCapped __attribute__((swift_name("isCapped")));
@property (readonly) VpsFloat * _Nullable maxStd __attribute__((swift_name("maxStd")));
@property (readonly) VpsFloat * _Nullable minStd __attribute__((swift_name("minStd")));
@property (readonly) float stdDefault __attribute__((swift_name("stdDefault")));
@property (readonly) VpsPositionStdSettingsStrategy *strategy __attribute__((swift_name("strategy")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositionStdSettings.Strategy")))
@interface VpsPositionStdSettingsStrategy : VpsKotlinEnum<VpsPositionStdSettingsStrategy *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsPositionStdSettingsStrategy *reportTescoSpecial __attribute__((swift_name("reportTescoSpecial")));
@property (class, readonly) VpsPositionStdSettingsStrategy *reportActual __attribute__((swift_name("reportActual")));
@property (class, readonly) VpsPositionStdSettingsStrategy *reportActualOnlyWhenUntrusted __attribute__((swift_name("reportActualOnlyWhenUntrusted")));
@property (class, readonly) VpsPositionStdSettingsStrategy *reportOnlyDefault __attribute__((swift_name("reportOnlyDefault")));
+ (VpsKotlinArray<VpsPositionStdSettingsStrategy *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsPositionStdSettingsStrategy *> *entries __attribute__((swift_name("entries")));
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
@property (readonly) VpsParticleFilterParams *particleFilterMixedGaussV2 __attribute__((swift_name("particleFilterMixedGaussV2")));
@property (readonly) VpsParticleFilterParams *particleFilterParamsBilka __attribute__((swift_name("particleFilterParamsBilka")));
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
@property (readonly) VpsParticleFilterSettings *mixedGaussV2 __attribute__((swift_name("mixedGaussV2")));
@property (readonly) VpsParticleFilterSettings *v1 __attribute__((swift_name("v1")));
@property (readonly) VpsParticleFilterSettings *v2 __attribute__((swift_name("v2")));
@property (readonly) VpsParticleFilterSettings *v3 __attribute__((swift_name("v3")));
@property (readonly) VpsParticleFilterSettings *wifi __attribute__((swift_name("wifi")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSPositionStdSettings")))
@interface VpsVPSPositionStdSettings : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vPSPositionStdSettings __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsVPSPositionStdSettings *shared __attribute__((swift_name("shared")));
@property (readonly, getter=default) VpsPositionStdSettings *default_ __attribute__((swift_name("default_")));
@property (readonly) VpsPositionStdSettings *positionStdSettingsPDA __attribute__((swift_name("positionStdSettingsPDA")));
@end

__attribute__((swift_name("PositionEngineSettings")))
@interface VpsPositionEngineSettings : VpsBase
@property (readonly) VpsPositionEngineType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositionEngineSettings.GNSSFusion")))
@interface VpsPositionEngineSettingsGNSSFusion : VpsPositionEngineSettings
- (instancetype)initWithNoMapFilterParams:(VpsNoMapFilterParams *)noMapFilterParams __attribute__((swift_name("init(noMapFilterParams:)"))) __attribute__((objc_designated_initializer));
@property (readonly) VpsNoMapFilterParams *noMapFilterParams __attribute__((swift_name("noMapFilterParams")));
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
@property (class, readonly) VpsPositionEngineType *gnssFusion __attribute__((swift_name("gnssFusion")));
+ (VpsKotlinArray<VpsPositionEngineType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsPositionEngineType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSProfile")))
@interface VpsVPSProfile : VpsBase
- (instancetype)initWithId:(NSString *)id speedFactors:(NSDictionary<NSString *, VpsFloat *> *)speedFactors speedFactor:(VpsFloat * _Nullable)speedFactor __attribute__((swift_name("init(id:speedFactors:speedFactor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsVPSProfileCompanion *companion __attribute__((swift_name("companion")));
- (VpsVPSProfile *)doCopyId:(NSString *)id speedFactors:(NSDictionary<NSString *, VpsFloat *> *)speedFactors speedFactor:(VpsFloat * _Nullable)speedFactor __attribute__((swift_name("doCopy(id:speedFactors:speedFactor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property VpsFloat * _Nullable speedFactor __attribute__((swift_name("speedFactor")));
@property (readonly) NSDictionary<NSString *, VpsFloat *> *speedFactors __attribute__((swift_name("speedFactors")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSProfile.Companion")))
@interface VpsVPSProfileCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsVPSProfileCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
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
__attribute__((swift_name("ReplayAngleCorrection")))
@interface VpsReplayAngleCorrection : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp angle:(float)angle location:(VpsLocation * _Nullable)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:angle:location:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayAngleCorrectionCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayAngleCorrection *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp angle:(float)angle location:(VpsLocation * _Nullable)location __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:angle:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float angle __attribute__((swift_name("angle")));
@property (readonly) VpsLocation * _Nullable location __attribute__((swift_name("location")));
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
__attribute__((swift_name("ReplayCompassHeading")))
@interface VpsReplayCompassHeading : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp magneticHeading:(float)magneticHeading trueHeading:(float)trueHeading headingAccuracy:(float)headingAccuracy x:(float)x y:(float)y z:(float)z __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:magneticHeading:trueHeading:headingAccuracy:x:y:z:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayCompassHeadingCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayCompassHeading *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp magneticHeading:(float)magneticHeading trueHeading:(float)trueHeading headingAccuracy:(float)headingAccuracy x:(float)x y:(float)y z:(float)z __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:magneticHeading:trueHeading:headingAccuracy:x:y:z:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float headingAccuracy __attribute__((swift_name("headingAccuracy")));
@property (readonly) float magneticHeading __attribute__((swift_name("magneticHeading")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@property (readonly) float trueHeading __attribute__((swift_name("trueHeading")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@property (readonly) float z __attribute__((swift_name("z")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayCompassHeading.Companion")))
@interface VpsReplayCompassHeadingCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayCompassHeadingCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayDataV1")))
@interface VpsReplayDataV1 : VpsBase
- (instancetype)initWithSessionId:(NSString *)sessionId starts:(NSMutableArray<VpsReplayStartPosition *> *)starts startLngLats:(NSMutableArray<VpsReplayStartLngLat *> *)startLngLats startLngLatsFixedNorths:(NSMutableArray<VpsReplayStartLngLatFixedNorth *> *)startLngLatsFixedNorths startQuickStarts:(NSMutableArray<VpsReplayStartQuickStart *> *)startQuickStarts exits:(NSMutableArray<VpsReplayExit *> *)exits syncPositions:(NSMutableArray<VpsReplaySyncPosition *> *)syncPositions syncLngLats:(NSMutableArray<VpsReplaySyncLngLat *> *)syncLngLats wifiStatusUpdates:(NSMutableArray<VpsWifiStatusUpdate *> *)wifiStatusUpdates wifiScanUpdates:(NSMutableArray<VpsWifiScanUpdate *> *)wifiScanUpdates angleCorrections:(NSMutableArray<VpsReplayAngleCorrection *> *)angleCorrections floorChanges:(NSMutableArray<VpsReplayFloorChange *> *)floorChanges lngLats:(NSMutableArray<VpsReplayLngLat *> *)lngLats syncForce:(NSMutableArray<VpsReplaySyncForce *> *)syncForce gnssSyncs:(NSMutableArray<VpsReplaySyncGNSS *> *)gnssSyncs manualSyncs:(NSMutableArray<VpsReplaySyncManual *> *)manualSyncs gyroCalibrations:(NSMutableArray<VpsReplayGyroCalibration *> *)gyroCalibrations magnetometerCalibrations:(NSMutableArray<VpsReplayMagnetometerCalibration *> *)magnetometerCalibrations replayData:(VpsMutableDictionary<NSString *, NSMutableArray<VpsReplaySensorData *> *> *)replayData startSystemTimestamp:(int64_t)startSystemTimestamp stopSystemTimestamp:(int64_t)stopSystemTimestamp startNanoTimestamp:(int64_t)startNanoTimestamp stopNanoTimestamp:(int64_t)stopNanoTimestamp compassHeadings:(NSMutableArray<VpsReplayCompassHeading *> *)compassHeadings gnssMeasurements:(NSMutableArray<VpsReplayGnssMeasurements *> *)gnssMeasurements gnssNavigationMessages:(NSMutableArray<VpsReplayGnssNavigationMessage *> *)gnssNavigationMessages speedCalibrations:(NSMutableArray<VpsReplaySpeedCalibration *> *)speedCalibrations setProfiles:(NSMutableArray<VpsReplaySetProfile *> *)setProfiles environmentSetMagneticFields:(NSMutableArray<VpsReplayEnvironmentSetMagneticField *> *)environmentSetMagneticFields environmentSetEphemerides:(NSMutableArray<VpsReplayEnvironmentSetEphemerides *> *)environmentSetEphemerides environmentSetMagnetometerCalibration:(NSMutableArray<VpsReplayEnvironmentSetMagnetometerCalibration *> *)environmentSetMagnetometerCalibration environmentSetConstellations:(NSMutableArray<VpsReplayEnvironmentSetConstellations *> *)environmentSetConstellations syncStops:(NSMutableArray<VpsReplaySyncStop *> *)syncStops deviceInfoTemperature:(NSMutableArray<VpsReplayDeviceInfoTemperature *> *)deviceInfoTemperature environmentSetGyroBiasObservations:(NSMutableArray<VpsReplayEnvironmentGyroBiasObservations *> *)environmentSetGyroBiasObservations __attribute__((swift_name("init(sessionId:starts:startLngLats:startLngLatsFixedNorths:startQuickStarts:exits:syncPositions:syncLngLats:wifiStatusUpdates:wifiScanUpdates:angleCorrections:floorChanges:lngLats:syncForce:gnssSyncs:manualSyncs:gyroCalibrations:magnetometerCalibrations:replayData:startSystemTimestamp:stopSystemTimestamp:startNanoTimestamp:stopNanoTimestamp:compassHeadings:gnssMeasurements:gnssNavigationMessages:speedCalibrations:setProfiles:environmentSetMagneticFields:environmentSetEphemerides:environmentSetMagnetometerCalibration:environmentSetConstellations:syncStops:deviceInfoTemperature:environmentSetGyroBiasObservations:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayDataV1Companion *companion __attribute__((swift_name("companion")));
- (VpsReplayDataV1 *)doCopySessionId:(NSString *)sessionId starts:(NSMutableArray<VpsReplayStartPosition *> *)starts startLngLats:(NSMutableArray<VpsReplayStartLngLat *> *)startLngLats startLngLatsFixedNorths:(NSMutableArray<VpsReplayStartLngLatFixedNorth *> *)startLngLatsFixedNorths startQuickStarts:(NSMutableArray<VpsReplayStartQuickStart *> *)startQuickStarts exits:(NSMutableArray<VpsReplayExit *> *)exits syncPositions:(NSMutableArray<VpsReplaySyncPosition *> *)syncPositions syncLngLats:(NSMutableArray<VpsReplaySyncLngLat *> *)syncLngLats wifiStatusUpdates:(NSMutableArray<VpsWifiStatusUpdate *> *)wifiStatusUpdates wifiScanUpdates:(NSMutableArray<VpsWifiScanUpdate *> *)wifiScanUpdates angleCorrections:(NSMutableArray<VpsReplayAngleCorrection *> *)angleCorrections floorChanges:(NSMutableArray<VpsReplayFloorChange *> *)floorChanges lngLats:(NSMutableArray<VpsReplayLngLat *> *)lngLats syncForce:(NSMutableArray<VpsReplaySyncForce *> *)syncForce gnssSyncs:(NSMutableArray<VpsReplaySyncGNSS *> *)gnssSyncs manualSyncs:(NSMutableArray<VpsReplaySyncManual *> *)manualSyncs gyroCalibrations:(NSMutableArray<VpsReplayGyroCalibration *> *)gyroCalibrations magnetometerCalibrations:(NSMutableArray<VpsReplayMagnetometerCalibration *> *)magnetometerCalibrations replayData:(VpsMutableDictionary<NSString *, NSMutableArray<VpsReplaySensorData *> *> *)replayData startSystemTimestamp:(int64_t)startSystemTimestamp stopSystemTimestamp:(int64_t)stopSystemTimestamp startNanoTimestamp:(int64_t)startNanoTimestamp stopNanoTimestamp:(int64_t)stopNanoTimestamp compassHeadings:(NSMutableArray<VpsReplayCompassHeading *> *)compassHeadings gnssMeasurements:(NSMutableArray<VpsReplayGnssMeasurements *> *)gnssMeasurements gnssNavigationMessages:(NSMutableArray<VpsReplayGnssNavigationMessage *> *)gnssNavigationMessages speedCalibrations:(NSMutableArray<VpsReplaySpeedCalibration *> *)speedCalibrations setProfiles:(NSMutableArray<VpsReplaySetProfile *> *)setProfiles environmentSetMagneticFields:(NSMutableArray<VpsReplayEnvironmentSetMagneticField *> *)environmentSetMagneticFields environmentSetEphemerides:(NSMutableArray<VpsReplayEnvironmentSetEphemerides *> *)environmentSetEphemerides environmentSetMagnetometerCalibration:(NSMutableArray<VpsReplayEnvironmentSetMagnetometerCalibration *> *)environmentSetMagnetometerCalibration environmentSetConstellations:(NSMutableArray<VpsReplayEnvironmentSetConstellations *> *)environmentSetConstellations syncStops:(NSMutableArray<VpsReplaySyncStop *> *)syncStops deviceInfoTemperature:(NSMutableArray<VpsReplayDeviceInfoTemperature *> *)deviceInfoTemperature environmentSetGyroBiasObservations:(NSMutableArray<VpsReplayEnvironmentGyroBiasObservations *> *)environmentSetGyroBiasObservations __attribute__((swift_name("doCopy(sessionId:starts:startLngLats:startLngLatsFixedNorths:startQuickStarts:exits:syncPositions:syncLngLats:wifiStatusUpdates:wifiScanUpdates:angleCorrections:floorChanges:lngLats:syncForce:gnssSyncs:manualSyncs:gyroCalibrations:magnetometerCalibrations:replayData:startSystemTimestamp:stopSystemTimestamp:startNanoTimestamp:stopNanoTimestamp:compassHeadings:gnssMeasurements:gnssNavigationMessages:speedCalibrations:setProfiles:environmentSetMagneticFields:environmentSetEphemerides:environmentSetMagnetometerCalibration:environmentSetConstellations:syncStops:deviceInfoTemperature:environmentSetGyroBiasObservations:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSMutableArray<VpsReplayAngleCorrection *> *angleCorrections __attribute__((swift_name("angleCorrections")));
@property (readonly) NSMutableArray<VpsReplayCompassHeading *> *compassHeadings __attribute__((swift_name("compassHeadings")));
@property (readonly) NSMutableArray<VpsReplayDeviceInfoTemperature *> *deviceInfoTemperature __attribute__((swift_name("deviceInfoTemperature")));
@property (readonly) NSMutableArray<VpsReplayEnvironmentSetConstellations *> *environmentSetConstellations __attribute__((swift_name("environmentSetConstellations")));
@property (readonly) NSMutableArray<VpsReplayEnvironmentSetEphemerides *> *environmentSetEphemerides __attribute__((swift_name("environmentSetEphemerides")));
@property (readonly) NSMutableArray<VpsReplayEnvironmentGyroBiasObservations *> *environmentSetGyroBiasObservations __attribute__((swift_name("environmentSetGyroBiasObservations")));
@property (readonly) NSMutableArray<VpsReplayEnvironmentSetMagneticField *> *environmentSetMagneticFields __attribute__((swift_name("environmentSetMagneticFields")));
@property (readonly) NSMutableArray<VpsReplayEnvironmentSetMagnetometerCalibration *> *environmentSetMagnetometerCalibration __attribute__((swift_name("environmentSetMagnetometerCalibration")));
@property (readonly) NSMutableArray<VpsReplayExit *> *exits __attribute__((swift_name("exits")));
@property (readonly) NSMutableArray<VpsReplayFloorChange *> *floorChanges __attribute__((swift_name("floorChanges")));
@property (readonly) NSMutableArray<VpsReplayGnssMeasurements *> *gnssMeasurements __attribute__((swift_name("gnssMeasurements")));
@property (readonly) NSMutableArray<VpsReplayGnssNavigationMessage *> *gnssNavigationMessages __attribute__((swift_name("gnssNavigationMessages")));
@property (readonly) NSMutableArray<VpsReplaySyncGNSS *> *gnssSyncs __attribute__((swift_name("gnssSyncs")));
@property (readonly) NSMutableArray<VpsReplayGyroCalibration *> *gyroCalibrations __attribute__((swift_name("gyroCalibrations")));
@property (readonly) NSMutableArray<VpsReplayLngLat *> *lngLats __attribute__((swift_name("lngLats")));
@property (readonly) NSMutableArray<VpsReplayMagnetometerCalibration *> *magnetometerCalibrations __attribute__((swift_name("magnetometerCalibrations")));
@property (readonly) NSMutableArray<VpsReplaySyncManual *> *manualSyncs __attribute__((swift_name("manualSyncs")));
@property (readonly) VpsMutableDictionary<NSString *, NSMutableArray<VpsReplaySensorData *> *> *replayData __attribute__((swift_name("replayData")));
@property NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) NSMutableArray<VpsReplaySetProfile *> *setProfiles __attribute__((swift_name("setProfiles")));
@property (readonly) NSMutableArray<VpsReplaySpeedCalibration *> *speedCalibrations __attribute__((swift_name("speedCalibrations")));
@property (readonly) NSMutableArray<VpsReplayStartLngLat *> *startLngLats __attribute__((swift_name("startLngLats")));
@property (readonly) NSMutableArray<VpsReplayStartLngLatFixedNorth *> *startLngLatsFixedNorths __attribute__((swift_name("startLngLatsFixedNorths")));
@property int64_t startNanoTimestamp __attribute__((swift_name("startNanoTimestamp")));
@property (readonly) NSMutableArray<VpsReplayStartQuickStart *> *startQuickStarts __attribute__((swift_name("startQuickStarts")));
@property int64_t startSystemTimestamp __attribute__((swift_name("startSystemTimestamp")));
@property (readonly) NSMutableArray<VpsReplayStartPosition *> *starts __attribute__((swift_name("starts")));
@property int64_t stopNanoTimestamp __attribute__((swift_name("stopNanoTimestamp")));
@property int64_t stopSystemTimestamp __attribute__((swift_name("stopSystemTimestamp")));
@property (readonly) NSMutableArray<VpsReplaySyncForce *> *syncForce __attribute__((swift_name("syncForce")));
@property (readonly) NSMutableArray<VpsReplaySyncLngLat *> *syncLngLats __attribute__((swift_name("syncLngLats")));
@property (readonly) NSMutableArray<VpsReplaySyncPosition *> *syncPositions __attribute__((swift_name("syncPositions")));
@property (readonly) NSMutableArray<VpsReplaySyncStop *> *syncStops __attribute__((swift_name("syncStops")));
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
__attribute__((swift_name("ReplayDeviceInfoTemperature")))
@interface VpsReplayDeviceInfoTemperature : VpsBase
- (instancetype)initWithNT:(int64_t)nT sysT:(int64_t)sysT bat:(VpsFloat * _Nullable)bat tz:(NSDictionary<NSString *, VpsFloat *> * _Nullable)tz __attribute__((swift_name("init(nT:sysT:bat:tz:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayDeviceInfoTemperatureCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayDeviceInfoTemperature *)doCopyNT:(int64_t)nT sysT:(int64_t)sysT bat:(VpsFloat * _Nullable)bat tz:(NSDictionary<NSString *, VpsFloat *> * _Nullable)tz __attribute__((swift_name("doCopy(nT:sysT:bat:tz:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsFloat * _Nullable bat __attribute__((swift_name("bat")));
@property (readonly) int64_t nT __attribute__((swift_name("nT")));
@property (readonly) int64_t sysT __attribute__((swift_name("sysT")));
@property (readonly) NSDictionary<NSString *, VpsFloat *> * _Nullable tz __attribute__((swift_name("tz")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayDeviceInfoTemperature.Companion")))
@interface VpsReplayDeviceInfoTemperatureCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayDeviceInfoTemperatureCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayEnvironmentGyroBiasObservations")))
@interface VpsReplayEnvironmentGyroBiasObservations : VpsBase
- (instancetype)initWithNT:(int64_t)nT sysT:(int64_t)sysT observations:(NSArray<VpsReplayGyroBiasObservation *> *)observations __attribute__((swift_name("init(nT:sysT:observations:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayEnvironmentGyroBiasObservationsCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayEnvironmentGyroBiasObservations *)doCopyNT:(int64_t)nT sysT:(int64_t)sysT observations:(NSArray<VpsReplayGyroBiasObservation *> *)observations __attribute__((swift_name("doCopy(nT:sysT:observations:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t nT __attribute__((swift_name("nT")));
@property (readonly) NSArray<VpsReplayGyroBiasObservation *> *observations __attribute__((swift_name("observations")));
@property (readonly) int64_t sysT __attribute__((swift_name("sysT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayEnvironmentGyroBiasObservations.Companion")))
@interface VpsReplayEnvironmentGyroBiasObservationsCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayEnvironmentGyroBiasObservationsCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayEnvironmentSetConstellations")))
@interface VpsReplayEnvironmentSetConstellations : VpsBase
- (instancetype)initWithNT:(int64_t)nT sysT:(int64_t)sysT constellations:(NSArray<VpsConstellationType *> *)constellations __attribute__((swift_name("init(nT:sysT:constellations:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayEnvironmentSetConstellationsCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayEnvironmentSetConstellations *)doCopyNT:(int64_t)nT sysT:(int64_t)sysT constellations:(NSArray<VpsConstellationType *> *)constellations __attribute__((swift_name("doCopy(nT:sysT:constellations:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<VpsConstellationType *> *constellations __attribute__((swift_name("constellations")));
@property (readonly) int64_t nT __attribute__((swift_name("nT")));
@property (readonly) int64_t sysT __attribute__((swift_name("sysT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayEnvironmentSetConstellations.Companion")))
@interface VpsReplayEnvironmentSetConstellationsCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayEnvironmentSetConstellationsCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayEnvironmentSetEphemerides")))
@interface VpsReplayEnvironmentSetEphemerides : VpsBase
- (instancetype)initWithNT:(int64_t)nT sysT:(int64_t)sysT ephemerideData:(VpsEphemerideData *)ephemerideData __attribute__((swift_name("init(nT:sysT:ephemerideData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayEnvironmentSetEphemeridesCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayEnvironmentSetEphemerides *)doCopyNT:(int64_t)nT sysT:(int64_t)sysT ephemerideData:(VpsEphemerideData *)ephemerideData __attribute__((swift_name("doCopy(nT:sysT:ephemerideData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsEphemerideData *ephemerideData __attribute__((swift_name("ephemerideData")));
@property (readonly) int64_t nT __attribute__((swift_name("nT")));
@property (readonly) int64_t sysT __attribute__((swift_name("sysT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayEnvironmentSetEphemerides.Companion")))
@interface VpsReplayEnvironmentSetEphemeridesCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayEnvironmentSetEphemeridesCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayEnvironmentSetMagneticField")))
@interface VpsReplayEnvironmentSetMagneticField : VpsBase
- (instancetype)initWithNT:(int64_t)nT sysT:(int64_t)sysT dec:(float)dec inc:(float)inc mag:(float)mag __attribute__((swift_name("init(nT:sysT:dec:inc:mag:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayEnvironmentSetMagneticFieldCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayEnvironmentSetMagneticField *)doCopyNT:(int64_t)nT sysT:(int64_t)sysT dec:(float)dec inc:(float)inc mag:(float)mag __attribute__((swift_name("doCopy(nT:sysT:dec:inc:mag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float dec __attribute__((swift_name("dec")));
@property (readonly) float inc __attribute__((swift_name("inc")));
@property (readonly) float mag __attribute__((swift_name("mag")));
@property (readonly) int64_t nT __attribute__((swift_name("nT")));
@property (readonly) int64_t sysT __attribute__((swift_name("sysT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayEnvironmentSetMagneticField.Companion")))
@interface VpsReplayEnvironmentSetMagneticFieldCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayEnvironmentSetMagneticFieldCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayEnvironmentSetMagnetometerCalibration")))
@interface VpsReplayEnvironmentSetMagnetometerCalibration : VpsBase
- (instancetype)initWithNT:(int64_t)nT sysT:(int64_t)sysT magnetometerCalibration:(VpsMagnetometerCalibration *)magnetometerCalibration __attribute__((swift_name("init(nT:sysT:magnetometerCalibration:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayEnvironmentSetMagnetometerCalibrationCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayEnvironmentSetMagnetometerCalibration *)doCopyNT:(int64_t)nT sysT:(int64_t)sysT magnetometerCalibration:(VpsMagnetometerCalibration *)magnetometerCalibration __attribute__((swift_name("doCopy(nT:sysT:magnetometerCalibration:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsMagnetometerCalibration *magnetometerCalibration __attribute__((swift_name("magnetometerCalibration")));
@property (readonly) int64_t nT __attribute__((swift_name("nT")));
@property (readonly) int64_t sysT __attribute__((swift_name("sysT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayEnvironmentSetMagnetometerCalibration.Companion")))
@interface VpsReplayEnvironmentSetMagnetometerCalibrationCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayEnvironmentSetMagnetometerCalibrationCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("ReplayGnssMeasurements")))
@interface VpsReplayGnssMeasurements : VpsBase
- (instancetype)initWithNT:(int64_t)nT sysT:(int64_t)sysT c:(VpsGnssClock *)c m:(NSArray<VpsGnssMeasurement *> *)m __attribute__((swift_name("init(nT:sysT:c:m:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayGnssMeasurementsCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayGnssMeasurements *)doCopyNT:(int64_t)nT sysT:(int64_t)sysT c:(VpsGnssClock *)c m:(NSArray<VpsGnssMeasurement *> *)m __attribute__((swift_name("doCopy(nT:sysT:c:m:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsGnssClock *c __attribute__((swift_name("c")));
@property (readonly) NSArray<VpsGnssMeasurement *> *m __attribute__((swift_name("m")));
@property (readonly) int64_t nT __attribute__((swift_name("nT")));
@property (readonly) int64_t sysT __attribute__((swift_name("sysT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayGnssMeasurements.Companion")))
@interface VpsReplayGnssMeasurementsCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayGnssMeasurementsCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayGnssNavigationMessage")))
@interface VpsReplayGnssNavigationMessage : VpsBase
- (instancetype)initWithNT:(int64_t)nT sysT:(int64_t)sysT m:(VpsGnssNavigationMessage *)m __attribute__((swift_name("init(nT:sysT:m:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayGnssNavigationMessageCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayGnssNavigationMessage *)doCopyNT:(int64_t)nT sysT:(int64_t)sysT m:(VpsGnssNavigationMessage *)m __attribute__((swift_name("doCopy(nT:sysT:m:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsGnssNavigationMessage *m __attribute__((swift_name("m")));
@property (readonly) int64_t nT __attribute__((swift_name("nT")));
@property (readonly) int64_t sysT __attribute__((swift_name("sysT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayGnssNavigationMessage.Companion")))
@interface VpsReplayGnssNavigationMessageCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayGnssNavigationMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayGyroBiasObservation")))
@interface VpsReplayGyroBiasObservation : VpsBase
- (instancetype)initWithSId:(NSString *)sId t:(int64_t)t ts:(NSString *)ts temp:(float)temp bX:(float)bX bY:(float)bY bZ:(float)bZ __attribute__((swift_name("init(sId:t:ts:temp:bX:bY:bZ:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayGyroBiasObservationCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayGyroBiasObservation *)doCopySId:(NSString *)sId t:(int64_t)t ts:(NSString *)ts temp:(float)temp bX:(float)bX bY:(float)bY bZ:(float)bZ __attribute__((swift_name("doCopy(sId:t:ts:temp:bX:bY:bZ:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float bX __attribute__((swift_name("bX")));
@property (readonly) float bY __attribute__((swift_name("bY")));
@property (readonly) float bZ __attribute__((swift_name("bZ")));
@property (readonly) NSString *sId __attribute__((swift_name("sId")));
@property (readonly) int64_t t __attribute__((swift_name("t")));
@property (readonly) float temp __attribute__((swift_name("temp")));
@property (readonly) NSString *ts __attribute__((swift_name("ts")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayGyroBiasObservation.Companion")))
@interface VpsReplayGyroBiasObservationCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayGyroBiasObservationCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayGyroCalibration")))
@interface VpsReplayGyroCalibration : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:isStartSequence:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayGyroCalibrationCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayGyroCalibration *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:isStartSequence:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isStartSequence __attribute__((swift_name("isStartSequence")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayGyroCalibration.Companion")))
@interface VpsReplayGyroCalibrationCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayGyroCalibrationCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("ReplayMagnetometerCalibration")))
@interface VpsReplayMagnetometerCalibration : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:isStartSequence:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayMagnetometerCalibrationCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayMagnetometerCalibration *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:isStartSequence:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isStartSequence __attribute__((swift_name("isStartSequence")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayMagnetometerCalibration.Companion")))
@interface VpsReplayMagnetometerCalibrationCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayMagnetometerCalibrationCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("ReplaySetProfile")))
@interface VpsReplaySetProfile : VpsBase
- (instancetype)initWithNT:(int64_t)nT sysT:(int64_t)sysT profile:(VpsVPSProfile * _Nullable)profile __attribute__((swift_name("init(nT:sysT:profile:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplaySetProfileCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplaySetProfile *)doCopyNT:(int64_t)nT sysT:(int64_t)sysT profile:(VpsVPSProfile * _Nullable)profile __attribute__((swift_name("doCopy(nT:sysT:profile:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t nT __attribute__((swift_name("nT")));
@property (readonly) VpsVPSProfile * _Nullable profile __attribute__((swift_name("profile")));
@property (readonly) int64_t sysT __attribute__((swift_name("sysT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplaySetProfile.Companion")))
@interface VpsReplaySetProfileCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplaySetProfileCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplaySpeedCalibration")))
@interface VpsReplaySpeedCalibration : VpsBase
- (instancetype)initWithNT:(int64_t)nT sysT:(int64_t)sysT a:(NSString *)a start:(VpsLocation *)start stop:(VpsLocation *)stop id:(NSString *)id __attribute__((swift_name("init(nT:sysT:a:start:stop:id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplaySpeedCalibrationCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplaySpeedCalibration *)doCopyNT:(int64_t)nT sysT:(int64_t)sysT a:(NSString *)a start:(VpsLocation *)start stop:(VpsLocation *)stop id:(NSString *)id __attribute__((swift_name("doCopy(nT:sysT:a:start:stop:id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *a __attribute__((swift_name("a")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) int64_t nT __attribute__((swift_name("nT")));
@property (readonly) VpsLocation *start __attribute__((swift_name("start")));
@property (readonly) VpsLocation *stop __attribute__((swift_name("stop")));
@property (readonly) int64_t sysT __attribute__((swift_name("sysT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplaySpeedCalibration.Companion")))
@interface VpsReplaySpeedCalibrationCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplaySpeedCalibrationCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayStartLngLat")))
@interface VpsReplayStartLngLat : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp sId:(NSString *)sId dm:(NSString *)dm location:(VpsLocation *)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:sId:dm:location:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayStartLngLatCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayStartLngLat *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp sId:(NSString *)sId dm:(NSString *)dm location:(VpsLocation *)location __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:sId:dm:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dm __attribute__((swift_name("dm")));
@property (readonly) VpsLocation *location __attribute__((swift_name("location")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) NSString *sId __attribute__((swift_name("sId")));
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
__attribute__((swift_name("ReplayStartLngLatFixedNorth")))
@interface VpsReplayStartLngLatFixedNorth : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp sId:(NSString *)sId dm:(NSString *)dm location:(VpsLocation *)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:sId:dm:location:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayStartLngLatFixedNorthCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayStartLngLatFixedNorth *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp sId:(NSString *)sId dm:(NSString *)dm location:(VpsLocation *)location __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:sId:dm:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dm __attribute__((swift_name("dm")));
@property (readonly) VpsLocation *location __attribute__((swift_name("location")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) NSString *sId __attribute__((swift_name("sId")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayStartLngLatFixedNorth.Companion")))
@interface VpsReplayStartLngLatFixedNorthCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayStartLngLatFixedNorthCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayStartPosition")))
@interface VpsReplayStartPosition : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp sId:(NSString *)sId dm:(NSString *)dm positions:(NSArray<VpsCoordinateF *> *)positions syncPosition:(BOOL)syncPosition syncAngle:(BOOL)syncAngle angle:(float)angle uncertainAngle:(BOOL)uncertainAngle __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:sId:dm:positions:syncPosition:syncAngle:angle:uncertainAngle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayStartPositionCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayStartPosition *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp sId:(NSString *)sId dm:(NSString *)dm positions:(NSArray<VpsCoordinateF *> *)positions syncPosition:(BOOL)syncPosition syncAngle:(BOOL)syncAngle angle:(float)angle uncertainAngle:(BOOL)uncertainAngle __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:sId:dm:positions:syncPosition:syncAngle:angle:uncertainAngle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float angle __attribute__((swift_name("angle")));
@property (readonly) NSString *dm __attribute__((swift_name("dm")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) NSArray<VpsCoordinateF *> *positions __attribute__((swift_name("positions")));
@property (readonly) NSString *sId __attribute__((swift_name("sId")));
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
__attribute__((swift_name("ReplayStartQuickStart")))
@interface VpsReplayStartQuickStart : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp sId:(NSString *)sId dm:(NSString *)dm location:(VpsLocation *)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:sId:dm:location:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplayStartQuickStartCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplayStartQuickStart *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp sId:(NSString *)sId dm:(NSString *)dm location:(VpsLocation *)location __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:sId:dm:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dm __attribute__((swift_name("dm")));
@property (readonly) VpsLocation *location __attribute__((swift_name("location")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) NSString *sId __attribute__((swift_name("sId")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayStartQuickStart.Companion")))
@interface VpsReplayStartQuickStartCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplayStartQuickStartCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplaySyncForce")))
@interface VpsReplaySyncForce : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp position:(VpsCoordinateF *)position angle:(float)angle __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:position:angle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplaySyncForceCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplaySyncForce *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp position:(VpsCoordinateF *)position angle:(float)angle __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:position:angle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float angle __attribute__((swift_name("angle")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) VpsCoordinateF *position __attribute__((swift_name("position")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplaySyncForce.Companion")))
@interface VpsReplaySyncForceCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplaySyncForceCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplaySyncGNSS")))
@interface VpsReplaySyncGNSS : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:isStartSequence:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplaySyncGNSSCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplaySyncGNSS *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:isStartSequence:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isStartSequence __attribute__((swift_name("isStartSequence")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplaySyncGNSS.Companion")))
@interface VpsReplaySyncGNSSCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplaySyncGNSSCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("ReplaySyncManual")))
@interface VpsReplaySyncManual : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation * _Nullable)location isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:location:isStartSequence:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplaySyncManualCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplaySyncManual *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation * _Nullable)location isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:location:isStartSequence:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isStartSequence __attribute__((swift_name("isStartSequence")));
@property (readonly) VpsLocation * _Nullable location __attribute__((swift_name("location")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplaySyncManual.Companion")))
@interface VpsReplaySyncManualCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplaySyncManualCompanion *shared __attribute__((swift_name("shared")));
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


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplaySyncStop")))
@interface VpsReplaySyncStop : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp position:(VpsCoordinateF *)position angle:(VpsFloat * _Nullable)angle __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:position:angle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsReplaySyncStopCompanion *companion __attribute__((swift_name("companion")));
- (VpsReplaySyncStop *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp position:(VpsCoordinateF *)position angle:(VpsFloat * _Nullable)angle __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:position:angle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsFloat * _Nullable angle __attribute__((swift_name("angle")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) VpsCoordinateF *position __attribute__((swift_name("position")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplaySyncStop.Companion")))
@interface VpsReplaySyncStopCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsReplaySyncStopCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PartitionRecorderDataPackage")))
@interface VpsPartitionRecorderDataPackage<T> : VpsBase
- (instancetype)initWithIdentifier:(NSString *)identifier dataAsJSONString:(NSString * _Nullable)dataAsJSONString data:(T _Nullable)data __attribute__((swift_name("init(identifier:dataAsJSONString:data:)"))) __attribute__((objc_designated_initializer));
- (VpsPartitionRecorderDataPackage<T> *)doCopyIdentifier:(NSString *)identifier dataAsJSONString:(NSString * _Nullable)dataAsJSONString data:(T _Nullable)data __attribute__((swift_name("doCopy(identifier:dataAsJSONString:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable dataAsJSONString __attribute__((swift_name("dataAsJSONString")));
@property (readonly) NSString *identifier __attribute__((swift_name("identifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PartitionRecorderPackageOption")))
@interface VpsPartitionRecorderPackageOption : VpsKotlinEnum<VpsPartitionRecorderPackageOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsPartitionRecorderPackageOption *jsonString __attribute__((swift_name("jsonString")));
@property (class, readonly) VpsPartitionRecorderPackageOption *rawData __attribute__((swift_name("rawData")));
+ (VpsKotlinArray<VpsPartitionRecorderPackageOption *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsPartitionRecorderPackageOption *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayV1Recorder")))
@interface VpsReplayV1Recorder : VpsPartitionRecorder<VpsReplayDataV1 *>
- (instancetype)initWithUploader:(id<VpsUploader> _Nullable)uploader recordingPartInterval:(VpsLong * _Nullable)recordingPartInterval packageOption:(VpsPartitionRecorderPackageOption *)packageOption __attribute__((swift_name("init(uploader:recordingPartInterval:packageOption:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onDispose __attribute__((swift_name("onDispose()")));
- (void)onFullReset __attribute__((swift_name("onFullReset()")));
- (void)onInputSignalSignal:(VpsInputSignal *)signal __attribute__((swift_name("onInputSignal(signal:)")));
- (void)onNextRecordingPartReset __attribute__((swift_name("onNextRecordingPartReset()")));
- (void)onPartialDataDataPackage:(VpsPartitionRecorderDataPackage<VpsReplayDataV1 *> *)dataPackage __attribute__((swift_name("onPartialData(dataPackage:)")));
- (VpsPartitionRecorderDataPackage<VpsReplayDataV1 *> *)packageDataIdentifier:(NSString *)identifier __attribute__((swift_name("packageData(identifier:)")));
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
- (void)onEndUploadDataPackage:(VpsPartitionRecorderDataPackage<id> *)dataPackage __attribute__((swift_name("onEndUpload(dataPackage:)")));
- (void)onPartialUploadDataPackage:(VpsPartitionRecorderDataPackage<id> *)dataPackage __attribute__((swift_name("onPartialUpload(dataPackage:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RotationHandlerSettings")))
@interface VpsRotationHandlerSettings : VpsBase
- (instancetype)initWithRotationOutputLimit:(int32_t)rotationOutputLimit rotationOutputActive:(BOOL)rotationOutputActive rotationCalculateLimit:(int32_t)rotationCalculateLimit __attribute__((swift_name("init(rotationOutputLimit:rotationOutputActive:rotationCalculateLimit:)"))) __attribute__((objc_designated_initializer));
- (VpsRotationHandlerSettings *)doCopyRotationOutputLimit:(int32_t)rotationOutputLimit rotationOutputActive:(BOOL)rotationOutputActive rotationCalculateLimit:(int32_t)rotationCalculateLimit __attribute__((swift_name("doCopy(rotationOutputLimit:rotationOutputActive:rotationCalculateLimit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t rotationCalculateLimit __attribute__((swift_name("rotationCalculateLimit")));
@property (readonly) BOOL rotationOutputActive __attribute__((swift_name("rotationOutputActive")));
@property (readonly) int32_t rotationOutputLimit __attribute__((swift_name("rotationOutputLimit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScoringParams")))
@interface VpsScoringParams : VpsBase
- (instancetype)initWithVersion:(VpsScoringParamsVersion *)version dt:(float)dt scoringIntervalSec:(int32_t)scoringIntervalSec clusterSwapThreshold:(float)clusterSwapThreshold beforeLimitRmSec:(int32_t)beforeLimitRmSec afterLimitRmSec:(int32_t)afterLimitRmSec maxGapRmSec:(int32_t)maxGapRmSec beforeLimitCsSec:(int32_t)beforeLimitCsSec afterLimitCsSec:(int32_t)afterLimitCsSec maxGapCsSec:(int32_t)maxGapCsSec beforeLimitFsSec:(int32_t)beforeLimitFsSec afterLimitFsSec:(int32_t)afterLimitFsSec maxGapFsSec:(int32_t)maxGapFsSec beforeLimitSsSec:(int32_t)beforeLimitSsSec afterLimitSsSec:(int32_t)afterLimitSsSec maxGapSsSec:(int32_t)maxGapSsSec endDistanceScore:(BOOL)endDistanceScore endDistanceThresholdZone:(float)endDistanceThresholdZone endDistanceThresholdStopSync:(float)endDistanceThresholdStopSync endDistancePenaltyThreshold:(float)endDistancePenaltyThreshold endDistancePenaltyScore:(float)endDistancePenaltyScore stopSyncWeightingPositive:(float)stopSyncWeightingPositive stopSyncWeightingNegative:(float)stopSyncWeightingNegative __attribute__((swift_name("init(version:dt:scoringIntervalSec:clusterSwapThreshold:beforeLimitRmSec:afterLimitRmSec:maxGapRmSec:beforeLimitCsSec:afterLimitCsSec:maxGapCsSec:beforeLimitFsSec:afterLimitFsSec:maxGapFsSec:beforeLimitSsSec:afterLimitSsSec:maxGapSsSec:endDistanceScore:endDistanceThresholdZone:endDistanceThresholdStopSync:endDistancePenaltyThreshold:endDistancePenaltyScore:stopSyncWeightingPositive:stopSyncWeightingNegative:)"))) __attribute__((objc_designated_initializer));
- (VpsScoringParams *)doCopyVersion:(VpsScoringParamsVersion *)version dt:(float)dt scoringIntervalSec:(int32_t)scoringIntervalSec clusterSwapThreshold:(float)clusterSwapThreshold beforeLimitRmSec:(int32_t)beforeLimitRmSec afterLimitRmSec:(int32_t)afterLimitRmSec maxGapRmSec:(int32_t)maxGapRmSec beforeLimitCsSec:(int32_t)beforeLimitCsSec afterLimitCsSec:(int32_t)afterLimitCsSec maxGapCsSec:(int32_t)maxGapCsSec beforeLimitFsSec:(int32_t)beforeLimitFsSec afterLimitFsSec:(int32_t)afterLimitFsSec maxGapFsSec:(int32_t)maxGapFsSec beforeLimitSsSec:(int32_t)beforeLimitSsSec afterLimitSsSec:(int32_t)afterLimitSsSec maxGapSsSec:(int32_t)maxGapSsSec endDistanceScore:(BOOL)endDistanceScore endDistanceThresholdZone:(float)endDistanceThresholdZone endDistanceThresholdStopSync:(float)endDistanceThresholdStopSync endDistancePenaltyThreshold:(float)endDistancePenaltyThreshold endDistancePenaltyScore:(float)endDistancePenaltyScore stopSyncWeightingPositive:(float)stopSyncWeightingPositive stopSyncWeightingNegative:(float)stopSyncWeightingNegative __attribute__((swift_name("doCopy(version:dt:scoringIntervalSec:clusterSwapThreshold:beforeLimitRmSec:afterLimitRmSec:maxGapRmSec:beforeLimitCsSec:afterLimitCsSec:maxGapCsSec:beforeLimitFsSec:afterLimitFsSec:maxGapFsSec:beforeLimitSsSec:afterLimitSsSec:maxGapSsSec:endDistanceScore:endDistanceThresholdZone:endDistanceThresholdStopSync:endDistancePenaltyThreshold:endDistancePenaltyScore:stopSyncWeightingPositive:stopSyncWeightingNegative:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, NSString *> *)map __attribute__((swift_name("map()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t afterLimitCs __attribute__((swift_name("afterLimitCs")));
@property (readonly) int32_t afterLimitCsSec __attribute__((swift_name("afterLimitCsSec")));
@property (readonly) int32_t afterLimitFs __attribute__((swift_name("afterLimitFs")));
@property (readonly) int32_t afterLimitFsSec __attribute__((swift_name("afterLimitFsSec")));
@property (readonly) int32_t afterLimitRm __attribute__((swift_name("afterLimitRm")));
@property (readonly) int32_t afterLimitRmSec __attribute__((swift_name("afterLimitRmSec")));
@property (readonly) int32_t afterLimitSs __attribute__((swift_name("afterLimitSs")));
@property (readonly) int32_t afterLimitSsSec __attribute__((swift_name("afterLimitSsSec")));
@property (readonly) int32_t beforeLimitCs __attribute__((swift_name("beforeLimitCs")));
@property (readonly) int32_t beforeLimitCsSec __attribute__((swift_name("beforeLimitCsSec")));
@property (readonly) int32_t beforeLimitFs __attribute__((swift_name("beforeLimitFs")));
@property (readonly) int32_t beforeLimitFsSec __attribute__((swift_name("beforeLimitFsSec")));
@property (readonly) int32_t beforeLimitRm __attribute__((swift_name("beforeLimitRm")));
@property (readonly) int32_t beforeLimitRmSec __attribute__((swift_name("beforeLimitRmSec")));
@property (readonly) int32_t beforeLimitSs __attribute__((swift_name("beforeLimitSs")));
@property (readonly) int32_t beforeLimitSsSec __attribute__((swift_name("beforeLimitSsSec")));
@property (readonly) float clusterSwapThreshold __attribute__((swift_name("clusterSwapThreshold")));
@property (readonly) float clusterSwapThresholdSquared __attribute__((swift_name("clusterSwapThresholdSquared")));
@property (readonly) float dt __attribute__((swift_name("dt")));
@property (readonly) float endDistancePenaltyScore __attribute__((swift_name("endDistancePenaltyScore")));
@property (readonly) float endDistancePenaltyThreshold __attribute__((swift_name("endDistancePenaltyThreshold")));
@property (readonly) BOOL endDistanceScore __attribute__((swift_name("endDistanceScore")));
@property (readonly) float endDistanceThresholdStopSync __attribute__((swift_name("endDistanceThresholdStopSync")));
@property (readonly) float endDistanceThresholdZone __attribute__((swift_name("endDistanceThresholdZone")));
@property (readonly) int32_t maxGapCs __attribute__((swift_name("maxGapCs")));
@property (readonly) int32_t maxGapCsSec __attribute__((swift_name("maxGapCsSec")));
@property (readonly) int32_t maxGapFs __attribute__((swift_name("maxGapFs")));
@property (readonly) int32_t maxGapFsSec __attribute__((swift_name("maxGapFsSec")));
@property (readonly) int32_t maxGapRm __attribute__((swift_name("maxGapRm")));
@property (readonly) int32_t maxGapRmSec __attribute__((swift_name("maxGapRmSec")));
@property (readonly) int32_t maxGapSs __attribute__((swift_name("maxGapSs")));
@property (readonly) int32_t maxGapSsSec __attribute__((swift_name("maxGapSsSec")));
@property (readonly) int32_t scoringInterval __attribute__((swift_name("scoringInterval")));
@property (readonly) int32_t scoringIntervalSec __attribute__((swift_name("scoringIntervalSec")));
@property (readonly) float stopSyncWeightingNegative __attribute__((swift_name("stopSyncWeightingNegative")));
@property (readonly) float stopSyncWeightingPositive __attribute__((swift_name("stopSyncWeightingPositive")));
@property (readonly) VpsScoringParamsVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScoringParams.Version")))
@interface VpsScoringParamsVersion : VpsKotlinEnum<VpsScoringParamsVersion *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsScoringParamsVersion *default_ __attribute__((swift_name("default_")));
@property (class, readonly) VpsScoringParamsVersion *pda __attribute__((swift_name("pda")));
+ (VpsKotlinArray<VpsScoringParamsVersion *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsScoringParamsVersion *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSScoringParams")))
@interface VpsVPSScoringParams : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vPSScoringParams __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsVPSScoringParams *shared __attribute__((swift_name("shared")));
@property (readonly, getter=default) VpsScoringParams *default_ __attribute__((swift_name("default_")));
@property (readonly) VpsScoringParams *legacy __attribute__((swift_name("legacy")));
@property (readonly) VpsScoringParams *scoringParamsPDA __attribute__((swift_name("scoringParamsPDA")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ADModelOutput")))
@interface VpsADModelOutput : VpsBase
- (instancetype)initWithBandToPredictedAttack:(NSDictionary<VpsGNSSBand *, NSDictionary<VpsIndicator *, VpsFloat *> *> *)bandToPredictedAttack __attribute__((swift_name("init(bandToPredictedAttack:)"))) __attribute__((objc_designated_initializer));
- (VpsADModelOutput *)doCopyBandToPredictedAttack:(NSDictionary<VpsGNSSBand *, NSDictionary<VpsIndicator *, VpsFloat *> *> *)bandToPredictedAttack __attribute__((swift_name("doCopy(bandToPredictedAttack:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<VpsGNSSBand *, NSDictionary<VpsIndicator *, VpsFloat *> *> *bandToPredictedAttack __attribute__((swift_name("bandToPredictedAttack")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceAxis")))
@interface VpsDeviceAxis : VpsKotlinEnum<VpsDeviceAxis *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsDeviceAxis *x __attribute__((swift_name("x")));
@property (class, readonly) VpsDeviceAxis *y __attribute__((swift_name("y")));
@property (class, readonly) VpsDeviceAxis *z __attribute__((swift_name("z")));
+ (VpsKotlinArray<VpsDeviceAxis *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsDeviceAxis *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t index __attribute__((swift_name("index")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModeClassifierOutput")))
@interface VpsModeClassifierOutput : VpsBase
- (instancetype)initWithTimestamp:(int64_t)timestamp systemTimestamp:(int64_t)systemTimestamp data:(NSArray<VpsFloat *> *)data __attribute__((swift_name("init(timestamp:systemTimestamp:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsModeClassifierOutputCompanion *companion __attribute__((swift_name("companion")));
- (VpsModeClassifierOutput *)doCopyTimestamp:(int64_t)timestamp systemTimestamp:(int64_t)systemTimestamp data:(NSArray<VpsFloat *> *)data __attribute__((swift_name("doCopy(timestamp:systemTimestamp:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<VpsFloat *> *data __attribute__((swift_name("data")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModeClassifierOutput.Companion")))
@interface VpsModeClassifierOutputCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsModeClassifierOutputCompanion *shared __attribute__((swift_name("shared")));
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
@property (class, readonly) VpsSensorDataType *geomagneticUncalibrated __attribute__((swift_name("geomagneticUncalibrated")));
@property (class, readonly) VpsSensorDataType *gravity __attribute__((swift_name("gravity")));
@property (class, readonly) VpsSensorDataType *gyroscopeUncalibrated __attribute__((swift_name("gyroscopeUncalibrated")));
@property (class, readonly) VpsSensorDataType *systemGyroscopeBias __attribute__((swift_name("systemGyroscopeBias")));
@property (class, readonly) VpsSensorDataType *locked __attribute__((swift_name("locked")));
@property (class, readonly) VpsSensorDataType *lux __attribute__((swift_name("lux")));
@property (class, readonly) VpsSensorDataType *proximity __attribute__((swift_name("proximity")));
@property (class, readonly) VpsSensorDataType *radiusSync __attribute__((swift_name("radiusSync")));
@property (class, readonly) VpsSensorDataType *rotation __attribute__((swift_name("rotation")));
@property (class, readonly) VpsSensorDataType *rotationAlternative __attribute__((swift_name("rotationAlternative")));
@property (class, readonly) VpsSensorDataType *rotationTt2OrientationFilter __attribute__((swift_name("rotationTt2OrientationFilter")));
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
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp data:(VpsKotlinArray<VpsKotlinFloatArray *> *)data __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsTensorCompanion *companion __attribute__((swift_name("companion")));
- (VpsTensor *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp data:(VpsKotlinArray<VpsKotlinFloatArray *> *)data __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsKotlinArray<VpsKotlinFloatArray *> *data __attribute__((swift_name("data")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
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
__attribute__((swift_name("TensorBuffer")))
@interface VpsTensorBuffer : VpsBase
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp data:(VpsKotlinArray<VpsKotlinFloatArray *> *)data __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsTensorBufferCompanion *companion __attribute__((swift_name("companion")));
- (VpsTensorBuffer *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp data:(VpsKotlinArray<VpsKotlinFloatArray *> *)data __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsKotlinArray<VpsKotlinFloatArray *> *data __attribute__((swift_name("data")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TensorBuffer.Companion")))
@interface VpsTensorBufferCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsTensorBufferCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VelocityModelOutput")))
@interface VpsVelocityModelOutput : VpsBase
- (instancetype)initWithTimestamp:(int64_t)timestamp systemTimestamp:(int64_t)systemTimestamp data:(NSArray<VpsFloat *> *)data __attribute__((swift_name("init(timestamp:systemTimestamp:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsVelocityModelOutputCompanion *companion __attribute__((swift_name("companion")));
- (VpsVelocityModelOutput *)doCopyTimestamp:(int64_t)timestamp systemTimestamp:(int64_t)systemTimestamp data:(NSArray<VpsFloat *> *)data __attribute__((swift_name("doCopy(timestamp:systemTimestamp:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<VpsFloat *> *data __attribute__((swift_name("data")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
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
@interface VpsInterpolationModuleParams_ : VpsBase
- (instancetype)initWithFrequency:(float)frequency useMagnetometer:(BOOL)useMagnetometer __attribute__((swift_name("init(frequency:useMagnetometer:)"))) __attribute__((objc_designated_initializer));
- (VpsInterpolationModuleParams_ *)doCopyFrequency:(float)frequency useMagnetometer:(BOOL)useMagnetometer __attribute__((swift_name("doCopy(frequency:useMagnetometer:)")));
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
@property (readonly, getter=default) VpsInterpolationModuleParams_ *default_ __attribute__((swift_name("default_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MagnetometerDriftEstimatorParams")))
@interface VpsMagnetometerDriftEstimatorParams : VpsBase
- (instancetype)initWithVersion:(VpsMagnetometerDriftEstimatorParamsVersion *)version useMagnetometer:(BOOL)useMagnetometer alpha:(float)alpha maxRate:(float)maxRate accLowerLimit:(float)accLowerLimit accUpperLimit:(float)accUpperLimit magExpectedNorm:(float)magExpectedNorm sigmaMag:(float)sigmaMag useOSCalib:(BOOL)useOSCalib maxQueueLengthSeconds:(int32_t)maxQueueLengthSeconds biasAlpha:(float)biasAlpha normLambda:(float)normLambda magExpectedDip:(float)magExpectedDip magExpectedDeclination:(float)magExpectedDeclination sigmaInc:(float)sigmaInc maxGain:(float)maxGain useDriftCorrection:(BOOL)useDriftCorrection nIters:(NSArray<VpsInt *> *)nIters bounds:(VpsKotlinPair<VpsDouble *, VpsDouble *> *)bounds subSampling:(int32_t)subSampling computeInterval:(int32_t)computeInterval sensorBufferSize:(int32_t)sensorBufferSize fs:(double)fs bruteThreshold:(float)bruteThreshold doBackTracking:(BOOL)doBackTracking doSingleBackTrack:(BOOL)doSingleBackTrack numSimilarDriftEstimatesToTriggerBackTrack:(int32_t)numSimilarDriftEstimatesToTriggerBackTrack driftEstimateSimilarityThreshold:(float)driftEstimateSimilarityThreshold driftDiffToTriggerBackTrack:(float)driftDiffToTriggerBackTrack meanSmoothingStdSeconds:(double)meanSmoothingStdSeconds stdSmoothingStdSeconds:(double)stdSmoothingStdSeconds magUseXChannel:(BOOL)magUseXChannel magUseYChannel:(BOOL)magUseYChannel magUseZChannel:(BOOL)magUseZChannel distanceThreshold:(float)distanceThreshold useDistanceThreshold:(BOOL)useDistanceThreshold queueFillThreshold:(float)queueFillThreshold ignoreCalibrationInterval:(BOOL)ignoreCalibrationInterval useTangentResidual:(BOOL)useTangentResidual useNorthOptimizerAtUncertainStart:(BOOL)useNorthOptimizerAtUncertainStart useNorthOptimizerAtCertainStart:(BOOL)useNorthOptimizerAtCertainStart northOptimizerStartAngleTolerance:(float)northOptimizerStartAngleTolerance useMLResiduals:(BOOL)useMLResiduals useBatchedResiduals:(BOOL)useBatchedResiduals useCheapGridSearch:(BOOL)useCheapGridSearch cheapSearchInterval:(double)cheapSearchInterval useAnomalyGating:(BOOL)useAnomalyGating anomalyThreshold:(float)anomalyThreshold anomalyWindowStart:(int32_t)anomalyWindowStart anomalyWindowStep:(int32_t)anomalyWindowStep anomalyWindowStride:(int32_t)anomalyWindowStride anomalyStableCount:(int32_t)anomalyStableCount anomalyAngleConsistencyThreshold:(float)anomalyAngleConsistencyThreshold anomalyMaxStart:(int32_t)anomalyMaxStart useForceSyncOnCertainStart:(BOOL)useForceSyncOnCertainStart __attribute__((swift_name("init(version:useMagnetometer:alpha:maxRate:accLowerLimit:accUpperLimit:magExpectedNorm:sigmaMag:useOSCalib:maxQueueLengthSeconds:biasAlpha:normLambda:magExpectedDip:magExpectedDeclination:sigmaInc:maxGain:useDriftCorrection:nIters:bounds:subSampling:computeInterval:sensorBufferSize:fs:bruteThreshold:doBackTracking:doSingleBackTrack:numSimilarDriftEstimatesToTriggerBackTrack:driftEstimateSimilarityThreshold:driftDiffToTriggerBackTrack:meanSmoothingStdSeconds:stdSmoothingStdSeconds:magUseXChannel:magUseYChannel:magUseZChannel:distanceThreshold:useDistanceThreshold:queueFillThreshold:ignoreCalibrationInterval:useTangentResidual:useNorthOptimizerAtUncertainStart:useNorthOptimizerAtCertainStart:northOptimizerStartAngleTolerance:useMLResiduals:useBatchedResiduals:useCheapGridSearch:cheapSearchInterval:useAnomalyGating:anomalyThreshold:anomalyWindowStart:anomalyWindowStep:anomalyWindowStride:anomalyStableCount:anomalyAngleConsistencyThreshold:anomalyMaxStart:useForceSyncOnCertainStart:)"))) __attribute__((objc_designated_initializer));
- (VpsMagnetometerDriftEstimatorParams *)doCopyVersion:(VpsMagnetometerDriftEstimatorParamsVersion *)version useMagnetometer:(BOOL)useMagnetometer alpha:(float)alpha maxRate:(float)maxRate accLowerLimit:(float)accLowerLimit accUpperLimit:(float)accUpperLimit magExpectedNorm:(float)magExpectedNorm sigmaMag:(float)sigmaMag useOSCalib:(BOOL)useOSCalib maxQueueLengthSeconds:(int32_t)maxQueueLengthSeconds biasAlpha:(float)biasAlpha normLambda:(float)normLambda magExpectedDip:(float)magExpectedDip magExpectedDeclination:(float)magExpectedDeclination sigmaInc:(float)sigmaInc maxGain:(float)maxGain useDriftCorrection:(BOOL)useDriftCorrection nIters:(NSArray<VpsInt *> *)nIters bounds:(VpsKotlinPair<VpsDouble *, VpsDouble *> *)bounds subSampling:(int32_t)subSampling computeInterval:(int32_t)computeInterval sensorBufferSize:(int32_t)sensorBufferSize fs:(double)fs bruteThreshold:(float)bruteThreshold doBackTracking:(BOOL)doBackTracking doSingleBackTrack:(BOOL)doSingleBackTrack numSimilarDriftEstimatesToTriggerBackTrack:(int32_t)numSimilarDriftEstimatesToTriggerBackTrack driftEstimateSimilarityThreshold:(float)driftEstimateSimilarityThreshold driftDiffToTriggerBackTrack:(float)driftDiffToTriggerBackTrack meanSmoothingStdSeconds:(double)meanSmoothingStdSeconds stdSmoothingStdSeconds:(double)stdSmoothingStdSeconds magUseXChannel:(BOOL)magUseXChannel magUseYChannel:(BOOL)magUseYChannel magUseZChannel:(BOOL)magUseZChannel distanceThreshold:(float)distanceThreshold useDistanceThreshold:(BOOL)useDistanceThreshold queueFillThreshold:(float)queueFillThreshold ignoreCalibrationInterval:(BOOL)ignoreCalibrationInterval useTangentResidual:(BOOL)useTangentResidual useNorthOptimizerAtUncertainStart:(BOOL)useNorthOptimizerAtUncertainStart useNorthOptimizerAtCertainStart:(BOOL)useNorthOptimizerAtCertainStart northOptimizerStartAngleTolerance:(float)northOptimizerStartAngleTolerance useMLResiduals:(BOOL)useMLResiduals useBatchedResiduals:(BOOL)useBatchedResiduals useCheapGridSearch:(BOOL)useCheapGridSearch cheapSearchInterval:(double)cheapSearchInterval useAnomalyGating:(BOOL)useAnomalyGating anomalyThreshold:(float)anomalyThreshold anomalyWindowStart:(int32_t)anomalyWindowStart anomalyWindowStep:(int32_t)anomalyWindowStep anomalyWindowStride:(int32_t)anomalyWindowStride anomalyStableCount:(int32_t)anomalyStableCount anomalyAngleConsistencyThreshold:(float)anomalyAngleConsistencyThreshold anomalyMaxStart:(int32_t)anomalyMaxStart useForceSyncOnCertainStart:(BOOL)useForceSyncOnCertainStart __attribute__((swift_name("doCopy(version:useMagnetometer:alpha:maxRate:accLowerLimit:accUpperLimit:magExpectedNorm:sigmaMag:useOSCalib:maxQueueLengthSeconds:biasAlpha:normLambda:magExpectedDip:magExpectedDeclination:sigmaInc:maxGain:useDriftCorrection:nIters:bounds:subSampling:computeInterval:sensorBufferSize:fs:bruteThreshold:doBackTracking:doSingleBackTrack:numSimilarDriftEstimatesToTriggerBackTrack:driftEstimateSimilarityThreshold:driftDiffToTriggerBackTrack:meanSmoothingStdSeconds:stdSmoothingStdSeconds:magUseXChannel:magUseYChannel:magUseZChannel:distanceThreshold:useDistanceThreshold:queueFillThreshold:ignoreCalibrationInterval:useTangentResidual:useNorthOptimizerAtUncertainStart:useNorthOptimizerAtCertainStart:northOptimizerStartAngleTolerance:useMLResiduals:useBatchedResiduals:useCheapGridSearch:cheapSearchInterval:useAnomalyGating:anomalyThreshold:anomalyWindowStart:anomalyWindowStep:anomalyWindowStride:anomalyStableCount:anomalyAngleConsistencyThreshold:anomalyMaxStart:useForceSyncOnCertainStart:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, NSString *> *)map __attribute__((swift_name("map()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float accLowerLimit __attribute__((swift_name("accLowerLimit")));
@property (readonly) float accUpperLimit __attribute__((swift_name("accUpperLimit")));
@property (readonly) float alpha __attribute__((swift_name("alpha")));
@property (readonly) float anomalyAngleConsistencyThreshold __attribute__((swift_name("anomalyAngleConsistencyThreshold")));
@property (readonly) int32_t anomalyMaxStart __attribute__((swift_name("anomalyMaxStart")));
@property (readonly) int32_t anomalyStableCount __attribute__((swift_name("anomalyStableCount")));
@property (readonly) float anomalyThreshold __attribute__((swift_name("anomalyThreshold")));
@property (readonly) int32_t anomalyWindowStart __attribute__((swift_name("anomalyWindowStart")));
@property (readonly) int32_t anomalyWindowStep __attribute__((swift_name("anomalyWindowStep")));
@property (readonly) int32_t anomalyWindowStride __attribute__((swift_name("anomalyWindowStride")));
@property (readonly) float biasAlpha __attribute__((swift_name("biasAlpha")));
@property (readonly) VpsKotlinPair<VpsDouble *, VpsDouble *> *bounds __attribute__((swift_name("bounds")));
@property (readonly) float bruteThreshold __attribute__((swift_name("bruteThreshold")));
@property (readonly) double cheapSearchInterval __attribute__((swift_name("cheapSearchInterval")));
@property (readonly) int32_t computeInterval __attribute__((swift_name("computeInterval")));
@property (readonly) float distanceThreshold __attribute__((swift_name("distanceThreshold")));
@property (readonly) BOOL doBackTracking __attribute__((swift_name("doBackTracking")));
@property (readonly) BOOL doSingleBackTrack __attribute__((swift_name("doSingleBackTrack")));
@property (readonly) float driftDiffToTriggerBackTrack __attribute__((swift_name("driftDiffToTriggerBackTrack")));
@property (readonly) float driftEstimateSimilarityThreshold __attribute__((swift_name("driftEstimateSimilarityThreshold")));
@property (readonly) double fs __attribute__((swift_name("fs")));
@property (readonly) BOOL ignoreCalibrationInterval __attribute__((swift_name("ignoreCalibrationInterval")));
@property (readonly) float magExpectedDeclination __attribute__((swift_name("magExpectedDeclination")));
@property (readonly) float magExpectedDip __attribute__((swift_name("magExpectedDip")));
@property (readonly) float magExpectedNorm __attribute__((swift_name("magExpectedNorm")));
@property (readonly) BOOL magUseXChannel __attribute__((swift_name("magUseXChannel")));
@property (readonly) BOOL magUseYChannel __attribute__((swift_name("magUseYChannel")));
@property (readonly) BOOL magUseZChannel __attribute__((swift_name("magUseZChannel")));
@property (readonly) float maxGain __attribute__((swift_name("maxGain")));
@property (readonly) int32_t maxQueueLengthSeconds __attribute__((swift_name("maxQueueLengthSeconds")));
@property (readonly) float maxRate __attribute__((swift_name("maxRate")));
@property (readonly) double meanSmoothingStdSeconds __attribute__((swift_name("meanSmoothingStdSeconds")));
@property (readonly) NSArray<VpsInt *> *nIters __attribute__((swift_name("nIters")));
@property (readonly) float normLambda __attribute__((swift_name("normLambda")));
@property (readonly) float northOptimizerStartAngleTolerance __attribute__((swift_name("northOptimizerStartAngleTolerance")));
@property (readonly) int32_t numSimilarDriftEstimatesToTriggerBackTrack __attribute__((swift_name("numSimilarDriftEstimatesToTriggerBackTrack")));
@property (readonly) float queueFillThreshold __attribute__((swift_name("queueFillThreshold")));
@property (readonly) int32_t sensorBufferSize __attribute__((swift_name("sensorBufferSize")));
@property (readonly) float sigmaInc __attribute__((swift_name("sigmaInc")));
@property (readonly) float sigmaMag __attribute__((swift_name("sigmaMag")));
@property (readonly) double stdSmoothingStdSeconds __attribute__((swift_name("stdSmoothingStdSeconds")));
@property (readonly) int32_t subSampling __attribute__((swift_name("subSampling")));
@property (readonly) BOOL useAnomalyGating __attribute__((swift_name("useAnomalyGating")));
@property (readonly) BOOL useBatchedResiduals __attribute__((swift_name("useBatchedResiduals")));
@property (readonly) BOOL useCheapGridSearch __attribute__((swift_name("useCheapGridSearch")));
@property (readonly) BOOL useDistanceThreshold __attribute__((swift_name("useDistanceThreshold")));
@property (readonly) BOOL useDriftCorrection __attribute__((swift_name("useDriftCorrection")));
@property (readonly) BOOL useForceSyncOnCertainStart __attribute__((swift_name("useForceSyncOnCertainStart")));
@property (readonly) BOOL useMLResiduals __attribute__((swift_name("useMLResiduals")));
@property (readonly) BOOL useMagnetometer __attribute__((swift_name("useMagnetometer")));
@property (readonly) BOOL useNorthOptimizerAtCertainStart __attribute__((swift_name("useNorthOptimizerAtCertainStart")));
@property (readonly) BOOL useNorthOptimizerAtUncertainStart __attribute__((swift_name("useNorthOptimizerAtUncertainStart")));
@property (readonly) BOOL useOSCalib __attribute__((swift_name("useOSCalib")));
@property (readonly) BOOL useTangentResidual __attribute__((swift_name("useTangentResidual")));
@property (readonly) VpsMagnetometerDriftEstimatorParamsVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MagnetometerDriftEstimatorParams.Version")))
@interface VpsMagnetometerDriftEstimatorParamsVersion : VpsKotlinEnum<VpsMagnetometerDriftEstimatorParamsVersion *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsMagnetometerDriftEstimatorParamsVersion *default_ __attribute__((swift_name("default_")));
@property (class, readonly) VpsMagnetometerDriftEstimatorParamsVersion *androidIndoors __attribute__((swift_name("androidIndoors")));
@property (class, readonly) VpsMagnetometerDriftEstimatorParamsVersion *androidOutdoors __attribute__((swift_name("androidOutdoors")));
@property (class, readonly) VpsMagnetometerDriftEstimatorParamsVersion *iosIndoors __attribute__((swift_name("iosIndoors")));
@property (class, readonly) VpsMagnetometerDriftEstimatorParamsVersion *iosOutdoors __attribute__((swift_name("iosOutdoors")));
@property (class, readonly) VpsMagnetometerDriftEstimatorParamsVersion *uncertainStartAngle __attribute__((swift_name("uncertainStartAngle")));
@property (class, readonly) VpsMagnetometerDriftEstimatorParamsVersion *tescoSays __attribute__((swift_name("tescoSays")));
@property (class, readonly) VpsMagnetometerDriftEstimatorParamsVersion *forceMagStart __attribute__((swift_name("forceMagStart")));
@property (class, readonly) VpsMagnetometerDriftEstimatorParamsVersion *noMagStart __attribute__((swift_name("noMagStart")));
@property (class, readonly) VpsMagnetometerDriftEstimatorParamsVersion *androidOutdoorsMl __attribute__((swift_name("androidOutdoorsMl")));
+ (VpsKotlinArray<VpsMagnetometerDriftEstimatorParamsVersion *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsMagnetometerDriftEstimatorParamsVersion *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModeKalmanFilterParams")))
@interface VpsModeKalmanFilterParams : VpsBase
- (instancetype)initWithNumClasses:(int32_t)numClasses qPosition:(float)qPosition qVelocity:(float)qVelocity qAcceleration:(float)qAcceleration rMeasurement:(float)rMeasurement switchRequiredCount:(int32_t)switchRequiredCount __attribute__((swift_name("init(numClasses:qPosition:qVelocity:qAcceleration:rMeasurement:switchRequiredCount:)"))) __attribute__((objc_designated_initializer));
- (VpsModeKalmanFilterParams *)doCopyNumClasses:(int32_t)numClasses qPosition:(float)qPosition qVelocity:(float)qVelocity qAcceleration:(float)qAcceleration rMeasurement:(float)rMeasurement switchRequiredCount:(int32_t)switchRequiredCount __attribute__((swift_name("doCopy(numClasses:qPosition:qVelocity:qAcceleration:rMeasurement:switchRequiredCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t numClasses __attribute__((swift_name("numClasses")));
@property (readonly) float qAcceleration __attribute__((swift_name("qAcceleration")));
@property (readonly) float qPosition __attribute__((swift_name("qPosition")));
@property (readonly) float qVelocity __attribute__((swift_name("qVelocity")));
@property (readonly) float rMeasurement __attribute__((swift_name("rMeasurement")));
@property (readonly) int32_t switchRequiredCount __attribute__((swift_name("switchRequiredCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StairSimpleFilterParams")))
@interface VpsStairSimpleFilterParams : VpsBase
- (instancetype)initWithStairsRequiredCount:(int32_t)stairsRequiredCount regularRequiredCount:(int32_t)regularRequiredCount forceExitThreshold:(int32_t)forceExitThreshold maxDistanceThreshold:(float)maxDistanceThreshold stairThreshold:(float)stairThreshold __attribute__((swift_name("init(stairsRequiredCount:regularRequiredCount:forceExitThreshold:maxDistanceThreshold:stairThreshold:)"))) __attribute__((objc_designated_initializer));
- (VpsStairSimpleFilterParams *)doCopyStairsRequiredCount:(int32_t)stairsRequiredCount regularRequiredCount:(int32_t)regularRequiredCount forceExitThreshold:(int32_t)forceExitThreshold maxDistanceThreshold:(float)maxDistanceThreshold stairThreshold:(float)stairThreshold __attribute__((swift_name("doCopy(stairsRequiredCount:regularRequiredCount:forceExitThreshold:maxDistanceThreshold:stairThreshold:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t forceExitThreshold __attribute__((swift_name("forceExitThreshold")));
@property (readonly) float maxDistanceThreshold __attribute__((swift_name("maxDistanceThreshold")));
@property (readonly) int32_t regularRequiredCount __attribute__((swift_name("regularRequiredCount")));
@property (readonly) float stairThreshold __attribute__((swift_name("stairThreshold")));
@property (readonly) int32_t stairsRequiredCount __attribute__((swift_name("stairsRequiredCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSMagnetometerDriftEstimatorParams")))
@interface VpsVPSMagnetometerDriftEstimatorParams : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vPSMagnetometerDriftEstimatorParams __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsVPSMagnetometerDriftEstimatorParams *shared __attribute__((swift_name("shared")));
@property (readonly) VpsMagnetometerDriftEstimatorParams *MagnetometerParamsAndroidIndoors __attribute__((swift_name("MagnetometerParamsAndroidIndoors")));
@property (readonly) VpsMagnetometerDriftEstimatorParams *MagnetometerParamsAndroidOutdoors __attribute__((swift_name("MagnetometerParamsAndroidOutdoors")));
@property (readonly) VpsMagnetometerDriftEstimatorParams *MagnetometerParamsAndroidOutdoorsML __attribute__((swift_name("MagnetometerParamsAndroidOutdoorsML")));
@property (readonly) VpsMagnetometerDriftEstimatorParams *MagnetometerParamsBilka __attribute__((swift_name("MagnetometerParamsBilka")));
@property (readonly) VpsMagnetometerDriftEstimatorParams *MagnetometerParamsForceMagStart __attribute__((swift_name("MagnetometerParamsForceMagStart")));
@property (readonly) VpsMagnetometerDriftEstimatorParams *MagnetometerParamsIOSIndoors __attribute__((swift_name("MagnetometerParamsIOSIndoors")));
@property (readonly) VpsMagnetometerDriftEstimatorParams *MagnetometerParamsIOSOutdoors __attribute__((swift_name("MagnetometerParamsIOSOutdoors")));
@property (readonly) VpsMagnetometerDriftEstimatorParams *MagnetometerParamsNoMagStart __attribute__((swift_name("MagnetometerParamsNoMagStart")));
@property (readonly) VpsMagnetometerDriftEstimatorParams *MagnetometerParamsTescoSAYS __attribute__((swift_name("MagnetometerParamsTescoSAYS")));
@property (readonly, getter=default) VpsMagnetometerDriftEstimatorParams *default_ __attribute__((swift_name("default_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSModeKalmanFilterParams")))
@interface VpsVPSModeKalmanFilterParams : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vPSModeKalmanFilterParams __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsVPSModeKalmanFilterParams *shared __attribute__((swift_name("shared")));
@property (readonly, getter=default) VpsModeKalmanFilterParams *default_ __attribute__((swift_name("default_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSStairSimpleFilterParams")))
@interface VpsVPSStairSimpleFilterParams : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vPSStairSimpleFilterParams __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsVPSStairSimpleFilterParams *shared __attribute__((swift_name("shared")));
@property (readonly, getter=default) VpsStairSimpleFilterParams *default_ __attribute__((swift_name("default_")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("BaseEvent")))
@interface VpsBaseEvent : VpsBase
@property (class, readonly, getter=companion) VpsBaseEventCompanion *companion __attribute__((swift_name("companion")));
@property VpsEventType *event_type __attribute__((swift_name("event_type")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.AngleCorrectionEvent")))
@interface VpsBaseEventAngleCorrectionEvent : VpsBaseEvent
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp angle:(float)angle location:(VpsLocation * _Nullable)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:angle:location:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventAngleCorrectionEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventAngleCorrectionEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp angle:(float)angle location:(VpsLocation * _Nullable)location __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:angle:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float angle __attribute__((swift_name("angle")));
@property (readonly) VpsLocation * _Nullable location __attribute__((swift_name("location")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
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
__attribute__((swift_name("BaseEvent.CompassHeadingEvent")))
@interface VpsBaseEventCompassHeadingEvent : VpsBaseEvent
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp magneticHeading:(float)magneticHeading trueHeading:(float)trueHeading headingAccuracy:(float)headingAccuracy x:(float)x y:(float)y z:(float)z __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:magneticHeading:trueHeading:headingAccuracy:x:y:z:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventCompassHeadingEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventCompassHeadingEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp magneticHeading:(float)magneticHeading trueHeading:(float)trueHeading headingAccuracy:(float)headingAccuracy x:(float)x y:(float)y z:(float)z __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:magneticHeading:trueHeading:headingAccuracy:x:y:z:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float headingAccuracy __attribute__((swift_name("headingAccuracy")));
@property (readonly) float magneticHeading __attribute__((swift_name("magneticHeading")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@property (readonly) float trueHeading __attribute__((swift_name("trueHeading")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@property (readonly) float z __attribute__((swift_name("z")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.CompassHeadingEventCompanion")))
@interface VpsBaseEventCompassHeadingEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventCompassHeadingEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.FloorChangeEvent")))
@interface VpsBaseEventFloorChangeEvent : VpsBaseEvent
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp floorLevelId:(int64_t)floorLevelId startPosition:(VpsCoordinateF *)startPosition __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:floorLevelId:startPosition:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventFloorChangeEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventFloorChangeEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp floorLevelId:(int64_t)floorLevelId startPosition:(VpsCoordinateF *)startPosition __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:floorLevelId:startPosition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorLevelId __attribute__((swift_name("floorLevelId")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) VpsCoordinateF *startPosition __attribute__((swift_name("startPosition")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
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
__attribute__((swift_name("BaseEvent.GnssMeasurementEvent")))
@interface VpsBaseEventGnssMeasurementEvent : VpsBaseEvent
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp clock:(VpsGnssClock *)clock measurements:(NSArray<VpsGnssMeasurement *> *)measurements __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:clock:measurements:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventGnssMeasurementEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventGnssMeasurementEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp clock:(VpsGnssClock *)clock measurements:(NSArray<VpsGnssMeasurement *> *)measurements __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:clock:measurements:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsGnssClock *clock __attribute__((swift_name("clock")));
@property (readonly) NSArray<VpsGnssMeasurement *> *measurements __attribute__((swift_name("measurements")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.GnssMeasurementEventCompanion")))
@interface VpsBaseEventGnssMeasurementEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventGnssMeasurementEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.GyroCalibrationEvent")))
@interface VpsBaseEventGyroCalibrationEvent : VpsBaseEvent
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:isStartSequence:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventGyroCalibrationEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventGyroCalibrationEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:isStartSequence:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isStartSequence __attribute__((swift_name("isStartSequence")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.GyroCalibrationEventCompanion")))
@interface VpsBaseEventGyroCalibrationEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventGyroCalibrationEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.LngLatEvent")))
@interface VpsBaseEventLngLatEvent : VpsBaseEvent
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation *)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:location:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventLngLatEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventLngLatEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation *)location __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsLocation *location __attribute__((swift_name("location")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
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
__attribute__((swift_name("BaseEvent.MagnetometerCalibrationEvent")))
@interface VpsBaseEventMagnetometerCalibrationEvent : VpsBaseEvent
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:isStartSequence:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventMagnetometerCalibrationEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventMagnetometerCalibrationEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:isStartSequence:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isStartSequence __attribute__((swift_name("isStartSequence")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.MagnetometerCalibrationEventCompanion")))
@interface VpsBaseEventMagnetometerCalibrationEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventMagnetometerCalibrationEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.ModePredictionEvent")))
@interface VpsBaseEventModePredictionEvent : VpsBaseEvent
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp predictedMode:(VpsStepType *)predictedMode __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:predictedMode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventModePredictionEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventModePredictionEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp predictedMode:(VpsStepType *)predictedMode __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:predictedMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) VpsStepType *predictedMode __attribute__((swift_name("predictedMode")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.ModePredictionEventCompanion")))
@interface VpsBaseEventModePredictionEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventModePredictionEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.StairEvent")))
@interface VpsBaseEventStairEvent : VpsBaseEvent
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp isInStair:(BOOL)isInStair __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:isInStair:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventStairEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventStairEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp isInStair:(BOOL)isInStair __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:isInStair:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isInStair __attribute__((swift_name("isInStair")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
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
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.StairPredictionEvent")))
@interface VpsBaseEventStairPredictionEvent : VpsBaseEvent
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp predictedStair:(VpsStepSurfaceType *)predictedStair __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:predictedStair:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventStairPredictionEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventStairPredictionEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp predictedStair:(VpsStepSurfaceType *)predictedStair __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:predictedStair:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) VpsStepSurfaceType *predictedStair __attribute__((swift_name("predictedStair")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.StairPredictionEventCompanion")))
@interface VpsBaseEventStairPredictionEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventStairPredictionEventCompanion *shared __attribute__((swift_name("shared")));
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
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation *)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:location:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventStartLngLatEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventStartLngLatEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation *)location __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsLocation *location __attribute__((swift_name("location")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
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
__attribute__((swift_name("BaseEvent.StartLngLatFixedNorthEvent")))
@interface VpsBaseEventStartLngLatFixedNorthEvent : VpsBaseEventStart
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation *)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:location:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventStartLngLatFixedNorthEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventStartLngLatFixedNorthEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation *)location __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsLocation *location __attribute__((swift_name("location")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.StartLngLatFixedNorthEventCompanion")))
@interface VpsBaseEventStartLngLatFixedNorthEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventStartLngLatFixedNorthEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.StartPositionEvent")))
@interface VpsBaseEventStartPositionEvent : VpsBaseEventStart
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp start_pos:(VpsCoordinateF *)start_pos start_angle:(float)start_angle uncertainAngle:(BOOL)uncertainAngle __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:start_pos:start_angle:uncertainAngle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventStartPositionEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventStartPositionEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp start_pos:(VpsCoordinateF *)start_pos start_angle:(float)start_angle uncertainAngle:(BOOL)uncertainAngle __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:start_pos:start_angle:uncertainAngle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) float start_angle __attribute__((swift_name("start_angle")));
@property (readonly) VpsCoordinateF *start_pos __attribute__((swift_name("start_pos")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@property (readonly) BOOL uncertainAngle __attribute__((swift_name("uncertainAngle")));
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


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.StartQuickStartEvent")))
@interface VpsBaseEventStartQuickStartEvent : VpsBaseEventStart
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation *)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:location:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventStartQuickStartEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventStartQuickStartEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation *)location __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsLocation *location __attribute__((swift_name("location")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.StartQuickStartEventCompanion")))
@interface VpsBaseEventStartQuickStartEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventStartQuickStartEventCompanion *shared __attribute__((swift_name("shared")));
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
@property (class, readonly) VpsBaseEventStartStartType *lngLatFixedNorth __attribute__((swift_name("lngLatFixedNorth")));
@property (class, readonly) VpsBaseEventStartStartType *quickStart __attribute__((swift_name("quickStart")));
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
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp duration:(int32_t)duration direction:(float)direction speed:(float)speed step_certainty:(float)step_certainty success:(BOOL)success step_type:(VpsStepType *)step_type direction_certainty:(VpsFloat * _Nullable)direction_certainty relative_direction:(VpsFloat * _Nullable)relative_direction __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:duration:direction:speed:step_certainty:success:step_type:direction_certainty:relative_direction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventStepEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventStepEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp duration:(int32_t)duration direction:(float)direction speed:(float)speed step_certainty:(float)step_certainty success:(BOOL)success step_type:(VpsStepType *)step_type direction_certainty:(VpsFloat * _Nullable)direction_certainty relative_direction:(VpsFloat * _Nullable)relative_direction __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:duration:direction:speed:step_certainty:success:step_type:direction_certainty:relative_direction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float direction __attribute__((swift_name("direction")));
@property (readonly) VpsFloat * _Nullable direction_certainty __attribute__((swift_name("direction_certainty")));
@property (readonly) int32_t duration __attribute__((swift_name("duration")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) VpsFloat * _Nullable relative_direction __attribute__((swift_name("relative_direction")));
@property (readonly) float speed __attribute__((swift_name("speed")));
@property (readonly) float step_certainty __attribute__((swift_name("step_certainty")));
@property (readonly) VpsStepType *step_type __attribute__((swift_name("step_type")));
@property (readonly) BOOL success __attribute__((swift_name("success")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
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
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp wifiStatusUpdate:(VpsBaseEventWifiStatusUpdate *)wifiStatusUpdate possibleEntries:(NSArray<VpsCoordinateF *> *)possibleEntries __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:wifiStatusUpdate:possibleEntries:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventSyncAccessPointFloorSwapSyncEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventSyncAccessPointFloorSwapSyncEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp wifiStatusUpdate:(VpsBaseEventWifiStatusUpdate *)wifiStatusUpdate possibleEntries:(NSArray<VpsCoordinateF *> *)possibleEntries __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:wifiStatusUpdate:possibleEntries:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) NSArray<VpsCoordinateF *> *possibleEntries __attribute__((swift_name("possibleEntries")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
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
__attribute__((swift_name("BaseEvent.SyncForceEvent")))
@interface VpsBaseEventSyncForceEvent : VpsBaseEventSync
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp position:(VpsCoordinateF *)position angle:(float)angle forceAngle:(BOOL)forceAngle __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:position:angle:forceAngle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventSyncForceEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventSyncForceEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp position:(VpsCoordinateF *)position angle:(float)angle forceAngle:(BOOL)forceAngle __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:position:angle:forceAngle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property float angle __attribute__((swift_name("angle")));
@property (readonly) BOOL forceAngle __attribute__((swift_name("forceAngle")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property VpsCoordinateF *position __attribute__((swift_name("position")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.SyncForceEventCompanion")))
@interface VpsBaseEventSyncForceEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventSyncForceEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.SyncGNSSSyncEvent")))
@interface VpsBaseEventSyncGNSSSyncEvent : VpsBaseEventSync
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:isStartSequence:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventSyncGNSSSyncEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventSyncGNSSSyncEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:isStartSequence:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isStartSequence __attribute__((swift_name("isStartSequence")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.SyncGNSSSyncEventCompanion")))
@interface VpsBaseEventSyncGNSSSyncEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventSyncGNSSSyncEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.SyncLngLatEvent")))
@interface VpsBaseEventSyncLngLatEvent : VpsBaseEventSync
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation *)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:location:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventSyncLngLatEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventSyncLngLatEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation *)location __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property VpsLocation *location __attribute__((swift_name("location")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
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
__attribute__((swift_name("BaseEvent.SyncMagSprinkleEvent")))
@interface VpsBaseEventSyncMagSprinkleEvent : VpsBaseEventSync
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp position:(VpsCoordinateF *)position angle:(float)angle __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:position:angle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventSyncMagSprinkleEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventSyncMagSprinkleEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp position:(VpsCoordinateF *)position angle:(float)angle __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:position:angle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property float angle __attribute__((swift_name("angle")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property VpsCoordinateF *position __attribute__((swift_name("position")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.SyncMagSprinkleEventCompanion")))
@interface VpsBaseEventSyncMagSprinkleEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventSyncMagSprinkleEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.SyncManualSyncEvent")))
@interface VpsBaseEventSyncManualSyncEvent : VpsBaseEventSync
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation * _Nullable)location isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:location:isStartSequence:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventSyncManualSyncEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventSyncManualSyncEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation * _Nullable)location isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:location:isStartSequence:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isStartSequence __attribute__((swift_name("isStartSequence")));
@property (readonly) VpsLocation * _Nullable location __attribute__((swift_name("location")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.SyncManualSyncEventCompanion")))
@interface VpsBaseEventSyncManualSyncEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventSyncManualSyncEventCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.SyncPositionEvent")))
@interface VpsBaseEventSyncPositionEvent : VpsBaseEventSync
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp sync_position:(VpsCoordinateF *)sync_position ean:(NSString *)ean offset:(VpsCoordinateF *)offset __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:sync_position:ean:offset:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventSyncPositionEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventSyncPositionEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp sync_position:(VpsCoordinateF *)sync_position ean:(NSString *)ean offset:(VpsCoordinateF *)offset __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:sync_position:ean:offset:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *ean __attribute__((swift_name("ean")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property VpsCoordinateF *offset __attribute__((swift_name("offset")));
@property VpsCoordinateF *sync_position __attribute__((swift_name("sync_position")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
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


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.SyncStopEvent")))
@interface VpsBaseEventSyncStopEvent : VpsBaseEventSync
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp position:(VpsCoordinateF *)position angle:(float)angle __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:position:angle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventSyncStopEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventSyncStopEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp position:(VpsCoordinateF *)position angle:(float)angle __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:position:angle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property float angle __attribute__((swift_name("angle")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property VpsCoordinateF *position __attribute__((swift_name("position")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.SyncStopEventCompanion")))
@interface VpsBaseEventSyncStopEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventSyncStopEventCompanion *shared __attribute__((swift_name("shared")));
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
@property (class, readonly) VpsBaseEventSyncSyncType *force __attribute__((swift_name("force")));
@property (class, readonly) VpsBaseEventSyncSyncType *gnss __attribute__((swift_name("gnss")));
@property (class, readonly) VpsBaseEventSyncSyncType *manual __attribute__((swift_name("manual")));
@property (class, readonly) VpsBaseEventSyncSyncType *stop __attribute__((swift_name("stop")));
@property (class, readonly) VpsBaseEventSyncSyncType *magsprinkle __attribute__((swift_name("magsprinkle")));
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
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp bssid:(NSString *)bssid rssi:(int32_t)rssi frequency:(VpsInt * _Nullable)frequency rtl_id:(NSString * _Nullable)rtl_id accessPoint:(VpsAccessPoint * _Nullable)accessPoint __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:bssid:rssi:frequency:rtl_id:accessPoint:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventWiFiObservationCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventWiFiObservation *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp bssid:(NSString *)bssid rssi:(int32_t)rssi frequency:(VpsInt * _Nullable)frequency rtl_id:(NSString * _Nullable)rtl_id accessPoint:(VpsAccessPoint * _Nullable)accessPoint __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:bssid:rssi:frequency:rtl_id:accessPoint:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property VpsAccessPoint * _Nullable accessPoint __attribute__((swift_name("accessPoint")));
@property (readonly) NSString *bssid __attribute__((swift_name("bssid")));
@property (readonly) VpsInt * _Nullable frequency __attribute__((swift_name("frequency")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int32_t rssi __attribute__((swift_name("rssi")));
@property (readonly) NSString * _Nullable rtl_id __attribute__((swift_name("rtl_id")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
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
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp data:(VpsKotlinArray<VpsBaseEventWiFiObservation *> *)data __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventWiFiScanCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventWiFiScan *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp data:(VpsKotlinArray<VpsBaseEventWiFiObservation *> *)data __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsKotlinArray<VpsBaseEventWiFiObservation *> *data __attribute__((swift_name("data")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
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
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp bssid:(NSString *)bssid rtl_id:(NSString *)rtl_id rssi:(int32_t)rssi frequency:(VpsInt * _Nullable)frequency accessPoint:(VpsAccessPoint * _Nullable)accessPoint __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:bssid:rtl_id:rssi:frequency:accessPoint:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventWifiStatusUpdateCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventWifiStatusUpdate *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp bssid:(NSString *)bssid rtl_id:(NSString *)rtl_id rssi:(int32_t)rssi frequency:(VpsInt * _Nullable)frequency accessPoint:(VpsAccessPoint * _Nullable)accessPoint __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:bssid:rtl_id:rssi:frequency:accessPoint:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property VpsAccessPoint * _Nullable accessPoint __attribute__((swift_name("accessPoint")));
@property (readonly) NSString *bssid __attribute__((swift_name("bssid")));
@property (readonly) VpsInt * _Nullable frequency __attribute__((swift_name("frequency")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) int32_t rssi __attribute__((swift_name("rssi")));
@property (readonly) NSString *rtl_id __attribute__((swift_name("rtl_id")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
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


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.setConstellationsEvent")))
@interface VpsBaseEventSetConstellationsEvent : VpsBaseEvent
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp constellations:(NSArray<VpsConstellationType *> *)constellations __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:constellations:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsBaseEventSetConstellationsEventCompanion *companion __attribute__((swift_name("companion")));
- (VpsBaseEventSetConstellationsEvent *)doCopyNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp constellations:(NSArray<VpsConstellationType *> *)constellations __attribute__((swift_name("doCopy(nanoTimestamp:systemTimestamp:constellations:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<VpsConstellationType *> *constellations __attribute__((swift_name("constellations")));
@property int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.setConstellationsEventCompanion")))
@interface VpsBaseEventSetConstellationsEventCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsBaseEventSetConstellationsEventCompanion *shared __attribute__((swift_name("shared")));
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
@property (class, readonly) VpsEventType *compassHeading __attribute__((swift_name("compassHeading")));
@property (class, readonly) VpsEventType *gyroCalibration __attribute__((swift_name("gyroCalibration")));
@property (class, readonly) VpsEventType *modePrediction __attribute__((swift_name("modePrediction")));
@property (class, readonly) VpsEventType *stairPrediction __attribute__((swift_name("stairPrediction")));
@property (class, readonly) VpsEventType *magCalibration __attribute__((swift_name("magCalibration")));
@property (class, readonly) VpsEventType *gnssMeasurement __attribute__((swift_name("gnssMeasurement")));
@property (class, readonly) VpsEventType *setConstellations __attribute__((swift_name("setConstellations")));
@property (class, readonly) VpsEventType *undefined __attribute__((swift_name("undefined")));
+ (VpsKotlinArray<VpsEventType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsEventType *> *entries __attribute__((swift_name("entries")));
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
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp angle:(float)angle location:(VpsLocation * _Nullable)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:angle:location:)"))) __attribute__((objc_designated_initializer));
@property (readonly) float angle __attribute__((swift_name("angle")));
@property (readonly) VpsLocation * _Nullable location __attribute__((swift_name("location")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.CompassHeading")))
@interface VpsInputSignalCompassHeading : VpsInputSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp magneticHeading:(float)magneticHeading trueHeading:(float)trueHeading headingAccuracy:(float)headingAccuracy x:(float)x y:(float)y z:(float)z __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:magneticHeading:trueHeading:headingAccuracy:x:y:z:)"))) __attribute__((objc_designated_initializer));
@property (readonly) float headingAccuracy __attribute__((swift_name("headingAccuracy")));
@property (readonly) float magneticHeading __attribute__((swift_name("magneticHeading")));
@property (readonly) float trueHeading __attribute__((swift_name("trueHeading")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@property (readonly) float z __attribute__((swift_name("z")));
@end

__attribute__((swift_name("InputSignal.DeviceInfo")))
@interface VpsInputSignalDeviceInfo : VpsInputSignal
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.DeviceInfoTemperature")))
@interface VpsInputSignalDeviceInfoTemperature : VpsInputSignalDeviceInfo
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp thermalZones:(NSDictionary<NSString *, VpsFloat *> * _Nullable)thermalZones __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:thermalZones:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSDictionary<NSString *, VpsFloat *> * _Nullable thermalZones __attribute__((swift_name("thermalZones")));
@end

__attribute__((swift_name("InputSignal.EnvironmentSignal")))
@interface VpsInputSignalEnvironmentSignal : VpsInputSignal
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.EnvironmentSignalSetConstellations")))
@interface VpsInputSignalEnvironmentSignalSetConstellations : VpsInputSignalEnvironmentSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp constellations:(NSArray<VpsConstellationType *> *)constellations __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:constellations:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<VpsConstellationType *> *constellations __attribute__((swift_name("constellations")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.EnvironmentSignalSetEphemerides")))
@interface VpsInputSignalEnvironmentSignalSetEphemerides : VpsInputSignalEnvironmentSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp ephemerideData:(VpsEphemerideData *)ephemerideData __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:ephemerideData:)"))) __attribute__((objc_designated_initializer));
@property (readonly) VpsEphemerideData *ephemerideData __attribute__((swift_name("ephemerideData")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.EnvironmentSignalSetGyroBiasObservations")))
@interface VpsInputSignalEnvironmentSignalSetGyroBiasObservations : VpsInputSignalEnvironmentSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp observations:(NSArray<VpsGyroBiasObservation *> *)observations __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:observations:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<VpsGyroBiasObservation *> *observations __attribute__((swift_name("observations")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.EnvironmentSignalSetMagneticField")))
@interface VpsInputSignalEnvironmentSignalSetMagneticField : VpsInputSignalEnvironmentSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp declination:(float)declination inclination:(float)inclination magnitude:(float)magnitude __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:declination:inclination:magnitude:)"))) __attribute__((objc_designated_initializer));
@property (readonly) float declination __attribute__((swift_name("declination")));
@property (readonly) float inclination __attribute__((swift_name("inclination")));
@property (readonly) float magnitude __attribute__((swift_name("magnitude")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.EnvironmentSignalSetMagnetometerCalibration")))
@interface VpsInputSignalEnvironmentSignalSetMagnetometerCalibration : VpsInputSignalEnvironmentSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp magnetometerCalibration:(VpsMagnetometerCalibration *)magnetometerCalibration __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:magnetometerCalibration:)"))) __attribute__((objc_designated_initializer));
@property (readonly) VpsMagnetometerCalibration *magnetometerCalibration __attribute__((swift_name("magnetometerCalibration")));
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
__attribute__((swift_name("InputSignal.GnssMeasurements")))
@interface VpsInputSignalGnssMeasurements : VpsInputSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp clock:(VpsGnssClock *)clock measurements:(NSArray<VpsGnssMeasurement *> *)measurements __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:clock:measurements:)"))) __attribute__((objc_designated_initializer));
@property (readonly) VpsGnssClock *clock __attribute__((swift_name("clock")));
@property (readonly) NSArray<VpsGnssMeasurement *> *measurements __attribute__((swift_name("measurements")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.GnssNavigationMessage")))
@interface VpsInputSignalGnssNavigationMessage : VpsInputSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp message:(VpsGnssNavigationMessage *)message __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:message:)"))) __attribute__((objc_designated_initializer));
@property (readonly) VpsGnssNavigationMessage *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.GyroCalibration")))
@interface VpsInputSignalGyroCalibration : VpsInputSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:isStartSequence:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isStartSequence __attribute__((swift_name("isStartSequence")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.LngLat")))
@interface VpsInputSignalLngLat : VpsInputSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation *)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:location:)"))) __attribute__((objc_designated_initializer));
@property (readonly) VpsLocation *location __attribute__((swift_name("location")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.ManualMagnetometerCalibration")))
@interface VpsInputSignalManualMagnetometerCalibration : VpsInputSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:isStartSequence:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isStartSequence __attribute__((swift_name("isStartSequence")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.SensorData")))
@interface VpsInputSignalSensorData : VpsInputSignal
- (instancetype)initWithRawSensorData:(VpsRawSensorData *)rawSensorData __attribute__((swift_name("init(rawSensorData:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsRawSensorData *rawSensorData __attribute__((swift_name("rawSensorData")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.SetProfile")))
@interface VpsInputSignalSetProfile : VpsInputSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp profile:(VpsVPSProfile * _Nullable)profile __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:profile:)"))) __attribute__((objc_designated_initializer));
@property (readonly) VpsVPSProfile * _Nullable profile __attribute__((swift_name("profile")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.SpeedCalibration")))
@interface VpsInputSignalSpeedCalibration : VpsInputSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp action:(VpsInputSignalSpeedCalibrationAction *)action startLocation:(VpsLocation *)startLocation stopLocation:(VpsLocation *)stopLocation profileId:(NSString *)profileId __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:action:startLocation:stopLocation:profileId:)"))) __attribute__((objc_designated_initializer));
@property (readonly) VpsInputSignalSpeedCalibrationAction *action __attribute__((swift_name("action")));
@property (readonly) NSString *profileId __attribute__((swift_name("profileId")));
@property (readonly) VpsLocation *startLocation __attribute__((swift_name("startLocation")));
@property (readonly) VpsLocation *stopLocation __attribute__((swift_name("stopLocation")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.SpeedCalibrationAction")))
@interface VpsInputSignalSpeedCalibrationAction : VpsKotlinEnum<VpsInputSignalSpeedCalibrationAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsInputSignalSpeedCalibrationAction *start __attribute__((swift_name("start")));
@property (class, readonly) VpsInputSignalSpeedCalibrationAction *stop __attribute__((swift_name("stop")));
@property (class, readonly) VpsInputSignalSpeedCalibrationAction *abort __attribute__((swift_name("abort")));
@property (class, readonly) VpsInputSignalSpeedCalibrationAction *intermediateStart __attribute__((swift_name("intermediateStart")));
@property (class, readonly) VpsInputSignalSpeedCalibrationAction *intermediateStop __attribute__((swift_name("intermediateStop")));
@property (class, readonly) VpsInputSignalSpeedCalibrationAction *startGps __attribute__((swift_name("startGps")));
@property (class, readonly) VpsInputSignalSpeedCalibrationAction *stopGps __attribute__((swift_name("stopGps")));
+ (VpsKotlinArray<VpsInputSignalSpeedCalibrationAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsInputSignalSpeedCalibrationAction *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.StairInfo")))
@interface VpsInputSignalStairInfo : VpsInputSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp isInStair:(BOOL)isInStair __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:isInStair:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL isInStair __attribute__((swift_name("isInStair")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.StairPrediction")))
@interface VpsInputSignalStairPrediction : VpsInputSignal
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp predictedStair:(VpsStepSurfaceType *)predictedStair __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:predictedStair:)"))) __attribute__((objc_designated_initializer));
@property (readonly) VpsStepSurfaceType *predictedStair __attribute__((swift_name("predictedStair")));
@end

__attribute__((swift_name("InputSignal.Start")))
@interface VpsInputSignalStart : VpsInputSignal
@property (readonly) NSString *deviceModel __attribute__((swift_name("deviceModel")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) VpsInputSignalStartStartType *startType __attribute__((swift_name("startType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.StartLngLat")))
@interface VpsInputSignalStartLngLat : VpsInputSignalStart
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp sessionId:(NSString *)sessionId deviceModel:(NSString *)deviceModel location:(VpsLocation *)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:sessionId:deviceModel:location:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsLocation *location __attribute__((swift_name("location")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.StartLngLatFixedNorth")))
@interface VpsInputSignalStartLngLatFixedNorth : VpsInputSignalStart
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp sessionId:(NSString *)sessionId deviceModel:(NSString *)deviceModel location:(VpsLocation *)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:sessionId:deviceModel:location:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsLocation *location __attribute__((swift_name("location")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.StartPosition")))
@interface VpsInputSignalStartPosition : VpsInputSignalStart
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp sessionId:(NSString *)sessionId deviceModel:(NSString *)deviceModel positions:(NSArray<VpsCoordinateF *> *)positions syncPosition:(BOOL)syncPosition syncAngle:(BOOL)syncAngle angle:(float)angle uncertainAngle:(BOOL)uncertainAngle __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:sessionId:deviceModel:positions:syncPosition:syncAngle:angle:uncertainAngle:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float angle __attribute__((swift_name("angle")));
@property (readonly) NSArray<VpsCoordinateF *> *positions __attribute__((swift_name("positions")));
@property (readonly) BOOL syncAngle __attribute__((swift_name("syncAngle")));
@property (readonly) BOOL syncPosition __attribute__((swift_name("syncPosition")));
@property (readonly) BOOL uncertainAngle __attribute__((swift_name("uncertainAngle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.StartQuickStart")))
@interface VpsInputSignalStartQuickStart : VpsInputSignalStart
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp sessionId:(NSString *)sessionId deviceModel:(NSString *)deviceModel location:(VpsLocation *)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:sessionId:deviceModel:location:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsLocation *location __attribute__((swift_name("location")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.StartStartType")))
@interface VpsInputSignalStartStartType : VpsKotlinEnum<VpsInputSignalStartStartType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsInputSignalStartStartType *position __attribute__((swift_name("position")));
@property (class, readonly) VpsInputSignalStartStartType *lngLat __attribute__((swift_name("lngLat")));
@property (class, readonly) VpsInputSignalStartStartType *lngLatFixedNorth __attribute__((swift_name("lngLatFixedNorth")));
@property (class, readonly) VpsInputSignalStartStartType *quickstart __attribute__((swift_name("quickstart")));
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
__attribute__((swift_name("InputSignal.SyncForce")))
@interface VpsInputSignalSyncForce : VpsInputSignalSync
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp position:(VpsCoordinateF *)position angle:(float)angle forceAngle:(BOOL)forceAngle __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:position:angle:forceAngle:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float angle __attribute__((swift_name("angle")));
@property (readonly) BOOL forceAngle __attribute__((swift_name("forceAngle")));
@property (readonly) VpsCoordinateF *position __attribute__((swift_name("position")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.SyncGNSSSync")))
@interface VpsInputSignalSyncGNSSSync : VpsInputSignalSync
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:isStartSequence:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isStartSequence __attribute__((swift_name("isStartSequence")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.SyncLngLat")))
@interface VpsInputSignalSyncLngLat : VpsInputSignalSync
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation *)location __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:location:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsLocation *location __attribute__((swift_name("location")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.SyncMagSprinkle")))
@interface VpsInputSignalSyncMagSprinkle : VpsInputSignalSync
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp position:(VpsCoordinateF *)position angle:(float)angle __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:position:angle:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float angle __attribute__((swift_name("angle")));
@property (readonly) VpsCoordinateF *position __attribute__((swift_name("position")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputSignal.SyncManualSync")))
@interface VpsInputSignalSyncManualSync : VpsInputSignalSync
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp location:(VpsLocation * _Nullable)location isStartSequence:(BOOL)isStartSequence __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:location:isStartSequence:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isStartSequence __attribute__((swift_name("isStartSequence")));
@property (readonly) VpsLocation * _Nullable location __attribute__((swift_name("location")));
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
__attribute__((swift_name("InputSignal.SyncStop")))
@interface VpsInputSignalSyncStop : VpsInputSignalSync
- (instancetype)initWithNanoTimestamp:(int64_t)nanoTimestamp systemTimestamp:(int64_t)systemTimestamp position:(VpsCoordinateF *)position angle:(VpsFloat * _Nullable)angle __attribute__((swift_name("init(nanoTimestamp:systemTimestamp:position:angle:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsFloat * _Nullable angle __attribute__((swift_name("angle")));
@property (readonly) VpsCoordinateF *position __attribute__((swift_name("position")));
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
@property (class, readonly) VpsInputSignalSyncSyncType *force __attribute__((swift_name("force")));
@property (class, readonly) VpsInputSignalSyncSyncType *gnss __attribute__((swift_name("gnss")));
@property (class, readonly) VpsInputSignalSyncSyncType *manual __attribute__((swift_name("manual")));
@property (class, readonly) VpsInputSignalSyncSyncType *stop __attribute__((swift_name("stop")));
@property (class, readonly) VpsInputSignalSyncSyncType *magsprinkle __attribute__((swift_name("magsprinkle")));
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
@property (class, readonly) VpsInputSignalType *gnssMeasurements __attribute__((swift_name("gnssMeasurements")));
@property (class, readonly) VpsInputSignalType *gnssNavigationMessage __attribute__((swift_name("gnssNavigationMessage")));
@property (class, readonly) VpsInputSignalType *exit __attribute__((swift_name("exit")));
@property (class, readonly) VpsInputSignalType *stairs __attribute__((swift_name("stairs")));
@property (class, readonly) VpsInputSignalType *flush __attribute__((swift_name("flush")));
@property (class, readonly) VpsInputSignalType *compassHeading __attribute__((swift_name("compassHeading")));
@property (class, readonly) VpsInputSignalType *gyroCalibration __attribute__((swift_name("gyroCalibration")));
@property (class, readonly) VpsInputSignalType *magCalibration __attribute__((swift_name("magCalibration")));
@property (class, readonly) VpsInputSignalType *speedCalibration __attribute__((swift_name("speedCalibration")));
@property (class, readonly) VpsInputSignalType *setProfile __attribute__((swift_name("setProfile")));
@property (class, readonly) VpsInputSignalType *stairPrediction __attribute__((swift_name("stairPrediction")));
@property (class, readonly) VpsInputSignalType *environment __attribute__((swift_name("environment")));
@property (class, readonly) VpsInputSignalType *deviceInfo __attribute__((swift_name("deviceInfo")));
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


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.ClearMLHistorySignal")))
@interface VpsOutputSignalClearMLHistorySignal : VpsOutputSignal
- (instancetype)initWithSessionId:(NSString *)sessionId __attribute__((swift_name("init(sessionId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalClearMLHistorySignalCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.ClearMLHistorySignalCompanion")))
@interface VpsOutputSignalClearMLHistorySignalCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalClearMLHistorySignalCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.ClusterSwapSignal")))
@interface VpsOutputSignalClusterSwapSignal : VpsOutputSignal
- (instancetype)initWithSessionId:(NSString *)sessionId index:(int32_t)index __attribute__((swift_name("init(sessionId:index:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalClusterSwapSignalCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t index __attribute__((swift_name("index")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.ClusterSwapSignalCompanion")))
@interface VpsOutputSignalClusterSwapSignalCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalClusterSwapSignalCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
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
__attribute__((swift_name("OutputSignal.ConsistencyScoreSignal")))
@interface VpsOutputSignalConsistencyScoreSignal : VpsOutputSignal
- (instancetype)initWithSessionId:(NSString *)sessionId score:(float)score __attribute__((swift_name("init(sessionId:score:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalConsistencyScoreSignalCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float score __attribute__((swift_name("score")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.ConsistencyScoreSignalCompanion")))
@interface VpsOutputSignalConsistencyScoreSignalCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalConsistencyScoreSignalCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.FloorChangeSignal")))
@interface VpsOutputSignalFloorChangeSignal : VpsOutputSignal
- (instancetype)initWithSessionId:(NSString *)sessionId floorLevelId:(int64_t)floorLevelId __attribute__((swift_name("init(sessionId:floorLevelId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalFloorChangeSignalCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorLevelId __attribute__((swift_name("floorLevelId")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
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
- (instancetype)initWithSessionId:(NSString *)sessionId mlLocation:(VpsLocation *)mlLocation gnssLocation:(VpsLocation *)gnssLocation osProvidedLocation:(VpsLocation *)osProvidedLocation __attribute__((swift_name("init(sessionId:mlLocation:gnssLocation:osProvidedLocation:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalLngLatLocationCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsLocation *gnssLocation __attribute__((swift_name("gnssLocation")));
@property (readonly) VpsLocation *mlLocation __attribute__((swift_name("mlLocation")));
@property (readonly) VpsLocation *osProvidedLocation __attribute__((swift_name("osProvidedLocation")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
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
__attribute__((swift_name("OutputSignal.MLOutputPosition")))
@interface VpsOutputSignalMLOutputPosition : VpsOutputSignal
- (instancetype)initWithSessionId:(NSString *)sessionId position:(VpsCoordinateF *)position std:(float)std __attribute__((swift_name("init(sessionId:position:std:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalMLOutputPositionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsCoordinateF *position __attribute__((swift_name("position")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
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
__attribute__((swift_name("OutputSignal.MagnetometerMapData")))
@interface VpsOutputSignalMagnetometerMapData : VpsOutputSignal
- (instancetype)initWithSessionId:(NSString *)sessionId systemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp position:(VpsCoordinateF *)position floorLevelId:(int64_t)floorLevelId rawMagnetometerWindow:(NSArray<VpsMagMappingRawSensorPack *> *)rawMagnetometerWindow magnetometerBias:(VpsKotlinFloatArray *)magnetometerBias magnetometerAngleCorrection:(float)magnetometerAngleCorrection magnetometerLoss:(float)magnetometerLoss navigationFrameTransform:(VpsKotlinDoubleArray * _Nullable)navigationFrameTransform __attribute__((swift_name("init(sessionId:systemTimestamp:nanoTimestamp:position:floorLevelId:rawMagnetometerWindow:magnetometerBias:magnetometerAngleCorrection:magnetometerLoss:navigationFrameTransform:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalMagnetometerMapDataCompanion *companion __attribute__((swift_name("companion")));
- (VpsOutputSignalMagnetometerMapData *)doCopySessionId:(NSString *)sessionId systemTimestamp:(int64_t)systemTimestamp nanoTimestamp:(int64_t)nanoTimestamp position:(VpsCoordinateF *)position floorLevelId:(int64_t)floorLevelId rawMagnetometerWindow:(NSArray<VpsMagMappingRawSensorPack *> *)rawMagnetometerWindow magnetometerBias:(VpsKotlinFloatArray *)magnetometerBias magnetometerAngleCorrection:(float)magnetometerAngleCorrection magnetometerLoss:(float)magnetometerLoss navigationFrameTransform:(VpsKotlinDoubleArray * _Nullable)navigationFrameTransform __attribute__((swift_name("doCopy(sessionId:systemTimestamp:nanoTimestamp:position:floorLevelId:rawMagnetometerWindow:magnetometerBias:magnetometerAngleCorrection:magnetometerLoss:navigationFrameTransform:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorLevelId __attribute__((swift_name("floorLevelId")));
@property (readonly) float magnetometerAngleCorrection __attribute__((swift_name("magnetometerAngleCorrection")));
@property (readonly) VpsKotlinFloatArray *magnetometerBias __attribute__((swift_name("magnetometerBias")));
@property (readonly) float magnetometerLoss __attribute__((swift_name("magnetometerLoss")));
@property (readonly) int64_t nanoTimestamp __attribute__((swift_name("nanoTimestamp")));
@property (readonly) VpsKotlinDoubleArray * _Nullable navigationFrameTransform __attribute__((swift_name("navigationFrameTransform")));
@property (readonly) VpsCoordinateF *position __attribute__((swift_name("position")));
@property (readonly) NSArray<VpsMagMappingRawSensorPack *> *rawMagnetometerWindow __attribute__((swift_name("rawMagnetometerWindow")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) int64_t systemTimestamp __attribute__((swift_name("systemTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.MagnetometerMapDataCompanion")))
@interface VpsOutputSignalMagnetometerMapDataCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalMagnetometerMapDataCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.ModePrediction")))
@interface VpsOutputSignalModePrediction : VpsOutputSignal
- (instancetype)initWithSessionId:(NSString *)sessionId predictedMode:(VpsStepType *)predictedMode __attribute__((swift_name("init(sessionId:predictedMode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalModePredictionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsStepType *predictedMode __attribute__((swift_name("predictedMode")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.ModePredictionCompanion")))
@interface VpsOutputSignalModePredictionCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalModePredictionCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("OutputSignal.Observation")))
@interface VpsOutputSignalObservation : VpsOutputSignal
@property (class, readonly, getter=companion) VpsOutputSignalObservationCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.ObservationCompanion")))
@interface VpsOutputSignalObservationCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalObservationCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.ObservationGyroBias")))
@interface VpsOutputSignalObservationGyroBias : VpsOutputSignalObservation
- (instancetype)initWithSessionId:(NSString *)sessionId timestamp:(int64_t)timestamp observation:(VpsGyroBiasObservation *)observation __attribute__((swift_name("init(sessionId:timestamp:observation:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalObservationGyroBiasCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsGyroBiasObservation *observation __attribute__((swift_name("observation")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.ObservationGyroBiasCompanion")))
@interface VpsOutputSignalObservationGyroBiasCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalObservationGyroBiasCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.ParticleSignal")))
@interface VpsOutputSignalParticleSignal : VpsOutputSignal
- (instancetype)initWithSessionId:(NSString *)sessionId particles:(NSMutableArray<VpsKotlinFloatArray *> *)particles timestamp:(int64_t)timestamp __attribute__((swift_name("init(sessionId:particles:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalParticleSignalCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSMutableArray<VpsKotlinFloatArray *> *particles __attribute__((swift_name("particles")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
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
- (instancetype)initWithSessionId:(NSString *)sessionId position:(VpsCoordinateF *)position std:(float)std status:(VpsOutputSignalPositionStatus *)status activityState:(VpsOutputSignalPositionActivityState *)activityState currentFloorLevelId:(int64_t)currentFloorLevelId currentWiFiObservation:(VpsBaseEventWiFiObservation * _Nullable)currentWiFiObservation currentWiFiScan:(VpsBaseEventWiFiScan * _Nullable)currentWiFiScan trustedPosition:(BOOL)trustedPosition __attribute__((swift_name("init(sessionId:position:std:status:activityState:currentFloorLevelId:currentWiFiObservation:currentWiFiScan:trustedPosition:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalPositionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsOutputSignalPositionActivityState *activityState __attribute__((swift_name("activityState")));
@property (readonly) int64_t currentFloorLevelId __attribute__((swift_name("currentFloorLevelId")));
@property (readonly) VpsBaseEventWiFiObservation * _Nullable currentWiFiObservation __attribute__((swift_name("currentWiFiObservation")));
@property (readonly) VpsBaseEventWiFiScan * _Nullable currentWiFiScan __attribute__((swift_name("currentWiFiScan")));
@property (readonly) VpsCoordinateF *position __attribute__((swift_name("position")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) VpsOutputSignalPositionStatus *status __attribute__((swift_name("status")));
@property (readonly) float std __attribute__((swift_name("std")));
@property (readonly) BOOL trustedPosition __attribute__((swift_name("trustedPosition")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.PositionActivityState")))
@interface VpsOutputSignalPositionActivityState : VpsKotlinEnum<VpsOutputSignalPositionActivityState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VpsOutputSignalPositionActivityStateCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) VpsOutputSignalPositionActivityState *active __attribute__((swift_name("active")));
@property (class, readonly) VpsOutputSignalPositionActivityState *idle __attribute__((swift_name("idle")));
@property (class, readonly) VpsOutputSignalPositionActivityState *stairs __attribute__((swift_name("stairs")));
+ (VpsKotlinArray<VpsOutputSignalPositionActivityState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsOutputSignalPositionActivityState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.PositionActivityStateCompanion")))
@interface VpsOutputSignalPositionActivityStateCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalPositionActivityStateCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
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
@property (class, readonly) VpsOutputSignalPositionStatus *outOfBounds __attribute__((swift_name("outOfBounds")));
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
- (instancetype)initWithSessionId:(NSString *)sessionId index:(int32_t)index __attribute__((swift_name("init(sessionId:index:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalRescueModeSignalCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t index __attribute__((swift_name("index")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
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
- (instancetype)initWithSessionId:(NSString *)sessionId heading:(float)heading __attribute__((swift_name("init(sessionId:heading:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalRotationCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float heading __attribute__((swift_name("heading")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
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
- (instancetype)initWithSessionId:(NSString *)sessionId angle:(float)angle particleFilterRotationDeviationAngle:(float)particleFilterRotationDeviationAngle shiftAngle:(float)shiftAngle orientationFilterOffset:(float)orientationFilterOffset __attribute__((swift_name("init(sessionId:angle:particleFilterRotationDeviationAngle:shiftAngle:orientationFilterOffset:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalRotationDeviationAngleCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float angle __attribute__((swift_name("angle")));
@property (readonly) float orientationFilterOffset __attribute__((swift_name("orientationFilterOffset")));
@property (readonly) float particleFilterRotationDeviationAngle __attribute__((swift_name("particleFilterRotationDeviationAngle")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) float shiftAngle __attribute__((swift_name("shiftAngle")));
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
__attribute__((swift_name("OutputSignal.Source")))
@interface VpsOutputSignalSource : VpsKotlinEnum<VpsOutputSignalSource *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VpsOutputSignalSourceCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) VpsOutputSignalSource *undefined __attribute__((swift_name("undefined")));
@property (class, readonly) VpsOutputSignalSource *gps __attribute__((swift_name("gps")));
@property (class, readonly) VpsOutputSignalSource *galileo __attribute__((swift_name("galileo")));
@property (class, readonly) VpsOutputSignalSource *beidou __attribute__((swift_name("beidou")));
@property (class, readonly) VpsOutputSignalSource *glonass __attribute__((swift_name("glonass")));
@property (class, readonly) VpsOutputSignalSource *allAvailableConstellations __attribute__((swift_name("allAvailableConstellations")));
@property (class, readonly) VpsOutputSignalSource *combinationOfConstellations __attribute__((swift_name("combinationOfConstellations")));
@property (class, readonly) VpsOutputSignalSource *androidInternal __attribute__((swift_name("androidInternal")));
@property (class, readonly) VpsOutputSignalSource *tt2Ins __attribute__((swift_name("tt2Ins")));
@property (class, readonly) VpsOutputSignalSource *tt2Fusion __attribute__((swift_name("tt2Fusion")));
+ (VpsKotlinArray<VpsOutputSignalSource *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsOutputSignalSource *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.SourceCompanion")))
@interface VpsOutputSignalSourceCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalSourceCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("OutputSignal.SpeedCalibration")))
@interface VpsOutputSignalSpeedCalibration : VpsOutputSignal
@property (class, readonly, getter=companion) VpsOutputSignalSpeedCalibrationCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *profileId __attribute__((swift_name("profileId")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.SpeedCalibrationCompanion")))
@interface VpsOutputSignalSpeedCalibrationCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalSpeedCalibrationCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.SpeedCalibrationFailure")))
@interface VpsOutputSignalSpeedCalibrationFailure : VpsOutputSignalSpeedCalibration
- (instancetype)initWithSessionId:(NSString *)sessionId timestamp:(int64_t)timestamp profileId:(NSString *)profileId message:(NSString *)message __attribute__((swift_name("init(sessionId:timestamp:profileId:message:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.SpeedCalibrationSuccess")))
@interface VpsOutputSignalSpeedCalibrationSuccess : VpsOutputSignalSpeedCalibration
- (instancetype)initWithSessionId:(NSString *)sessionId timestamp:(int64_t)timestamp profileId:(NSString *)profileId speedFactor:(float)speedFactor mlModelName:(NSString *)mlModelName __attribute__((swift_name("init(sessionId:timestamp:profileId:speedFactor:mlModelName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *mlModelName __attribute__((swift_name("mlModelName")));
@property (readonly) float speedFactor __attribute__((swift_name("speedFactor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.SyncSignal")))
@interface VpsOutputSignalSyncSignal : VpsOutputSignal
- (instancetype)initWithSessionId:(NSString *)sessionId from_position:(VpsCoordinateF *)from_position to_position:(VpsCoordinateF *)to_position correct_aisle:(VpsBoolean * _Nullable)correct_aisle __attribute__((swift_name("init(sessionId:from_position:to_position:correct_aisle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalSyncSignalCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsBoolean * _Nullable correct_aisle __attribute__((swift_name("correct_aisle")));
@property (readonly) VpsCoordinateF *from_position __attribute__((swift_name("from_position")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
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
@property (class, readonly) VpsOutputSignalType *clusterSwap __attribute__((swift_name("clusterSwap")));
@property (class, readonly) VpsOutputSignalType *consistencyScore __attribute__((swift_name("consistencyScore")));
@property (class, readonly) VpsOutputSignalType *speedCalibration __attribute__((swift_name("speedCalibration")));
@property (class, readonly) VpsOutputSignalType *modePrediction __attribute__((swift_name("modePrediction")));
@property (class, readonly) VpsOutputSignalType *clearMlHistory __attribute__((swift_name("clearMlHistory")));
@property (class, readonly) VpsOutputSignalType *userInfo __attribute__((swift_name("userInfo")));
@property (class, readonly) VpsOutputSignalType *magnetometerMapData __attribute__((swift_name("magnetometerMapData")));
@property (class, readonly) VpsOutputSignalType *observation __attribute__((swift_name("observation")));
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
- (instancetype)initWithSessionId:(NSString *)sessionId position:(VpsCoordinateF *)position std:(float)std status:(VpsOutputSignalUXPositionStatus *)status __attribute__((swift_name("init(sessionId:position:std:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalUXPositionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsCoordinateF *position __attribute__((swift_name("position")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
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

__attribute__((swift_name("OutputSignalUserInfoSignal")))
@protocol VpsOutputSignalUserInfoSignal
@required
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("OutputSignal.UserInfo")))
@interface VpsOutputSignalUserInfo : VpsOutputSignal <VpsOutputSignalUserInfoSignal>
@property (class, readonly, getter=companion) VpsOutputSignalUserInfoCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.UserInfoCompanion")))
@interface VpsOutputSignalUserInfoCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalUserInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.UserInfoGnssAttackInfo")))
@interface VpsOutputSignalUserInfoGnssAttackInfo : VpsOutputSignalUserInfo
- (instancetype)initWithSessionId:(NSString *)sessionId timestamp:(int64_t)timestamp message:(NSString *)message attacks:(NSArray<VpsGNSSAttack *> *)attacks __attribute__((swift_name("init(sessionId:timestamp:message:attacks:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalUserInfoGnssAttackInfoCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<VpsGNSSAttack *> *attacks __attribute__((swift_name("attacks")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.UserInfoGnssAttackInfoCompanion")))
@interface VpsOutputSignalUserInfoGnssAttackInfoCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalUserInfoGnssAttackInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.UserInfoInsStatus")))
@interface VpsOutputSignalUserInfoInsStatus : VpsOutputSignalUserInfo
- (instancetype)initWithSessionId:(NSString *)sessionId timestamp:(int64_t)timestamp message:(NSString *)message isReady:(BOOL)isReady __attribute__((swift_name("init(sessionId:timestamp:message:isReady:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalUserInfoInsStatusCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isReady __attribute__((swift_name("isReady")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.UserInfoInsStatusCompanion")))
@interface VpsOutputSignalUserInfoInsStatusCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalUserInfoInsStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.UserInfoStatus")))
@interface VpsOutputSignalUserInfoStatus : VpsOutputSignalUserInfo
- (instancetype)initWithSessionId:(NSString *)sessionId timestamp:(int64_t)timestamp message:(NSString *)message hasGyroTempMapping:(BOOL)hasGyroTempMapping __attribute__((swift_name("init(sessionId:timestamp:message:hasGyroTempMapping:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalUserInfoStatusCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL hasGyroTempMapping __attribute__((swift_name("hasGyroTempMapping")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.UserInfoStatusCompanion")))
@interface VpsOutputSignalUserInfoStatusCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalUserInfoStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.UserInfoVPSError")))
@interface VpsOutputSignalUserInfoVPSError : VpsOutputSignalUserInfo
- (instancetype)initWithSessionId:(NSString *)sessionId timestamp:(int64_t)timestamp message:(NSString *)message exception:(VpsKotlinException * _Nullable)exception error:(VpsKotlinError * _Nullable)error stacktrace:(NSString * _Nullable)stacktrace __attribute__((swift_name("init(sessionId:timestamp:message:exception:error:stacktrace:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalUserInfoVPSErrorCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsKotlinError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) VpsKotlinException * _Nullable exception __attribute__((swift_name("exception")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) NSString * _Nullable stacktrace __attribute__((swift_name("stacktrace")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.UserInfoVPSErrorCompanion")))
@interface VpsOutputSignalUserInfoVPSErrorCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsOutputSignalUserInfoVPSErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputSignal.WiFiFloorChangeSignal")))
@interface VpsOutputSignalWiFiFloorChangeSignal : VpsOutputSignal
- (instancetype)initWithSessionId:(NSString *)sessionId floorLevelId:(VpsLong * _Nullable)floorLevelId __attribute__((swift_name("init(sessionId:floorLevelId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsOutputSignalWiFiFloorChangeSignalCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VpsLong * _Nullable floorLevelId __attribute__((swift_name("floorLevelId")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
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
__attribute__((swift_name("StepSurfaceType")))
@interface VpsStepSurfaceType : VpsKotlinEnum<VpsStepSurfaceType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VpsStepSurfaceTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) VpsStepSurfaceType *nonstairs __attribute__((swift_name("nonstairs")));
@property (class, readonly) VpsStepSurfaceType *stairs __attribute__((swift_name("stairs")));
+ (VpsKotlinArray<VpsStepSurfaceType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsStepSurfaceType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StepSurfaceType.Companion")))
@interface VpsStepSurfaceTypeCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsStepSurfaceTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StepType")))
@interface VpsStepType : VpsKotlinEnum<VpsStepType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VpsStepTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) VpsStepType *walking __attribute__((swift_name("walking")));
@property (class, readonly) VpsStepType *stairs __attribute__((swift_name("stairs")));
+ (VpsKotlinArray<VpsStepType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsStepType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StepType.Companion")))
@interface VpsStepTypeCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsStepTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
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

__attribute__((swift_name("ADModel")))
@protocol VpsADModel
@required
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (VpsADModelOutput * _Nullable)onInputGnssData:(VpsKotlinArray<VpsKotlinFloatArray *> *)gnssData maskData:(VpsKotlinArray<VpsKotlinFloatArray *> *)maskData bands:(NSArray<VpsGNSSBand *> *)bands timeDimension:(int32_t)timeDimension __attribute__((swift_name("onInput(gnssData:maskData:bands:timeDimension:)")));
@property (readonly) VpsADModelParams *params __attribute__((swift_name("params")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ADModelParams")))
@interface VpsADModelParams : VpsBase
- (instancetype)initWithFeatureEntries:(NSArray<VpsDataType *> *)featureEntries bands:(NSArray<VpsGNSSBand *> *)bands indicators:(NSArray<VpsIndicator *> *)indicators timeDimension:(int32_t)timeDimension minInputSize:(int32_t)minInputSize healthyCountThreshold:(int32_t)healthyCountThreshold __attribute__((swift_name("init(featureEntries:bands:indicators:timeDimension:minInputSize:healthyCountThreshold:)"))) __attribute__((objc_designated_initializer));
- (VpsADModelParams *)doCopyFeatureEntries:(NSArray<VpsDataType *> *)featureEntries bands:(NSArray<VpsGNSSBand *> *)bands indicators:(NSArray<VpsIndicator *> *)indicators timeDimension:(int32_t)timeDimension minInputSize:(int32_t)minInputSize healthyCountThreshold:(int32_t)healthyCountThreshold __attribute__((swift_name("doCopy(featureEntries:bands:indicators:timeDimension:minInputSize:healthyCountThreshold:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *bandNames __attribute__((swift_name("bandNames")));
@property (readonly) NSArray<VpsGNSSBand *> *bands __attribute__((swift_name("bands")));
@property (readonly) NSArray<VpsDataType *> *featureEntries __attribute__((swift_name("featureEntries")));
@property (readonly) int32_t healthyCountThreshold __attribute__((swift_name("healthyCountThreshold")));
@property (readonly) NSArray<VpsIndicator *> *indicators __attribute__((swift_name("indicators")));
@property (readonly) int32_t minInputSize __attribute__((swift_name("minInputSize")));
@property (readonly) int32_t timeDimension __attribute__((swift_name("timeDimension")));
@end

__attribute__((swift_name("ModeClassifierModel")))
@protocol VpsModeClassifierModel
@required
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onFlush __attribute__((swift_name("onFlush()")));
- (void)onInputData__:(VpsTensor *)data __attribute__((swift_name("onInput(data__:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)setHandlerHandler:(id<VpsModeClassifierModelHandler> _Nullable)handler __attribute__((swift_name("setHandler(handler:)")));
@property (readonly) VpsModeClassifierModelParams *params __attribute__((swift_name("params")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModeClassifierModelParams")))
@interface VpsModeClassifierModelParams : VpsBase
- (instancetype)initWithBatchComputeSize:(int32_t)batchComputeSize windowSize:(int32_t)windowSize smoothing:(BOOL)smoothing featureSequence:(NSArray<VpsModeClassifierModelParamsFeaturesEntries *> *)featureSequence __attribute__((swift_name("init(batchComputeSize:windowSize:smoothing:featureSequence:)"))) __attribute__((objc_designated_initializer));
- (VpsModeClassifierModelParams *)doCopyBatchComputeSize:(int32_t)batchComputeSize windowSize:(int32_t)windowSize smoothing:(BOOL)smoothing featureSequence:(NSArray<VpsModeClassifierModelParamsFeaturesEntries *> *)featureSequence __attribute__((swift_name("doCopy(batchComputeSize:windowSize:smoothing:featureSequence:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t batchComputeSize __attribute__((swift_name("batchComputeSize")));
@property (readonly) NSArray<VpsModeClassifierModelParamsFeaturesEntries *> *featureSequence __attribute__((swift_name("featureSequence")));
@property (readonly) BOOL smoothing __attribute__((swift_name("smoothing")));
@property (readonly) int32_t windowSize __attribute__((swift_name("windowSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModeClassifierModelParams.FeaturesEntries")))
@interface VpsModeClassifierModelParamsFeaturesEntries : VpsKotlinEnum<VpsModeClassifierModelParamsFeaturesEntries *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsModeClassifierModelParamsFeaturesEntries *gx __attribute__((swift_name("gx")));
@property (class, readonly) VpsModeClassifierModelParamsFeaturesEntries *gy __attribute__((swift_name("gy")));
@property (class, readonly) VpsModeClassifierModelParamsFeaturesEntries *gz __attribute__((swift_name("gz")));
@property (class, readonly) VpsModeClassifierModelParamsFeaturesEntries *ax __attribute__((swift_name("ax")));
@property (class, readonly) VpsModeClassifierModelParamsFeaturesEntries *ay __attribute__((swift_name("ay")));
@property (class, readonly) VpsModeClassifierModelParamsFeaturesEntries *az __attribute__((swift_name("az")));
+ (VpsKotlinArray<VpsModeClassifierModelParamsFeaturesEntries *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsModeClassifierModelParamsFeaturesEntries *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("NLModel")))
@protocol VpsNLModel
@required
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (VpsNLModelOutput * _Nullable)onInputData___:(VpsTensor *)data __attribute__((swift_name("onInput(data___:)")));
- (void)setFloorLevelHandlerFloorLevelHandler:(VpsFloorLevelHandler * _Nullable)floorLevelHandler __attribute__((swift_name("setFloorLevelHandler(floorLevelHandler:)")));
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

__attribute__((swift_name("NorthPredictorModel")))
@protocol VpsNorthPredictorModel
@required
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (VpsKotlinFloatArray * _Nullable)onInputData____:(NSDictionary<NSString *, id> *)data __attribute__((swift_name("onInput(data____:)")));
@end

__attribute__((swift_name("VelocityModel")))
@protocol VpsVelocityModel
@required
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)onExit __attribute__((swift_name("onExit()")));
- (void)onFlush __attribute__((swift_name("onFlush()")));
- (void)onInputData__:(VpsTensor *)data __attribute__((swift_name("onInput(data__:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)setHandlerHandler_:(id<VpsVelocityModelHandler> _Nullable)handler __attribute__((swift_name("setHandler(handler_:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
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
__attribute__((swift_name("TrustedPositionParams")))
@interface VpsTrustedPositionParams : VpsBase
- (instancetype)initWithVersion:(VpsTrustedPositionParamsVersion *)version dt:(float)dt trustedLimitSec:(int32_t)trustedLimitSec clusterSwapCoolDownSec:(int32_t)clusterSwapCoolDownSec rescueModeCoolDownSec:(int32_t)rescueModeCoolDownSec stdLimit:(float)stdLimit stdLimitLarge:(float)stdLimitLarge particleTrendLimit:(float)particleTrendLimit consistencyScoreLimit:(float)consistencyScoreLimit stepsSinceSprinkleLimit:(int32_t)stepsSinceSprinkleLimit clusterSwapCoolDownSecOOB:(int32_t)clusterSwapCoolDownSecOOB trustedLimitSecOOB:(int32_t)trustedLimitSecOOB stdLimitOOB:(float)stdLimitOOB particleTrendLimitOOB:(float)particleTrendLimitOOB __attribute__((swift_name("init(version:dt:trustedLimitSec:clusterSwapCoolDownSec:rescueModeCoolDownSec:stdLimit:stdLimitLarge:particleTrendLimit:consistencyScoreLimit:stepsSinceSprinkleLimit:clusterSwapCoolDownSecOOB:trustedLimitSecOOB:stdLimitOOB:particleTrendLimitOOB:)"))) __attribute__((objc_designated_initializer));
- (VpsTrustedPositionParams *)doCopyVersion:(VpsTrustedPositionParamsVersion *)version dt:(float)dt trustedLimitSec:(int32_t)trustedLimitSec clusterSwapCoolDownSec:(int32_t)clusterSwapCoolDownSec rescueModeCoolDownSec:(int32_t)rescueModeCoolDownSec stdLimit:(float)stdLimit stdLimitLarge:(float)stdLimitLarge particleTrendLimit:(float)particleTrendLimit consistencyScoreLimit:(float)consistencyScoreLimit stepsSinceSprinkleLimit:(int32_t)stepsSinceSprinkleLimit clusterSwapCoolDownSecOOB:(int32_t)clusterSwapCoolDownSecOOB trustedLimitSecOOB:(int32_t)trustedLimitSecOOB stdLimitOOB:(float)stdLimitOOB particleTrendLimitOOB:(float)particleTrendLimitOOB __attribute__((swift_name("doCopy(version:dt:trustedLimitSec:clusterSwapCoolDownSec:rescueModeCoolDownSec:stdLimit:stdLimitLarge:particleTrendLimit:consistencyScoreLimit:stepsSinceSprinkleLimit:clusterSwapCoolDownSecOOB:trustedLimitSecOOB:stdLimitOOB:particleTrendLimitOOB:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, NSString *> *)map __attribute__((swift_name("map()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t clusterSwapCoolDown __attribute__((swift_name("clusterSwapCoolDown")));
@property (readonly) int32_t clusterSwapCoolDownOOB __attribute__((swift_name("clusterSwapCoolDownOOB")));
@property (readonly) int32_t clusterSwapCoolDownSec __attribute__((swift_name("clusterSwapCoolDownSec")));
@property (readonly) int32_t clusterSwapCoolDownSecOOB __attribute__((swift_name("clusterSwapCoolDownSecOOB")));
@property (readonly) float consistencyScoreLimit __attribute__((swift_name("consistencyScoreLimit")));
@property (readonly) float dt __attribute__((swift_name("dt")));
@property (readonly) float particleTrendLimit __attribute__((swift_name("particleTrendLimit")));
@property (readonly) float particleTrendLimitOOB __attribute__((swift_name("particleTrendLimitOOB")));
@property (readonly) int32_t rescueModeCoolDown __attribute__((swift_name("rescueModeCoolDown")));
@property (readonly) int32_t rescueModeCoolDownSec __attribute__((swift_name("rescueModeCoolDownSec")));
@property (readonly) float stdLimit __attribute__((swift_name("stdLimit")));
@property (readonly) float stdLimitLarge __attribute__((swift_name("stdLimitLarge")));
@property (readonly) float stdLimitOOB __attribute__((swift_name("stdLimitOOB")));
@property (readonly) int32_t stepsSinceSprinkleLimit __attribute__((swift_name("stepsSinceSprinkleLimit")));
@property (readonly) int32_t trustedLimit __attribute__((swift_name("trustedLimit")));
@property (readonly) int32_t trustedLimitOOB __attribute__((swift_name("trustedLimitOOB")));
@property (readonly) int32_t trustedLimitSec __attribute__((swift_name("trustedLimitSec")));
@property (readonly) int32_t trustedLimitSecOOB __attribute__((swift_name("trustedLimitSecOOB")));
@property (readonly) VpsTrustedPositionParamsVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrustedPositionParams.Version")))
@interface VpsTrustedPositionParamsVersion : VpsKotlinEnum<VpsTrustedPositionParamsVersion *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VpsTrustedPositionParamsVersion *default_ __attribute__((swift_name("default_")));
@property (class, readonly) VpsTrustedPositionParamsVersion *pda __attribute__((swift_name("pda")));
+ (VpsKotlinArray<VpsTrustedPositionParamsVersion *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsTrustedPositionParamsVersion *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VPSTrustedPositionParams")))
@interface VpsVPSTrustedPositionParams : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vPSTrustedPositionParams __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsVPSTrustedPositionParams *shared __attribute__((swift_name("shared")));
@property (readonly, getter=default) VpsTrustedPositionParams *default_ __attribute__((swift_name("default_")));
@property (readonly) VpsTrustedPositionParams *trustedPositionPDA __attribute__((swift_name("trustedPositionPDA")));
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
- (VpsCoordinateF *)toCoordinateF __attribute__((swift_name("toCoordinateF()")));
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


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Zone")))
@interface VpsZone : VpsBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name coordinates:(NSArray<NSArray<NSArray<VpsDouble *> *> *> *)coordinates point:(VpsCoordinateF *)point type:(VpsZoneType *)type __attribute__((swift_name("init(id:name:coordinates:point:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VpsZoneCompanion *companion __attribute__((swift_name("companion")));
- (VpsZone *)doCopyId:(NSString *)id name:(NSString *)name coordinates:(NSArray<NSArray<NSArray<VpsDouble *> *> *> *)coordinates point:(VpsCoordinateF *)point type:(VpsZoneType *)type __attribute__((swift_name("doCopy(id:name:coordinates:point:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSArray<NSArray<VpsDouble *> *> *> *coordinates __attribute__((swift_name("coordinates")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) VpsCoordinateF *point __attribute__((swift_name("point")));
@property (readonly) VpsZoneType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Zone.Companion")))
@interface VpsZoneCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsZoneCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Zone.Type_")))
@interface VpsZoneType : VpsKotlinEnum<VpsZoneType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VpsZoneTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) VpsZoneType *enterExit __attribute__((swift_name("enterExit")));
@property (class, readonly) VpsZoneType *final __attribute__((swift_name("final")));
+ (VpsKotlinArray<VpsZoneType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VpsZoneType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Zone.Type_Companion")))
@interface VpsZoneTypeCompanion : VpsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VpsZoneTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<VpsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(VpsKotlinArray<id<VpsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
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
- (double)amax __attribute__((swift_name("amax()")));
- (double)amin __attribute__((swift_name("amin()")));
- (VpsKotlinDoubleArray *)divDivisor:(double)divisor __attribute__((swift_name("div(divisor:)")));
- (VpsKotlinDoubleArray *)divScalar:(double)scalar __attribute__((swift_name("div(scalar:)")));
- (VpsKotlinDoubleArray *)divOther:(VpsKotlinDoubleArray *)other __attribute__((swift_name("div(other:)")));
- (void)divAssignScalar:(double)scalar __attribute__((swift_name("divAssign(scalar:)")));
- (void)divAssignOther:(VpsKotlinDoubleArray *)other __attribute__((swift_name("divAssign(other:)")));
- (double)dotV:(VpsKotlinDoubleArray *)v __attribute__((swift_name("dot(v:)")));
- (VpsKotlinDoubleArray *)elementwiseOp:(VpsDouble *(^)(VpsDouble *))op __attribute__((swift_name("elementwise(op:)")));
- (VpsKotlinDoubleArray *)elementwiseInplaceOp:(VpsDouble *(^)(VpsDouble *))op __attribute__((swift_name("elementwiseInplace(op:)")));
- (VpsKotlinDoubleArray *)minusOther:(VpsKotlinDoubleArray *)other __attribute__((swift_name("minus(other:)")));
- (VpsKotlinDoubleArray *)minusOther_:(VpsKotlinDoubleArray *)other __attribute__((swift_name("minus(other_:)")));
- (void)minusAssignOther:(VpsKotlinDoubleArray *)other __attribute__((swift_name("minusAssign(other:)")));
- (double)norm3D __attribute__((swift_name("norm3D()")));
- (VpsKotlinDoubleArray *)plusOther:(VpsKotlinDoubleArray *)other __attribute__((swift_name("plus(other:)")));
- (void)plusAssignOther:(VpsKotlinDoubleArray *)other __attribute__((swift_name("plusAssign(other:)")));
- (VpsKotlinDoubleArray *)timesOther:(VpsKotlinDoubleArray *)other __attribute__((swift_name("times(other:)")));
- (VpsKotlinDoubleArray *)timesScalar:(float)scalar __attribute__((swift_name("times(scalar:)")));
- (void)timesAssignScalar:(double)scalar __attribute__((swift_name("timesAssign(scalar:)")));
- (void)timesAssignOther:(VpsKotlinDoubleArray *)other __attribute__((swift_name("timesAssign(other:)")));
- (NSArray<VpsKotlinDoubleArray *> *)toDiagonalMatrix __attribute__((swift_name("toDiagonalMatrix()")));
- (VpsKotlinFloatArray *)toFloatArray __attribute__((swift_name("toFloatArray()")));
- (NSArray<VpsKotlinDoubleArray *> *)toMatrix __attribute__((swift_name("toMatrix()")));
- (NSString *)toPrintString __attribute__((swift_name("toPrintString()")));
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
- (BOOL)allCloseToOther:(VpsKotlinFloatArray * _Nullable)other atol:(float)atol rtol:(float)rtol __attribute__((swift_name("allCloseTo(other:atol:rtol:)")));
- (float)amax __attribute__((swift_name("amax()")));
- (float)amin __attribute__((swift_name("amin()")));
- (int32_t)argMax __attribute__((swift_name("argMax()")));
- (int32_t)argMin __attribute__((swift_name("argMin()")));
- (float)distanceTo2DOther:(VpsKotlinFloatArray *)other __attribute__((swift_name("distanceTo2D(other:)")));
- (VpsKotlinFloatArray *)divScalar:(float)scalar __attribute__((swift_name("div(scalar:)")));
- (VpsKotlinFloatArray *)divOther:(VpsKotlinFloatArray *)other __attribute__((swift_name("div(other:)")));
- (void)divAssignScalar:(float)scalar __attribute__((swift_name("divAssign(scalar:)")));
- (void)divAssignOther:(VpsKotlinFloatArray *)other __attribute__((swift_name("divAssign(other:)")));
- (VpsKotlinFloatArray *)elementwiseOp:(VpsFloat *(^)(VpsFloat *))op __attribute__((swift_name("elementwise(op:)")));
- (VpsKotlinFloatArray *)elementwiseOp:(VpsFloat *(^)(VpsFloat *, VpsFloat *))op other:(VpsKotlinFloatArray *)other __attribute__((swift_name("elementwise(op:other:)")));
- (VpsKotlinFloatArray *)elementwiseInplaceOp:(VpsFloat *(^)(VpsFloat *))op __attribute__((swift_name("elementwiseInplace(op:)")));
- (VpsKotlinFloatArray *)elementwiseInplaceOp:(VpsFloat *(^)(VpsFloat *, VpsFloat *))op other:(VpsKotlinFloatArray *)other __attribute__((swift_name("elementwiseInplace(op:other:)")));
- (VpsKotlinIntArray *)maxRepresentativeResamplingK:(int32_t)k random:(id<VpsRandomNumberGenerator>)random __attribute__((swift_name("maxRepresentativeResampling(k:random:)")));
- (VpsKotlinFloatArray *)minusOther:(VpsKotlinFloatArray *)other __attribute__((swift_name("minus(other:)")));
- (void)minusAssignOther:(VpsKotlinFloatArray *)other __attribute__((swift_name("minusAssign(other:)")));
- (float)norm3D __attribute__((swift_name("norm3D()")));
- (float)normDiffV:(VpsKotlinFloatArray *)v __attribute__((swift_name("normDiff(v:)")));
- (VpsKotlinFloatArray *)normalizeInplace:(BOOL)inplace __attribute__((swift_name("normalize(inplace:)")));
- (VpsKotlinFloatArray *)plusOther:(VpsKotlinFloatArray *)other __attribute__((swift_name("plus(other:)")));
- (void)plusAssignOther:(VpsKotlinFloatArray *)other __attribute__((swift_name("plusAssign(other:)")));
- (float)quatDiffV:(VpsKotlinFloatArray *)v __attribute__((swift_name("quatDiff(v:)")));
- (VpsKotlinFloatArray *)quaternionExtractPitch __attribute__((swift_name("quaternionExtractPitch()")));
- (VpsKotlinFloatArray *)quaternionExtractYaw __attribute__((swift_name("quaternionExtractYaw()")));
- (float)quaternionExtractYawAngle __attribute__((swift_name("quaternionExtractYawAngle()")));
- (VpsKotlinFloatArray *)quaternionInverse __attribute__((swift_name("quaternionInverse()")));
- (VpsKotlinFloatArray *)quaternionMultiplyWithQuaternion:(VpsKotlinFloatArray *)quaternion __attribute__((swift_name("quaternionMultiplyWith(quaternion:)")));
- (VpsKotlinIntArray *)randomChoicesIndicesK:(int32_t)k random:(id<VpsRandomNumberGenerator>)random __attribute__((swift_name("randomChoicesIndices(k:random:)")));
- (NSArray<VpsInt *> *)randomChoicesIndicesOldK:(int32_t)k random:(id<VpsRandomNumberGenerator>)random __attribute__((swift_name("randomChoicesIndicesOld(k:random:)"))) __attribute__((deprecated("Old implementation")));
- (void)setValuesOther:(VpsKotlinFloatArray *)other __attribute__((swift_name("setValues(other:)")));
- (VpsKotlinFloatArray *)timesScalar:(float)scalar __attribute__((swift_name("times(scalar:)")));
- (VpsKotlinFloatArray *)timesOther:(VpsKotlinFloatArray *)other __attribute__((swift_name("times(other:)")));
- (void)timesAssignScalar:(float)scalar __attribute__((swift_name("timesAssign(scalar:)")));
- (void)timesAssignOther:(VpsKotlinFloatArray *)other __attribute__((swift_name("timesAssign(other:)")));
- (VpsKotlinDoubleArray *)toDoubleArray __attribute__((swift_name("toDoubleArray()")));
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

@interface VpsPose (Extensions)
- (NSArray<VpsFloat *> *)toList __attribute__((swift_name("toList()")));
@end

@interface VpsFloorLevelHandler (Extensions)
- (VpsMagneticField *)getMagneticField __attribute__((swift_name("getMagneticField()")));
@end

@interface VpsLocation (Extensions)
- (float)distanceToOther:(VpsLocation *)other __attribute__((swift_name("distanceTo(other:)")));
- (VpsCoordinateD *)toCoordinateD __attribute__((swift_name("toCoordinateD()")));
@end

@interface VpsFlowBuilder (Extensions)
- (VpsFlowBuilder<id> *)addNodeBlock:(VpsNode<id> * _Nullable (^)(void))block __attribute__((swift_name("addNode(block:)")));
- (VpsFlowBuilder<id> *)connectToBlock:(id<VpsFlowConnection> _Nullable (^)(void))block __attribute__((swift_name("connectTo(block:)")));
- (VpsFlowBuilder<id> *)connectToAllBlock:(NSArray<id<VpsFlowConnection>> *(^)(void))block __attribute__((swift_name("connectToAll(block:)")));
@end

@interface VpsFlowConverterBuilder (Extensions)
- (VpsFlowConverterBuilder<id, id> *)SetListenersBlock:(NSArray<id<VpsFlowListener>> *(^)(void))block __attribute__((swift_name("SetListeners(block:)")));
- (VpsFlowConverterBuilder<id, id> *)connectToBlock:(id<VpsFlowConnection> _Nullable (^)(void))block __attribute__((swift_name("connectTo(block:)")));
- (VpsFlowConverterBuilder<id, id> *)connectToAllBlock:(NSArray<id<VpsFlowConnection>> *(^)(void))block __attribute__((swift_name("connectToAll(block:)")));
- (VpsFlowConverterBuilder<id, id> *)setListenerBlock:(id<VpsFlowListener> _Nullable (^)(void))block __attribute__((swift_name("setListener(block:)")));
@end

@interface VpsReplayAngleCorrection (Extensions)
- (VpsInputSignalAngleCorrection *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayCompassHeading (Extensions)
- (VpsInputSignalCompassHeading *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayDeviceInfoTemperature (Extensions)
- (VpsInputSignalDeviceInfoTemperature *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayEnvironmentGyroBiasObservations (Extensions)
- (VpsInputSignalEnvironmentSignalSetGyroBiasObservations *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayEnvironmentSetConstellations (Extensions)
- (VpsInputSignalEnvironmentSignalSetConstellations *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayEnvironmentSetEphemerides (Extensions)
- (VpsInputSignalEnvironmentSignalSetEphemerides *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayEnvironmentSetMagneticField (Extensions)
- (VpsInputSignalEnvironmentSignalSetMagneticField *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayEnvironmentSetMagnetometerCalibration (Extensions)
- (VpsInputSignalEnvironmentSignalSetMagnetometerCalibration *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayExit (Extensions)
- (VpsInputSignalExit *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayGnssMeasurements (Extensions)
- (VpsInputSignalGnssMeasurements *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayGnssNavigationMessage (Extensions)
- (VpsInputSignalGnssNavigationMessage *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayGyroCalibration (Extensions)
- (VpsInputSignalGyroCalibration *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayLngLat (Extensions)
- (VpsInputSignalLngLat *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayMagnetometerCalibration (Extensions)
- (VpsInputSignalManualMagnetometerCalibration *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplaySensorData (Extensions)
- (VpsInputSignalSensorData *)toInputSignalSensorTypeName:(NSString *)sensorTypeName __attribute__((swift_name("toInputSignal(sensorTypeName:)")));
@end

@interface VpsReplaySetProfile (Extensions)
- (VpsInputSignalSetProfile *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplaySpeedCalibration (Extensions)
- (VpsInputSignalSpeedCalibration *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayStartLngLat (Extensions)
- (VpsInputSignalStart *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayStartLngLatFixedNorth (Extensions)
- (VpsInputSignalStart *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayStartPosition (Extensions)
- (VpsInputSignalStart *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplayStartQuickStart (Extensions)
- (VpsInputSignalStart *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplaySyncForce (Extensions)
- (VpsInputSignalSyncForce *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplaySyncGNSS (Extensions)
- (VpsInputSignalSyncGNSSSync *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplaySyncLngLat (Extensions)
- (VpsInputSignalSyncLngLat *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplaySyncManual (Extensions)
- (VpsInputSignalSyncManualSync *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplaySyncPosition (Extensions)
- (VpsInputSignalSyncPosition *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsReplaySyncStop (Extensions)
- (VpsInputSignalSyncStop *)toInputSignal __attribute__((swift_name("toInputSignal()")));
@end

@interface VpsBaseEventWiFiScan (Extensions)
- (void)setAPCoordinatesAccessPoints:(NSArray<VpsAccessPoint *> *)accessPoints __attribute__((swift_name("setAPCoordinates(accessPoints:)")));
@end

@interface VpsBaseEventWifiStatusUpdate (Extensions)
- (void)setAPCoordinateAccessPoints:(NSArray<VpsAccessPoint *> *)accessPoints __attribute__((swift_name("setAPCoordinate(accessPoints:)")));
@end

@interface VpsInputSignalAngleCorrection (Extensions)
- (VpsBaseEventAngleCorrectionEvent *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
- (VpsReplayAngleCorrection *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalCompassHeading (Extensions)
- (VpsBaseEventCompassHeadingEvent *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
- (VpsReplayCompassHeading *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalDeviceInfoTemperature (Extensions)
- (VpsReplayDeviceInfoTemperature *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalEnvironmentSignalSetConstellations (Extensions)
- (VpsBaseEventSetConstellationsEvent *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
- (VpsReplayEnvironmentSetConstellations *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalEnvironmentSignalSetEphemerides (Extensions)
- (VpsReplayEnvironmentSetEphemerides *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalEnvironmentSignalSetGyroBiasObservations (Extensions)
- (VpsKotlinPair<VpsKotlinDoubleArray *, NSArray<VpsKotlinDoubleArray *> *> *)extractDataTempSource:(NSString * _Nullable)tempSource __attribute__((swift_name("extractData(tempSource:)")));
- (VpsReplayEnvironmentGyroBiasObservations *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalEnvironmentSignalSetMagneticField (Extensions)
- (VpsReplayEnvironmentSetMagneticField *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalEnvironmentSignalSetMagnetometerCalibration (Extensions)
- (VpsReplayEnvironmentSetMagnetometerCalibration *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalExit (Extensions)
- (VpsReplayExit *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalFloorChange (Extensions)
- (VpsBaseEventFloorChangeEvent *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
- (VpsReplayFloorChange *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalGnssMeasurements (Extensions)
- (VpsBaseEventGnssMeasurementEvent *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
- (VpsReplayGnssMeasurements *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalGnssNavigationMessage (Extensions)
- (VpsReplayGnssNavigationMessage *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalGyroCalibration (Extensions)
- (VpsBaseEventGyroCalibrationEvent *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
- (VpsReplayGyroCalibration *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalLngLat (Extensions)
- (VpsBaseEventLngLatEvent *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
- (VpsReplayLngLat *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalManualMagnetometerCalibration (Extensions)
- (VpsBaseEventMagnetometerCalibrationEvent *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
- (VpsReplayMagnetometerCalibration *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalSensorData (Extensions)
- (VpsReplaySensorData *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalSetProfile (Extensions)
- (VpsReplaySetProfile *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalSpeedCalibration (Extensions)
- (VpsReplaySpeedCalibration *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalStairInfo (Extensions)
- (VpsBaseEventStairEvent *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
@end

@interface VpsInputSignalStairPrediction (Extensions)
- (VpsBaseEventStairPredictionEvent *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
@end

@interface VpsInputSignalStart (Extensions)
- (VpsBaseEventStart *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
@property (readonly) float angle_ __attribute__((swift_name("angle_")));
@end

@interface VpsInputSignalStartLngLat (Extensions)
- (VpsReplayStartLngLat *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalStartLngLatFixedNorth (Extensions)
- (VpsReplayStartLngLatFixedNorth *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalStartPosition (Extensions)
- (VpsReplayStartPosition *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalStartQuickStart (Extensions)
- (VpsReplayStartQuickStart *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalSync (Extensions)
- (VpsBaseEventSync *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
@end

@interface VpsInputSignalSyncForce (Extensions)
- (VpsReplaySyncForce *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalSyncGNSSSync (Extensions)
- (VpsReplaySyncGNSS *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalSyncLngLat (Extensions)
- (VpsReplaySyncLngLat *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalSyncManualSync (Extensions)
- (VpsReplaySyncManual *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalSyncPosition (Extensions)
- (VpsBaseEventSyncPositionEvent *)toBaseEvent_ __attribute__((swift_name("toBaseEvent_()")));
- (VpsReplaySyncPosition *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalSyncStop (Extensions)
- (VpsReplaySyncStop *)toReplayData __attribute__((swift_name("toReplayData()")));
@end

@interface VpsInputSignalWifiScan (Extensions)
- (VpsBaseEventWiFiScan *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
@end

@interface VpsInputSignalWifiStatus (Extensions)
- (VpsBaseEventWifiStatusUpdate *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
@end

@interface VpsOutputSignalMagnetometerMapData (Extensions)
- (VpsMagnetometerMapDataReading *)toReading __attribute__((swift_name("toReading()")));
@end

@interface VpsSwapLocation (Extensions)
- (BOOL)isPointingToAnotherSwapLocationSwapLocationToId:(int64_t)swapLocationToId __attribute__((swift_name("isPointingToAnotherSwapLocation(swapLocationToId:)")));
- (BOOL)isPointingToFloorLevelIdFloorLevelId:(int64_t)floorLevelId __attribute__((swift_name("isPointingToFloorLevelId(floorLevelId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BinaryOpsKt")))
@interface VpsBinaryOpsKt : VpsBase
+ (VpsKotlinFloatArray *)maxArr1:(VpsKotlinFloatArray *)arr1 arr2:(VpsKotlinFloatArray *)arr2 __attribute__((swift_name("max(arr1:arr2:)")));
+ (VpsKotlinFloatArray *)minArr1:(VpsKotlinFloatArray *)arr1 arr2:(VpsKotlinFloatArray *)arr2 __attribute__((swift_name("min(arr1:arr2:)")));
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
+ (double)wrapToRange:(double)receiver min:(double)min max:(double)max __attribute__((swift_name("wrapToRange(_:min:max:)")));
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
+ (float)mod:(float)receiver divisor:(float)divisor __attribute__((swift_name("mod(_:divisor:)")));
+ (float)radiansToDegrees:(float)receiver __attribute__((swift_name("radiansToDegrees(_:)")));
+ (float)wrapToRange:(float)receiver min:(float)min max:(float)max __attribute__((swift_name("wrapToRange(_:min:max:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenKt")))
@interface VpsGenKt : VpsBase
+ (NSArray<VpsKotlinDoubleArray *> *)diagMatrixDiag:(double)diag n:(int32_t)n __attribute__((swift_name("diagMatrix(diag:n:)")));
+ (NSArray<VpsKotlinDoubleArray *> *)diagMatrixDiag:(VpsKotlinDoubleArray *)diag n_:(int32_t)n __attribute__((swift_name("diagMatrix(diag:n_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IntExtKt")))
@interface VpsIntExtKt : VpsBase
+ (int32_t)modFloor:(int32_t)receiver divisor:(int32_t)divisor __attribute__((swift_name("modFloor(_:divisor:)")));
+ (double)pixelsToMeters:(int32_t)receiver pixelsPerMeters:(double)pixelsPerMeters __attribute__((swift_name("pixelsToMeters(_:pixelsPerMeters:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListExtKt")))
@interface VpsListExtKt : VpsBase
+ (float)alreadySortedListMedian:(NSArray<VpsFloat *> *)receiver __attribute__((swift_name("alreadySortedListMedian(_:)")));
+ (NSArray<NSArray<id> *> *)chunkedNice:(NSArray<id> *)receiver n:(int32_t)n __attribute__((swift_name("chunkedNice(_:n:)")));
+ (double)circularMean:(NSArray<VpsFloat *> *)receiver __attribute__((swift_name("circularMean(_:)")));
+ (int32_t)distinctModeOrMedian:(NSArray<VpsInt *> *)receiver __attribute__((swift_name("distinctModeOrMedian(_:)")));
+ (NSArray<VpsZone *> *)filter:(NSArray<VpsZone *> *)receiver type:(VpsZoneType *)type __attribute__((swift_name("filter(_:type:)")));
+ (VpsAccessPoint * _Nullable)findMatchForBssid:(NSArray<VpsAccessPoint *> *)receiver bssid:(NSString *)bssid __attribute__((swift_name("findMatchForBssid(_:bssid:)")));
+ (float)getTotalDistance:(NSMutableArray<VpsKotlinFloatArray *> *)receiver __attribute__((swift_name("getTotalDistance(_:)")));
+ (VpsFloat * _Nullable)max:(NSArray<VpsFloat *> *)receiver __attribute__((swift_name("max(_:)")));
+ (VpsFloat * _Nullable)mean:(NSArray<VpsFloat *> *)receiver __attribute__((swift_name("mean(_:)")));
+ (double)median:(NSArray<VpsDouble *> *)receiver __attribute__((swift_name("median(_:)")));
+ (int32_t)median_:(NSArray<VpsInt *> *)receiver __attribute__((swift_name("median(__:)")));
+ (VpsFloat * _Nullable)median__:(NSMutableArray<VpsFloat *> *)receiver __attribute__((swift_name("median(___:)")));
+ (VpsFloat * _Nullable)nullMean:(NSArray<id> *)receiver __attribute__((swift_name("nullMean(_:)")));
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
+ (VpsKotlinDoubleArray *)convolveA:(VpsKotlinDoubleArray *)a v:(VpsKotlinDoubleArray *)v option:(VpsConvolveOption *)option __attribute__((swift_name("convolve(a:v:option:)")));
+ (NSArray<VpsKotlinDoubleArray *> *)gaussianFilter1DX:(NSArray<VpsKotlinDoubleArray *> *)x sigma:(double)sigma axis:(int32_t)axis truncate:(double)truncate __attribute__((swift_name("gaussianFilter1D(x:sigma:axis:truncate:)")));
+ (VpsKotlinDoubleArray *)gaussianKernel1DSigma:(double)sigma truncate:(double)truncate __attribute__((swift_name("gaussianKernel1D(sigma:truncate:)")));
+ (double)generalDeterminant:(NSArray<VpsKotlinDoubleArray *> *)receiver __attribute__((swift_name("generalDeterminant(_:)")));
+ (NSArray<VpsKotlinDoubleArray *> * _Nullable)inverse4x4Mat:(NSArray<VpsKotlinDoubleArray *> *)mat __attribute__((swift_name("inverse4x4(mat:)")));
+ (NSArray<VpsKotlinDoubleArray *> * _Nullable)invertMatrix:(NSArray<VpsKotlinDoubleArray *> *)matrix __attribute__((swift_name("invert(matrix:)")));
+ (VpsKotlinIntArray * _Nullable)luDecomposeA:(VpsKotlinArray<VpsKotlinDoubleArray *> *)a tol:(double)tol __attribute__((swift_name("luDecompose(a:tol:)")));
+ (VpsKotlinDoubleArray *)luSolveLu:(VpsKotlinArray<VpsKotlinDoubleArray *> *)lu piv:(VpsKotlinIntArray *)piv b:(VpsKotlinDoubleArray *)b __attribute__((swift_name("luSolve(lu:piv:b:)")));
+ (NSArray<VpsKotlinDoubleArray *> *)matmulMatrices:(VpsKotlinArray<NSArray<VpsKotlinDoubleArray *> *> *)matrices __attribute__((swift_name("matmul(matrices:)")));
+ (NSArray<VpsKotlinDoubleArray *> *)matrixAdd:(NSArray<VpsKotlinDoubleArray *> *)receiver other:(NSArray<VpsKotlinDoubleArray *> *)other __attribute__((swift_name("matrixAdd(_:other:)")));
+ (double)matrixDeterminant:(NSArray<VpsKotlinDoubleArray *> *)receiver __attribute__((swift_name("matrixDeterminant(_:)")));
+ (NSArray<VpsKotlinDoubleArray *> *)matrixIdentitySize:(int32_t)size __attribute__((swift_name("matrixIdentity(size:)")));
+ (NSArray<VpsKotlinDoubleArray *> *)matrixMultiplication:(NSArray<VpsKotlinDoubleArray *> *)receiver matrix2:(NSArray<VpsKotlinDoubleArray *> *)matrix2 __attribute__((swift_name("matrixMultiplication(_:matrix2:)")));
+ (NSArray<VpsKotlinDoubleArray *> *)matrixMultiplicationNullable:(NSArray<VpsKotlinDoubleArray *> *)receiver matrix2:(NSArray<VpsKotlinDoubleArray *> * _Nullable)matrix2 __attribute__((swift_name("matrixMultiplicationNullable(_:matrix2:)")));
+ (NSArray<VpsKotlinDoubleArray *> *)matrixSubtract:(NSArray<VpsKotlinDoubleArray *> *)receiver other:(NSArray<VpsKotlinDoubleArray *> *)other __attribute__((swift_name("matrixSubtract(_:other:)")));
+ (NSArray<VpsKotlinDoubleArray *> *)matrixTranspose:(NSArray<VpsKotlinDoubleArray *> *)receiver __attribute__((swift_name("matrixTranspose(_:)")));
+ (double)mean:(NSArray<VpsKotlinDoubleArray *> *)receiver __attribute__((swift_name("mean(_:)")));
+ (NSArray<VpsKotlinDoubleArray *> *)minus:(NSArray<VpsKotlinDoubleArray *> *)receiver other:(NSArray<VpsKotlinDoubleArray *> *)other __attribute__((swift_name("minus(_:other:)")));
+ (double)norm:(NSArray<VpsKotlinDoubleArray *> *)receiver __attribute__((swift_name("norm(_:)")));
+ (NSArray<VpsKotlinDoubleArray *> *)plus:(NSArray<VpsKotlinDoubleArray *> *)receiver other:(NSArray<VpsKotlinDoubleArray *> * _Nullable)other __attribute__((swift_name("plus(_:other:)")));
+ (NSArray<VpsKotlinDoubleArray *> *)pow:(NSArray<VpsKotlinDoubleArray *> *)receiver exponent:(double)exponent __attribute__((swift_name("pow(_:exponent:)")));
+ (VpsKotlinDoubleArray *)reflectPadArray:(VpsKotlinDoubleArray *)array padWidth:(int32_t)padWidth __attribute__((swift_name("reflectPad(array:padWidth:)")));
+ (NSArray<VpsKotlinDoubleArray *> *)scalarMultiply:(NSArray<VpsKotlinDoubleArray *> *)receiver scalar:(double)scalar __attribute__((swift_name("scalarMultiply(_:scalar:)")));
+ (NSArray<VpsKotlinDoubleArray *> *)slice:(NSArray<VpsKotlinDoubleArray *> *)receiver axis:(int32_t)axis indices:(NSArray<VpsInt *> *)indices __attribute__((swift_name("slice(_:axis:indices:)")));
+ (NSArray<VpsKotlinDoubleArray *> *)sqrt:(NSArray<VpsKotlinDoubleArray *> *)receiver __attribute__((swift_name("sqrt(_:)")));
+ (NSArray<VpsKotlinDoubleArray *> *)square:(NSArray<VpsKotlinDoubleArray *> *)receiver __attribute__((swift_name("square(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeRawSensorDataRotationSensorFilterKt")))
@interface VpsNodeRawSensorDataRotationSensorFilterKt : VpsBase
@property (class, readonly) float pi __attribute__((swift_name("pi")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpsKt")))
@interface VpsOpsKt : VpsBase
+ (VpsKotlinDoubleArray *)flatten:(NSArray<VpsKotlinDoubleArray *> *)receiver __attribute__((swift_name("flatten(_:)")));
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
__attribute__((swift_name("SolversKt")))
@interface VpsSolversKt : VpsBase
+ (VpsKotlinDoubleArray * _Nullable)solveLeastSquaresA:(NSArray<VpsKotlinDoubleArray *> *)A b:(VpsKotlinDoubleArray *)b w:(VpsKotlinDoubleArray * _Nullable)w damping:(double)damping __attribute__((swift_name("solveLeastSquares(A:b:w:damping:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AttackUtilsKt")))
@interface VpsAttackUtilsKt : VpsBase
+ (VpsTrend *)lastTrendPoints:(NSArray<VpsKotlinPair<VpsInt *, VpsInt *> *> *)points __attribute__((swift_name("lastTrend(points:)")));
+ (VpsFloat * _Nullable)safeCastDataTypeToFloatValue:(id _Nullable)value dataType:(VpsDataType *)dataType __attribute__((swift_name("safeCastDataTypeToFloat(value:dataType:)")));
+ (void)updateDropIndicatorBand:(VpsGNSSBand *)band series:(NSArray<VpsDouble *> *)series params:(VpsTrendParams *)params indicatorToToggle:(VpsIndicator *)indicatorToToggle currentIndicators:(VpsMutableDictionary<VpsGNSSBand *, VpsMutableSet<VpsIndicator *> *> *)currentIndicators __attribute__((swift_name("updateDropIndicator(band:series:params:indicatorToToggle:currentIndicators:)")));
+ (void)updateRiseIndicatorBand:(VpsGNSSBand *)band series:(NSArray<VpsDouble *> *)series params:(VpsTrendParams *)params indicatorToToggle:(VpsIndicator *)indicatorToToggle currentIndicators:(VpsMutableDictionary<VpsGNSSBand *, VpsMutableSet<VpsIndicator *> *> *)currentIndicators __attribute__((swift_name("updateRiseIndicator(band:series:params:indicatorToToggle:currentIndicators:)")));
@property (class, readonly) VpsMutableDictionary<VpsGNSSBand *, VpsRiseState *> *riseStateByBand __attribute__((swift_name("riseStateByBand")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilsKt")))
@interface VpsUtilsKt : VpsBase
+ (VpsDouble * _Nullable)computePseudoRangeDtRx:(VpsHiResDateTime *)dtRx measurement:(VpsGnssMeasurement *)measurement sv:(id<VpsSatelliteVehicle>)sv __attribute__((swift_name("computePseudoRange(dtRx:measurement:sv:)")));
+ (NSArray<VpsKotlinPair<VpsInt *, VpsInt *> *> *)detectCusumPointsRobustValues:(NSArray<VpsDouble *> *)values kSigma:(double)kSigma hSigma:(double)hSigma win:(int32_t)win minSeparation:(int32_t)minSeparation dwell:(int32_t)dwell __attribute__((swift_name("detectCusumPointsRobust(values:kSigma:hSigma:win:minSeparation:dwell:)")));
+ (VpsKotlinTriple<VpsDouble *, VpsDouble *, VpsDouble *> *)ecefToLlhX:(double)x y:(double)y z:(double)z __attribute__((swift_name("ecefToLlh(x:y:z:)")));
+ (VpsHiResDateTime *)gnssToDateTimeWeek:(int32_t)week toe:(double)toe system:(VpsConstellationType *)system __attribute__((swift_name("gnssToDateTime(week:toe:system:)")));
+ (double)keplerEM:(double)M e:(double)e tol:(double)tol maxIter:(int32_t)maxIter __attribute__((swift_name("keplerE(M:e:tol:maxIter:)")));
+ (double)klobucharDelayLatUDeg:(double)latUDeg lonUDeg:(double)lonUDeg elevRad:(double)elevRad azimRad:(double)azimRad tGpstS:(double)tGpstS alpha:(NSArray<VpsDouble *> *)alpha beta:(NSArray<VpsDouble *> *)beta __attribute__((swift_name("klobucharDelay(latUDeg:lonUDeg:elevRad:azimRad:tGpstS:alpha:beta:)")));
+ (VpsKotlinTriple<VpsDouble *, VpsDouble *, VpsDouble *> *)llhToEcefLat:(double)lat lon:(double)lon h:(double)h __attribute__((swift_name("llhToEcef(lat:lon:h:)")));
+ (VpsKotlinPair<NSArray<id> *, NSArray<id> *> *)rollingMeanStdValues:(NSArray<id> *)values win:(int32_t)win __attribute__((swift_name("rollingMeanStd(values:win:)")));
+ (double)saastamoinenDelayElevRad:(double)elevRad latRad:(double)latRad hM:(double)hM presHpa:(double)presHpa tempK:(double)tempK humiPct:(double)humiPct __attribute__((swift_name("saastamoinenDelay(elevRad:latRad:hM:presHpa:tempK:humiPct:)")));
+ (double)satClockCorrSv:(VpsSatelliteVehicleKeplerian *)sv tTx:(VpsHiResDateTime *)tTx __attribute__((swift_name("satClockCorr(sv:tTx:)")));
+ (VpsKotlinPair<VpsDouble *, VpsDouble *> *)satElevAzimLatUDeg:(double)latUDeg lonUDeg:(double)lonUDeg xu:(double)xu yu:(double)yu zu:(double)zu xs:(double)xs ys:(double)ys zs:(double)zs __attribute__((swift_name("satElevAzim(latUDeg:lonUDeg:xu:yu:zu:xs:ys:zs:)")));
+ (VpsKotlinPair<VpsKotlinDoubleArray *, VpsBoolean *> *)solveLeastSquaresH:(NSArray<VpsKotlinDoubleArray *> *)H v:(VpsKotlinDoubleArray *)v W:(VpsKotlinDoubleArray *)W tol:(double)tol damping:(double)damping __attribute__((swift_name("solveLeastSquares(H:v:W:tol:damping:)")));
+ (NSDictionary<NSString *, VpsDouble *> *)solvePositionECEFMeasSvPairs:(NSArray<VpsKotlinPair<VpsGnssMeasurement *, id<VpsSatelliteVehicle>> *> *)measSvPairs clock:(VpsGnssClock *)clock maxIter:(int32_t)maxIter useWeights:(BOOL)useWeights useElevationMask:(BOOL)useElevationMask allowedReIters:(int32_t)allowedReIters thresholdStdFactor:(double)thresholdStdFactor initGuess:(VpsKotlinTriple<VpsDouble *, VpsDouble *, VpsDouble *> *)initGuess tol:(double)tol resLimit:(double)resLimit refSystem:(VpsConstellationType *)refSystem useDualBand:(BOOL)useDualBand elevationThreshold:(double)elevationThreshold warn:(BOOL)warn __attribute__((swift_name("solvePositionECEF(measSvPairs:clock:maxIter:useWeights:useElevationMask:allowedReIters:thresholdStdFactor:initGuess:tol:resLimit:refSystem:useDualBand:elevationThreshold:warn:)")));
+ (VpsKotlinDoubleArray *)validateWeightsWeights:(VpsKotlinDoubleArray *)weights keepMask:(VpsKotlinBooleanArray *)keepMask __attribute__((swift_name("validateWeights(weights:keepMask:)")));
@property (class, readonly) double C __attribute__((swift_name("C")));
@property (class, readonly) double F_REL __attribute__((swift_name("F_REL")));
@property (class, readonly) double MU_EARTH __attribute__((swift_name("MU_EARTH")));
@property (class, readonly) int64_t NS_PER_S __attribute__((swift_name("NS_PER_S")));
@property (class, readonly) double OMEGA_E __attribute__((swift_name("OMEGA_E")));
@property (class, readonly) NSDictionary<VpsConstellationType *, VpsDouble *> *SYS_OFF_GPS __attribute__((swift_name("SYS_OFF_GPS")));
@property (class, readonly) int64_t WEEK_SEC __attribute__((swift_name("WEEK_SEC")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiMethodsKt")))
@interface VpsWifiMethodsKt : VpsBase
+ (VpsKotlinTriple<VpsKotlinTriple<VpsCoordinateF *, VpsFloat *, VpsFloat *> *, VpsBoolean *, VpsBoolean *> *)computeScanScan:(VpsBaseEventWiFiScan *)scan mapData:(VpsFloorLevelHandler *)mapData currentPosition:(VpsCoordinateF *)currentPosition N:(float)N measuredPower:(int32_t)measuredPower bundleByAPandFrequency:(BOOL)bundleByAPandFrequency rssiThreshold:(int32_t)rssiThreshold strongRssiThreshold:(int32_t)strongRssiThreshold weakRssiThreshold:(int32_t)weakRssiThreshold resolution:(float)resolution nRequiredScans:(int32_t)nRequiredScans __attribute__((swift_name("computeScan(scan:mapData:currentPosition:N:measuredPower:bundleByAPandFrequency:rssiThreshold:strongRssiThreshold:weakRssiThreshold:resolution:nRequiredScans:)")));
+ (float)distanceToApSimpleRssi:(int32_t)rssi N:(float)N measuredPower:(int32_t)measuredPower __attribute__((swift_name("distanceToApSimple(rssi:N:measuredPower:)")));
+ (VpsCoordinateF * _Nullable)getScanPosSimpleScan:(VpsBaseEventWiFiScan *)scan N:(float)N measuredPower:(int32_t)measuredPower __attribute__((swift_name("getScanPosSimple(scan:N:measuredPower:)")));
+ (NSArray<VpsDouble *> *)linspaceStart:(double)start end:(double)end points:(int32_t)points __attribute__((swift_name("linspace(start:end:points:)")));
+ (NSArray<VpsFloat *> *)linspaceStart:(float)start end:(float)end points_:(int32_t)points __attribute__((swift_name("linspace(start:end:points_:)")));
+ (VpsKotlinPair<NSArray<NSArray<VpsFloat *> *> *, NSArray<NSArray<VpsFloat *> *> *> *)meshgridX:(NSArray<VpsFloat *> *)x y:(NSArray<VpsFloat *> *)y __attribute__((swift_name("meshgrid(x:y:)")));
+ (float)weightedAverageValues:(NSArray<VpsFloat *> *)values weights:(NSArray<VpsFloat *> *)weights __attribute__((swift_name("weightedAverage(values:weights:)")));
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

__attribute__((swift_name("KotlinError")))
@interface VpsKotlinError : VpsKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(VpsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VpsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
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
__attribute__((swift_name("KotlinBooleanArray")))
@interface VpsKotlinBooleanArray : VpsBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(VpsBoolean *(^)(VpsInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (BOOL)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (VpsKotlinBooleanIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(BOOL)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
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

__attribute__((swift_name("KotlinBooleanIterator")))
@interface VpsKotlinBooleanIterator : VpsBase <VpsKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VpsBoolean *)next __attribute__((swift_name("next()")));
- (BOOL)nextBoolean __attribute__((swift_name("nextBoolean()")));
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
