//
//  AppDelegate.h
//  TYPagerControllerDemo
//
//  Created by tany on 2017/7/6.
//  Copyright © 2017年 tany. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TabPagerControllerDemoController.h"
#define APP_DELEGATE ((AppDelegate *)[UIApplication sharedApplication].delegate)
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) TabPagerControllerDemoController *tabDemo;

@end

