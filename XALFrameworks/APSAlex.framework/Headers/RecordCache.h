//
//  RecordCache.h
//  Pods
//
//  Created by apus on 2019/6/24.
//

#ifndef RecordCache_h
#define RecordCache_h
#import <Foundation/Foundation.h>

@interface RecordCache : NSObject

@property(nonatomic, readonly) NSMutableArray *recordArray;

+ (instancetype)sharedInstance;

- (void)addRecordObject:(id)value isRealTimeMode:(BOOL)enabled scheduled:(void (^)(NSArray *recordList))handler;
- (void)saveToDBForced:(BOOL)forced;
- (void)removeAllObject;
@end
#endif /* RecordCache_h */
