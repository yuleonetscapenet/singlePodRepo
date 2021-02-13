//
//  AXSSDKConfigs.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 4/8/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKTicketingRegion.h"

@interface AXSSDKConfigs : NSObject

/**
 *  Help Center URL
 *
 *  @return URL
 */
+ (nonnull NSString *)helpCenterURL;
+ (nonnull NSString *)helpCenterURLForRegionId:(nonnull NSNumber *)regionId;
+ (nonnull NSString *)invalidEndUserDetectedSupportUrl;
+ (nonnull NSString *)helpCenterURLForRegion:(AXSSDKTicketingRegion)region;
+ (nonnull NSString *)aboutAXSURL;
+ (nonnull NSNumber *)flashSeatsSiteSkinId;

+ (nonnull NSString *)facebookAuthURL;
+ (nonnull NSString *)blizzardAuthURL;
+ (nonnull NSString *)blizzardAuthRedirectURL;

+ (nonnull NSString *)hostForAxsCom;

+ (nonnull NSString *)cancelledEventHelpURL;
+ (nonnull NSString *)postponedEventHelpURL;
+ (nonnull NSString *)suspendedEventHelpURL;
+ (nonnull NSString *)rescheduledEventHelpURL;

+ (nonnull NSString *)donationFormURL;

+ (nonnull NSURL *)signInWithAppleURL;
+ (nonnull NSString *)signInWithAppleRedirectURI;
+ (nonnull NSString *)signInWithAppleRedirectURI2;

/**
 * Returns system locale. E.g. en-US, en-UK
 */
+ (nonnull NSString *)localeCode;

/**
 Returns device locale
 
 @return US, UK, SE
 */
+ (nonnull NSString *)localeCountryCode;
+ (BOOL)isLocaleCountryEU;
+ (BOOL)isLocaleCountryFlashEnabled;
+ (nonnull NSNumber *)axsApiRegionId;
+ (nonnull NSString *)axsApiRegionIdString;

/**
 Check if a region ID is enabled for sale balance management

 @param regionId region ID
 @return bool
 */
+ (BOOL)isSaleBalanceEnabledRegion:(nonnull NSNumber *)regionId;

@end
