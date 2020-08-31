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

NS_ASSUME_NONNULL_BEGIN

@interface AXSSDKFSMPOffer (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *fsSiteSkinId;
@property (nullable, nonatomic, retain) AXSSDKFSEvent *event;
@property (nullable, nonatomic, retain) NSSet<AXSSDKFSTicketListing *> *listings;

@end

@interface AXSSDKFSMPOffer (CoreDataGeneratedAccessors)

- (void)addListingsObject:(AXSSDKFSTicketListing *)value;
- (void)removeListingsObject:(AXSSDKFSTicketListing *)value;
- (void)addListings:(NSSet<AXSSDKFSTicketListing *> *)values;
- (void)removeListings:(NSSet<AXSSDKFSTicketListing *> *)values;

@end

NS_ASSUME_NONNULL_END
