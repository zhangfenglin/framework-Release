//
//  APSEventLogger.h
//  Pods
//
//  Created by apus on 2019/6/24.
//

#ifndef APSEventLogger_h
#define APSEventLogger_h
#import <Foundation/Foundation.h>
#import "APSEventLoggerDelegate.h"
#import <APSMiddleware/APSSdkEntry.h>
#import <APSSdkService/APSEventLoggerService.h>
@import Reachability;

@class APSBridge;
@interface APSEventLogger : NSObject<APSEventLoggerService, APSEventLoggerDelegate, APSSdkEntry>

@property(nonatomic, assign) BOOL isApusBrand;
@property(nonatomic, assign) BOOL isOldUser;
@property(nonatomic, assign) BOOL isRecordEnabled;
@property(nonatomic, assign) BOOL isActiveEnabled;
@property(nonatomic, assign) BOOL isRemoteConfigEnabled;
@property(nonatomic, copy) NSString *adv_url;
@property(nonatomic, copy) NSString *product_url;
@property(nonatomic, copy) NSString *report_url;
@property(nonatomic) Reachability *reachability;
@property(nonatomic, assign) BOOL isAppExtension;

+ (instancetype)sharedInstance;

-(id)initWithBridge:(APSBridge *)bridge;
- (void)sendEvents:(BOOL)forced;

@end

#endif /* APSEventLogger_h */
