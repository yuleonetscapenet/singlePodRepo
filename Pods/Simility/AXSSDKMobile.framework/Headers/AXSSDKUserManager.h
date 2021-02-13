//
//  AXSSDKUserManager.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 7/19/17.
//  Copyright © 2017 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKResult.h"
@class AXSSDKFSUser;
@class AXSSDKUserCreditCard;
@class AXSSDKCreditCard;

typedef NS_ENUM(NSUInteger, AXSSDKChangePasswordErrorCode) {
    AXSSDKChangePasswordErrorCodeReusedOldPassword = 400
};

/// User manager
@interface AXSSDKUserManager : NSObject

/**
 Get Flash Seats user by Flash memeber IDs for device region

 @param memberIds array of flash seats member IDs
 @param completionHandler
 */
- (void)getFSUsersWithMemberIds:(nonnull NSArray *)memberIds completionHandler:(nullable void(^)(NSError * _Nullable error, NSArray<NSDictionary *> * _Nullable users))completionHandler;


/**
 Get Flash Seats user by Flash memeber IDs for a region

 @param memberIds array of flash seats member IDs
 @param regionId region id
 @param completionHandler 
 */
- (void)getFSUsersWithMemberIds:(nonnull NSArray *)memberIds regionId:(nonnull NSNumber *)regionId completionHandler:(nullable void(^)(NSError * _Nullable error, NSArray<NSDictionary *> * _Nullable users))completionHandler;

/**
 Get Flash Seats user by Flash memeber IDs for a region

 @param memberIds array of flash seats member IDs
 @param regionIdString region id
 @param completionHandler
 */
- (void)getFSUsersWithMemberIds:(nonnull NSArray *)memberIds regionIdString:(nonnull NSString *)regionIdString completionHandler:(nullable void(^)(NSError * _Nullable error, NSArray<NSDictionary *> * _Nullable users))completionHandler;

/**
 Link flash seats user to current AXS user

 @param flashUser flash seats user
 @param completionHandler
 */
- (void)linkFSAccount:(nonnull AXSSDKFSUser *)flashUser completionHandler:(nullable void(^)(NSError * _Nullable error))completionHandler;


/**
 Send verification email to flash user to complete migration with AXS account

 @param email flash email
 @param completionHandler
 */
- (void)sendVerificationFSAccountEmail:(nonnull NSString *)email completionHandler:(nullable void(^)(NSError * _Nullable error))completionHandler;


/**
 Change password
 
 @param currentPassword   current passowrd
 @param newPassword       new passowrd
 @param completionHandler
 */
- (void)changePassword:(nonnull NSString *)currentPassword to:(nonnull NSString *)newPassword completionHandler:(nullable void(^)(NSError * _Nullable error))completionHandler;

/**
 Reset password
 
 @param newPassword       new passowrd
 @param completionHandler
 */
- (void)resetPasswordWithPassword:(nonnull NSString *)newPassword completionHandler:(nullable void(^)(NSError * _Nullable error))completionHandler;


/// Retrieve credit cards connected to user account
/// @param memberId flash member id
/// @param regionId order region id
/// @param completionHandler A completion handler after API request is completed
- (void)creditCardsWithMemberId:(nonnull NSString *)memberId
                       regionId:(nonnull NSNumber *)regionId
              completionHandler:(void(^ _Nullable)(NSArray<AXSSDKUserCreditCard *> * _Nullable cards, NSError * _Nullable error))completionHandler;

/// Retrieve credit cards connected to user account
/// @param memberId flash member id
/// @param regionIdString order region id
/// @param completionHandler A completion handler after API request is completed
- (void)creditCardsWithMemberId:(nonnull NSString *)memberId
                 regionIdString:(nonnull NSString *)regionIdString
              completionHandler:(void(^ _Nullable)(NSArray<AXSSDKUserCreditCard *> * _Nullable cards, NSError * _Nullable error))completionHandler;


/// Add a new credit card to the user
/// @param creditCard new credit card
/// @param memberId flash member id
/// @param regionId order region id
/// @param completionHandler A completion handler after API request is completed
- (void)addCreditCardWithCard:(nonnull AXSSDKCreditCard *)creditCard
                     regionId:(nonnull NSNumber *)regionId
                     memberId:(nonnull NSString *)memberId
            completionHandler:(void(^ _Nullable)(NSError * _Nullable error, id _Nullable response))completionHandler;

/// Add a new credit card to the user
/// @param creditCard new credit card
/// @param memberId flash member id
/// @param regionIdString order region id
/// @param completionHandler A completion handler after API request is completed
- (void)addCreditCardWithCard:(nonnull AXSSDKCreditCard *)creditCard
               regionIdString:(nonnull NSString *)regionIdString
                     memberId:(nonnull NSString *)memberId
            completionHandler:(void(^ _Nullable)(NSError * _Nullable error, id _Nullable response))completionHandler;

/// Send verification email for current user.
/// @param completionHandler provides an operation result – the number of sent emails or error if the operation has failed.
- (void)sendVerificationEmailWithCompletionHandler:(void(^ _Nullable)(AXSSDKResult<NSNumber *, NSError *> *_Nonnull result))completionHandler;


/// Check email verification status for current user.
/// @param completionHandler provides an operation result – the boolean number `isVerified` or error if the operation has failed.
- (void)getEmailVerificationStatusWithCompletionHandler:(void(^ _Nullable)(AXSSDKResult<NSNumber *, NSError *> *_Nonnull result))completionHandler;

@end
