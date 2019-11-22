//
//  APSRemoteConfigService.h
//  APSConfigDemo
//
//  Created by apus on 2019/7/1.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol APSRemoteConfigService <NSObject>

/**
 启动服务，启动服务会自动获取运控信息

 @param completion 启动完成回调
 */
- (void)start:(nullable void (^)(void))completion;

/**
 手动获取云控信息，需在启动服务之后

 @param isAuto
 @param completion 完成回调
 */
- (void)fetchRemoteConfig:(BOOL)isAuto completion:(nullable void (^)(void))completion;

#pragma mark 文件云控信息

/**
 获取配置文件Data

 @param fileName 文件名称
 @return 文件data
 */
- (NSData *)getFileDataWithName:(NSString *)fileName;

/**
 获取文件 string

 @param fileName 文件名称
 @return 文件string
 */
- (NSString *)getFileStringWithName:(NSString *)fileName;

/**
 获取文件属性信息

 @param fileName 文件名
 @param key key值
 @param defaultValue 缺省值
 @return 属性值
 */
- (NSString *)getPropertyValueWithName:(NSString *)fileName
                                   key:(NSString *)key
                          defaultValue:(NSString *)defaultValue;

#pragma mark 配置云控信息
- (NSString *)getStringWithKey:(NSString *)key defaultValue:(NSString *)defaultValue;
- (int)getIntWithKey:(NSString *)key defaultValue:(int)defaultValue;
- (double)getDoubleWithKey:(NSString *)key defaultValue:(double)defaultValue;
- (BOOL)getBoolWithKey:(NSString *)key defaultValue:(BOOL)defaultValue;

- (void)addRemoteConfigModules:(NSArray<NSString *> *)modules;
- (void)removeRemoteConfigModules:(NSArray<NSString *> *)modules;

#pragma DEBUG

@optional
- (NSCache *)getCache;
@optional
- (NSArray<NSString *> *)allKeys;
@optional
- (NSString *)moduleTable;
@optional
- (NSString *)kvTable;
@optional
- (NSCache *)getFileUpdateCache;
@optional
- (NSString *)fileUpdateTable;
@optional
- (NSArray<NSString *> *)allFileUpdateKeys;

@end

NS_ASSUME_NONNULL_END
