//
//  APSEventPackage.h
//  Adjust
//
//  Created by apus on 2019/7/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSEventPackage : NSObject

+ (NSData *)getHeaderByteArrayWithRecordType:(UInt8)recordType token:(NSString *)token bodyData:(NSData *)bodyData;
+ (NSData *)getPackageDataWithRecordType:(UInt8)recordType events:(NSDictionary *)events token:(NSString *)token;

@end

NS_ASSUME_NONNULL_END
