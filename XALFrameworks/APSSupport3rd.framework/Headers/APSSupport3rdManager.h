//
//  APSSupport3rdManager.h
//  APSSupport3rd
//
//  Created by apus on 2019/7/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSSupport3rdManager : NSObject

+ (instancetype)shared;

- (void)start;

@end

NS_ASSUME_NONNULL_END
