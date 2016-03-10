//
//  UIAlertView+WTRequestCenter.h
//  WTRequestCenter
//
//  Created by SongWentong on 14-10-16.
//  Copyright (c) 2014年 song. All rights reserved.
//

@import UIKit;
#if (defined(__IPHONE_OS_VERSION_MAX_ALLOWED) && __IPHONE_OS_VERSION_MAX_ALLOWED <= 80000)
@interface UIAlertView (WTRequestCenter)
+(void)showAlertWithMessage:(NSString*)message;

+(void)showAlertWithTitle:(NSString*)title message:(NSString*)message duration:(NSTimeInterval)time;
//显示一个提示框
+(void)showAlertWithTitle:(NSString*)title message:(NSString*)message duration:(NSTimeInterval)time complectionHandler:(dispatch_block_t)block;
@end
#endif