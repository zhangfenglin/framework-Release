//
//  APSCloudConfig.h
//  APSConfigDemo
//
//  Created by apus on 2019/6/28.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "APSCloudEnv.h"
#import "APSCloudConfigProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface APSCloudConfig : NSObject<APSCloudConfigProtocol>

/**
 配置云控 url
 */
- (void)setConfigUrl:(NSString * _Nonnull)configUrl;

/**
 文件云控 url
 */
- (void)setFileUpdateUrl:(NSString * _Nonnull)fileUpdateUrl;

/**
 设置版本号 默认版本号 6
 */
- (void)setVersion:(int)version;

/**
 设置 XOR 默认为0x65
 */
- (void)setXOR:(int)XOR;


@end

NS_ASSUME_NONNULL_END
