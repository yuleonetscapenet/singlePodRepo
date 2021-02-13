//
//  AXSSDKSettings.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 5/13/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AXSSDKTicketingRegion.h"

#define AXSSDKUserLogoutNotification @"AXSSDKUserLogoutNotification"
#define AXSSDKUserLoginNotification @"AXSSDKUserLoginNotification"
#define AXSSDKSeeAllOffersNotification @"AXSSDKSeeAllOffersNotification"
#define AXSSDKThemeUpdateNotification @"AXSSDKThemeUpdateNotification"

#define AXSSDKTicketListedNotification @"AXSSDKTicketListedNotification"
#define AXSSDKTicketTransferredNotification @"AXSSDKTicketTransferredNotification"
#define AXSSDKTicketListingDeletedNotification @"AXSSDKTicketListingDeletedNotification"
#define AXSSDKTicketRecalledNotification @"AXSSDKTicketRecalledNotification"

#define AXSSDKTicketDonatedNotification @"AXSSDKTicketDonatedNotification"
#define AXSSDKNotificationUserInfoKeyDonatedCharity @"AXSSDKNotificationUserInfoKeyDonatedCharity"

/**
 Social login options for Sign in screen.
 */
typedef NS_OPTIONS(NSInteger, AXSSDKSocialLoginOption) {
    /**
    Disabled social login options.
    */
    AXSSDKSocialLoginOptionNone = 0,
    /**
     Ability to sign in with Facebook services.
     @note Automatically shows Sign in with Apple option if specified.
     */
    AXSSDKSocialLoginOptionFacebook = 1 << 0,
    /**
     Ability to sign in with Blizzard services
     @note Automatically shows Sign in with Apple option if specified.
    */
    AXSSDKSocialLoginOptionBlizzard = 1 << 1,
    /**
     Ability to sign in with Sign in with Apple service
    */
    AXSSDKSocialLoginOptionApple = 1 << 2
};

typedef enum : NSUInteger {
    AXSSDKFSTicketStateUnknown = 0,
    AXSSDKFSTicketStateAvailable = 1,
    AXSSDKFSTicketStateListed = 2,
    AXSSDKFSTicketStateReceived = 3,
    AXSSDKFSTicketStateForwarded = 4,
    AXSSDKFSTicketStateRedeemed = 5
} AXSSDKFSTicketState;

/**
 Barcode status
 */
typedef enum : NSUInteger {
    AXSSDKBarcodeStatusUnknown = 0,
    AXSSDKBarcodeStatusAvailable = 1,
    AXSSDKBarcodeStatusForwarded = 2,
    AXSSDKBarcodeStatusReceived = 3,
    AXSSDKBarcodeStatusRevoked = 4,
    AXSSDKBarcodeStatusFSForwarded = 12,
    AXSSDKBarcodeStatusFSReceived = 13,
    AXSSDKBarcodeStatusFSRedeemed = 14,
    AXSSDKBarcodeStatusFSListed = 15
} AXSSDKBarcodeStatus;

/**
 Event status
 */
typedef NS_ENUM(NSUInteger, AXSSDKEventTicketingStatus) {
    AXSSDKEventTicketingStatusUnknown = 0,
    AXSSDKEventTicketingStatusBuyTickets = 1,
    AXSSDKEventTicketingStatusCancelled = 2,
    AXSSDKEventTicketingStatusFree = 3,
    AXSSDKEventTicketingStatusPostponed = 5,
    AXSSDKEventTicketingStatusRescheduled = 6,
    AXSSDKEventTicketingStatusSoldOut = 7,
    AXSSDKEventTicketingStatusTBD = 8,
    AXSSDKEventTicketingStatusFreeComp = 9,
    AXSSDKEventTicketingStatusPrivate = 10,
    AXSSDKEventTicketingStatusVenueChange = 11,
    AXSSDKEventTicketingStatusUnavailable = 12,
    AXSSDKEventTicketingStatusByPhoneOnly = 13,
    AXSSDKEventTicketingStatusBoxOfficeOnly = 14,
    AXSSDKEventTicketingStatusBuyAdmission = 27,
    AXSSDKEventTicketingStatusBuyNow = 29,
    AXSSDKEventTicketingStatusBuy = 30,
    AXSSDKEventTicketingStatusSelect = 31,
    AXSSDKEventTicketingStatusGo = 32,
    AXSSDKEventTicketingStatusLimitedAvailablity = 33,
    AXSSDKEventTicketingStatusSignUpHere = 34,
    AXSSDKEventTicketingStatusSuspended = 36,
    AXSSDKEventTicketingStatusPostponedAllowSales = 37,
    AXSSDKEventTicketingStatusRescheduledAndVenueChange = 38
};

