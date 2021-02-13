//
//  AXSSDKUserBankAccountManager.h
//  AXSSDKMobile
//
//  Created by Andrew Choi on 1/14/19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AXSSDKFSUser, AXSSDKUserBankAccount, AXSSDKBankAccount;


/// User bank account manager
@interface AXSSDKUserBankAccountManager : NSObject

/**
 Initialze AXSSDKUserBankAccountManager with Flash Seats user
 
 @param  flashUser           Flash seats user
 @return AXSSDKUserBankAccountManager
 */
- (nonnull id)initWithFSUser:(nonnull AXSSDKFSUser *)flashUser;

/**
 Get Flash Seats user's account balance info
 
 @param completionHandler    Completion handler that includes error and account balance
 */
- (void)getAccountBalanceWithCompletionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSNumber * _Nullable balance))completionHandler;

/**
 Get Flash Seats user's bank accounts
 
 @param completionHandler    Completion handler that includes error and user's bank accounts
 */
- (void)getBankAccountsWithCompletionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSArray<AXSSDKUserBankAccount *> * _Nullable accounts))completionHandler;

/**
 Add Flash Seats user's bank account
 
 @param bankAccount          Bank account
 @param completionHandler    Completion handler that includes error
 */
- (void)addBankAccount:(nonnull AXSSDKBankAccount *)bankAccount completionHandler:(void(^ _Nullable)(NSError * _Nullable error))completionHandler;

/**
 Delete Flash Seats user's bank account
 
 @param account              User's bank account
 @param completionHandler    Completion handler that includes error
 */
- (void)deleteBankAccount:(nonnull AXSSDKUserBankAccount *)account completionHandler:(void(^ _Nullable)(NSError * _Nullable error))completionHandler;

/**
 Transfer funds to Flash Seats user's bank account
 
 @param account              User's bank account
 @param amount               Amount to transfer
 @param specialInstructions  Special instructions
 @param completionHandler    Completion handler that includes error
 */
- (void)transferFundsToBankAccount:(nonnull AXSSDKUserBankAccount *)account amount:(nonnull NSNumber *)amount specialInstructions:(nullable NSString *)specialInstructions completionHandler:(void(^ _Nullable)(NSError * _Nullable error))completionHandler;

@end
