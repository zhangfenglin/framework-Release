//
//  APSZeus.h
//  Apollo
//
//  Created by apus on 2019/6/11.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "APSZeusRequest.h"
NS_ASSUME_NONNULL_BEGIN
@class APSZeus;
typedef APSZeus *_Nonnull(^APSZeusRequestSerializerTypeBlock)(APSRequestSerializerType type);
typedef APSZeus *_Nonnull(^APSZeusResponseSerializerTypeBlock)(APSResponseSerializerType type);
typedef APSZeus *_Nonnull(^APSZeusRequestMethedBlock)(APSRequestMethod methed);
typedef APSZeus *_Nonnull(^APSZeusXorKeyBlock)(UInt8 xorKey);
typedef APSZeus *_Nonnull(^APSZeusProtocolVCBlock)(UInt8 version);
typedef APSZeus *_Nonnull(^APSZeusCompressBlock)(BOOL value);
typedef APSZeus *_Nonnull(^APSZeusInsertAtBeginBodyBlock)(UInt16 value);
typedef APSZeus *_Nonnull(^APSZeusPackageNameBlock)(NSString* name);
typedef APSZeus *_Nonnull(^APSZeusReleaseVersionBlock)(UInt32 version);
typedef APSZeus *_Nonnull(^APSZeusBigEndianBlock)(BOOL value);
typedef APSZeus *_Nonnull(^APSZeusUploadOSTypeBlock)(BOOL value);
typedef APSZeus *_Nonnull(^APSZeusNonProtocolBlock)(void);
typedef APSZeus *_Nonnull(^APSZeusHeadersBlock)(NSDictionary<NSString *, NSString *> * headers);

@interface APSZeus: APSZeusRequest {
    APSRequestSerializerType                _requestSerializerType;
    APSResponseSerializerType               _responseSerializerType;
    APSRequestMethod                        _requestMethod;
    UInt8                                   _version;
    UInt8                                   _xorKey;
    BOOL                                    _compress;
    UInt16                                  _insertAtBeginBody;
    BOOL                                    _uploadOSType;
    NSString *                              _packageName;
    SInt32                                  _releaseVersion;
    BOOL                                    _bigEndian;
    BOOL                                    _nonProtocol;
    NSString *                              _url;
    NSData *                                _requestData;
    id                                      _argument;
    NSDictionary<NSString *, NSString *> *  _headers;
}

#pragma mark - 链式调用属性

/**
 设置 RequestSerializer JSON or FBS，默认为 FBS
 */
@property (nonatomic, copy, readonly) APSZeusRequestSerializerTypeBlock requestSerializerTypePromise;

/**
 设置 ResponseSerializer JSON or FBS，默认为 FBS
 */
@property (nonatomic, copy, readonly) APSZeusResponseSerializerTypeBlock responseSerializerTypePromise;


/**
 设置 请求方法 默认为 POST
 */
@property (nonatomic, copy, readonly) APSZeusRequestMethedBlock requestMethedPromise;

/**
  设置 xorkey 默认为 0
 */
@property (nonatomic, copy, readonly) APSZeusXorKeyBlock xorkeyPromise;

/**
 设置 protocol 版本 默认为 0
 */
@property (nonatomic, copy, readonly) APSZeusProtocolVCBlock protocolVCPromise;

/**
 设置是否压缩，true or false 默认为 true
 */
@property (nonatomic, copy, readonly) APSZeusCompressBlock compressPromise;

/**
 设置 insertAtBeginBody， 默认为 0x2018
 */
@property (nonatomic, copy, readonly) APSZeusInsertAtBeginBodyBlock insertAtBeginBodyPromise;

/**
 设置 package name
 */
@property (nonatomic, copy, readonly) APSZeusPackageNameBlock packageNamePromise;

/**
 设置 release 版本号 UInt32 version
 */
@property (nonatomic, copy, readonly) APSZeusReleaseVersionBlock releaseVersionPromise;

/**
 设置 bigEndian true or false，默认为 true
 */
@property (nonatomic, copy, readonly) APSZeusBigEndianBlock bigEndianPromise;

/**
 设置 uploadOSType true or false，默认为 true
 */
@property (nonatomic, copy, readonly) APSZeusUploadOSTypeBlock uploadOSTypePromise;

/**
 设置 不遵从协议，默认遵从协议
 */
@property (nonatomic, copy, readonly) APSZeusNonProtocolBlock nonProtocolPromise;

/**
 设置自定义 header
 */
@property (nonatomic, copy, readonly) APSZeusHeadersBlock headersPromise;

/**
 JSON 快捷设置 GET 方法
 */
@property (nonatomic, copy, readonly) APSZeus * GET;

/**
 JSON快捷设置 POST 方法
 */
@property (nonatomic, copy, readonly) APSZeus * POST;


- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

/**
 FBS 方式初始化

 @param url 请求地址
 @param data 请求数据
 @param xorKey key
 @param version 版本
 @return request
 */
- (instancetype)initWithFBSUrl:(NSString *)url
                requestData:(NSData *)data
                    xorKey:(UInt8)xorKey
                   version:(UInt8)version;

/**
 FBS 初始化

 @param url 请求地址
 @param data 请求数据
 @return request
 */
- (instancetype)initWithFBSUrl:(NSString *)url
                requestData:(NSData *)data;

/**
 JSON 方式初始化

 @param url 请求地址
 @param argument 请求参数
 @return request
 */
- (instancetype)initWithJSONUrl:(NSString *)url
            requestArgument:(nullable id)argument;

/**
 JSON 方式初始化

 @param url 请求参数
 @param argument 请求参数
 @param methed 请求方法 POST、GET ...
 @return request
 */
- (instancetype)initWithJSONUrl:(NSString *)url
                requestArgument:(nullable id)argument
                         methed:(APSRequestMethod)methed;


/**
 下载初始化

 @param url 下载链接
 @param filePath 文件保存路径
 @param argument 请求参数
 @return request
 */
- (instancetype)initWithDownloadURL:(NSString *)url
                     filePath:(nullable NSString *)filePath
                    requestArgument:(nullable id)argument;



@end


NS_ASSUME_NONNULL_END
