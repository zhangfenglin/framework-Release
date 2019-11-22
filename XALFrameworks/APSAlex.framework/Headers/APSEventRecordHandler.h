//
//  APSEventRecordHandler.h
//  Pods
//
//  Created by apus on 2019/6/25.
//

#ifndef APSEventRecordHandler_h
#define APSEventRecordHandler_h

#import <Foundation/Foundation.h>
@class RecordRequest;

@interface APSEventRecordHandler : NSObject
@property(nonatomic, copy) void (^completion)(NSData *);

+ (instancetype)sharedInstance;

- (void)sendEvents:(BOOL)forced;
- (void)sendEvent:(NSUInteger)event
               dic:(NSDictionary<NSString *, id> *)dic
        moduleName:(NSString *)moduleName
    isRealTimeMode:(BOOL)isReal
        completion:(void (^)(NSData *))completion;
- (void)syncToDatabase:(BOOL)forced events:(NSArray *)events completion:(void (^)(void))completion;
- (void)recordWithType:(NSUInteger)type
               modules:(NSDictionary *)modules
                 token:(NSString *)token
            completion:(void (^)(BOOL))completion;

@end

@interface NSData (NSData_Conversion)

#pragma mark - String Conversion
- (NSString *)hexadecimalString;

@end
#endif /* APSEventRecordHandler_h */
