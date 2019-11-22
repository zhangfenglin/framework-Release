//
//  APSUserTagServiceImpl.h
//  APSActivate
//
//  Created by zhangfenglin on 2019/7/5.
//

#import <Foundation/Foundation.h>
#import <APSSdkService/APSUserTagService.h>
@import APSMiddleware;


NS_ASSUME_NONNULL_BEGIN

@class APSUserTag;
@class APSBridge;

@interface APSUserTagServiceImpl : NSObject <APSUserTagService> {
    APSUserTag* usertag;
    APSBridge* bridge;
}

-(id)initWithBridge:(APSBridge *)bridge usertag:(APSUserTag *)usertag;
@end

NS_ASSUME_NONNULL_END
