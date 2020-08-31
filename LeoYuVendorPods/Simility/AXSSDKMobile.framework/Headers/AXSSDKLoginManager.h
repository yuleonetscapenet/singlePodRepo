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

@interface AXSSDKLoginManager : NSObject

/**
 *  Shared instance of the class
 *
 *  @return class object
 */
+ (AXSSDKLoginManager *)sharedInstance;

/**
 *  Make a request to the AXS platform to log in with the specified credentials. Access token is set on success.
 *
 *  @param email             The user's email
 *  @param password          The user's password
 *  @param completionHandler A completion handler that returns the AXSSDKAccessToken if the log in is successful.
 *                           Will return an error to let you know what went wrong if there's a failure.
 */

- (void)loginWithAXSEmail:(NSString*)email password:(NSString*)password handler:(void(^)(NSError *error,AXSSDKAccessToken *token))completionHandler;


/**
 Log in AXS user with Facebook Token. Access token is set on success.

 @param facebookToken Facebook access token
 @param completionHandler A completion handler that returns the AXSSDKAccessToken if the log in is successful.
 */
- (void)loginWithFacebookToken:(NSString*)facebookToken handler:(void(^)(NSError *error,AXSSDKAccessToken *token))completionHandler;


/**
 *  Make a request to the AXS platform to create a new AXS user.
 *
 *  @param email             email
 *  @param password          password
 *  @param firstName         first name
 *  @param lastName          last name
 *  @param location          user location information (optional)
 *  @param completionHandler A completion handler that returns an error to let you know what went wrong if there's a failure.
 */
- (void)createAccountWithEmail:(NSString *)email password:(NSString *)password firstName:(NSString *)firstName lastName:(NSString *)lastName location:(AXSSDKLocation *)location completionHandler:(void(^)(NSError *error))completionHandler;

/**
 *  Make a request to the AXS platform reset the password for the email provided
 *
 *  @param email             The user's email
 *  @param completionHandler A completion handler that returns an error to let you know what went wrong if there's a failure.
 */
- (void)forgotPasswordWithEmail:(NSString *)email completionHandler:(void(^)(NSError *error))completionHandler;

/**
 *  Sets the AXSSDKAccessToken to nil
 *
 */
- (void)logOut;
@end
