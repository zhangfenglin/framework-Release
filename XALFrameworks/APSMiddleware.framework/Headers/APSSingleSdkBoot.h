//
//  APSSingleSdkBoot.h
//  APSMiddleware
//
//  Created by zhangfenglin on 2019/6/27.
//

#import <Foundation/Foundation.h>
#import "APSFactory.h"

NS_ASSUME_NONNULL_BEGIN

@interface APSSingleSdkBoot<T> : NSObject {
    id mFactory;
    id mProvider;
}

-(id)initWithFactory:(id)factory;
-(id)get;
-(id)getFactory;
-(void)registerService;

+(APSSingleSdkBoot<T> *)wrapFactory:(id)factory;
@end

NS_ASSUME_NONNULL_END
