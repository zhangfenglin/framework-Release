//
//  APSPeriodic.h
//  APSConfigDemo
//
//  Created by apus on 2019/6/26.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^APSPeriodicPreformClosure)(void);

@interface APSPeriodic : NSObject

@property (nonatomic, assign) NSTimeInterval timeInterval;
@property (nonatomic, weak) NSTimer *timer;
@property (nonatomic, copy, nullable) APSPeriodicPreformClosure closure;
@property (nonatomic, weak) id owner;

- (instancetype)initWithTimeIntercal:(NSTimeInterval)timeInterval;
- (void)performClosure:(APSPeriodicPreformClosure)closure;
- (void)cancelTimer;
- (void)stop;
- (void)restart;

@end

NS_ASSUME_NONNULL_END
