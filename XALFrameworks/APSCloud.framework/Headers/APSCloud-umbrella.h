#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "APSCloudConfig.h"
#import "APSCloudConfigProtocol.h"
#import "APSCloudEnv.h"
#import "APSCloudSDK.h"
#import "APSPeriodic.h"
#import "APSRemoteConfig.h"
#import "APSRemoteConfigFactory.h"

FOUNDATION_EXPORT double APSCloudVersionNumber;
FOUNDATION_EXPORT const unsigned char APSCloudVersionString[];

