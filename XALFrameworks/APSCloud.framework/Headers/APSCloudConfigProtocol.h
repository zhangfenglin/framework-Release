//
//  APSCloudConfigProtocol.h
//  APSCloud
//
//  Created by apus on 2019/7/18.
//

#import <Foundation/Foundation.h>
#import <APSMiddleware/APSSdkConfig.h>
NS_ASSUME_NONNULL_BEGIN

@protocol APSCloudConfigProtocol<NSObject,APSSdkConfig>

/**
 文件云控地址

 @return URL
 */
@optional
- (NSString *)fileUpdateUrl;

/**
 配置云控地址

 @return URL
 */
@optional
- (NSString *)configUrl;

/**
 版本号
 */
@optional
- (int)version;

/**
 异或值
 */
@optional
- (int)XOR;

@end

NS_ASSUME_NONNULL_END
