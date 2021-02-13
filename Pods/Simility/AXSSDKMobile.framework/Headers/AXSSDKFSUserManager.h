//
//  AXSSDKFSUserManager.h
//  AXSSDKMobileID
//
//  Created by Wilson Lei on 11/10/15.
//  Copyright © 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AXSSDKCreditCard;

@interface AXSSDKFSUserManager : NSObject

/**
 *  Shared instance of the class
 *
 *  @return class object
 */
+ (nonnull AXSSDKFSUserManager *)sharedInstance;

/**
 *  Log in FlashSeats user with email and password
 *
 *  @param email               User email
 *  @param password            User password
 *  @param forceCreateMobileId Force to create a new mobile ID or not
 *  @param completionHandler   A completion handler after API request is completed
 */
- (void)loginWithEmail:(nonnull NSString *)email password:(nonnull NSString *)password forceCreateMobileId:(BOOL)forceCreateMobileId completionHandler:(void(^ _Nullable)(NSError * _Nullable error))completionHandler DEPRECATED_ATTRIBUTE;

/**
 *  Create a FlashSeats user account
 *
 *  @param email             User email
 *  @param password          User password
 *  @param firstName         User first name
 *  @param lastName          User last name
 *  @param homePhone         User home phone number
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)createAccountWithEmail:(nonnull NSString *)email password:(nonnull NSString *)password firstName:(nonnull NSString *)firstName lastName:(nonnull NSString *)lastName homePhone:(nonnull NSString *)homePhone completionHandler:(void(^ _Nullable)(NSError * _Nullable error))completionHandler DEPRECATED_ATTRIBUTE;

/**
 *  Forget password for FlashSeats user
 *
 *  @param email             User email
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)forgetPasswordWithEmail:(nonnull NSString*)email completionHandler:(void(^ _Nullable)(NSError * _Nullable error))completionHandler;

/**
 *  Log out FlashSeats user account from server
 *
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)logoutAccountWithCompletionHandler:(void(^ _Nullable)(NSError * _Nullable error))completionHandler;

/**
 *  Retrieve FlashSeats user's upcoming events from server
 *
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)myEventsWithCompletionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSArray * _Nullable events))completionHandler DEPRECATED_ATTRIBUTE;


/**
 Verify if user is auth with current device. If user login in another app/device, this call returns 401.

 @param completionHandler A completion handler after API request is completed
 */
- (void)authCheckWithCompletionHandler:(void(^ _Nullable)(NSError * _Nullable error))completionHandler;

/**
 *  User payment settlement methods
 *
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)paymentMethodsWithcompletionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSDictionary * _Nullable paymentMethods))completionHandler;

/**
 *  Add a new credit card to user acount
 *
 *  @param creditCard        AXSSDKCreditCard object
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)addCreditCard:(nullable AXSSDKCreditCard *)creditCard withcompletionHandler:(void(^ _Nullable)(NSError * _Nullable error, id _Nullable response))completionHandler;

/**
 *  Retrieve FlashSeats user's upcoming events from local database
 *
 *  @return List of grouped events / orders
 */
- (nullable NSArray *)myEvents DEPRECATED_ATTRIBUTE;

/**
 *  Retrieve FlashSeats user's transferred events from local database
 *
 *  @return List of events grouped by event then email, order by date.
 */
- (nullable NSArray *)myTransfers DEPRECATED_ATTRIBUTE;

/**
 Save events return from myEventsWithCompletionHandler to database

 @param events Array of events return from method myEventsWithCompletionHandler
 @return BOOL
 */
- (BOOL)saveMyEvents:(nonnull NSArray *)events DEPRECATED_ATTRIBUTE;

@end