typedef NS_ENUM(NSUInteger, AXSSDKFlashEventCategory) {
    AXSSDKFlashEventCategoryCancelled = 41,
    AXSSDKFlashEventCategoryPosponed = 42,
    AXSSDKFlashEventCategoryRescheduled = 43
};

/**
 AXS SDK environments
 */
typedef enum : NSUInteger {
    /**
     *  The DEV1 environment.
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
    AXSSDKTargetAPIProduction,
    /**
     *  The QA5 environment.
     */
    AXSSDKTargetAPIQA5,
    /**
     *  The new production AXS environment.
     */
    AXSSDKTargetAPIDiscoveryProduction
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
    AXSSDKTargetAPITypeWeb2_1,
    AXSSDKTargetAPITypeFacebookGraph,
    AXSSDKTargetAPITypeAXSCom,
    AXSSDKTargetAPITypeUserLogin,
    AXSSDKTargetAPITypeUnified,
    AXSSDKTargetAPITypeEventBatch,
    AXSSDKTargetAPITypeProxy2
} AXSSDKTargetAPIType;

NSURL *_Nullable AXSSDKResolvedURLForTargetAPIOfType(AXSSDKTargetAPI environment, AXSSDKTargetAPIType type);

/**
 Delievery methods. This config also hide/show transfer and share tabs.
 */
typedef NS_OPTIONS(NSInteger, AXSSDKMethodOfDelivery) {
    AXSSDKMethodOfDeliveryETicket = 1 << 0,
    AXSSDKMethodOfDeliveryAXSMobileId = 1 << 1
};

typedef NS_ENUM(NSUInteger, AXSSDKFSMobileIDBarcodeDisplayMode) {
    AXSSDKFSMobileIDBarcodeDisplayModeQR,
    AXSSDKFSMobileIDBarcodeDisplayModePlaceholder
};

/// Settings for AXS SDK
@interface AXSSDKSettings : NSObject

/**
 *  Returns the global shared settings.
 *
 *  @return AXSSDKSettings
 */
+ (nonnull AXSSDKSettings*)sharedInstance;

/**
 *  Sets client Id and secret. The method should be called in didFinishLaunchingWithOptions delegate.
 *
 *  @param partnerClientId partner client ID
 *  @param clientId        client ID
 *  @param clientSecret    client Secret
 */
+ (void)setPartnerClientId:(nonnull NSString *)partnerClientId clientId:(nonnull NSString *)clientId clientSecret:(nonnull NSString *)clientSecret;

/**
 *  Sets FlashSeats api credential
 *
 *  @param user   user
 *  @param secret secret
 */
+ (void)setFlashSeatsApiUser:(nonnull NSString *)user secret:(nonnull NSString *)secret;

/**
 *  Sets navigation bar color
 *
 *  @param barColor bar color. Default black.
 *  @param translucent navigation bar should be translucent or not. Default YES.
 */
+ (void)setNavigationBarColor:(nonnull UIColor *)barColor translucent:(BOOL)translucent;

/**
 *  Sets navigation title color
 *
 *  @param titleColor navigation title color. Default white.
 */
+ (void)setNavigationTitleColor:(nonnull UIColor *)titleColor;

/**
 *  Sets tabs background color
 *
 *  @param backgroundColor tab background color. Default NavigationBarColor.
 */
+ (void)setTabsBackgroundColor:(nonnull UIColor *)backgroundColor;

/**
 *  Sets tabs foreground color
 *
 *  @param foregroundColor tab foreground color. Default NavigationTitleColor.
 */
+ (void)setTabsForegroundColor:(nonnull UIColor *)foregroundColor;

/**
 *  Sets theme background color.
 *
 *  @param backgroundColor background color. Default white.
 */
+ (void)setBackgroundColor:(nonnull UIColor *)backgroundColor DEPRECATED_ATTRIBUTE;

/**
 *  Sets theme general text color
 *
 *  @param textColor text color. Default black.
 */
+ (void)setTextColor:(nonnull UIColor *)textColor DEPRECATED_ATTRIBUTE;

/**
 *  Sets CTA / button color
 *
 *  @param ctaColor CTA color. Default black.
 */
+ (void)setCtaColor:(nonnull UIColor *)ctaColor;

/**
 *  Sets CTA / button text color
 *
 *  @param ctaTextColor CTA text color. Default white.
 */
+ (void)setCtaTextColor:(nonnull UIColor *)ctaTextColor;

