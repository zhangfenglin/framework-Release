//
//  apsmicro.h
//  APSUtilities
//
//  Created by zhangfenglin on 2019/5/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define now() [apsmicro now]
#define formatStringWithRadix(value, _radix) ([apsmicro formatStringFromInt:value radix:_radix])

@interface apsmicro : NSObject
+ (NSString *)formatStringFromInt:(int64_t)value radix:(int)radix;
+ (long)now;
@end

NS_ASSUME_NONNULL_END
