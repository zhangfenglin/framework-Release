//
//  AlexStrategyConstants.h
//  Pods
//
//  Created by apus on 2019/6/25.
//

#ifndef AlexStrategyConstants_h
#define AlexStrategyConstants_h

#import <Foundation/Foundation.h>
FOUNDATION_EXPORT NSString *const MyFirstConstant;
FOUNDATION_EXPORT NSString *const MySecondConstant;

// Record
FOUNDATION_EXPORT const NSUInteger kSyncIntervalFirst;
FOUNDATION_EXPORT const NSUInteger kSyncIntervalSecond;
FOUNDATION_EXPORT const NSUInteger kSyncLimitInit;
FOUNDATION_EXPORT const NSUInteger syncLimitMax;
FOUNDATION_EXPORT const NSTimeInterval kRequestSuccessInterval;
FOUNDATION_EXPORT const NSTimeInterval kRequestFailedIntervel;
FOUNDATION_EXPORT const NSUInteger kEventTableMaxCount;
FOUNDATION_EXPORT const NSUInteger kEventTablePackageCount;
FOUNDATION_EXPORT const NSTimeInterval kStateRecordInterval;
FOUNDATION_EXPORT const NSUInteger kRecordPropertyMaxLength;
FOUNDATION_EXPORT const NSUInteger kSidUpdatedInterval;

FOUNDATION_EXPORT NSString *const kChannelId;
FOUNDATION_EXPORT const NSUInteger kRecordVersion;

// Count event
FOUNDATION_EXPORT const double kSaveToStorageDelayInteval;
FOUNDATION_EXPORT const double kSendToStorageDelayInteval;

// Config
FOUNDATION_EXPORT const NSUInteger kCacheCountLimit;
FOUNDATION_EXPORT const NSTimeInterval kPeriodicTimeInterval;

// Active
FOUNDATION_EXPORT const NSUInteger kActiveRequestInterval;
FOUNDATION_EXPORT const NSTimeInterval kBiggestLiveTimeInterval;
FOUNDATION_EXPORT const NSTimeInterval kLogLiveTimeInterval;
// SDK record
FOUNDATION_EXPORT const NSUInteger kAppOpenCloseDurationInterval;
FOUNDATION_EXPORT const NSUInteger kHeartbeatMaxCountPerDay;

FOUNDATION_EXPORT const NSUInteger kSamplingHitPercent;
FOUNDATION_EXPORT const NSUInteger kSamplingHitOnePercent;

FOUNDATION_EXPORT NSString *const kModuleNameOfGame;
FOUNDATION_EXPORT NSString *const kModuleNameOfInner;
FOUNDATION_EXPORT NSString *const kModuleNameOfDefault;
FOUNDATION_EXPORT NSString *const kModuleNameOfADS;

// userdefaults

FOUNDATION_EXPORT NSString *const appVersion;
FOUNDATION_EXPORT NSString *const requestSuccessTime;
FOUNDATION_EXPORT NSString *const requestFailTime;
FOUNDATION_EXPORT NSString *const preActiveResult;
FOUNDATION_EXPORT NSString *const isEEA;
FOUNDATION_EXPORT NSString *const configLastFetchTime;
FOUNDATION_EXPORT NSString *const lastStateRecordTime;
FOUNDATION_EXPORT NSString *const activeRequestTime;
FOUNDATION_EXPORT NSString *const sidUpdateTime;
FOUNDATION_EXPORT NSString *const heartbeatCount;
FOUNDATION_EXPORT NSString *const appOpenLogTime;
FOUNDATION_EXPORT NSString *const heartbeatDate;
FOUNDATION_EXPORT NSString *const isFirstInstall;
FOUNDATION_EXPORT NSString *const isPersonalizedAdAgree;
FOUNDATION_EXPORT NSString *const dimensionsCrc32;
FOUNDATION_EXPORT NSString *const KVdimensionsCrc32;
FOUNDATION_EXPORT NSString *const KVToken;

FOUNDATION_EXPORT NSString *const latency;
FOUNDATION_EXPORT NSString *const requestDuration;
FOUNDATION_EXPORT NSString *const serializationDuration;
FOUNDATION_EXPORT NSString *const dataLength;

FOUNDATION_EXPORT NSString *const kXALAppID;
FOUNDATION_EXPORT NSString *const kFlurryAPIKey;

FOUNDATION_EXPORT NSString *const kRecordAdsURLDefault;
FOUNDATION_EXPORT NSString *const kRecordProductURLDefault;
FOUNDATION_EXPORT NSString *const kReportURLDefault;
FOUNDATION_EXPORT NSString *const kReportAdsQuickVerifyUrl;
FOUNDATION_EXPORT NSString *const kReportProductQuickVerifyUrl;

FOUNDATION_EXPORT NSString *const kSendTableRownID;
FOUNDATION_EXPORT NSString *const kSendTableTokenID;
FOUNDATION_EXPORT NSString *const kSendTableRecordList;
FOUNDATION_EXPORT NSString *const kSendTableEventList;
FOUNDATION_EXPORT NSString *const kTableID;
FOUNDATION_EXPORT NSString *const kIDList;

FOUNDATION_EXPORT NSString *const INTEGER_SUFFIX;
FOUNDATION_EXPORT NSString *const DECIMAL_SUFFIX;
FOUNDATION_EXPORT NSString *const BOOLEAN_SUFFIX;
FOUNDATION_EXPORT NSString *const STRING_SUFFIX;
FOUNDATION_EXPORT NSString *const STRING_ARRAY_SUFFIX;

#endif /* AlexStrategyConstants_h */
