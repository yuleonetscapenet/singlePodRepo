//
//  AXSSDKFSOrder.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 1/8/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "AXSSDKOrderProtocol.h"

@class AXSSDKFSEvent, AXSSDKFSTicket;

/**
 *  @warning   Don't use it - DEPRECATED: Use AXSSDKOrder instead.
 *  Represents a FlashSeats user order
 */
__deprecated_msg("Use AXSSDKOrder instead")
@interface AXSSDKFSOrder : NSManagedObject <AXSSDKOrderProtocol>

@property (nullable, nonatomic, strong) NSString *orderId;
@property (nullable, nonatomic, strong) NSString *flashSeatsMemberId;
@property (nullable, nonatomic, strong) NSString *flashSeatsMobileId;
@property (nullable, nonatomic, strong) NSNumber *isHidden;
@property (nullable, nonatomic, strong) NSNumber *regionId;
@property (nullable, nonatomic, strong) NSString *regionIdString;
@property (nonatomic, assign, readonly) AXSSDKTicketingRegion region;
@property (nullable, nonatomic, strong) NSString *currencyCode;
@property (nullable, nonatomic, strong) AXSSDKFSEvent *event;
@property (nullable, nonatomic, strong) NSSet<AXSSDKFSTicket *> *tickets;
@property (nullable, nonatomic, strong) NSNumber *nfcEnabled;
@property (nullable, nonatomic, strong) NSString *flashEventConfigId;
@property (nullable, nonatomic, strong) NSString *ticketingSystem;
@property (nonatomic, assign, readonly) AXSSDKTicketingSystemType ticketingSystemType;
@property (nullable, nonatomic, strong) NSString *ticketingSystemContextId;
@property (nullable, nonatomic, strong) NSNumber *refundStatusId;
@property (nullable, nonatomic, strong) NSDate *refundDeadlineDate;
@property (nonatomic, assign, readonly) AXSSDKOrderRefundStatus refundStatus;
@property (nullable, nonatomic, strong) NSNumber *refundAllowed;
@property (nullable, nonatomic, strong) NSNumber *donateAllowed;
@property (nullable, nonatomic, strong) NSString *orderNumber;
@property (readonly) BOOL refundEnabled;
@property (readonly) BOOL donateEnabled;

- (nullable NSSet<id<AXSSDKTicketProtocol>> *)availableAndRedeemedTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)transferedTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)refundableTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)donatableTickets;

- (void)updateWithRefundPendingStatus;
- (void)updateWithDonatedStatus;

@end

@interface AXSSDKFSOrder (CoreDataGeneratedAccessors)

- (void)addTicketsObject:(nonnull AXSSDKFSTicket *)value;
- (void)removeTicketsObject:(nonnull AXSSDKFSTicket *)value;
- (void)addTickets:(nonnull NSSet<AXSSDKFSTicket *> *)values;
- (void)removeTickets:(nonnull NSSet<AXSSDKFSTicket *> *)values;

@end

