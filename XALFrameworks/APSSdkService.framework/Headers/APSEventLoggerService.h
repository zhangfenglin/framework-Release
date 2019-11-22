//
//  APSEventLogger.h
//  Pods
//
//  Created by apus on 2019/7/8.
//

#ifndef APSEventLoggerService_h
#define APSEventLoggerService_h


@protocol APSEventLoggerService <NSObject>

/**
 start the record service
 */
- (void)start;

/**
 log event

 @param event event code
 */
- (void)logEvent:(NSUInteger)event;

/**
 set the record related urls

 @param productURL product record url
 @param advURL adv record url
 @param reportURL report url
 */
- (void)setRequestProductURL:(NSString *)productURL advURL:(NSString *)advURL reportURL:(NSString *)reportURL;

/**
 log event

 @param event event code
 @param dic event property
 */
- (void)logEventWith:(NSUInteger)event withDic:(NSDictionary<NSString*, id>*) dic;

/**
 log event designated function

 @param module module name
 @param event event code
 @param dic event property dictionary
 @param completion completion block
 */
- (void)logEventWithModule:(NSString*)module andEvent:(NSUInteger)event
                    andDic:(NSDictionary<NSString*, id>*)dic completion:(void(^)(NSData*))completion;

/**
 log count event

 @param name event name
 */
- (void)logCountEventWithName:(NSString*)name;

/**
 enter main page event
 */
- (void)logEnterMainEvent;


/**
 set the default module

 @param name module name
 NSString *const kModuleNameOfGame = @"GameOpe";    // 游戏模块
 NSString *const kModuleNameOfInner = @"xAlex";     // 内置事件
 NSString *const kModuleNameOfDefault = @"default"; // 外部公共事件
 NSString *const kModuleNameOfADS = @"StarkSDK";    // 广告打点
 
 */
- (void)setModuleName:(NSString*)name;


/**
 set the state record's property dicitonary

 @param provider state dictionary
 */
- (void)setStateProvider:(NSDictionary<NSString *, NSString *> * (^)(void))provider;

/**
 GDPR-set personalized ad agreement

 @param consent agree on not
 */
- (void)setPersonalizedAdAgree:(BOOL)consent;

/**
 check the agreement

 @return agree on not
 */
- (BOOL)isPersonalizedAdAgree;


/**
 is EEA

 @return YES or NO
 */
- (BOOL)isEEA;

/**
 log install event for GAME
 */
- (void)logInstall;

/**
 log startup event for GAME
 */
- (void)logStartup;

/**
 log main page showing for GAME
 */
- (void)logMainPageShow;
/**
  记录账户注册
 
  @param accountId   账户id，唯一标识一个账户。
  @param accountType 账户类型，例如自有账户、第三方登录账户等。
  @param age         注册时获取到的用户年龄。
  @param gender      注册时获取到的用户性别。
 */
- (void)logRegisterWithAccountId:(NSString *)accountId
                     accountType:(NSString *)accountType
                             age:(NSUInteger)age
                          gender:(NSUInteger)gender;

/**
 log login for GAME
 记录账户登录
 */
- (void)logLogin;
/**
  记录账户登录
 
  @param accountId    账户id，唯一标识一个账户。
  @param accountLevel 账户等级。
 */
- (void)logLoginWithAccountId:(NSString *)accountId accountLevel:(NSString *)accountLevel;
/**
  记录游戏充值（全部参数）
 
  @param transactionId  交易的流水号。
  @param paymentType    支付类型；例如支付宝、银联、微信等，若为系统赠送，则传free。
  @param currencyType   货币类型；例如CNY人民币，USD美金等。
  @param realCoinNum    支付的真实货币的金额。
  @param virtualCoinNum 充值获得的游戏货币的数量。
  @param iapName        游戏内购买道具的名称。
  @param iapNum         游戏内购买道具的数量。
 */
- (void)logPaymentWithTransactionId:(NSString *)transactionId
                        paymentType:(NSString *)paymentType
                       currencyType:(NSString *)currencyType
                        realCoinNum:(float)realCoinNum
                     virtualCoinNum:(long)virtualCoinNum
                            iapName:(NSString *)iapName
                             iapNum:(long)iapNum;
/**
  记录游戏充值成功（全部参数）
 
  @param transactionId  交易的流水号。
  @param paymentType    支付类型；例如支付宝、银联、微信等，若为系统赠送，则传free。
  @param currencyType   货币类型；例如CNY人民币，USD美金等。
  @param realCoinNum    支付的真实货币的金额。
  @param virtualCoinNum 充值获得的游戏货币的数量。
  @param iapName        游戏内购买道具的名称。
  @param iapNum         游戏内购买道具的数量。
 */
- (void)logPaySuccessWithTransactionId:(NSString *)transactionId
                           paymentType:(NSString *)paymentType
                          currencyType:(NSString *)currencyType
                           realCoinNum:(float)realCoinNum
                        virtualCoinNum:(long)virtualCoinNum
                               iapName:(NSString *)iapName
                                iapNum:(long)iapNum;