/**
 *  Sets hyperlinks text color
 *
 *  @param linkTextColor hyperlinks text color. Default blue.
 */
+ (void)setLinkTextColor:(nonnull UIColor *)linkTextColor DEPRECATED_ATTRIBUTE;

/**
 *  Sets a logo image that can be display at the center of navigation.
 *
 *  @param logo logo image
 */
+ (void)setClientLogo:(nonnull UIImage *)logo;

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
 Enable site skin selection screen in FlashSeats marketplace find tickets screen

 @param enabled
 */
+ (void)setFlashSeatsManualSiteSkinEnabled:(BOOL)enabled;


/**
 Set which social login will be available on sign in screen. Default is all. Facebook is always enabled.

 @param socialLoginService social logins
 */
+ (void)setSocialLoginOptions:(AXSSDKSocialLoginOption)socialLoginOption;

/**
 Set name for the app font
 
 @param fontName the name of the font
 */
+ (void)setFontName:(nonnull NSString *)fontName;


/**
 Set timeout for retrieving order history.  Default is 120 seconds.
 @param timeout the order history request timeout
 */
+ (void)setOrderHistoryRequestTimeout:(nonnull NSNumber *)timeout;


/// Enable/disable the app to receive a local push notification on the day of the user's upcoming event. Default is enabled.
/// @param enabled
+ (void)setDayOfEventPushNotificationEnabled:(BOOL)enabled;


/**
 Enable navigating back to AXSSDKMYEventsController after Listing Ticket, Transferring Ticket, Deleting Listing, Revoking Ticket.
 @param enabled BOOL
 */
+ (void)setMyEventsRedirectEnabled:(BOOL)enabled;

/**
 Returns current AXS SDK version

 @return current AXS SDK version
 */
+ (nonnull NSString *)version;

/**
 Set navigation title in FlashSeats marketplace find tickets screen
 
 @param navigationTitle String
 */
+ (void)setMarketplaceNavigationTitle:(nonnull NSString *)navigationTitle;

/**
 Set mobile Id theme to override user selection
 */
+ (void)setMobileIdThemeWithGradientBegin:(nonnull UIColor *)beginColor gradientEnd:(nonnull UIColor *)endColor;

/**
 Set supported methods of ticket delivery.
*/
+ (void)setMethodOfDeliverySupport:(AXSSDKMethodOfDelivery)methodOfDelivery;

/**
 Show/Hide FAQ button at ticket barcode screen.
 */
+ (void)setTicketFAQEnabled:(BOOL)enabled;

/**
 Indicates if UI should take into account user interface style e.g. dark/light mode. Default to YES.
 */
@property (nonatomic, assign) BOOL dynamicUserInterfaceStyleEnabled;

- (nullable NSString *)clientIdShort;
- (nullable NSString *)clientId;
- (nullable NSString *)partnerClientId;
- (nullable NSString *)clientSecret;

- (AXSSDKTargetAPI)apiEnv;
- (AXSSDKTargetAPIType)apiType;

- (nonnull UIColor *)navigationBarColor;
- (nonnull UIColor *)navigationTitleColor;
- (nonnull UIColor *)tabsBackgroundColor;
- (nonnull UIColor *)tabsForegroundColor;
- (nonnull UIColor *)backgroundColor;
- (nonnull UIColor *)textColor;
- (nonnull UIColor *)ctaColor;
- (nonnull UIColor *)ctaTextColor;
- (nonnull UIColor *)linkTextColor;
- (nonnull UIImage *)clientLogo;
- (nullable NSString *)fontName;
- (nullable UIColor *)mobileIdThemeGradientBegin;
- (nullable UIColor *)mobileIdThemeGradientEnd;

- (AXSSDKSocialLoginOption)socialLoginOptions;
- (AXSSDKMethodOfDelivery)methodOfDeliverySupport;
- (BOOL)navigationBarTranslucent;
- (nonnull NSNumber *)orderHistoryRequestTimeOut;

- (nonnull NSString *)flashSeatsBasicAuth;

- (BOOL)flashSeatsMarketplaceEnabled;
- (BOOL)flashSeatsManualSiteSkinEnabled;
- (BOOL)dayOfEventPushNotificationEnabled;
- (BOOL)myEventsRedirectEnabled;

- (nullable NSString *)marketplaceNavigationTitle;

+ (nullable NSDictionary *)clientConfigs;
+ (BOOL)hasCustomMobileIdTheme;

@property (nonatomic, readonly) BOOL isTicketFAQEnabled;

@end
