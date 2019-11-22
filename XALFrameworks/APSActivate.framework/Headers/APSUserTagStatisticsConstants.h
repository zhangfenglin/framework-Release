//
//  APSUserTagStatisticsConstants.h
//  APSActivate
//
//  Created by zhangfenglin on 2019/7/8.
//

#import <Foundation/Foundation.h>
#import <APSSdkService/APSEventLoggerService.h>

NS_ASSUME_NONNULL_BEGIN

static NSString* const MODULE_NAME = @"LoloSDK";
static int const MAX_KEYWORDS_REPORT_COUNT = 20;
static int const MAX_STATE_EVENT_COUNT     = 5;

/** 统计网络请求情况 */
static int const XLOKI_ADOTO_UTAG_REQUEST = 84037493;

static NSString* const XLOKI_ADOTO_UTAG_REQUEST_NAME_STRING = @"name_s";
static NSString* const XLOKI_ADOTO_UTAG_REQUEST_FROM_SOURCE_STRING = @"from_source_s";
static NSString* const XLOKI_ADOTO_UTAG_REQUEST_SCHEDULE_TIME_INT = @"schedule_time_l";
static NSString* const XLOKI_ADOTO_UTAG_REQUEST_RESULT_CODE_STRING = @"result_code_s";
static NSString* const XLOKI_ADOTO_UTAG_REQUEST_CRC32_CHANGE_STRING = @"crc32_change_s";
static NSString* const XLOKI_ADOTO_UTAG_REQUEST_TEXT_STRING = @"text_s";

/** 统计keywords信息 */
static int const XLOKI_ADOTO_UTAG_KEYWORDS = 84036725;

static NSString* const XLOKI_ADOTO_UTAG_KEYWORDS_KEYWORDS_KEY_STRING = @"keywords_key_s";
static NSString* const XLOKI_ADOTO_UTAG_KEYWORDS_KEYWORDS_VALUE_STRING = @"keywords_value_s";

static NSString* const kStatisticsNameInit      = @"eInit";
static NSString* const kStatisticsNameSetJob    = @"eSetJob";
static NSString* const kStatisticsNameStart     = @"eStart";
static NSString* const kStatisticsNameEnd       = @"eEnd";

static NSString* const kCrc32ChangeTrue         = @"true";
static NSString* const kCrc32ChangeFalse        = @"false";

@class KeyWord;

@interface APSUserTagStatisticsConstants : NSObject

-(BOOL)findMustReportKeywords:(NSString *)key;
-(void)logKeywords:(id<APSEventLoggerService>)loggerService keywords:(NSArray<KeyWord *> *)keywords;
@end

NS_ASSUME_NONNULL_END
