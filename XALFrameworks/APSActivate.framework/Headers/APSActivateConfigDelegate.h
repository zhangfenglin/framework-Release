//
//  APSActivateConfigDelegate.h
//  APSActivate
//
//  Created by zhangfenglin on 2019/7/4.
//

#import <Foundation/Foundation.h>
#import "APSUserTagConfigDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@protocol APSActivateConfigDelegate <APSUserTagConfigDelegate>
@optional
-(NSString *)getActivateServerHost;
-(NSString *)getActivateServerPath;
-(NSString *)getPublicKey;
@end

NS_ASSUME_NONNULL_END
