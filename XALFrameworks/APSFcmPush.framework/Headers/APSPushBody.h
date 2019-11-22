//
//  APSPushBody.h
//  AFNetworking
//
//  Created by apus on 2019/7/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class APSPushBody;
@interface APSPushMessage : NSObject

@property(nonatomic, copy) NSString *appId;
@property(nonatomic, copy) NSString *module;
@property(nonatomic, strong) APSPushBody *body;
@property(nonatomic, copy) NSString *validtime;
@property(nonatomic, copy) NSString *messageType;
@property(nonatomic, copy) NSString *messageId;
@property(nonatomic, copy) NSString *channel;
@property(nonatomic, copy) NSString *time;

+ (APSPushMessage *)getInstance:(NSDictionary *)dic;

@end

@interface APSPushBody : NSObject

@property(nonatomic, copy) NSString *card_style;
@property(nonatomic, copy) NSString *message_type;
@property(nonatomic, copy) NSString *icon;
@property(nonatomic, copy) NSString *tag;
@property(nonatomic, copy) NSString *title;
@property(nonatomic, copy) NSString *sub_title;
@property(nonatomic, copy) NSString *button;
@property(nonatomic, copy) NSString *action_button;
@property(nonatomic, copy) NSString *big_image;
@property(nonatomic, copy) NSString *action_main;
@property(nonatomic, copy) NSString *description_;
@property(nonatomic, copy) NSString *id_;
@property(nonatomic, copy) NSString *replace_old;
@property(nonatomic, copy) NSString *content_id;
@property(nonatomic, copy) NSString *user_group_id;
@property(nonatomic, copy) NSString *extra;

+ (APSPushBody *)getInstance:(NSString *)string;

@end

@interface APSPushExtra : NSObject

@property(nonatomic, copy) NSArray *video;

@end

@interface APSPushVideo : NSObject

@property(nonatomic, copy) NSString *video_url;
@property(nonatomic, copy) NSString *resolution;
@property(nonatomic, copy) NSString *views;
@property(nonatomic, copy) NSString *size;

@end
NS_ASSUME_NONNULL_END
