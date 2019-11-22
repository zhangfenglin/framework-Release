//
//  APSServiceProviderWrap.h
//  APSMiddleware
//
//  Created by zhangfenglin on 2019/6/28.
//

#import <Foundation/Foundation.h>
#import "APSProvider.h"

NS_ASSUME_NONNULL_BEGIN

@interface APSProviderWrap : NSObject<APSProvider>
{
    id data;
}

-(id)init:(id)data;

@end

NS_ASSUME_NONNULL_END
