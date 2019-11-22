//
//  APSBootOptionsRegistry.h
//  APSMiddleware
//
//  Created by zhangfenglin on 2019/6/27.
//

#import <Foundation/Foundation.h>
#import "APSProvider.h"

NS_ASSUME_NONNULL_BEGIN

@interface APSSdkRegistry : NSObject {
    NSDictionary* registryMap;
}
-(_Nullable id)findSdk:(id)delegate;
-(_Nonnull id)getSdk:(id)delegate;
-(void)addProvider:(id<APSProvider>)provider forProtocol:(id)delegate;
@end

NS_ASSUME_NONNULL_END
