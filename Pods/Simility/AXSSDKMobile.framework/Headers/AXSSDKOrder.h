//
//  AXSSDKOrder.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 6/23/17.
//  Copyright © 2017 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "AXSSDKOrderProtocol.h"

@class AXSSDKFSOrder, AXSSDKProduct;


/// Represents an AXS order
@interface AXSSDKOrder : NSManagedObject <AXSSDKOrderProtocol>

@property (nullable, nonatomic, strong) AXSSDKFSOrder *flashSeatsOrder;
@property (nullable, nonatomic, strong) NSString *orderId;
@property (nullable, nonatomic, strong) NSString *orderNumber;
@property (nullable, nonatomic, strong) NSNumber *regionId;
@property (nullable, nonatomic, strong) NSString *regionIdString;
@property (nonatomic, assign, readonly) AXSSDKTicketingRegion region;
@property (nullable, nonatomic, strong) NSString *currencyCode;
@property (nullable, nonatomic, strong) NSString *flashEventConfigId;
@property (nullable, nonatomic, strong) NSString *flashSeatsMemberId;
@property (nullable, nonatomic, strong) NSString *flashSeatsMobileId;
@property (nullable, nonatomic, strong) NSString *ticketingSystem;
@property (nonatomic, assign, readonly) AXSSDKTicketingSystemType ticketingSystemType;
@property (nullable, nonatomic, strong) NSString *ticketingSystemContextId;
@property (nullable, nonatomic, strong) NSNumber *nfcEnabled;
@property (nullable, nonatomic, strong) NSNumber *refundStatusId;
@property (nullable, nonatomic, strong) NSDate *refundDeadlineDate;
@property (nonatomic, assign, readonly) AXSSDKOrderRefundStatus refundStatus;
@property (nullable, nonatomic, strong) NSNumber *refundAllowed;
@property (nullable, nonatomic, strong) NSNumber *donateAllowed;
@property (readonly) BOOL refundEnabled;
@property (readonly) BOOL donateEnabled;

@property (nullable, nonatomic, strong) NSNumber *isHidden;
@property (nullable, nonatomic, strong) NSNumber *isMultiDay;
@property (nullable, nonatomic, strong) NSDate *orderDate;
@property (nullable, nonatomic, strong) NSString *orderStatus;
@property (nullable, nonatomic, strong) NSNumber *totalPrice;
@property (nullable, nonatomic, strong) NSNumber *userId;

@property (nullable, nonatomic, strong) NSSet<AXSSDKProduct *> *products;

- (BOOL)isRefundInProgress;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)refundableTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)donatableTickets;

@end

@interface AXSSDKOrder (CoreDataGeneratedAccessors)

- (void)addProductsObject:(nonnull AXSSDKProduct *)value;
- (void)removeProductsObject:(nonnull AXSSDKProduct *)value;
- (void)addProducts:(nonnull NSSet<AXSSDKProduct *> *)values;
- (void)removeProducts:(nonnull NSSet<AXSSDKProduct *> *)values;

- (nullable id<AXSSDKEventProtocol>) orderEvent;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)allTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)availableTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)availableAndRedeemedTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)availableTicketsCanTransfer;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)availableAndListedTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)listedTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)sharedTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)transferredTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)refundableTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)donatableTickets;

- (void)updateWithRefundPendingStatus;
- (void)updateWithDonatedStatus;

@end
