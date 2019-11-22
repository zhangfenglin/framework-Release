//
//  Reachability+NetworkType.h
//  APSUtilities
//
//  Created by zhangfenglin on 2019/5/10.
//

#import <Foundation/Foundation.h>
#import <Reachability/Reachability.h>

NS_ASSUME_NONNULL_BEGIN
@class NetworkType;

@interface Reachability (NetworkType)
+ (NetworkType *)getNetworkType;
@end

NS_ASSUME_NONNULL_END
