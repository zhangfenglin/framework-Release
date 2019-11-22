//
//  APSZlibUtils.h
//  APSUtilities
//
//  Created by zhangfenglin on 2019/5/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSZlibUtil : NSObject
+ (nullable NSData *)compress:(NSData *)data;
+ (nullable NSData *)uncompress:(NSData *)data;
+ (NSData *)compressWithString:(NSString *)str;
+ (NSString *)uncompressToString:(NSData *)data;
@end

NS_ASSUME_NONNULL_END
