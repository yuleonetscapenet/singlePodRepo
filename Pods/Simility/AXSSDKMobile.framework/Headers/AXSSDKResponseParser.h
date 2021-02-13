//
//  AXSSDKResponseParser.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 7/18/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AXSSDKFSUser, AXSSDKCOVIDEventTimestamp;

typedef NS_ENUM(NSInteger, AXSSDKAdditionalUserAttributeCategory) {
    AXSSDKAdditionalUserAttributeCategoryUser = 2,
    AXSSDKAdditionalUserAttributeCategoryToken = 3,
    AXSSDKAdditionalUserAttributeCategoryCOVID = 2019
};

@interface AXSSDKResponseParser : NSObject

/**
 Parse FlashSeats response for better error message

 @param response Server API response
 @param completionHandler 
 */
- (void)parseFSResponse:(nonnull id)response completionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSDictionary * _Nullable response))completionHandler;


/**
 Parse additionalUserAttributes from login, create, user preference API for FSUsers.

 @param response Server API response
 */
+ (nullable NSArray<AXSSDKFSUser *> *)parseLinkedFSAccounts:(nonnull id)response;

/**
 Parse additionalUserAttributes from login, create, user preference API for COVID Timestamps.

 @param response Server API response
 */
+ (nullable NSArray<AXSSDKCOVIDEventTimestamp *> *)parseCOVIDEventTimestamps:(nonnull id)response;

+ (nullable NSError *)errorFromResponse:(nonnull id)response;

@end