/**
  记录订阅成功
 
  @param transactionId  交易的流水号。
  @param paymentType    支付类型；例如支付宝、银联、微信等，若为系统赠送，则传free。
  @param currencyType   货币类型；例如CNY人民币，USD美金等。
  @param realCoinNum    支付的真实货币的金额。
 */
- (void)logSubscribeWithTransactionId:(NSString *)transactionId
                          paymentType:(NSString *)paymentType
                         currencyType:(NSString *)currencyType
                          realCoinNum:(float)realCoinNum;
/**
  记录游戏购买
 
  @param itemName 游戏内购买的虚拟物品的名称。
 */
- (void)logBuyWithItemName:(NSString *)itemName;
/**
  记录游戏购买
 
  @param itemName       游戏内购买的虚拟物品的名称。
  @param itemNum        购买的数量。
  @param itemTotalPrice 购买的总价。
 */
- (void)logBuyWithItemName:(NSString *)itemName itemNum:(long)itemNum itemTotalPrice:(float)itemTotalPrice;
/**
  记录游戏出售
 
  @param itemName       游戏内出售的虚拟物品的名称。
  @param itemNum        出售的数量。
  @param itemTotalPrice 出售的总价。
 */
- (void)logSellWithItemName:(NSString *)itemName itemNum:(long)itemNum itemTotalPrice:(float)itemTotalPrice;
/**
  记录游戏任务（全部参数）
 
  @param questIndex  任务/关卡/副本的编号。
  @param questStatus 当前的任务/关卡/副本的状态；例如开始[a]、完成[c]、失败[f]。
  @param questType   当前的任务/关卡/副本的类型；例如新手任务[new]、主线任务[main]、支线任务[sub]。
  @param questId     任务/关卡/副本的编号或名称。
  @param questName   游戏任务名称。
  @param progress    关卡内的进度。
  @param times       次数。
 */
- (void)logQuestWithQuestIndex:(long)questIndex
                   questStatus:(NSString *)questStatus
                     questType:(NSString *)questType
                       questId:(NSString *)questId
                     questName:(NSString *)questName
                      progress:(long)progress
                         times:(long)times;
/**
  记录游戏任务（必填参数）
 
  @param questIndex  任务/关卡/副本的编号。
  @param questStatus 当前的任务/关卡/副本的状态；例如开始[a]、完成[c]、失败[f]。
 */
- (void)logQuestWithQuestIndex:(long)questIndex questStatus:(NSString *)questStatus;
/**
  记录游戏任务开始（必填参数）
 
  @param questIndex  任务/关卡/副本的编号。
 */
- (void)logQuestBeginWithQuestIndex:(long)questIndex;
/**
  记录游戏任务完成（必填参数）
 
  @param questIndex  任务/关卡/副本的编号。
 */
- (void)logQuestCompletedWithQuestIndex:(long)questIndex;
/**
  记录游戏任务失败（必填参数）
 
  @param questIndex  任务/关卡/副本的编号。
 */
- (void)logQuestFailedWithQuestIndex:(long)questIndex;
/**
  记录游戏任务开始（全部参数）
 
  @param questIndex  任务/关卡/副本的编号。
  @param questType   当前的任务/关卡/副本的类型；例如新手任务[new]、主线任务[main]、支线任务[sub]。
  @param questId     任务/关卡/副本的编号或名称。
  @param questName   游戏任务名称。
  @param progress    关卡内的进度。
  @param times       次数。
 */
- (void)logQuestBeginWithQuestIndex:(long)questIndex
                          questType:(NSString *)questType
                            questId:(NSString *)questId
                          questName:(NSString *)questName
                           progress:(long)progress
                              times:(long)times;
/**
  记录游戏任务开始（全部参数）
 
  @param questIndex  任务/关卡/副本的编号。
  @param questType   当前的任务/关卡/副本的类型；例如新手任务[new]、主线任务[main]、支线任务[sub]。
  @param questId     任务/关卡/副本的编号或名称。
  @param questName   游戏任务名称。
  @param progress    关卡内的进度。
  @param times       次数。
 */
- (void)logQuestCompletedWithQuestIndex:(long)questIndex
                              questType:(NSString *)questType
                                questId:(NSString *)questId
                              questName:(NSString *)questName
                               progress:(long)progress
                                  times:(long)times;
/**
  记录游戏任务失败（全部参数）
 
  @param questIndex  任务/关卡/副本的编号。
  @param questType   当前的任务/关卡/副本的类型；例如新手任务[new]、主线任务[main]、支线任务[sub]。
  @param questId     任务/关卡/副本的编号或名称。
  @param questName   游戏任务名称。
  @param progress    关卡内的进度。
  @param times       次数。
 */
