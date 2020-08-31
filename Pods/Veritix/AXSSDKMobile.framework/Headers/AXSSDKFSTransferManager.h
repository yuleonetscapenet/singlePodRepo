//
//  AXSSDKFSTransferManager.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 2/25/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AXSSDKFSTicketShareRecipient;

/**
 *  The manager that handlers FlashSeats ticket transfer APIs.
 */
@interface AXSSDKFSTransferManager : NSObject

/**
 *  Shared instance of the class
 *
 *  @return class object
 */
+ (AXSSDKFSTransferManager *)sharedInstance;

/**
 *  Transfer tickets to a recipient
 *
 *  @param ticketIds         Array of ticket IDs
 *  @param recipient         Recipient object
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)transferTickets:(NSArray<NSString *> *)ticketIds recipient:(AXSSDKFSTicketShareRecipient *)recipient completionHandler:(void(^)(NSError *error))completionHandler;

/**
 *  Recall a transferred action. The action can include a group of tickets.
 *
 *  @param transferActionId  Transfer action ID
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)recallTransferTicket:(NSString *)transferActionId completionHandler:(void(^)(NSError *error))completionHandler;

@end
