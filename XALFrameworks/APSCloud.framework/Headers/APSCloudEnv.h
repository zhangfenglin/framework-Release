//
//  APSCloudEnv.h
//  APSConfigDemo
//
//  Created by apus on 2019/7/3.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class APSCloudConfig;

static NSString *const APSConfigXALAppID = @"io.MachBird.sdk.x.AppKey";

@interface APSCloudEnv : NSObject

- (instancetype)initWithConfig:(APSCloudConfig *)config;

/**
 文件下发地址
 */
@property (nonatomic, copy, readonly) NSString *fileUpdateUrl;

/**
 配置下发地址
 */
@property (nonatomic, copy, readonly) NSString *configUrl;

/**
 默认异或 0x65
 */
@property (nonatomic, assign, readonly) int XOR;

/**
 默认版本号 6
 */
@property (nonatomic, assign, readonly) int version;

/**
 默认缓存数量 1000
 */
@property (nonatomic, assign, readonly) int cacheCountLimit;

/**
 默认下发时间间隔 600s
 */
@property (nonatomic, assign, readonly) int periodicTimeInterval;

/**
 keywords from APSUserTag KEY_WORDS_LIST
 */
- (NSArray *)keywords;

@end

NS_ASSUME_NONNULL_END
