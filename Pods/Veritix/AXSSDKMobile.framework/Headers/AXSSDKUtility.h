//
//  AXSSDKUtility.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 6/1/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface AXSSDKUtility : NSObject

+ (UIViewController *)appRootViewController;

+ (void)clearFacebookCookies;
+ (void)clearFacebookCookiesWithCompletionHandler:(void(^)(void))completionHandler;
+ (void)clearAXSCookies;
+ (NSString *)stringTokenFromTokenData:(NSData *)token;
+ (NSString *)httpAuthHeaderValueWithUsername:(NSString *)username password:(NSString *)password;

/**
 *  Returns FlashSeats timezone ID. FlashSeats has very particular timezone ID mapping logic.
 *
 *  @return timezone ID
 */
+ (NSNumber *)FSTimeZoneId;


/**
 Returns array of category IDs that are performance events.

 @return array of category IDs
 */
+ (NSArray *)FSPerformanceCategoryIds;

/**
 Returns array of category IDs that are sports events.

 @return array of category IDs
 */
+ (NSArray *)FSSportsCategoryIds;

+ (NSString *)deviceIdForVendor;
+ (NSString *)deviceModelAndVersion;

+ (NSString *)sha256:(NSString*)input saltData:(NSData *)saltData;
+ (NSString *)bundleVersion:(NSBundle *)bundle;
@end
