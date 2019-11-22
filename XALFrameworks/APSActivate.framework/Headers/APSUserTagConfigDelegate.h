//
//  APSUsertagConfigDelegate.h
//  APSActivate
//
//  Created by zhangfenglin on 2019/7/4.
//

#import <Foundation/Foundation.h>
#import <APSMiddleware/APSSdkConfig.h>

NS_ASSUME_NONNULL_BEGIN

@protocol APSUserTagConfigDelegate <APSSdkConfig>

@required
-(NSString *)fackIp;

@optional
-(NSString *)getUserTagServerHost;
-(NSString *)getUserTagServerPath;
@end

NS_ASSUME_NONNULL_END
