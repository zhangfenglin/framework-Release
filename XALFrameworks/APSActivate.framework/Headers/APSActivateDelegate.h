//
//  APSActivateDelegate.h
//  APSActivate
//
//  Created by zhangfenglin on 2019/7/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol APSActivateDelegate <NSObject>
-(void)entryHomePage:(NSString *)pageName;
@end

NS_ASSUME_NONNULL_END
