//
//  AXSSDKAlertController.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 4/18/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AXSSDKAlertController : UIAlertController

+ (AXSSDKAlertController *)alertControllerWithTitle:(NSString*)title message:(NSString *)message cancelButtonTitle:(NSString *)cancelButtonTitle;

/**
 Finds the best controller to show the alert controller. It may fail sometimes. Use showFromController instead.
 */
- (void)show;

- (void)showFromController:(UIViewController *)controller;

@end
