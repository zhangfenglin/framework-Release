//
//  APSSingletonProvider.h
//  APSMiddleware
//
//  Created by zhangfenglin on 2019/6/27.
//

#import "APSProvider.h"
#import "APSBridge.h"

NS_ASSUME_NONNULL_BEGIN
typedef id _Nonnull (^ProviderCreator)(void);

@interface APSSingletonProvider : NSObject <APSProvider> {
    id type;
    id instance;
    ProviderCreator creator;
    NSLock* _lock;
}

-(id)initWithType:(id)type creator:(ProviderCreator)creator;
-(id)getType;
-(id)getInstance;
@end

NS_ASSUME_NONNULL_END
