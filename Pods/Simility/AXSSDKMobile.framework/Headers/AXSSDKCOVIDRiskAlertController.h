//
//  AXSSDKCOVIDRiskAlertController.h
//  AXSSDKMobileUI
//
//  Created by gpan on 7/22/20.
//  Copyright © 2020 AXS. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol AXSSDKOrderProtocol;
@class AXSSDKFSUser;

AXSSDK_FINAL
@interface AXSSDKCOVIDRiskAlertController : UIViewController

@property (nonatomic, copy, nullable) void(^onDidAgree)(void);

+ (nullable instancetype)controllerForFSUser:(nonnull AXSSDKFSUser *)user;
+ (nullable instancetype)controllerForOrder:(nonnull id<AXSSDKOrderProtocol>)order;

+ (nonnull instancetype)new NS_UNAVAILABLE;
- (nonnull instancetype)init NS_UNAVAILABLE;
- (nonnull instancetype)initWithCoder:(nullable NSCoder *)aDecoder NS_UNAVAILABLE;
- (nonnull instancetype)initWithNibName:(nullable NSString *)nibNameOrNil bundle:(nullable NSBundle *)nibBundleOrNil NS_UNAVAILABLE;

@end

@interface AXSSDKCOVIDRiskAlertController (Helpers)

+ (BOOL)shouldShowForFSUser:(nonnull AXSSDKFSUser *)user;
+ (BOOL)shouldShowForOrder:(nonnull id<AXSSDKOrderProtocol>)order;

@end
