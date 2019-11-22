//
//  APSAESManager.h
//  Adjust
//
//  Created by apus on 2019/7/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSAESManager : NSObject

@property(nonatomic, copy) NSString *key;
@property(nonatomic, copy) NSString *iv;

+ (instancetype)sharedInstance;

@end

NS_ASSUME_NONNULL_END
