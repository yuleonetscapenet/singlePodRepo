//
//  AXSSDKFSEvent.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 11/24/15.
//  Copyright © 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "AXSSDKEventProtocol.h"

@class AXSSDKFSTicket;
@class AXSSDKFSOrder;
@class AXSSDKFSMPOffer;

/**
 *  @warning   Don't use it - DEPRECATED: Use AXSSDKEvent instead.
 *  Represents a FlashSeats event
 */
__deprecated_msg("Use AXSSDKEvent instead")
@interface AXSSDKFSEvent : NSManagedObject <AXSSDKEventProtocol>

// Insert code here to declare functionality of your managed object subclass
@property (nullable, nonatomic, copy) NSString *city;
@property (nullable, nonatomic, strong) NSString *eventId;
@property (nullable, nonatomic, strong) NSString *eventImageUrl;
@property (nullable, nonatomic, copy) NSDate *eventLocalStartDateTime;
@property (nullable, nonatomic, strong) NSNumber *eventOwnerId;
@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, strong) NSNumber *dateOnly;
@property (nullable, nonatomic, copy) NSDate *startDateTime;
@property (nullable, nonatomic, strong) NSDate *endDate;
@property (nullable, nonatomic, strong) NSDate *doorDate;
@property (nullable, nonatomic, strong) NSDate *doorDateLocal;
@property (nullable, nonatomic, copy) NSString *state;
@property (nullable, nonatomic, copy) NSString *timeZoneAbbr;
@property (nullable, nonatomic, strong) NSString *venueName;
@property (nullable, nonatomic, copy) NSString *categoryIds;
@property (nullable, nonatomic, strong) AXSSDKFSMPOffer *offer;
@property (nullable, nonatomic, strong) NSSet<AXSSDKFSOrder *> *orders;
@property (nullable, nonatomic, strong) NSString *eventDescription;
@property (nullable, nonatomic, strong) NSNumber *isEventStub;
@property (nullable, nonatomic, strong) NSNumber *ticketingStatusId;
@property (nullable, nonatomic, strong) NSArray<NSNumber *> *flashEventCategories;
@property (nullable, nonatomic, strong) NSDate * startDate;
@property (nullable, nonatomic, strong) NSDate * startDateLocal;
@property (nullable, nonatomic, strong) NSString * title;
@property (nullable, nonatomic, strong) NSString * venueTimezoneName;
@property (nullable, nonatomic, strong) NSString * venueTimezoneAbbr;
@property (nullable, nonatomic, strong) NSString * venueCity;
@property (nullable, nonatomic, strong) NSString * venueState;
@property (nullable, nonatomic, strong) NSNumber * listingContiguous;
@property (nullable, nonatomic, strong) NSNumber * transferContiguous;
@property (nullable, nonatomic, strong) NSNumber *livestreamEnabled;
@property (nullable, nonatomic, strong) NSString *livestreamUrl;

- (BOOL)isCancelled;
- (BOOL)isPostponed;
- (BOOL)isRescheduled;

@end

@interface AXSSDKFSEvent (CoreDataGeneratedAccessors)
- (void)addOrdersObject:(nonnull AXSSDKFSOrder *)value;
- (void)removeOrdersObject:(nonnull AXSSDKFSOrder *)value;
- (void)addOrders:(nonnull NSSet<AXSSDKFSOrder *> *)values;
- (void)removeOrders:(nonnull NSSet<AXSSDKFSOrder *> *)values;
@end

