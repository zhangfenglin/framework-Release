//
//  APSEventRequest.h
//  AFNetworking
//
//  Created by apus on 2019/7/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class APSZeusResult;
@interface APSEventRequest : NSObject

- (instancetype)initWithUrl:(NSString *)url data:(NSData *)data completion:(void (^)(APSZeusResult *))completion;
- (void)start;

@end
NS_ASSUME_NONNULL_END
