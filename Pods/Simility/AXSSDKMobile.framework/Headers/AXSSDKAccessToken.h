//
//  AXSSDKAccessToken.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 6/1/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKModel.h"

/**
 *  Represents an access token for using AXS services.
 */
@interface AXSSDKAccessToken : AXSSDKModel <AXSJsonEncodableModel>

/**
 *  Access token
 */
@property (nullable, nonatomic, strong) NSString *accessToken;

/**
 *  Refresh token
 */
@property (nullable, nonatomic, strong) NSString *refreshToken;
@property (nullable, nonatomic, strong) NSNumber *expiresIn;
@property (nullable, nonatomic, strong) NSString *tokenType;
@property (nullable, nonatomic, strong) NSString *scope;
@property (nullable, nonatomic, strong) NSNumber *expireTimestamp;

/**
 *  Set the current access token that represents the currently logged in user.
 *
 *  @param token new AXSSDKAccessToken object
 */
+ (void)setCurrentAccessToken:(nullable AXSSDKAccessToken *)token;

/**
 *  Set the current access token that represents the currently logged in user. And save user token to cookie for WebViews
 *
 *  @param token new AXSSDKAccessToken object
 *  @param saveToCookie should save to cookie or not
 */
+ (void)setCurrentAccessToken:(nullable AXSSDKAccessToken *)token saveToCookie:(BOOL)saveToCookie;

/**
 *  Returns the current access token that represents the currently logged in user.
 *
 *  @return AXSSDKAccessToken
 */
+ (nullable AXSSDKAccessToken *)currentAccessToken;

/**
 *  Refresh the current access token.
 *
 *  @param completionHandler completion handler with error and current access token
 */
- (void)refreshCurrentAccessToken:(void(^ _Nullable)(NSError * _Nullable error, AXSSDKAccessToken * _Nullable currentAccessToken))completionHandler;

/**
 *  Check if the current access token is about to expire.
 *
 *  @return BOOL
 */
- (BOOL)shouldRefresh;

/**
 *  Clear the current access token, user info and cached data
 */
+ (void)clearTokenAndLogout;


/**
 *  Update token from cookie in case user login use AXS ID webview
 */
- (void)updateTokensFromCookie;

/**
 *  Save current token to webview cookie
 */
- (void)saveToCookie;


- (nullable NSHTTPCookie *)authCookie;

@end
