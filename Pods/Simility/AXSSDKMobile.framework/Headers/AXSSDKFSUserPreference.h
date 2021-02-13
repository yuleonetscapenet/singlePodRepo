//
//  AXSSDKFSUserPreference.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 11/10/15.
//  Copyright © 2015 AXS. All rights reserved.
//

#import "AXSSDKModel.h"
#import "AXSSDKTicketingRegion.h"

@class AXSSDKFSUser, AXSSDKFSSiteSkin;

@interface AXSSDKFSUserPreference : AXSSDKModel <AXSJsonEncodableModel>

@property (nullable, nonatomic, strong) NSString *email;
@property (nullable, nonatomic, strong) NSString *firstName;
@property (nullable, nonatomic, strong) NSString *lastName;
@property (nullable, nonatomic, strong) NSString *memberId;
@property (nullable, nonatomic, strong) NSString *mobileId;
@property (nullable, nonatomic, strong) NSString *token;
@property (nullable, nonatomic, strong) NSNumber *regionId;
@property (nonatomic, assign, readonly) AXSSDKTicketingRegion region;
@property (nullable, nonatomic, strong) NSNumber *isPhoneVerified;
@property (nullable, nonatomic, strong) AXSSDKFSSiteSkin *siteSkin;

/**
 *  Shared instance of the class
 *
 *  @return class object
 */
+ (nonnull instancetype)sharedInstance;

/**
 *  User's full name
 *
 *  @return user's full name
 */
- (nullable NSString *)fullName;

/**
 *  Save user preference object on disk
 */
- (void)save;

- (void)updateWithFSUser:(nonnull AXSSDKFSUser *)user;

/**
 *  Check if user is logged in
 *
 *  @return BOOL
 */
- (BOOL)isUserLoggedIn;

/**
 *  Clear user preference object.
 */
- (void)logout;
@end
