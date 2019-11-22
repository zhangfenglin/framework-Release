//
//  APSLogPrivate.h
//  Apollo
//
//  Created by apus on 2019/6/18.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//
#import "APSDDLog.h"
#import "APSLogServer.h"
#import <Foundation/Foundation.h>
#ifndef APSLogPrivate_h
#define APSLogPrivate_h

@interface APSDDLog ()

- (void)_DDlogWithEnable:(BOOL)enable flag:(NSString *)flag format:(id)format args:(va_list)args;

@end


#endif /* APSLogPrivate_h */
