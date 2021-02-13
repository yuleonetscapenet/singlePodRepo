//
//  AXSSDKAlertController.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 4/18/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AXSSDKAlertController : UIAlertController

+ (nonnull AXSSDKAlertController *)alertControllerWithTitle:(nullable NSString*)title
                                                    message:(nullable NSString *)message
                                          cancelButtonTitle:(nullable NSString *)cancelButtonTitle;

+ (nonnull AXSSDKAlertController *)alertControllerWithTitle:(nullable NSString*)title
                                                    message:(nullable NSString *)message
                                          actionButtonTitle:(nullable NSString *)actionButtonTitle
                                              actionHandler:(void (^ __nullable)(UIAlertAction * _Nullable action))actionHandler;

+ (nonnull AXSSDKAlertController *)alertControllerWithTitle:(nullable NSString*)title
                                                    message:(nullable NSString *)message
                                          cancelButtonTitle:(nullable NSString *)cancelButtonTitle
                                          actionButtonTitle:(nullable NSString *)actionButtonTitle
                                              cancelHandler:(void (^ __nullable)(UIAlertAction * _Nullable action))cancelHandler
                                              actionHandler:(void (^ __nullable)(UIAlertAction * _Nullable action))actionHandler;

+ (nonnull AXSSDKAlertController *)alertControllerWithGeneralErrorMessage;

/**
 Finds the best controller to show the alert controller. It may fail sometimes. Use showFromController instead.
 */
- (void)show;

- (void)showFromController:(nonnull UIViewController *)controller;

@end
