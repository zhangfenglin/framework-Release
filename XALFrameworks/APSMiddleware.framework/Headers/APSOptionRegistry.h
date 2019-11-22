//
//  APSOptionRegistry.h
//  APSMiddleware
//
//  Created by zhangfenglin on 2019/6/28.
//

#import <Foundation/Foundation.h>
#import "APSProvider.h"

NS_ASSUME_NONNULL_BEGIN

@interface APSOptionRegistry : NSObject {
    NSDictionary* registryMap;
}

-(_Nullable id)findOption:(id)delegate;
-(void)addProvider:(id<APSProvider>) provider forProtocol:(nonnull id)delegate;
@end

NS_ASSUME_NONNULL_END
