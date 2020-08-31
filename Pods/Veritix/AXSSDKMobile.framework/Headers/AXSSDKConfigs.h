//
//  AXSSDKConfigs.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 4/8/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AXSSDKConfigs : NSObject

/**
 *  Seat upgrades URL
 *
 *  @return URL
 */
+ (NSString *)seatUpgradesURL;

/**
 *  AXS ID URL. User sign in, create account and forget password. After the user is logged in, it will redirect to https://www.axs.com/axs-id-redirect with access_token & refresh_token in query parameters.
 *
 *  @return URL
 */
+ (NSString *)signInURL;

/**
 *  AXS user account information and edit URL
 *
 *  @return URL
 */
+ (NSString *)accountInfoURL;

+ (NSNumber *)flashSeatsSiteSkinId;

+ (NSString *)facebookAuthURL;

@end
