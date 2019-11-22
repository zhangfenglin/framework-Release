// automatically generated, do not modify !!!

#import <FlatBuffers_ObjC/FBTable.h>
#import "MacAddress.h"


@interface HardwareId : FBTable 

@property (nonatomic, strong)FBMutableArray<NSString *> *imei;

@property (nonatomic, strong)NSString *cpu_serial;

@property (nonatomic, strong)NSString *emmc_id;

@property (nonatomic, strong)FBMutableArray<MacAddress *> *mac_addr;

@property (nonatomic, strong)NSString *android_serial;

@property (nonatomic, strong)NSString *cpu_frequence;

@property (nonatomic, assign)int16_t cpu_num;

@property (nonatomic, strong)NSString *cpu_name;

@property (nonatomic, assign)BOOL support_nfc;

@property (nonatomic, assign)BOOL support_camera;

@property (nonatomic, strong)NSString *puuid;

@property (nonatomic, strong)NSString *default_imei;

@property (nonatomic, assign)BOOL is_emulator;

@end
