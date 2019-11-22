//
//  APSEventLoggerConfig.h
//  AFNetworking
//
//  Created by apus on 2019/7/10.
//

#import <Foundation/Foundation.h>
#import "APSEventLoggerConfigDelegate.h"
@import APSMiddleware;

NS_ASSUME_NONNULL_BEGIN

@interface APSEventLoggerConfig : NSObject<APSSdkConfig, APSEventLoggerConfigDelegate>

@end

NS_ASSUME_NONNULL_END
