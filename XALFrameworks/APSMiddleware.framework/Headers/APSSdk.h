//
//  APSSdk.h
//  APSMiddleware
//
//  Created by zhangfenglin on 2019/6/27.
//

#import <Foundation/Foundation.h>
#import "APSBridge.h"
#import "APSIBoot.h"

NS_ASSUME_NONNULL_BEGIN

@class APSAppInfo;

@interface APSSdk : NSObject
{
    APSBridge* bridge;
    APSAppInfo* appInfo;
    id<APSIBoot> boot;
}
// 获取bridge
+(APSBridge *)getBridge;
// 获取公共库对象，可以为空
+(_Nullable id)findSdk:(id)delegate;
// 获取公共库对象，不能为空
+(id)getSdk:(id)delegate;
// 获取公共库服务对象
+(_Nullable id)findService:(id)delegate;
// 设置配置参数
+(void)customOption:(id)option;
// 获取配置参数对象
+(_Nullable id)getOption:(id)delegate;
// 设置Appinfo信息
+(void)setAppInfo:(APSAppInfo *)appInfo;
// 获取AppInfo信息
+(APSAppInfo *)getAppInfo;
// 启动公共库
+(void)didFinishLaunching:(APSAppInfo *)appInfo boot:(id<APSIBoot>)boot;
// 进入首页
+(void)entryHomePage:(NSString*)pageName;
@end

NS_ASSUME_NONNULL_END
