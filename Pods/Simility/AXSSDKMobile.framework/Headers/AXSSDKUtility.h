//
//  AXSSDKUtility.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 6/1/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AXSSDKTicketingRegion.h"
#import "AXSSDKSettings.h"

@interface AXSSDKUtility : NSObject

+ (nullable UIViewController *)appRootViewController;
+ (void)clearFacebookCookies;
+ (void)clearCookiesForDomain:(nonnull NSString *)domain completionHandler:(void(^ _Nullable)(void))completionHandler;
+ (void)clearAXSCookies;
+ (void)clearAXSCookiesWithCompletionHandler:(void(^ _Nullable)(void))completionHandler;
+ (nonnull NSString *)stringTokenFromTokenData:(nonnull NSData *)token;
+ (nonnull NSString *)httpAuthHeaderValueWithUsername:(nonnull NSString *)username password:(nonnull NSString *)password;
+ (nullable UIImage *)code128BarcodeImageFromString:(nonnull NSString *)inputString;

/**
 *  Returns FlashSeats timezone ID. FlashSeats has very particular timezone ID mapping logic.
 *
 *  @return timezone ID
 */
+ (nonnull NSNumber *)FSTimeZoneId;


/**
 Returns array of category IDs that are performance events.

 @return array of category IDs
 */
+ (nonnull NSArray *)FSPerformanceCategoryIds;

/**
 Returns array of category IDs that are sports events.

 @return array of category IDs
 */
+ (nonnull NSArray *)FSSportsCategoryIds;

+ (nonnull NSString *)deviceIdForVendor;
+ (nonnull NSString *)deviceModelAndVersion;

+ (nonnull NSString *)sha256:(nonnull NSString*)input saltData:(nonnull NSData *)saltData;
+ (nonnull NSString *)bundleVersion:(nonnull NSBundle *)bundle;

+ (nonnull UIImage *)resizeImage:(nonnull UIImage *)image withQuality:(CGInterpolationQuality)quality rate:(CGFloat)rate;

+ (nonnull NSDateFormatter *)dateTimeFormatter:(BOOL)dateOnly;
+ (nonnull NSDateFormatter *)dateTimeFormatter:(BOOL)dateOnly timeZone:(nullable NSTimeZone *)timeZone;
+ (nonnull NSString *)dateToString:(nonnull NSDate *)date;
+ (nonnull NSDate *)stringToDate:(nonnull NSString *)dateString;
+ (BOOL)isAXSApp;

/**
 check if host is AXS api

 @param host host to check
 @return BOOL
 */
+ (BOOL)isAXSAPI:(nonnull NSString *)host;

/**
 Return currency symbol by currency code
 @param currencyCode e.g. USD, GBP
 */
+ (nullable NSString *)currencySymbolByCode:(nonnull NSString *)currencyCode;

/**
 Return currency symbol by region ID
 @param regionId e.g. @1, @2
 */
+ (nonnull NSString *)currencySymbolByRegionId:(nonnull NSNumber *)regionId;

/**
 Return currency symbol by AXSSDKTicketingRegion
 @param region e.g. AXSSDKTicketingRegionUS, AXSSDKTicketingRegionGB, etc
 */
+ (nonnull NSString *)currencySymbolByRegion:(AXSSDKTicketingRegion)region;

/**
 Return currency code by region ID
 @param regionId e.g. @1, @2
 */
+ (nonnull NSString *)currencyCodeByRegionId:(nonnull NSNumber *)regionId;

/**
 Return currency code by AXSSDKTicketingRegion
 @param regionId e.g. AXSSDKTicketingRegionUS, AXSSDKTicketingRegionGB, etc
 */
+ (nonnull NSString *)currencyCodeByRegion:(AXSSDKTicketingRegion)region;

/**
 Return locale by region ID
 @param regionId e.g. @1, @2
 */
+ (nonnull NSString *)localeIdentifierByRegionId:(nonnull NSNumber *)regionId;

/**
 Return locale by AXSSDKTicketingRegion
 @param regionId e.g. AXSSDKTicketingRegionUS, AXSSDKTicketingRegionGB, etc
 */
+ (nonnull NSString *)localeIdentifierByRegion:(AXSSDKTicketingRegion)region;

/**
 Return USA states full names
 */
+ (nonnull NSArray<NSString *> *)usStatesFullNames;

/**
 Return USA states short names
 */
+ (nonnull NSArray<NSString *> *)usStatesShortNames;

/**
 Return listing expiration option label by listing expire format
 @param listingExpireFormat e.g. @1, @4, @5, @6, @8, @9
 */
+ (nonnull NSString *)listingExprireOption:(nonnull NSNumber *)listingExpireFormat;

/**
 Return listing expiration option label by listing expire format
 @param listingExpireFormat e.g. @1, @4, @5, @6, @8, @9
 */
+ (nonnull NSString *)listingExpireOption:(nonnull NSNumber *)listingExpireFormat;

/**
 Return AXSSDKTicketingRegion given a regionId
 @param regionId e.g. @1, @2, @3, @4, @5
 */
+ (AXSSDKTicketingRegion)ticketingRegionByRegionId:(nullable NSNumber *)regionId;

/**
 Return AXSSDKFSTicketState given a AXSSDKBarcodeStatus
 @param AXSSDKBarcodeStatus e.g. 1, 2, 3, 4, 12, 13, 14, 15
*/
+ (AXSSDKFSTicketState)flashTicketStateBy:(AXSSDKBarcodeStatus)barcodeState;

/**
 Open Help Center on default browser of the device
*/
+ (void)openHelpCenter;

/**
 Open Help Center on default browser of the device given a regionId
 @param regionId e.g. @1, @2, @3, @4, @5
*/
+ (void)openHelpCenterForRegionId:(nonnull NSNumber *)regionId;

/**
 Open Help Center on default browser of the device given a AXSSDKTicketingRegion
 @param region e.g. AXSSDKTicketingRegionUS, AXSSDKTicketingRegionGB, etc
*/
+ (void)openHelpCenterForRegion:(AXSSDKTicketingRegion)region;

/**
 Open support page for end users flagged as invalid on default browser of the device
*/
+ (void)openInvalidEndUserDetectedSupportPage;

@end

@interface NSObject (Cast)

/**
 *  Returns safely casted object if available otherwise return nil
 *  @param  object Any object
 *
 *  @return casted object
 */
+ (nullable instancetype)cast:(nullable id)object;

@end
