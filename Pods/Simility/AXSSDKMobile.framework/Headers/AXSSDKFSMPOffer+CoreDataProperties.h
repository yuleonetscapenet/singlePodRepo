//
//  AXSSDKFSMPOffer+CoreDataProperties.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 8/4/16.
//  Copyright © 2016 AXS. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "AXSSDKFSMPOffer.h"

@class AXSSDKFSEvent;

@interface AXSSDKFSMPOffer (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *fsSiteSkinId;
@property (nullable, nonatomic, retain) AXSSDKEvent *axsEvent;
@property (nullable, nonatomic, retain) AXSSDKFSEvent *event;
@property (nullable, nonatomic, retain) NSSet<AXSSDKFSTicketListing *> *listings;

@end

@interface AXSSDKFSMPOffer (CoreDataGeneratedAccessors)

- (void)addListingsObject:(nonnull AXSSDKFSTicketListing *)value;
- (void)removeListingsObject:(nonnull AXSSDKFSTicketListing *)value;
- (void)addListings:(nonnull NSSet<AXSSDKFSTicketListing *> *)values;
- (void)removeListings:(nonnull NSSet<AXSSDKFSTicketListing *> *)values;

@end
