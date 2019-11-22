//
//  APSRecordDatabase.h
//  Adjust
//
//  Created by apus on 2019/7/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class APSEventTable;
@class APSSendTable;

@interface APSRecordDatabase : NSObject

@property(nonatomic) APSEventTable *eventTable;
@property(nonatomic) APSSendTable *sendTable;

+ (instancetype)sharedInstance;

- (NSDictionary *)getSendEvents;
- (NSUInteger)deleteSendAndEvents:(NSInteger)rowId;

@end

NS_ASSUME_NONNULL_END
