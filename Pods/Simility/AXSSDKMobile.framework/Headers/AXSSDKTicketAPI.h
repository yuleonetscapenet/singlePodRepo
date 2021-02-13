//
//  AXSSDKTicketAPI.h
//  AXSSDKMobileID
//
//  Created by Dennis Padilla on 6/8/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AXSSDKOrder, AXSSDKTicket;
@protocol AXSSDKTicketProtocol;


/// Helper class which handles share/transfer/revoke tickets
@interface AXSSDKTicketAPI : NSObject
/**
 Initialize the TicketAPI with order and ticket object

 @param order AXSSDKOrder object
 @param ticket AXSSDKTicket object
 @return TicketAPI
 */
- (nullable instancetype)initWithOrder:(nonnull AXSSDKOrder *)order ticket:(nonnull AXSSDKTicket *)ticket;


/**
 Initialize the TicketAPI with order and multiple ticket objects

 @param order AXSSDKOrder object
 @param tickets Array of AXSSDKTicket objects
 @return TicketAPI
 */
- (nullable instancetype)initWithOrder:(nonnull AXSSDKOrder *)order tickets:(nonnull NSArray<id<AXSSDKTicketProtocol>> *)tickets;

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
- (nonnull instancetype)initWithEventCode:(nonnull NSString *)eventCode itemNumber:(NSInteger)itemNumber seat:(nonnull NSString *)seat fulfillmentId:(nonnull NSString *)fulfillmentId orderNumber:(nonnull NSString*) orderNumber ticketingSystem:(nonnull NSString *)ticketingSystem;

/**
 *  Initialize the TicketAPI with common parameters
 *
 *  @param eventCode        eventCode from User Order History output of selected seat
 *  @param itemNumber       itemNumber from User Order History output of selected seat
 *  @param seat             ticket name from User Order History output of selected seat
 *  @param fulfilmentId     fulfillmentId from User Order History output of selected seat
 *  @param orderNumber      orderNumber from User Order History
 *  @param ticketingSystem  system from User Order History
 *  @param flashSeatsMemberId  Flash Seats member ID
 *  @param flashSeatsMobileId  Flash Seats mobile ID
 *  @param regionId  API region ID
 */
- (nonnull instancetype)initWithEventCode:(nonnull NSString *)eventCode
                               itemNumber:(NSInteger)itemNumber
                                     seat:(nonnull NSString *)seat
                            fulfillmentId:(nonnull NSString *)fulfillmentId
                              orderNumber:(nonnull NSString*) orderNumber
                          ticketingSystem:(nonnull NSString *)ticketingSystem
                       flashSeatsMemberId:(nullable NSString *)flashSeatsMemberId
                       flashSeatsMobileId:(nullable NSString *)flashSeatsMobileId
                                 regionId:(nullable NSNumber *)regionId;

/**
 *  Initialize the TicketAPI with common parameters
 *
 *  @param eventCode        eventCode from User Order History output of selected seat
 *  @param itemNumber       itemNumber from User Order History output of selected seat
 *  @param seat             ticket name from User Order History output of selected seat
 *  @param fulfilmentId     fulfillmentId from User Order History output of selected seat
 *  @param orderNumber      orderNumber from User Order History
 *  @param ticketingSystem  system from User Order History
 *  @param flashSeatsMemberId  Flash Seats member ID
 *  @param flashSeatsMobileId  Flash Seats mobile ID
 *  @param regionIdString  API region ID
 */
- (nonnull instancetype)initWithEventCode:(nonnull NSString *)eventCode
                               itemNumber:(NSInteger)itemNumber
                                     seat:(nonnull NSString *)seat
                            fulfillmentId:(nonnull NSString *)fulfillmentId
                              orderNumber:(nonnull NSString*) orderNumber
                          ticketingSystem:(nonnull NSString *)ticketingSystem
                       flashSeatsMemberId:(nullable NSString *)flashSeatsMemberId
                       flashSeatsMobileId:(nullable NSString *)flashSeatsMobileId
                           regionIdString:(nullable NSString *)regionIdString;

/**
 *  Shares/transfers a ticket with the receiver specified by the parameters
 *
 *  @param email             Email of receiver
 *  @param firstName         First name of receiver
 *  @param lastName          Last name of receiver
 *  @param completionHandler A completion block that'll let you know what went wrong if there's a failure.
 */
- (void)shareTicketWithEmail:(nonnull NSString *)email firstName:(nonnull NSString *)firstName lastName:(nonnull NSString *)lastName handler:(void(^ _Nullable)(NSError * _Nullable error, id _Nullable response))completionHandler;

/**
 *  Shares/transfers a ticket with the receiver specified by the parameters
 *
 *  @param email             Email of receiver
 *  @param firstName         First name of receiver
 *  @param lastName          Last name of receiver
 *  @param message           Message of receiver
 *  @param completionHandler A completion block that'll let you know what went wrong if there's a failure.
 */
- (void)shareTicketWithEmail:(nonnull NSString *)email firstName:(nonnull NSString *)firstName lastName:(nonnull NSString *)lastName message:(nullable NSString *)message handler:(void(^ _Nullable )(NSError * _Nullable error, id _Nullable response))completionHandler;

/**
 *  Shares/transfer a ticket with the receiver specified by the parameters
 *
 *  @param email             Email of receiver
 *  @param firstName         First name of receiver
 *  @param lastName          Last name of receiver
 *  @param message           Message of receiver
 *  @param seatIds           Array of seat IDs to transfer
 *  @param completionHandler A completion block that'll let you know what went wrong if there's a failure.
 */
- (void)shareTicketWithEmail:(nonnull NSString*)email firstName:(nonnull NSString*)firstName lastName:(nonnull NSString*)lastName message:(nullable NSString *)message seatIds:(nullable NSArray *)seatIds handler:(void(^ _Nullable )(NSError * _Nullable error, id _Nullable response))completionHandler;

/**
 *  Revokes a ticket that has been shared
 *  @param completionHandler A completion block that'll let you know what went wrong if there's a failure.
 */
- (void)revokeTicketWithHandler:(void(^ _Nullable)(NSError * _Nullable error, id _Nullable response))completionHandler;

/**
 *  Returns the barcode for the order number and seat specified in the class.
 *
 *  @param completionHandler A completion block that will return the barcode for the order number and seat specified in the class, or an error.
 */
- (void)getBarcodeForOrderNumberAndSeat:(void(^ _Nullable )(NSError * _Nullable error, NSString * _Nullable barcodeString, NSString * _Nullable fulfillmentId))completionHandler DEPRECATED_ATTRIBUTE;
@end
