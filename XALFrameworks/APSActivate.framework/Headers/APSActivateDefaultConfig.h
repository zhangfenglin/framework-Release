//
//  APSActivateConfig.h
//  APSActivate
//
//  Created by zhangfenglin on 2019/7/1.
//

#import <Foundation/Foundation.h>
#import "APSActivateConfigDelegate.h"
@import APSMiddleware;

NS_ASSUME_NONNULL_BEGIN

@interface APSActivateDefaultConfig : NSObject <APSSdkConfig, APSActivateConfigDelegate>

@end

NS_ASSUME_NONNULL_END
