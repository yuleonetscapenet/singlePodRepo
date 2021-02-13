//
//  AXSSDKConvertTicketManager.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 7/19/18.
//  Copyright © 2018 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AXSSDKTicket, AXSSDKFSUser;


/**
 A manager which handles converting e-tickets to Flash tickets.
 */
@interface AXSSDKConvertTicketManager : NSObject


/**
 Init manager with tickets and Flash event config ID. With event Config ID, there is no need to perform verify before convert.

 @param tickets Array of tickets
 @param eventId Flash event config ID
 @param contextId Ticketing System Context ID
 @param regionId region for the order that contains these tickets.
 @return Manager
 */
- (nonnull id)initWithTickets:(nonnull NSArray<AXSSDKTicket *> *)tickets flashEventId:(nonnull NSString *)eventId contextId:(nonnull NSString *)contextId regionId:(nonnull NSNumber *)regionId;

/**
 Init manager with tickets and Flash event config ID. With event Config ID, there is no need to perform verify before convert.

 @param tickets Array of tickets
 @param eventId Flash event config ID
 @param contextId Ticketing System Context ID
 @param regionIdString region for the order that contains these tickets.
 @return Manager
 */
- (nonnull id)initWithTickets:(nonnull NSArray<AXSSDKTicket *> *)tickets flashEventId:(nonnull NSString *)eventId contextId:(nonnull NSString *)contextId regionIdString:(nonnull NSString *)regionIdString;

/**
 Vertify if tickets can be converted and sold on marketplace

 @param contextId Veritix context ID
 @param productCode product Code
 @param zoneId event zone ID
 @param completionHandler returns tickets that are verified
 */
- (void)verifyTickets:(nonnull NSString *)contextId productCode:(nonnull NSString *)productCode zoneId:(nonnull NSString *)zoneId completionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSArray<AXSSDKTicket *> * _Nullable verifiedTickets))completionHandler DEPRECATED_ATTRIBUTE;

/**
 Initiate the conversion process. A response does not mean conversion is completed.

 @param completionHandler returns flash user that performs the conversion
 */
- (void)convertTicketsToFlashWithCompletionHandler:(void(^ _Nullable)(NSError * _Nullable error, AXSSDKFSUser * _Nullable fsUser))completionHandler;

/**
 Check conversion status for each tickets

 @param completionHandler return converted tickets.
 */
- (void)checkConversionStatusWithCompletionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSArray<AXSSDKTicket *> * _Nullable convertedTickets))completionHandler;

@end
