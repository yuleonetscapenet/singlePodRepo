//
//  AXSSDKTicketAPI.h
//  AXSSDKMobileID
//
//  Created by Dennis Padilla on 6/8/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AXSSDKTicketAPI : NSObject

/**
 *  Initialize the TicketAPI with common parameters
 *
 *  @param eventCode        eventCode from User Order History output of selected seat
 *  @param itemNumber       itemNumber from User Order History output of selected seat
 *  @param seat             ticket name from User Order History output of selected seat
 *  @param fulfilmentId     fulfillmentId from User Order History output of selected seat
 *  @param orderNumber      orderNumber from User Order History
 *  @param ticketingSystem  system from User Order History
 */
- (instancetype)initWithEventCode:(NSString *)eventCode itemNumber:(NSInteger)itemNumber seat:(NSString *)seat fulfillmentId:(NSString *)fulfillmentId orderNumber:(NSString*) orderNumber ticketingSystem:(NSString *)ticketingSystem;

/**
 *  Shares a ticket with the receiver specified by the parameters
 *
 *  @param email             Email of receiver
 *  @param firstName         First name of receiver
 *  @param lastName          Last name of receiver
 *  @param completionHandler A completion block that'll let you know what went wrong if there's a failure.
 */
- (void)shareTicketWithEmail:(NSString*)email firstName:(NSString*)firstName lastName:(NSString*)lastName handler:(void(^)(NSError *error, id response))completionHandler;

/**
 *  Revokes a ticket that has been shared
 *  @param completionHandler A completion block that'll let you know what went wrong if there's a failure.
 */
- (void)revokeTicketWithHandler:(void(^)(NSError *error, id response))completionHandler;

/**
 *  Returns the barcode for the order number and seat specified in the class.
 *
 *  @param completionHandler A completion block that will return the barcode for the order number and seat specified in the class, or an error.
 */
- (void)getBarcodeForOrderNumberAndSeat:(void(^)(NSError *error, NSString *barcodeString, NSString *fulfillmentId))completionHandler;
@end
