//
//  APSZeusResult.h
//  Apollo
//
//  Created by apus on 2019/6/10.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, APSRESPONSECODE) {
    APS_RESPONSE_CODE_SUCCESS = 0,
    APS_RESPONSE_CODE_NETWORK_ERROR = -1,
    APS_RESPONSE_CODE_HTTP_ERROR = -2,
    APS_RESPONSE_CODE_PROTOCOL_ERROR = -3,
    APS_RESPONSE_CODE_SERVER_ERROR = -4
};

@class APSZeusRequest;

@interface APSResponseCode : NSObject

@property (nonatomic, assign) APSRESPONSECODE code;
@property (nonatomic, copy, readonly) NSString * msg;

+ (instancetype)responseCode:(APSRESPONSECODE) code;

@end

@interface APSZeusResult : NSObject

@property (nonatomic, strong) APSResponseCode *responseCode;
@property (nonatomic, strong, nullable) id data;
@property (nonatomic, strong, nullable) APSZeusRequest * request;

+ (instancetype)resultWithErrorCode:(APSRESPONSECODE)code;

+ (instancetype)resultWithErrorCode:(APSRESPONSECODE)code request:(nullable APSZeusRequest *)request;

+ (instancetype)resultWithSuccessData:(NSData *)data request:(APSZeusRequest *)request;

- (instancetype)initWith:(APSResponseCode *)code
                    data:(NSData *)data
                 request:(APSZeusRequest *)request;

- (NSString *)debugDescription;

@end

NS_ASSUME_NONNULL_END
