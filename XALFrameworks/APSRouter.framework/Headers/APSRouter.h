//
//  APSRouter.h
//  APSRouterDemo
//
//  Created by xingcheng on 2019/7/15.
//  Copyright © 2019 xingcheng. All rights reserved.
//
//
//
//
//
//
//         _____ __________  ___________________               __
//        /  _  \\______   \/   _____/\______   \ ____  __ ___/  |_  ___________
//       /  /_\  \|     ___/\_____  \  |       _//  _ \|  |  \   __\/ __ \_  __ \
//      /    |    \    |    /        \ |    |   (  <_> )  |  /|  | \  ___/|  | \/
//      \____|__  /____|   /_______  / |____|\  /\____/|____/ |__|  \___  >__|
//              \/                 \/         \/                        \/
//
//
//      文档地址: https://nowiki.apuscn.com/display/APUSTEC/APSRouter
//
//
//      URL格式:
//
//      +--------------------------------------------------------+
//      |                                                        |
//      |       aps://LoginPage/success/0001/?title="welcome"    |
//      |            |         |           |                     |
//      |     Scheme |  Host   |  Path     |  Query              |
//      |            |         |           |                     |
//      |                                                        |
//      |         ${Scheme}://${Host}/${Path}/?${Query}          |
//      |                                                        |
//      +--------------------------------------------------------+
//
//
//      注意:
//
//      * scheme不区分大小写,其他部分均区分大小写.
//
//      * APSRouter 可以注册多个Scheme, 项目或框架之间应该使用不同的scheme进行隔离解耦.
//
//      * 自动参数注入,流程如下:
//
//
//     +----------+        +-------------------+   NO     +------------------+   NO    +-----------+
//     |   注 入   | +--->  |   是否有对应变量 ?  | +---->   | 有对应 Setter方法？ |  +--->  |    结 束  |
//     +----------+        +------+------------+          +---------+--------+         +-----------+
//                                |                                 |
//                                |  YES                            |  YES
//                                v                                 v
//                         +------+--------+               +--------+--------+
//                         |  注 入 变 量    |              | 注 入 Setter方 法 |
//                         +---------------+               +-----------------+
//
//
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


/**
 APSRouter展示页面的方式

 - APSRouterExecuteTypeAUTO: 优先Push展示,如果不可以k以present方式展示
 - APSRouterExecuteTypePushOnly: 仅Push方式展示
 - APSRouterExecuteTypePresentOnly: 仅Present方式展示
 - APSRouterExecuteTypeBlockOnly: 仅Block
 */
typedef NS_ENUM (NSUInteger, APSRouterExecuteType)
{
    APSRouterExecuteTypeAUTO = 0,
    APSRouterExecuteTypePushOnly = 1,
    APSRouterExecuteTypePresentOnly = 2,
    APSRouterExecuteTypeBlockOnly = 3,
};

typedef id (^APSRouterBlock)(NSDictionary *params);

@interface APSRouter : NSObject


/**
 获取默认的Router
 - 注意: 请先调用 +(void)setDefalutRouterScheme:设置默认的scheme

 @return default router
 */
+(instancetype)defalutRouter;


/**
 设置默认的scheme
 - 例如: aps://

 @param scheme 默认的scheme (不区分大小写)
 */
+(void)setDefalutRouterScheme:(NSString*)scheme;


/**
 根据scheme获取路由对象

 @param scheme scheme不区分大小写
 @return 带有scheme的router对象
 */
+(instancetype)routerWithScheme:(NSString*)scheme;

/**
 判断时候能够打开该URL

 @param url 路由的url
 
 @return YES 该URL已经被注册
 */
+(BOOL)canOpenURL:(NSString*)url;


/**
 已注册的schemes

 @return schemes
 */
+(NSArray*)registeredSchemes;

/**
 根据URL获取UIViewController对象
 URL中的参数可以在 apsparams 参数中获取

 @param url 路由的URL eg: aps://HomePage/user/?id=1
 @return 带有url参数的UIViewController 对象
 */
+(UIViewController*)viewControllerWithURL:(NSString*)url;

/**
 执行URL对应的动作.

 @param url router url
 @param obj 附加参数,会附加在apsparams参数中
 @param executeType 执行方式
 @return 是否执行成功
 */
+(BOOL)executeURL:(NSString*)url userInfo:(id)obj style:(APSRouterExecuteType)executeType;


/**
 执行URL对应的Block

 @param url router url
 @param obj 附加参数,会附加在apsparams参数中
 @return block执行后的返回参数
 */
+(id)executeBlockOnlyURL:(NSString*)url userInfo:(id)obj;

/**
 注册路由信息
 @param host 注册HOST字段 eg: HomePage
 @param viewController 待注册的UIViewControlelr
 */
-(void)useHost:(NSString*)host withViewController:(Class)viewController;

/**
 注册路由信息

 @param host HOST eg: HomePage
 @param path path支持Restful风格 eg: banner/:img/:url
 @param viewController 待注册的UIViewControlelr
 */
-(void)useHost:(NSString *)host restfulPath:(NSString*)path withViewController:(Class)viewController;


/**
 注册路由信息(ViewController)

 @param url 完整的URL,可以不包含scheme eg: HomePage/banner/:img/:url
 @param viewController 注册的UIViewControlelr
 */
-(void)useURL:(NSString*)url withViewController:(Class)viewController;


/**
 注册路由信息(Block)

 @param url 完整的URL,可以不包含scheme eg: HomePage/banner/:img/:url
 @param block 注册的Block
 */
-(void)useURL:(NSString*)url withBlock:(APSRouterBlock)block;


/**
 增加UniversalUrl的host匹配

 @param host UniversalUrl的HOST
 */
+(void)addUniversalHosts:(NSString*)host;

    
/**
 当前路由的scheme
 */
@property(nonatomic,copy,readonly)NSString * scheme;
    
@end

@interface UIViewController (APSRouter)

@property (nonatomic, strong) NSDictionary *apsparams;

@end
