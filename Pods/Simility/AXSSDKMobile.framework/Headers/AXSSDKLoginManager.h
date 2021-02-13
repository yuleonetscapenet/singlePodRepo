//
//  AXSSDKLoginManager.h
//  AXSSDKMobileID
//
//  Created by Dennis Padilla on 6/9/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AXSSDKAccessToken;
@class AXSSDKLocation;
@class AXSSDKSupportedLocalesLinks;

typedef enum : NSUInteger {
    AXSSDKMigrationCodeAxsLoginFailed = 0,
    AXSSDKMigrationCodeAxsAccountNotFound = 1,
    AXSSDKMigrationCodeFsAccountNotLinked = 2,
    AXSSDKMigrationCodeFsAccountNotFound = 3,
    AXSSDKMigrationCodeMultipleFsAccounts = 4,
    AXSSDKMigrationCodeFsAccountLinked = 5,
    AXSSDKMigrationCodeFsAccountLoginNotAllowed = 6,
    AXSSDKMigrationCodeAxsAccountNotLinked = 7,
    AXSSDKMigrationCodeFlashLoginFailed = 8
} AXSSDKMigrationCode;

typedef NS_ENUM(NSUInteger, AXSSDKLoginErrorCode) {
    AXSSDKLoginErrorCodePreconditionFailed = 412,
    AXSSDKLoginErrorCodeInvalidProtectionToken = 456,
    AXSSDKLoginErrorCodeInvalidLoginCredentials = 8300
};

/// A manager that performs user sign in API calls.
@interface AXSSDKLoginManager : NSObject

/**
 *  Shared instance of the class
 *
 *  @return class object
 */
+ (nonnull AXSSDKLoginManager *)sharedInstance;

/**
 *  Make a request to the AXS platform to log in with the specified credentials. Access token is set on success. AXSSDKUserPreference and AXSSDKFSUserPreference are set on success.
 *
 *  @param email             The user's email
 *  @param password          The user's password
 *  @param completionHandler A completion handler
 */

- (void)loginWithAXSEmail:(nonnull NSString*)email password:(nonnull NSString*)password handler:(void(^ _Nullable)(NSError * _Nullable error, id _Nullable response))completionHandler;


/**
 Log in AXS user with Facebook Token. Access token is set on success.

 @param facebookToken Facebook access token
 @param completionHandler A completion handler that returns the AXSSDKAccessToken if the log in is successful.
 */
- (void)loginWithFacebookToken:(nonnull NSString*)facebookToken handler:(void(^ _Nullable)(NSError * _Nullable error, AXSSDKAccessToken * _Nullable token))completionHandler;


/**
 Log in AXS user with Blizzard Token. Access token is set on success.

 @param token Blizzard token
 @param completionHandler A completion handler that returns the AXSSDKAccessToken if the log in is successful.
 */
- (void)loginWithBlizzardToken:(nonnull NSString*)token handler:(void(^ _Nullable)(NSError * _Nullable error, AXSSDKAccessToken * _Nullable token))completionHandler;


/// Log in AXS user with Sign in with Apple Token. Access token is set on success.
/// @param token ASAuthorizationAppleIDCredential.authorizationCode
/// @param completionHandler An operation completion handler
/// @param isNative Is using native Sign in with App or not
- (void)loginWithAppleToken:(nonnull NSString *)token isNative:(BOOL)isNative handler:(void(^ _Nullable)(NSError * _Nullable error, AXSSDKAccessToken * _Nullable token))completionHandler;

/**
 *  Make a request to the AXS platform to create a new AXS user.
 *
 *  @param email             email
 *  @param password          password
 *  @param firstName         first name
 *  @param lastName          last name
 *  @param location          user location information (optional)
 *  @param privacyURL        latest privacy URL (optional - UK only)
 *  @param termsURL          latest terms and condition URL (optional - UK only)
 *  @param isMarketingOptIn  does user opt in for marketing email or not (optional - UK only)
 *  @param completionHandler A completion handler
 */
- (void)createAccountWithEmail:(nonnull NSString *)email
                      password:(nonnull NSString *)password
                     firstName:(nonnull NSString *)firstName
                      lastName:(nonnull NSString *)lastName
                    privacyURL:(nonnull NSString *)privacyURL
                      termsURL:(nonnull NSString *)termsURL
              isMarketingOptIn:(nonnull NSNumber *)isMarketingOptIn
                      location:(nullable AXSSDKLocation *)location
             completionHandler:(void(^ _Nullable)(NSError * _Nullable error, id _Nullable response))completionHandler;

/**
 *  Make a request to the AXS platform reset the password for the email provided
 *
 *  @param email             The user's email
 *  @param completionHandler A completion handler that returns an error to let you know what went wrong if there's a failure.
 */
- (void)forgotPasswordWithEmail:(nonnull NSString *)email completionHandler:(void(^ _Nullable)(NSError * _Nullable error))completionHandler;

/**
 *  Sets the AXSSDKAccessToken to nil
 *
 */
- (void)logOut;


/**
 Log in FlashSeats user with email and password

 @param email user email
 @param password user password
 @param completionHandler completion callback
 */
- (void)loginWithFSEmail:(nonnull NSString*)email password:(nonnull NSString*)password handler:(void(^ _Nullable)(NSError * _Nullable error))completionHandler;


/**
 Create FlashSeats user

 @param email user email
 @param password user password
 @param firstName user first name
 @param lastName user last name
 @param completionHandler completion callback
 */
- (void)createFSAccountWithEmail:(nonnull NSString *)email
                        password:(nonnull NSString *)password
                       firstName:(nonnull NSString *)firstName
                        lastName:(nonnull NSString *)lastName
               completionHandler:(void(^ _Nullable)(NSError * _Nullable error))completionHandler;

//INFO TEST
- (void)loginWithOTSEmail:(nonnull NSString *)email
                 password:(nonnull NSString *)password
                  handler:(void(^ _Nullable)(NSError * _Nullable error,id _Nullable response))completionHandler;

- (void)userPaymentInfoWithOTSEmail:(nonnull NSString*)email
                          userToken:(nonnull NSString*)userToken
                            handler:(void(^ _Nullable)(NSError * _Nullable error, id _Nullable response))completionHandler;
/**
 Returns current privacy links base on device locale
 
 @param completionHandler
 */
- (void)getCurrentPrivacyLinks:(void(^ _Nullable)(NSString * _Nullable privacyURL, NSString * _Nullable termsURL))completionHandler;

/**
 Returns current supported locales object.

 @param completionHandler
 */
- (void)getSupportedLocalesLinks:(void(^_Nullable)(AXSSDKSupportedLocalesLinks * _Nullable supportedLocales))completionHandler;

@end
