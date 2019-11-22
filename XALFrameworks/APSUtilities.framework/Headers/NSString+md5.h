//
//  NSString+md5.h
//  abc
//
//  Created by apus on 2019/7/2.
//  Copyright © 2019 APUS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (md5)
- (NSString *)md5;
@end

@interface NSData (md5)
- (NSString *)md5;
@end

@interface NSData (enxor)
- (NSData *)encryptXOR:(UInt8)value;
@end

@interface NSString (randomString)
+ (NSString *)randomStringWithLength:(int)len;
@end
NS_ASSUME_NONNULL_END
