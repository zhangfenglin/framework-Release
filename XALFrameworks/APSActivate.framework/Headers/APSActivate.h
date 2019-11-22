//
//  APSActivate.h
//  APSActivate
//
//  Created by zhangfenglin on 2019/7/1.
//

#import <Foundation/Foundation.h>
#import <APSMiddleware/APSSdkEntry.h>
#import "APSActivateDelegate.h"
#import <APSSdkService/APSSupport3rdService.h>
#import <APSSdkService/APSEventLoggerService.h>

NS_ASSUME_NONNULL_BEGIN

@class APSBridge;
@class APSUserTag;
@class Reachability;

@interface APSActivate : NSObject<APSActivateDelegate, APSSdkEntry> {
    APSBridge* bridge;
    APSUserTag* usertag;
    int retryCount;
    double lastEntryHomePageTime;
    Reachability* reachability;
    NSString* reason;
    id<APSEventLoggerService> loggerService;
    id<APSSupport3rdService> support3rdService;
}

@property (nonatomic, assign) int64_t serviceTime;

-(id)initWithBridge:(APSBridge *)bridge;
-(APSUserTag *)getUserTag;
@end

NS_ASSUME_NONNULL_END
