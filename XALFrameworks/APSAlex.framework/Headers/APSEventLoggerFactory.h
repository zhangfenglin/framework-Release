//
//  APSEventLoggerFactory.h
//  AFNetworking
//
//  Created by apus on 2019/7/10.
//

#import <Foundation/Foundation.h>
#import <APSMiddleware/APSFactory.h>

NS_ASSUME_NONNULL_BEGIN

@class APSBridge;
@class APSEventLogger;
@interface APSEventLoggerFactory : NSObject<APSFactory> {
    APSBridge *bridge;
    APSEventLogger *logger;
}

@end

NS_ASSUME_NONNULL_END
