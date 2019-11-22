//
//  NetworkType.h
//  APSUtilities
//
//  Created by zhangfenglin on 2019/5/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class Reachability;

@interface NetworkType : NSObject

@property(nonatomic, assign) int code;
@property(nonatomic, assign) NSString *trackingId;

- (id)initWithReachability:(Reachability *)reachability;
@end

NS_ASSUME_NONNULL_END
