//
//  AXSSDKOrderProtocol.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 7/27/18.
//  Copyright © 2018 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKEventProtocol.h"
#import "AXSSDKTicketProtocol.h"
#import "AXSSDKTicketingRegion.h"

typedef enum : NSUInteger {
    AXSSDKTicketingSystemTypeOutbox = 0,
    AXSSDKTicketingSystemTypeVeritix,
    AXSSDKTicketingSystemTypeFlash,
    AXSSDKTicketingSystemTypeUnknown
} AXSSDKTicketingSystemType;

typedef NS_ENUM(NSUInteger, AXSSDKOrderRefundStatus) {
    AXSSDKOrderRefundStatusUnknown = 0,
    AXSSDKOrderRefundStatusAvailable = 1,
    AXSSDKOrderRefundStatusPending = 2,
    AXSSDKOrderRefundStatusProcessed = 3,
    AXSSDKOrderRefundStatusError = 4,
    AXSSDKOrderRefundStatusDonationPending = 5,
    AXSSDKOrderRefundStatusDonationProcessed = 6,
    AXSSDKOrderRefundStatusApproved = 7,
    AXSSDKOrderRefundStatusDonationApproved = 8
};

@protocol AXSSDKOrderProtocol <NSObject>

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
@property (readonly) BOOL isNFCEnabled;
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

- (BOOL)isRefundInProgress;

- (nullable id<AXSSDKEventProtocol>)orderEvent;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)allTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)availableTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)availableAndRedeemedTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)availableTicketsCanSell;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)availableTicketsCanTransfer;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)availableAndListedTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)sharedTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)transferredTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)listedTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)refundableTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)donatableTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)currentAndFutureListableTickets;
- (nullable NSSet<id<AXSSDKTicketProtocol>> *)currentAndFutureTransferrableTickets;

- (void)updateWithRefundPendingStatus;
- (void)updateWithDonatedStatus;

@end
