//
//  APSParameter.h
//  APSUtilities
//
//  Created by zhangfenglin on 2019/5/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSParameter : NSObject
+ (void)setChannel:(NSString *_Nonnull)channel;
+ (NSString *)getChannel;
+ (void)setToken:(NSString *)token;
+ (NSString *)getToken;
+ (NSString *)getCID;
+ (void)setCID:(NSString *)cid;
+ (uint64_t)cidHash;

+ (BOOL)isActived;
+ (NSTimeInterval)installTime;
+ (NSTimeInterval)updateTime;

+ (NSUInteger)appVersionCode;
+ (void)setAppVersionCode:(NSUInteger)vc;

@end

NS_ASSUME_NONNULL_END
