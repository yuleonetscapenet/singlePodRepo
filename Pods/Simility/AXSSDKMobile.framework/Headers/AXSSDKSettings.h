//
//  AXSSDKSettings.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 5/13/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    AXSSDKFSTicketStateUnknown = 0,
    AXSSDKFSTicketStateAvailable = 1,
    AXSSDKFSTicketStateListed = 2,
    AXSSDKFSTicketStateReceived = 3,
    AXSSDKFSTicketStateForwarded = 4
} AXSSDKFSTicketState;

typedef enum : NSUInteger {
    AXSSDKBarcodeStatusUnknown,
    AXSSDKBarcodeStatusAvailable,
    AXSSDKBarcodeStatusForwarded,
    AXSSDKBarcodeStatusReceived,
    AXSSDKBarcodeStatusRevoked
} AXSSDKBarcodeStatus;

typedef enum : NSUInteger {
    /**
     *  The development environment.
     */
    AXSSDKTargetAPIDevelopment,
    /**
     *  The QA "Integration" environment. Usually referred to as "QA"
     */
    AXSSDKTargetAPIQAIntegration,
    /**
     *  The stage environment. Usually matches production data.
     */
    AXSSDKTargetAPIStaging,
    /**
     *  The production AXS environment.
     */
    AXSSDKTargetAPIProduction
} AXSSDKTargetAPI;

typedef enum : NSUInteger {
    AXSSDKTargetAPITypeWeb,
    AXSSDKTargetAPITypeIdentity,
    AXSSDKTargetAPITypeReport,
    AXSSDKTargetAPITypeProximity,
    AXSSDKTargetAPITypeNotification,
    AXSSDKTargetAPITypeUser,
    AXSSDKTargetAPITypeOAuth,
    AXSSDKTargetAPITypeVeritix,
    AXSSDKTargetAPITypeFlashSeat,
    AXSSDKTargetAPITypeTeleSign,
    AXSSDKTargetAPITypeWeb2,
    AXSSDKTargetAPITypeFacebookGraph,
    AXSSDKTargetAPITypeAXSCom,
    AXSSDKTargetAPITypeUserLogin
} AXSSDKTargetAPIType;


@interface AXSSDKSettings : NSObject

/**
 *  Returns the global shared settings.
 *
 *  @return AXSSDKSettings
 */
+ (AXSSDKSettings *)sharedInstance;

/**
 *  Sets client Id and secret. The method should be called in didFinishLaunchingWithOptions delegate.
 *
 *  @param partnerClientId partner client ID
 *  @param clientId        client ID
 *  @param clientSecret    client Secret
 */
+ (void)setPartnerClientId:(NSString *)partnerClientId clientId:(NSString *)clientId clientSecret:(NSString *)clientSecret;

/**
 *  Sets FlashSeats api credential
 *
 *  @param user   user
 *  @param secret secret
 */
+ (void)setFlashSeatsApiUser:(NSString *)user secret:(NSString *)secret;

/**
 *  Sets navigation bar color
 *
 *  @param barColor bar color. Default black.
 *  @param translucent navigation bar should be translucent or not. Default YES.
 */
+ (void)setNavigationBarColor:(UIColor *)barColor translucent:(BOOL)translucent;

/**
 *  Sets navigation title color
 *
 *  @param titleColor navigation title color. Default white.
 */
+ (void)setNavigationTitleColor:(UIColor *)titleColor;

/**
 *  Sets theme background color.
 *
 *  @param backgroundColor background color. Default white.
 */
+ (void)setBackgroundColor:(UIColor *)backgroundColor;

/**
 *  Sets theme general foreground color
 *
 *  @param foregroundColor foreground color. Default white.
 */
+ (void)setForegroundColor:(UIColor *)foregroundColor __deprecated;

/**
 *  Sets theme general text color
 *
 *  @param textColor text color. Default black.
 */
+ (void)setTextColor:(UIColor *)textColor;

/**
 *  Sets CTA / button color
 *
 *  @param ctaColor CTA color. Default black.
 */
+ (void)setCtaColor:(UIColor *)ctaColor;

/**
 *  Sets CTA / button text color
 *
 *  @param ctaTextColor CTA text color. Default white.
 */
+ (void)setCtaTextColor:(UIColor *)ctaTextColor;

/**
 *  Sets hyperlinks text color
 *
 *  @param linkTextColor hyperlinks text color. Default blue.
 */
+ (void)setLinkTextColor:(UIColor *)linkTextColor;

/**
 *  Sets a logo image that can be display at the center of navigation.
 *
 *  @param logo logo image
 */
+ (void)setClientLogo:(UIImage *)logo;

/**
 *  Sets different API end point host.
 */
+ (void)setApiEnvironment:(AXSSDKTargetAPI)apiEnv;

/**
 *  Sets different API end point type.
 */
+ (void)setApiType:(AXSSDKTargetAPIType)apiEnv;

/**
 *  Enable FlashSeats marketplace UI. API availability is based on account permission.
 *
 *  @param enabled BOOL
 */
+ (void)setFlashSeatsMarketplaceEnabled:(BOOL)enabled;

/**
 * Returns system locale. E.g. en-US, en-UK
 */
+ (NSString *)systemLocaleCountry;

- (NSString *)clientIdShort;
- (NSString *)clientId;
- (NSString *)partnerClientId;
- (NSString *)clientSecret;

- (AXSSDKTargetAPI)apiEnv;
- (AXSSDKTargetAPIType)apiType;

- (UIColor *)navigationBarColor;
- (UIColor *)navigationTitleColor;
- (UIColor *)backgroundColor;
- (UIColor *)textColor;
- (UIColor *)ctaColor;
- (UIColor *)ctaTextColor;
- (UIColor *)linkTextColor;
- (UIImage *)clientLogo;
- (BOOL)navigationBarTranslucent;

- (NSString *)flashSeatsBasicAuth;

- (BOOL)flashSeatsMarketplaceEnabled;

+ (NSDictionary *)clientConfigs;

@end
