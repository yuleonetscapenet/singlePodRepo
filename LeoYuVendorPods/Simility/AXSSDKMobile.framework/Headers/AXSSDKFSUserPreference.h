//
//  AXSSDKFSUserPreference.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 11/10/15.
//  Copyright © 2015 AXS. All rights reserved.
//

#import "AXSSDKModel.h"

#define kNotiFSUserLogout @"kNotiFSUserLogout"

@interface AXSSDKFSUserPreference : AXSSDKModel <AXSJsonEncodableModel>

@property (nonatomic, strong) NSString *email;
@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, strong) NSString *memberId;
@property (nonatomic, strong) NSString *mobileId;
@property (nonatomic, strong) NSString *token;
@property (nonatomic, strong) NSNumber *isPhoneVerified;

/**
 *  Shared instance of the class
 *
 *  @return class object
 */
+ (instancetype)sharedInstance;

/**
 *  User's full name
 *
 *  @return user's full name
 */
- (NSString *)fullName;

/**
 *  Save user preference object on disk
 */
- (void)save;

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
