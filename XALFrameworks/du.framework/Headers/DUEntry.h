

#import <Foundation/Foundation.h>

@interface DUEntry : NSObject
typedef void(^ getDUDeviceIdBlock)(NSString *cdidStr);
@property(atomic,copy)getDUDeviceIdBlock getDuDeviceIdBlock;
-(void)setMessage:(NSString*)strMsg;
-(void)setChannel:(NSString*)strChannel;
-(void)setCustomerId:(NSString*)strCustomerId;
-(void)setExisting:(BOOL)bExisting;
-(void)setDomainName:(NSString*)strDomainName;
-(void)setDomainName2:(NSString*)strDomainName;

-(void)run;
-(NSString*)getDuDeviceId;
+(instancetype)sharedInstance;
@end
