//
//  APSAlexUtility.h
//  APSAlex
//
//  Created by zhangfenglin on 2019/5/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSAlexUtility : NSObject

+ (double)isPersonalizedAdAgree;
+ (void)setIsPersonalizedAdAgree:(double)value;

+ (double)isFirstInstall;
+ (void)setIsFirstInstall:(double)value;

+ (double)appOpenLogTime;
+ (void)setAppOpenLogTime:(double)timeInterval;

+ (double)heartbeatCount;
+ (void)setHeartbeatCount:(NSUInteger)count;

+ (double)heartbeatDate;
+ (void)setHeartbeatDate:(double)timeInterval;

+ (double)xalLastStateRecordTime;
+ (void)setXalLastStateRecordTime:(double)timeInterval;

+ (double)xalRequestSuccessTime;
+ (void)setXalRequestSuccessTime:(double)timeInterval;

+ (double)xalRequestFailTime;
+ (void)setXalRequestFailTime:(double)timeInterval;

+ (void)setXalSidUpdateTime:(long)time;
+ (long)getXalSidUpdateTime;
@end

NS_ASSUME_NONNULL_END
