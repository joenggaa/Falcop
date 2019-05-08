//
//  FPRouterManager.h
//  Peregrine
//
//  Created by joengzi on 2019/5/6.
//  Copyright © 2019 joenggaa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FPActionProtocol.h"

#define FPRouterTarget(router) __attribute((peregrine_target(router)))

NS_ASSUME_NONNULL_BEGIN

@interface FPRouterManager : NSObject

/**
 注册路由

 @param url 路径，遵循RFC 2396
 */
+ (void)registerURL:(NSString *)url;
+ (void)openURL:(NSString *)url completion:(void (^)(BOOL success, NSDictionary *result))completion;

@end

NS_ASSUME_NONNULL_END