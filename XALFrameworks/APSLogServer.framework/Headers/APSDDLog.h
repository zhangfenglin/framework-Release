//
//  APSDDLog.h
//  Apollo
//
//  Created by apus on 2019/6/17.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSUInteger, APSLoggerLevel) {
    APSLoggerLevelALL = 0,
    APSLoggerLevelDEBUG,
    APSLoggerLevelINFO,
    APSLoggerLevelWARN,
    APSLoggerLevelERROR,
    APSLoggerLevelOFF
};

typedef NS_ENUM(NSUInteger, APSWebDisplay) {
    APSWebDisplayALL = 0,
    APSWebDisplayDEBUG,
    APSWebDisplayOFF,
};

extern void DDLog(id format, ...) NS_REQUIRES_NIL_TERMINATION;
extern void DDDebug(id format, ...) NS_REQUIRES_NIL_TERMINATION;
extern void DDInfo(id format, ...) NS_REQUIRES_NIL_TERMINATION;
extern void DDWarn(id format, ...) NS_REQUIRES_NIL_TERMINATION;
extern void DDError(id format, ...) NS_REQUIRES_NIL_TERMINATION;

extern void DDStartService(void);
extern void DDStopService(void);
extern void DDRestartService(void);
extern void setDDLogLevel(APSLoggerLevel level);
extern void setDDWebDisplay(APSWebDisplay level);

@interface APSDDLog : NSObject

@property (nonatomic, assign) APSLoggerLevel loggerLevel;
@property (nonatomic, assign) APSWebDisplay webDisplayLevel;

+ (instancetype)shared;

- (void)startService;
- (void)stopService;
- (void)restartService;

@end

NS_ASSUME_NONNULL_END
