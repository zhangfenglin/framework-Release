//
//  APSEventTable.h
//  Adjust
//
//  Created by apus on 2019/7/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class FMDatabaseQueue, EventRecord;
@class FMDatabase;

@interface APSEventTable : NSObject

- (instancetype)init:(FMDatabaseQueue *)db;
- (BOOL)insertEvents:(NSArray<EventRecord *> *)events;
- (NSArray *)selectFromeIDs:(NSString *)idListStr;
- (BOOL)deleteWithIDs:(NSArray *)idList;
- (NSArray *)getRecordListWithIDArray:(NSArray *)IDArray;
- (NSDictionary *)getRecordListWithLimit:(NSInteger)limit;
- (NSUInteger)count;
- (NSUInteger)productCount;
- (NSUInteger)starkSDKCount:(FMDatabase * _Nullable )fmdb;
- (NSString *)dump;
@end

NS_ASSUME_NONNULL_END
