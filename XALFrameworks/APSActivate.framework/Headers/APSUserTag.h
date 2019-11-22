//
//  APSUserTag.h
//  APSActivate
//
//  Created by zhangfenglin on 2019/7/2.
//

#import <Foundation/Foundation.h>
#import <APSSdkService/APSEventLoggerService.h>

NS_ASSUME_NONNULL_BEGIN

@class APSBridge;
@class APSUserTagStatisticsConstants;

static NSString* const FROM_INIT       = @"from_init";
static NSString* const FROM_EXTERNAL   = @"from_external";
static NSString* const FROM_TASK_JOB   = @"from_task_job";
static NSString* const FROM_RETRY_JOB  = @"from_retry_job";
static NSString* const KEY_WORDS_LIST = @"key_keywords_list";

@interface APSUserTag : NSObject {
    NSString* fromSource;
    APSBridge * bridge;
    NSArray* stategyArr;
    int retryCount;
    BOOL isRunning;
    NSLock* lock;
    id<APSEventLoggerService> loggerService;
    APSUserTagStatisticsConstants* statistics;
}
-(id)initWithBridge:(APSBridge *)bridge;
-(void)startTask:(NSString *)fromSource;
-(void)executeTask:(NSString *)fromSource;
@end

NS_ASSUME_NONNULL_END
