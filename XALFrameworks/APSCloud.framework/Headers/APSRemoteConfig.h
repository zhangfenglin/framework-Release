//
//  APSRemoteConfig.h
//  APSConfigDemo
//
//  Created by apus on 2019/6/26.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <APSSdkService/APSRemoteConfigService.h>
#import <APSMiddleware/APSSdkEntry.h>
#import "APSPeriodic.h"
#import "APSCloudEnv.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(int, APSRemoteConfigActionType) {
    APSRemoteConfigActionTypeTaken = 0,     // 落地
    APSRemoteConfigActionTypeDelete = 1,    // 删除
    APSRemoteConfigActionTypeUntaken = -1   // 不落地
};

@interface APSRemoteConfig : NSObject<APSRemoteConfigService>

@property (nonatomic, strong) NSArray *modules;
@property (nonatomic, strong) APSCloudEnv *Env;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
