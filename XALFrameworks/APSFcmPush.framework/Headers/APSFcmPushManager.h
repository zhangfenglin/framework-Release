//
//  APSFcmPushManager.h
//  AFNetworking
//
//  Created by apus on 2019/7/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class APSPushMessage;
@interface APSFcmPushManager : NSObject

+(APSFcmPushManager *)shareManager;


/**
 启动PUSH服务

 @param isDebug 是否为DEBUG模式
 @param application application
 @param appID 应用推送id
 @param actionTitle PUSH展示详情后的按钮标题，iOS 10.0 + 支持
 @param actionHandler 按钮点击后的回调
 @param messageHandler userNotificationCenter:withCompletionHandler:withCompletionHandler的消息回调
 */
- (void)startWithIsDebug:(BOOL)isDebug
             application:(UIApplication *)application
                   appID:(NSString *)appID
       actionButtonTitle:(NSString *)actionTitle
     actionButtonHandler:(void (^)(APSPushMessage *))actionHandler
          messageHandler:(void (^)(APSPushMessage *))messageHandler;

@end

NS_ASSUME_NONNULL_END
