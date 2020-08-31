//
//  AXSSDKFSEvent+CoreDataProperties.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 3/29/17.
//  Copyright © 2017 AXS. All rights reserved.
//

#import "AXSSDKFSEvent.h"


NS_ASSUME_NONNULL_BEGIN

@interface AXSSDKFSEvent (CoreDataProperties)

+ (NSFetchRequest<AXSSDKFSEvent *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *city;
@property (nullable, nonatomic, copy) NSString *eventId;
@property (nullable, nonatomic, copy) NSDate *eventLocalStartDateTime;
@property (nullable, nonatomic, copy) NSNumber *eventOwnerId;
@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, copy) NSDate *startDateTime;
@property (nullable, nonatomic, copy) NSString *state;
@property (nullable, nonatomic, copy) NSString *timeZoneAbbr;
@property (nullable, nonatomic, copy) NSString *venueName;
@property (nullable, nonatomic, copy) NSString *categoryIds;
@property (nullable, nonatomic, retain) AXSSDKFSMPOffer *offer;
@property (nullable, nonatomic, retain) NSSet<AXSSDKFSOrder *> *orders;

@end

@interface AXSSDKFSEvent (CoreDataGeneratedAccessors)

- (void)addOrdersObject:(AXSSDKFSOrder *)value;
- (void)removeOrdersObject:(AXSSDKFSOrder *)value;
- (void)addOrders:(NSSet<AXSSDKFSOrder *> *)values;
- (void)removeOrders:(NSSet<AXSSDKFSOrder *> *)values;

@end

NS_ASSUME_NONNULL_END
