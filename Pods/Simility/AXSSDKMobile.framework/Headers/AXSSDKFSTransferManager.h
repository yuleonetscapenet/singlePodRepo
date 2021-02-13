//
//  AXSSDKFSTransferManager.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 2/25/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AXSSDKFSTicketShareRecipient;

@interface AXSSDKFSTransferManager : NSObject

/**
 *  Shared instance of the class
 *
 *  @return class object
 */
+ (nonnull AXSSDKFSTransferManager *)sharedInstance;

/**
 *  Transfer tickets to a recipient
 *
 *  @param ticketIds         Array of ticket IDs
 *  @param recipient         Recipient object
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)transferTickets:(nonnull NSArray<NSString *> *)ticketIds recipient:(nonnull AXSSDKFSTicketShareRecipient *)recipient completionHandler:(void(^ _Nullable)(NSError * _Nullable error))completionHandler DEPRECATED_ATTRIBUTE;

/**
 *  Recall a transferred action. The action can include a group of tickets.
 *
 *  @param transferActionId  Transfer action ID
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)recallTransferTicket:(nonnull NSString *)transferActionId completionHandler:(void(^ _Nullable)(NSError * _Nullable error))completionHandler DEPRECATED_ATTRIBUTE;

@end
