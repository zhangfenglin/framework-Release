//
//  APSUtility.h
//  APSUtilities
//
//  Created by zhangfenglin on 2019/5/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSUtility : NSObject
+ (NSString *)getAppID:(NSString *)key;
+ (NSString *)getLocalString;
+ (NSString *)getAppKey:(NSString *)name;
+ (NSString *)getBranchKey:(NSString *)name;
+ (NSString *)getResolution;
+ (NSString *)getAndroidID;
+ (int)getNetworkType;
+ (BOOL)isSimulator;
+ (BOOL)samplingHit:(NSUInteger)percent;

@end

NS_ASSUME_NONNULL_END
