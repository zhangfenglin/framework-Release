//
//  APSEventRecordStates.h
//  AFNetworking
//
//  Created by apus on 2019/7/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSEventRecordStates : NSObject

+ (instancetype)sharedInstance;

- (void)start;
- (void)setStateProvider:(NSDictionary<NSString *, NSString *> * (^)(void))provider;

@end

NS_ASSUME_NONNULL_END
