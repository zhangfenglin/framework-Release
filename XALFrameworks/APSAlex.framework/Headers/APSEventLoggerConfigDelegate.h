//
//  APSEventLoggerConfigDelegate.h
//  AFNetworking
//
//  Created by apus on 2019/7/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol APSEventLoggerConfigDelegate <NSObject>
- (BOOL)isRealModel;
- (NSString*)getRecordProductURL;
- (NSString*)getRecordAdsURL;
- (NSString*)getReportURL;
@end

NS_ASSUME_NONNULL_END
