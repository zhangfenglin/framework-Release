//
//  APSServiceRegistry.h
//  APSMiddleware
//
//  Created by zhangfenglin on 2019/6/28.
//

#import <Foundation/Foundation.h>
#import "APSProvider.h"

NS_ASSUME_NONNULL_BEGIN

typedef id _Nullable (^ProviderBlock) (void);

@interface APSServiceRegistry : NSObject {
    NSDictionary* registryMap;
}
-(_Nullable id)findService:(id)delegate;
-(void)addProvider:(ProviderBlock)provider forProtocol:(id)delegate;
@end

NS_ASSUME_NONNULL_END
