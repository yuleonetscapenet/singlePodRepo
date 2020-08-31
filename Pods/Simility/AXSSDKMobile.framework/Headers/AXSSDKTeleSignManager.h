//
//  AXSSDKTeleSignManager.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 8/29/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    AXSSDKTeleSignVerifyMethodSMS,
    AXSSDKTeleSignVerifyMethodVoice
} AXSSDKTeleSignVerifyMethod;

@interface AXSSDKTeleSignManager : NSObject

/**
 *  Shared instance of the class
 *
 *  @return class object
 */
+ (instancetype)sharedInstance;

/**
 *  Check if verification code matches
 *
 *  @param code Verification code
 *
 *  @return BOOL
 */
- (BOOL)isValidCode:(NSNumber *)code;

/**
 *  Send verification code via SMS or Voice
 *
 *  @param phoneNumber User phone number with country code
 *  @param method      SMS or Voice
 */
- (void)verifyCodeWithPhoneNumber:(NSString *)phoneNumber method:(AXSSDKTeleSignVerifyMethod)method;

@end
