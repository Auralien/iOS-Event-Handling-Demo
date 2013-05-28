//
//  EHDAppDelegate.h
//  EventHandlingDemo
//
//  Created by Maxim Mikheev on 28.05.13.
//  Copyright (c) 2013 Maxim Mikheev. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EHDViewController;

@interface EHDAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) EHDViewController *viewController;

@end
