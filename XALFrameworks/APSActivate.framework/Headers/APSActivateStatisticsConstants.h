//
//  APSActivateStatisticsConstants.h
//  APSActivate
//
//  Created by zhangfenglin on 2019/7/8.
//
#import <Foundation/Foundation.h>
#ifndef APSActivateStatisticsConstants_h
#define APSActivateStatisticsConstants_h

/** 打点模块 */
static NSString* const STATISTICS_MODULE_NAME = @"neptune";
/** 进入主界面 */
static int const XNEPTUNE_ENTER_MAIN_INTERFACE = 67297141;
/** 名称 */
static NSString* const XNEPTUNE_ENTER_MAIN_INTERFACE_NAME_STRING = @"name_s";
/** 收收到receiver的打点，用于推广作弊数据查询 */
static int const XNEPTUNE_XNEPTUNE_PLAY_RECEIVER = 67288693;
/** referrer主渠道号 */
static NSString* const XNEPTUNE_XNEPTUNE_PLAY_RECEIVER_REFERRER_CHANNEL_STRING = @"referrer_channel_s";
/** referrer子渠道号 */
static NSString* const XNEPTUNE_XNEPTUNE_PLAY_RECEIVER_REFERRER_SUB_CHANNEL_STRING = @"referrer_sub_channel_s";
/** referrer信息 */
static NSString* const XNEPTUNE_XNEPTUNE_PLAY_RECEIVER_REFERRER_DATA_STRING = @"referrer_data_s";
/** 接受的referrer的权限情况 */
static NSString* const XNEPTUNE_XNEPTUNE_PLAY_RECEIVER_PERMISSION_CODE_INT = @"permission_code_l";
/** 通过GP API获取的referrer信息 */
static int const XNEPTUNE_INSTALL_REFERRER = 67285621;
/**  */
static NSString* const XNEPTUNE_INSTALL_REFERRER_RESULT_CODE_STRING = @"result_code_s";
/**  */
static NSString* const XNEPTUNE_INSTALL_REFERRER_REFERRER_DATA_STRING = @"referrer_data_s";
/**  */
static NSString* const XNEPTUNE_INSTALL_REFERRER_REFERRER_CLICK_TS_INT = @"referrer_click_ts_l";
/**  */
static NSString* const XNEPTUNE_INSTALL_REFERRER_INSTALL_BEGIN_TS_INT = @"install_begin_ts_l";
static NSString* const XNEPTUNE_INSTALL_REFERRER_TEXT_STRING = @"text_s";

#endif /* APSActivateStatisticsConstants_h */
