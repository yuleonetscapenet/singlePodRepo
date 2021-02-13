//
//  AXSSDKFSTicket.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 11/24/15.
//  Copyright © 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "AXSSDKTicketProtocol.h"

@class AXSSDKFSEvent;
@class AXSSDKFSOrder;
@class AXSSDKFSTicketListing;

/**
 *  @warning   Don't use it - DEPRECATED: Use AXSSDKTicket instead.
 *  Represents a FlashSeats user ticket
 */
__deprecated_msg("Use AXSSDKTicket instead")
@interface AXSSDKFSTicket : NSManagedObject <AXSSDKTicketProtocol>

@property (nullable, nonatomic, strong) NSNumber *canSell;
@property (nullable, nonatomic, strong) NSNumber *canTransfer;
@property (nullable, nonatomic, strong) NSString *externalSeatInfo;
@property (nullable, nonatomic, strong) NSString *forwardedActionId;
@property (nullable, nonatomic, strong) NSDate *forwardedDate;
@property (nullable, nonatomic, strong) NSString *forwardedEmail;
@property (nullable, nonatomic, strong) NSString *forwardedFirstName;
@property (nullable, nonatomic, strong) NSString *forwardedLastName;
@property (nullable, nonatomic, strong) NSString *forwardedMessage;
@property (nullable, nonatomic, strong) NSString *primarySeatId;
@property (nullable, nonatomic, strong) NSString *seatSection;
@property (nullable, nonatomic, strong) NSString *seatRow;
@property (nullable, nonatomic, strong) NSString *seatNumber;
@property (nullable, nonatomic, strong) NSString *seatId;
@property (nullable, nonatomic, strong) NSString *ticketId;
@property (nullable, nonatomic, strong) NSString *axsTicketId;
@property (nullable, nonatomic, strong) NSNumber *ticketState;
@property (nullable, nonatomic, strong) AXSSDKFSOrder *order;
@property (nullable, nonatomic, strong) AXSSDKFSTicketListing *listing;
@property (nullable, nonatomic, strong) NSNumber *itemPrice;
@property (nullable, nonatomic, strong) NSNumber *minAskPrice;
@property (nullable, nonatomic, strong) NSNumber *maxAskPrice;
@property (nullable, nonatomic, strong) NSString *seatNeighborhood;
@property (nullable, nonatomic, strong) NSString *externalSeatInfo1;
@property (nullable, nonatomic, strong) NSString *externalSeatInfo2;
@property (nullable, nonatomic, strong) NSString *priceCodePrintDescription;
@property (nullable, nonatomic, strong) NSString *seatAttributes;
@property (nullable, nonatomic, strong) NSDate *lastScannedDate;
@property (nullable, nonatomic, strong) NSString *flashBarcode;
@property (nullable, nonatomic, strong) NSNumber *primaryOrderId;
@property (nullable, nonatomic, strong) NSNumber *refundStatusId;
@property (nonatomic, assign, readonly) AXSSDKTicketRefundStatus refundStatus;
@property (nullable, nonatomic, strong) NSDate *refundDeadlineDate;
@property (nullable, nonatomic, strong) NSNumber *refundAllowed;
@property (nullable, nonatomic, strong) NSNumber *donateAllowed;


@property (nullable, nonatomic, strong) NSString *name;
@property (nullable, nonatomic, strong) NSNumber *isETicket;
@property (nullable, nonatomic, strong) NSNumber *isFlashSeat;
@property (nullable, nonatomic, strong) NSNumber *isGeneralAdmission;
@property (nullable, nonatomic, strong) NSNumber *barcodeStatusId;
@property (nullable, nonatomic, strong) NSString *flashTicketId;
@property (nullable, nonatomic, strong) NSString *rowPrintDescription;
@property (nullable, nonatomic, strong) NSString *sectionPrintDescription;
@property (nullable, nonatomic, strong) NSDate *transferStartDateTime;
@property (nullable, nonatomic, strong) NSDate *listingStartDateTime;

@property (nullable, nonatomic, strong) NSString *section __deprecated_msg("Use `seatSection` instead");
@property (nullable, nonatomic, strong) NSString *row __deprecated_msg("Use `seatRow` instead");
@property (nullable, nonatomic, strong) NSString *seat __deprecated_msg("Use `seatNumber` instead");

- (void)updateWithTicketListedStatus;
- (void)updateWithRetractedListingStatus;
- (void)updateWithTransferredStatus:(nullable NSDate *)date forwardedEmail:(nullable NSString *)email forwardedFirstName:(nullable NSString *)firstName forwardedLastName:(nullable NSString *)lastName forwardedMessage:(nullable NSString *)message;
- (void)updateWithAvailableStatus;
- (void)updateWithRefundPendingStatus;
- (void)updateWithDonatedStatus;

@end
