//
//  AXSSDKFSUserManager.h
//  AXSSDKMobileID
//
//  Created by Wilson Lei on 11/10/15.
//  Copyright © 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AXSSDKCreditCard;

/**
 *  A manager that handles FlashSeats user related API calls.
 */
@interface AXSSDKFSUserManager : NSObject

/**
 *  Shared instance of the class
 *
 *  @return class object
 */
+ (AXSSDKFSUserManager *)sharedInstance;

/**
 *  Log in FlashSeats user with email and password
 *
 *  @param email               User email
 *  @param password            User password
 *  @param forceCreateMobileId Force to create a new mobile ID or not
 *  @param completionHandler   A completion handler after API request is completed
 */
- (void)loginWithEmail:(NSString*)email password:(NSString*)password forceCreateMobileId:(BOOL)forceCreateMobileId completionHandler:(void(^)(NSError *error))completionHandler;

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
- (void)createAccountWithEmail:(NSString*)email password:(NSString*)password firstName:(NSString *)firstName lastName:(NSString *)lastName homePhone:(NSString *)homePhone completionHandler:(void(^)(NSError *error))completionHandler;

/**
 *  Forget password for FlashSeats user
 *
 *  @param email             User email
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)forgetPasswordWithEmail:(NSString*)email completionHandler:(void(^)(NSError *error))completionHandler;

/**
 *  Log out FlashSeats user account from server
 *
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)logoutAccountWithCompletionHandler:(void(^)(NSError *error))completionHandler;

/**
 *  Retrieve FlashSeats user's upcoming events from server
 *
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)myEventsWithCompletionHandler:(void(^)(NSError *error, NSArray *events))completionHandler;


/**
 *  User payment settlement methods
 *
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)paymentMethodsWithcompletionHandler:(void(^)(NSError *error, NSDictionary *paymentMethods))completionHandler;

/**
 *  Add a new credit card to user acount
 *
 *  @param creditCard        AXSSDKCreditCard object
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)addCreditCard:(AXSSDKCreditCard *)creditCard withcompletionHandler:(void(^)(NSError *error, id resposne))completionHandler;

/**
 *  Retrieve FlashSeats user's upcoming events from local database
 *
 *  @return List of grouped events / orders
 */
- (NSArray *)myEvents;

/**
 *  Retrieve FlashSeats user's transferred events from local database
 *
 *  @return List of events grouped by event then email, order by date.
 */
- (NSArray *)myTransfers;


/**
 Save events return from myEventsWithCompletionHandler to database

 @param events Array of events return from method myEventsWithCompletionHandler
 @return BOOL
 */
- (BOOL)saveMyEvents:(NSArray *)events;
@end
