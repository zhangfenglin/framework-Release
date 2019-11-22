// automatically generated, do not modify !!!

#import <FlatBuffers_ObjC/FBTable.h>
#import "Identify.h"


@interface RegisterRequest : FBTable 

@property (nonatomic, strong)NSString *locale;

@property (nonatomic, strong)NSString *ip;

@property (nonatomic, assign)int64_t client_time;

@property (nonatomic, assign)int16_t local_zone;

@property (nonatomic, strong)NSString *client_id;

@property (nonatomic, strong)NSString *channel_id;

@property (nonatomic, strong)NSString *package_name;

@property (nonatomic, assign)int32_t version_code;

@property (nonatomic, strong)NSString *version_name;

@property (nonatomic, assign)int64_t install_time;

@property (nonatomic, assign)int64_t update_time;

@property (nonatomic, strong)FBMutableArray<NSString *> *tags;

@property (nonatomic, strong)NSString *ocid;

@property (nonatomic, strong)FBMutableArray<NSNumber *> *resolution;

@property (nonatomic, strong)NSString *installer_source;

@property (nonatomic, assign)int32_t sdk_level;

@property (nonatomic, strong)NSString *android_id;

@property (nonatomic, strong)NSString *os_version;

@property (nonatomic, assign)int64_t elapsed_time;

@property (nonatomic, strong)NSString *sign_hash;

@property (nonatomic, assign)int16_t is_system;

@property (nonatomic, strong)NSString *install_path;

@property (nonatomic, strong)NSString *token;

@property (nonatomic, strong)NSString *appid;

@property (nonatomic, assign)BOOL isVpn;

@property (nonatomic, assign)BOOL isProxy;

@property (nonatomic, assign)BOOL install_non_market_apps;

@property (nonatomic, assign)BOOL is_limit_ad_tracking;

@property (nonatomic, assign)BOOL isPad;

@property (nonatomic, assign)BOOL is_emulator;

@property (nonatomic, assign)int32_t networkType;

@property (nonatomic, strong)NSString *manufacturer;

@property (nonatomic, strong)NSString *model;

@property (nonatomic, strong)NSString *puuid;

@property (nonatomic, strong)NSString *advertising_id;

@property (nonatomic, strong)FBMutableArray<NSString *> *referrer_list;

@property (nonatomic, strong)NSString *referrer_api_referrer;

@property (nonatomic, assign)int64_t referrer_api_clicktime;

@property (nonatomic, assign)int64_t referrer_api_begintime;

@property (nonatomic, strong)NSString *reason;

@property (nonatomic, strong)FBMutableArray<Identify *> *third_ids;

@property (nonatomic, assign)int16_t encrypt_type;

@property (nonatomic, strong)NSString *encrypt_key;

@property (nonatomic, strong)NSString *encrypt_iv;

@property (nonatomic, assign)int16_t encrypt_vc;

@property (nonatomic, strong)NSString *encrypt_content;

@end
