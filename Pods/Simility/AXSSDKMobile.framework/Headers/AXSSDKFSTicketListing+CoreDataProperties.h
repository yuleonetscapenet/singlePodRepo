//
//  AXSSDKFSTicketListing+CoreDataProperties.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 8/4/16.
//  Copyright © 2016 AXS. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "AXSSDKFSTicketListing.h"

@protocol AXSSDKTicketProtocol;
@class AXSSDKFSTicket;

@interface AXSSDKFSTicketListing (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *admissionTax;
@property (nullable, nonatomic, retain) NSNumber *connectionFee;
@property (nullable, nonatomic, retain) NSDate *createdDate;
@property (nullable, nonatomic, retain) NSDate *expirationDate;
@property (nullable, nonatomic, retain) NSNumber *expirationFormat;
@property (nullable, nonatomic, retain) NSNumber *isAlertsForNewBidsEnabled;
@property (nullable, nonatomic, retain) NSString *listingId;
@property (nullable, nonatomic, retain) NSNumber *pricePerTicket;
@property (nullable, nonatomic, retain) NSNumber *quantity;
@property (nullable, nonatomic, retain) NSNumber *salesTaxOnFee;
@property (nullable, nonatomic, retain) NSString *sellerNotes;
@property (nullable, nonatomic, retain) NSNumber *splitFormat;
@property (nullable, nonatomic, retain) NSNumber *totalPrice;
@property (nullable, nonatomic, retain) NSString *row;
@property (nullable, nonatomic, retain) NSString *section;
@property (nullable, nonatomic, retain) NSString *purchasableQuantityList;
@property (nullable, nonatomic, retain) AXSSDKFSMPOffer *mpOffer;
@property (nullable, nonatomic, retain) NSSet<AXSSDKTicket *> *axsTickets;
@property (nullable, nonatomic, retain) NSSet<AXSSDKFSTicket *> *tickets __deprecated_msg("Use `axsTickets` instead");

@end
