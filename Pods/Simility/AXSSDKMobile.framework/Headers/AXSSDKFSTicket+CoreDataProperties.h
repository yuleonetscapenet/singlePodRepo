//
//  AXSSDKFSTicket+CoreDataProperties.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 8/4/16.
//  Copyright © 2016 AXS. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "AXSSDKFSTicket.h"

NS_ASSUME_NONNULL_BEGIN

@interface AXSSDKFSTicket (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *canSell;
@property (nullable, nonatomic, retain) NSNumber *canTransfer;
@property (nullable, nonatomic, retain) NSString *externalSeatInfo;
@property (nullable, nonatomic, retain) NSString *forwardedActionId;
@property (nullable, nonatomic, retain) NSDate *forwardedDate;
@property (nullable, nonatomic, retain) NSString *forwardedEmail;
@property (nullable, nonatomic, retain) NSString *forwardedFirstName;
@property (nullable, nonatomic, retain) NSString *forwardedLastName;
@property (nullable, nonatomic, retain) NSString *forwardedMessage;
@property (nullable, nonatomic, retain) NSString *row;
@property (nullable, nonatomic, retain) NSString *seat;
@property (nullable, nonatomic, retain) NSString *section;
@property (nullable, nonatomic, retain) NSString *ticketId;
@property (nullable, nonatomic, retain) NSNumber *ticketState;
@property (nullable, nonatomic, retain) AXSSDKFSOrder *order;
@property (nullable, nonatomic, retain) AXSSDKFSTicketListing *listing;

@end

NS_ASSUME_NONNULL_END
