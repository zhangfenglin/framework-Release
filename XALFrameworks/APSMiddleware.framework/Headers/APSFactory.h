//
//  APSFactory.h
//  APSMiddleware
//
//  Created by zhangfenglin on 2019/6/27.
//

#import <Foundation/Foundation.h>
#import "APSBridge.h"
#import "APSServiceRegistry.h"

NS_ASSUME_NONNULL_BEGIN

@protocol APSFactory <NSObject>
-(id)getType;
-(id)create:(APSBridge *)bridge;
-(void)registryService:(APSServiceRegistry *)registry forProvider:(id<APSProvider>)prodiver;
@end

NS_ASSUME_NONNULL_END
