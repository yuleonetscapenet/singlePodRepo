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
@property (nonatomic, strong) NSString *accessToken;

/**
 *  Refresh token
 */
@property (nonatomic, strong) NSString *refreshToken;
@property (nonatomic, strong) NSNumber *expiresIn;
@property (nonatomic, strong) NSString *tokenType;
@property (nonatomic, strong) NSString *scope;
@property (nonatomic, strong) NSNumber *expireTimestamp;

/**
 *  Set the current access token that represents the currently logged in user.
 *
 *  @param token new AXSSDKAccessToken object
 */
+ (void)setCurrentAccessToken:(AXSSDKAccessToken *)token;

/**
 *  Returns the current access token that represents the currently logged in user.
 *
 *  @return AXSSDKAccessToken
 */
+ (AXSSDKAccessToken *)currentAccessToken;

/**
 *  Refresh the current access token.
 *
 *  @param completionHandler completion handler with error and current access token
 */
- (void)refreshCurrentAccessToken:(void(^)(NSError *error, AXSSDKAccessToken *currentAccessToken))completionHandler;

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

@end
