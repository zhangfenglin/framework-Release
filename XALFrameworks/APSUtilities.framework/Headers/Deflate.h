//
//  Deflate.h
//  CompressionTest
//
//  Created by apus on 2019/5/31.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Deflate : NSObject

+ (nullable NSData *)compress: (NSData *)data;
+ (nullable NSData *)decompress: (NSData *)data;

@end

NS_ASSUME_NONNULL_END
