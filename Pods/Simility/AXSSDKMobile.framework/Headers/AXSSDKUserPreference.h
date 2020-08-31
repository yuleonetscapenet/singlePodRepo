//
//  AXSSDKUserPreference.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 6/1/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKModel.h"

@class AXSSDKLocation;

/**
 *  Represents an AXS user preference
 */
@interface AXSSDKUserPreference : AXSSDKModel <AXSJsonEncodableModel>

@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, strong) NSString *email;
@property (nonatomic, strong) NSNumber *userId;
@property (nonatomic, strong) NSString *phone;
@property (nonatomic, assign) BOOL isVenueAlertActive;
@property (nonatomic, assign) BOOL isEventPerformerAlertActive;
@property (nonatomic, assign) BOOL isAXSNewsletterAlertActive;
@property (nonatomic, assign) BOOL isSpecialOffersAlertActive;
@property (nonatomic, assign) BOOL isTrackingCurrentLocation;
@property (nonatomic, strong) AXSSDKLocation *location;

/**
 *  Array of AXSSDKIdentity
 */
@property (nonatomic, strong) NSArray *devices;
@property (nonatomic, assign) BOOL isAnonymous;
@property (nonatomic, assign) BOOL isNative;
@property (nonatomic, assign) BOOL isFBEventsPermissionDeclined;

/**
 *  Current user preference on device. Persistent on device after user logged in.
 *
 *  @return class object
 */
+ (instancetype)sharedInstance;

/**
 *  Update user preference on server with current preference on device.
 *
 *  @param completionHandler completion handler with error and server response
 */
- (void)updateWithCompletionHandler:(void(^)(NSError *error, id response))completionHandler;

/**
 *  Sync current user preference on device with preference on server. Local user preference will be updated.
 *
 *  @param completionHandler completion handler with error and server response
 */
- (void)syncWithCompletionHandler:(void(^)(NSError *error, id response))completionHandler;

/**
 *  Returns true if both user preference and access token are not nil;
 *
 *  @return BOOL
 */
- (BOOL)isUserLoggedIn;

/**
 *  Delete preference from cache
 */
- (void)clearPreference;

- (NSNumber *)userId;
@end
