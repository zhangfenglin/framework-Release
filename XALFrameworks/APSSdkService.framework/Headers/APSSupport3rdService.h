//
//  APSSupport3rdService.h
//  APSMiddleware
//
//  Created by apus on 2019/7/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol APSSupport3rdService <NSObject>

@optional
- (NSString *)getDuDeviceId;
@optional
- (void)getDuDeviceIdBlock:(void(^)(NSString *_Nullable deviceID))block;
@optional
- (void)logFlurryEvent:(NSString *)eventName;
@optional
- (void)logFlurryEvent:(NSString *)eventName withParameters:(nullable NSDictionary *)parameters;

@end

NS_ASSUME_NONNULL_END
