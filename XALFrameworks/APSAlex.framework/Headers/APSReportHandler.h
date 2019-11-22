//
//  APSReportHandler.h
//  AFNetworking
//
//  Created by apus on 2019/7/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSReportHandler : NSObject
+ (void)setPersonalizedAdAgree:(BOOL)consent;
+ (BOOL)isPersonalizedAdAgree;
@end

NS_ASSUME_NONNULL_END
