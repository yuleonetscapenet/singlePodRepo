//
//  AXSSDKUserPreference.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 6/1/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKModel.h"
#import "AXSSDKCOVIDEventTimestamp.h"

@class AXSSDKLocation, AXSSDKFSUser, AXSSDKUserSocial;

/**
 *  Represents an AXS user preference
 */
@interface AXSSDKUserPreference : AXSSDKModel <AXSJsonEncodableModel>

@property (nullable, nonatomic, strong) NSString *firstName;
@property (nullable, nonatomic, strong) NSString *lastName;
@property (nullable, nonatomic, strong) NSString *nameInitial;
@property (nullable, nonatomic, strong) NSString *email;
@property (nullable, nonatomic, strong) NSNumber *userId;
@property (nullable, nonatomic, strong) NSString *phone;
@property (nullable, nonatomic, strong) NSNumber *passwordStale;
@property (nullable, nonatomic, strong) NSNumber *emailVerified;
@property (nonatomic, strong, nullable) NSNumber *sentVerificationEmailsCount;
@property (nonatomic, assign) BOOL isVenueAlertActive;
@property (nonatomic, assign) BOOL isEventPerformerAlertActive;
@property (nonatomic, assign) BOOL isAXSNewsletterAlertActive;
@property (nonatomic, assign) BOOL isSpecialOffersAlertActive;
@property (nonatomic, assign) BOOL isTrackingCurrentLocation;

@property (nullable, nonatomic, strong) AXSSDKLocation *location;
@property (nullable, nonatomic, strong) NSMutableArray<AXSSDKFSUser *> *linkedFSAccounts;
@property (nullable, nonatomic, strong) NSMutableArray<AXSSDKCOVIDEventTimestamp *> *covidEventTimestamps;
@property (nullable, nonatomic, strong) NSString *acceptedPrivacyURL;
@property (nullable, nonatomic, strong) NSString *acceptedTermsURL;
@property (nullable, nonatomic, strong) NSNumber *isMarketingOptIn;
@property (nonatomic, assign) BOOL isNative;
@property (nullable, nonatomic, strong) NSNumber *lastFetchedOrderHistoryTime;

@property (nullable, nonatomic, strong) AXSSDKUserSocial *social;
@property (nullable, nonatomic, strong) NSNumber *colorTheme;

@property (nonatomic) BOOL isEmailVerificationRequired;
@property (nonatomic) BOOL isPasswordResetRequired;

/**
 *  Array of AXSSDKIdentity
 */
@property (nullable, nonatomic, strong) NSArray *devices;
@property (nonatomic, assign) BOOL isAnonymous;
@property (nonatomic, assign) BOOL isFBEventsPermissionDeclined;

/**
 *  Current user preference on device. Persistent on device after user logged in.
 *
 *  @return class object
 */
+ (instancetype _Nonnull)sharedInstance;

/**
 *  Update user preference on server with current preference on device.
 *
 *  @param completionHandler completion handler with error and server response
 */
- (void)updateWithCompletionHandler:(void(^ _Nullable)(NSError * _Nullable error, id _Nullable response))completionHandler;

/**
 *  Sync current user preference on device with preference on server. Local user preference will be updated.
 *
 *  @param completionHandler completion handler with error and server response
 */
- (void)syncWithCompletionHandler:(void(^ _Nullable)(NSError * _Nullable error, id _Nullable response))completionHandler;

/**
 *  Returns true if both user preference and access token are not nil;
 *
 *  @return BOOL
 */
- (BOOL)isUserLoggedIn;

/**
 *  Save user's color theme with the key of combination of color theme and user's ID
 *
 *  @return BOOL
 */
- (void)saveColorTheme:(nonnull NSNumber *)colorTheme;

/**
 *  Delete preference from cache
 */
- (void)clearPreference;


/**
 Save preference to cache
 */
- (void)savePreference;

/**
 Return a linked FlashSeats account by member ID

 @param memberId Flash member ID
 @param regionId Region ID
 @return FlashSeats user
 */
- (nullable AXSSDKFSUser *)linkedFSAccountByMemberId:(nonnull NSString *)memberId regionId:(nonnull NSNumber *)regionId;


/**
 Return a linked FlashSeats account base on default selection rule

 @return FlashSeats user
 */
- (nullable AXSSDKFSUser *)defaultLinkedFSAccount;

- (nullable NSNumber *)userId;

- (BOOL)isFSMigrationEmailVerified;

- (BOOL)hasAgreedToCOVIDRiskTermsForKey:(nonnull AXSSDKCOVIDEventTimestampKey)key;

@end
