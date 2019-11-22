//
//  APSZeusRequest.h
//  Pods
//
//  Created by apus on 2019/6/6.
//

#import <Foundation/Foundation.h>
#import "APSZeusResult.h"

NS_ASSUME_NONNULL_BEGIN

///  HTTP Request method.
typedef NS_ENUM(NSInteger, APSRequestMethod) {
    APSRequestMethodGET = 0,
    APSRequestMethodPOST,
    APSRequestMethodHEAD,
    APSRequestMethodPUT,
    APSRequestMethodDELETE,
    APSRequestMethodPATCH,
};

/**
 serializer type
 - APSSerializerTypeJSON: 使用JSON进行序列化与反序列化
 - APSSerializerTypeFBS: 使用flatbuffer进行序列化与反序列化
 */

typedef NS_ENUM(NSUInteger, APSRequestSerializerType) {
    APSRequestSerializerTypeJSON,
    APSRequestSerializerTypeFBS,
};

typedef NS_ENUM(NSUInteger, APSResponseSerializerType) {
    APSResponseSerializerTypeJSON,
    APSResponseSerializerTypeFBS,
};

@protocol AFMultipartFormData;

typedef void (^AFConstructingBlock)(id<AFMultipartFormData> formData);
typedef void (^AFURLSessionTaskProgressBlock)(NSProgress * progress);

@class APSZeusRequest;
@class APSResponseCode;

typedef void(^APSResultCompletionBlock)(__kindof  APSZeusResult * _Nullable result);
typedef void(^APSFailureCompletionBlock)(__kindof NSError *error, APSResponseCode * _Nullable responseCode);

@interface APSZeusRequest : NSObject

#pragma mark - Request and Response Information

/**
 NSURLSessionTask 基础属性. @warning 在请求之前，值为nil
 */
@property (nonatomic, strong, readonly) NSURLSessionTask *requestTask;

@property (nonatomic, strong, readonly) NSURLRequest *currentRequest;

@property (nonatomic, strong, readonly) NSURLRequest *originalRequest;

@property (nonatomic, strong, readonly) NSHTTPURLResponse *response;

@property (nonatomic, strong, readonly, nullable) NSDictionary *responseHeaders;

@property (nonatomic, strong, readonly, nullable) id responseData;

@property (nonatomic, strong, readonly, nullable) NSError *error;

/**
 This value is used to perform resumable download request. Default is nil.
 @discussion NSURLSessionDownloadTask is used when this value is not nil.The exist file at the path will be removed before the request starts. If request succeed, file will be saved to this path automatically, otherwise the response will be saved to `responseData` and `responseString`. For this to work, server must support `Range` and response with proper `Last-Modified` and/or `Etag`. See `NSURLSessionDownloadTask` for more detail.
 */
@property (nonatomic, copy, nullable) NSString *resumableDownloadPath;

/**
 下载进度回调
 */
@property (nonatomic, copy, nullable) AFURLSessionTaskProgressBlock resumableDownloadProgressBlock;

/**
 成功回调，返回 APSZeusResult
 */
@property (nonatomic, copy, nullable) APSResultCompletionBlock successResultBlock;

/**
 失败回调，返回 APSZeusResult
 */
@property (nonatomic, copy, nullable) APSResultCompletionBlock failureResultBlock;

/**
 统一回调，返回 APSZeusResult
 */
@property (nonatomic, copy, nullable) APSResultCompletionBlock completionResultBlock;

#pragma mark - 请求与回调方法

- (void)downloadtWithSuccess:(nullable APSResultCompletionBlock)success
                    progress:(nullable AFURLSessionTaskProgressBlock)progress
                     failure:(nullable APSResultCompletionBlock)failure;

- (void)requestWithSuccess:(nullable APSResultCompletionBlock)success
                   failure:(nullable APSResultCompletionBlock)failure;

- (void)requestCompletion:(nullable APSResultCompletionBlock) completion;

/**
 请求成功之后释放Block
 */
- (void)clearCompletionBlock;

#pragma mark - Subclass Override

/**
 完整的URL
 @return url
 */
- (NSString *)url;

/**
 host 地址, url == nil 可用
 @return 例如：www.example.com
 */
- (NSString *)host;

/**
 路径 url == nil 可用
 @return 例如：user/current
 */
- (NSString *)path;

/**
 超时时间
 @return 默认为 30s
 */
- (NSTimeInterval)requestTimeoutInterval;

/**
 请求参数
 @return 参数数据，JSON为字典，FBS为Data
 */
- (nullable id)requestArgument;

/**
 HTTP request method.
 @return 默认 POST
 */
- (APSRequestMethod)requestMethod;

/**
 序列化类型
 @return 默认 APSRequestSerializerTypeFBS
 */
- (APSRequestSerializerType)requestSerializerType;

/**
 反序列化类型

 @return APSResponseSerializerTypeFBS
 */
- (APSResponseSerializerType)responseSerializerType;

/**
 其他HTTP请求头字段
 */
- (nullable NSDictionary<NSString *, NSString *> *)requestHeaderFieldValueDictionary;

/**
 * Username and password used for HTTP authorization.
 * Should be formed as @[@"Username", @"Password"].
 */
- (nullable NSArray<NSString *> *)requestAuthorizationHeaderFieldArray;

- (BOOL)allowsCellularAccess;

#pragma mark business method

- (UInt8)version;

- (UInt8)xorKey;

- (BOOL)compress;

- (nullable NSString*)packageName;

- (SInt32)releaseVersion;

- (BOOL)bigEndian;

- (BOOL)nonProtocol;

- (UInt16)insertAtBeginBody;

- (BOOL)uploadOSType;

@end

NS_ASSUME_NONNULL_END