- (void)logQuestFailedWithQuestIndex:(long)questIndex
                           questType:(NSString *)questType
                             questId:(NSString *)questId
                           questName:(NSString *)questName
                            progress:(long)progress
                               times:(long)times;
/**
  记录广告准备。
 
  @param trigger   广告的触发场景，主属性。
  @param advType   广告类型，目前有激励广告、插屏广告、横幅广告、原生广告这四种类型。
  @param isReady   是否有缓存。
 */
- (void)logAdvReadyWithTrigger:(NSString *)trigger advType:(NSString *)advType isReady:(long)isReady;
/**
  记录广告打开。
 
  @param trigger   广告的触发场景，主属性。
  @param advType   广告类型，目前有激励广告、插屏广告、横幅广告、原生广告这四种类型。
 */
- (void)logAdvOpenWithTrigger:(NSString *)trigger advType:(NSString *)advType;
/**
  记录广告展示。
 
  @param trigger   广告的触发场景，主属性。
  @param advType   广告类型，目前有激励广告、插屏广告、横幅广告、原生广告这四种类型。
 */
- (void)logAdvContentShowWithTrigger:(NSString *)trigger advType:(NSString *)advType;
/**
  记录广告内容的点击。
 
  @param trigger 广告的触发场景，主属性。
  @param advType  广告类型，目前有激励广告、插屏广告、横幅广告、原生广告这四种类型。
 */
- (void)logAdvContentClickWithTrigger:(NSString *)trigger advType:(NSString *)advType;
/**
  记录激励视频播放完成。
 
  @param trigger 广告的触发场景，主属性。
 */
- (void)logAdvRewardedWithTrigger:(NSString *)trigger;
/**
  记录广告关闭。
 
  @param trigger 广告的触发场景，主属性。
  @param advType  广告类型，目前有激励广告、插屏广告、横幅广告、原生广告这四种类型。
 */
- (void)logAdvCloseWithTrigger:(NSString *)trigger advType:(NSString *)advType;
/**
  记录自定义事件
 
  @param name             自定义事件的名称。
  @param customParamsJson 自定义的参数Key和Value，传Json字符串，超过10240字节进行预警。
 */
- (void)logCustomEventWithName:(NSString *)name customParamsJson:(NSString *)customParamsJson;

/**
 log click

 @param name event name
 */
- (void)logClickWithName:(NSString *)name;

/**
 log click

 @param name event name
 @param dic dictionary property
 */
- (void)logClickWithName:(NSString *)name params:(NSDictionary<NSString *, id> *)dic;

/**
 share

 @param dialogTitle dialog title
 @param title title
 @param content content string
 */
- (void)shareTextWithDialogTitle:(NSString *)dialogTitle title:(NSString *)title content:(NSString *)content;
/**
  记录核心控件的点击，通常由用户操作触发，比如某些核心道具按钮。
 
  @param name 核心控件的名称。
 */
- (void)logCoreClickWithName:(NSString *)name;
/**
  记录核心操作，通常不是由用户操作触发。
 
  @param name      核心操作的名称。
  @param status    核心操作的状态。
 */
- (void)logCoreOperationWithName:(NSString *)name status:(NSString *)status;
/**
  记录核心展示，通常是一些重点关注的页面。
 
  @param name      核心页面的名称。
 */
- (void)logCoreShowWithName:(NSString *)name;
/**
  记录GDPR页展示。
 */
- (void)logGdprPageShow;
/**
  记录GDPR页面点击了同意。
 */
- (void)logGdprAgree;
/**
  记录GDPR页面点击了不同意。
 */
- (void)logGdprDisagree;
/**
  记录调试打点或异常状态打点的信息。
 
  @param name          调试的名称。（也可以表示异常状态时的异常名称。）
  @param action        调试的动作。（也可以表示异常状态时的异常动作。）
  @param text          调试的信息描述。（也可以表示异常状态时的异常信息描述。）
  @param resultCode    调试的结果码。（也可以表示异常状态时的状态码。）
  @param flag          调试的标记信息。（扩展字段）
 */
- (void)logDebugWithName:(NSString *)name
                  action:(NSString *)action
                    text:(NSString *)text
              resultCode:(NSString *)resultCode
                    flag:(NSString *)flag;

/**
 get the record url string

 @return url string
 */
- (NSString *)getRecordURL;

/**
 log event

 @param module module name
 @param event event code
 @param dic event property dictionary
 */
- (void)logEventExWithModule:(NSString *)module andEvent:(NSUInteger)event andDic:(NSDictionary<NSString*, id>*)dic;


/**
 black list pages

 @param nameArray black list array
 */
- (void)addBackListWithClassName:(NSArray *)nameArray;


/**
 get the event cache
 */
@optional
- (NSString *)getCache;

/**
 get the event database table
 */
@optional
- (NSString *)eventTable;

/**
 get the send Databasae table
 */
@optional
- (NSString *)sendTable;

@end
#endif /* APSEventLoggerService_h */


