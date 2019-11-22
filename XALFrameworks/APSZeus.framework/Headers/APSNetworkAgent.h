//
//  APSNetworkAgent.h
//  Pods
//
//  Created by apus on 2019/6/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class APSZeusRequest;

@interface APSNetworkAgent : NSObject

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

+ (APSNetworkAgent *)sharedAgent;

/**
 添加请求

 @param request APSBaseRequest
 */
- (void)addRequest:(APSZeusRequest *)request;

/**
 取消请求

 @param request APSBaseRequest
 */
- (void)cancelRequest:(APSZeusRequest *)request;

@end

NS_ASSUME_NONNULL_END
