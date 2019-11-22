//
//  APSIBoot.h
//  APSMiddleware
//
//  Created by zhangfenglin on 2019/7/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol APSIBoot <NSObject>
-(void)didFinishLaunching;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)entryHomePage:(NSString*)pageName;
@end

NS_ASSUME_NONNULL_END
