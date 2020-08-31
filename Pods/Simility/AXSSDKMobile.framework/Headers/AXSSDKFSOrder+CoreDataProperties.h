//
//  AXSSDKFSOrder+CoreDataProperties.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 1/8/16.
//  Copyright © 2016 AXS. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "AXSSDKFSOrder.h"

NS_ASSUME_NONNULL_BEGIN

@interface AXSSDKFSOrder (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *orderId;
@property (nullable, nonatomic, retain) NSString *flashSeatsMemberId;
@property (nullable, nonatomic, retain) NSNumber *isHidden;
@property (nullable, nonatomic, retain) AXSSDKFSEvent *event;
@property (nullable, nonatomic, retain) NSSet<AXSSDKFSTicket *> *tickets;

@end

@interface AXSSDKFSOrder (CoreDataGeneratedAccessors)

- (void)addTicketsObject:(AXSSDKFSTicket *)value;
- (void)removeTicketsObject:(AXSSDKFSTicket *)value;
- (void)addTickets:(NSSet<AXSSDKFSTicket *> *)values;
- (void)removeTickets:(NSSet<AXSSDKFSTicket *> *)values;

@end

NS_ASSUME_NONNULL_END
