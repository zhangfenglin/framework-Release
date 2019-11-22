//
//  APSBridge.h
//  APSMiddleware
//
//  Created by zhangfenglin on 2019/6/27.
//

#import <Foundation/Foundation.h>
#import "APSProvider.h"

NS_ASSUME_NONNULL_BEGIN

@class APSSdkRegistry;
@class APSServiceRegistry;
@class APSOptionRegistry;
@class APSAppInfo;

@interface APSBridge : NSObject {
    APSSdkRegistry* sdkRegistry;
    APSServiceRegistry* serviceRegistry;
    APSOptionRegistry* optionRegistry;
    APSAppInfo* appInfo;
}
// 获取sdk对象池
-(APSSdkRegistry *)getSdks;
// 获取服务对象池
-(APSServiceRegistry *)getServices;
// 获取sdk对象，不能为空
-(id)getSdk:(id)delegate;
// 获取sdk对象，可以为空
-(_Nullable id)findSdk:(id)delegate;
// 获取公共库服务对象
-(_Nullable id)findService:(id)delegate;
// 设置配置参数
-(void)customOption:(id)option;
// 获取配置参数对象
-(_Nullable id)getOption:(id)delegate;
-(void)setAppInfo:(APSAppInfo *)appInfo;
-(APSAppInfo *)getAppInfo;
@end

NS_ASSUME_NONNULL_END
