//
//  AXSSDKEvent.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 7/7/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "AXSSDKEventProtocol.h"

@protocol AXSSDKOrderProtocol;
@class AXSSDKProduct, AXSSDKVenue;

/**
 *  Represents an event
 */

@interface AXSSDKEvent : NSManagedObject <AXSSDKEventProtocol>

@property (nullable, nonatomic, strong) NSString *eventId;
@property (nullable, nonatomic, strong) NSString *eventImageUrl;
@property (nullable, nonatomic, strong) NSNumber *dateOnly;
@property (nullable, nonatomic, strong) NSDate *startDate;
@property (nullable, nonatomic, strong) NSDate *startDateLocal;
@property (nullable, nonatomic, strong) NSDate *endDate;
@property (nullable, nonatomic, strong) NSDate *doorDate;
@property (nullable, nonatomic, strong) NSDate *doorDateLocal;
@property (nullable, nonatomic, strong) NSString *title;
@property (nullable, nonatomic, strong) NSString *eventDescription;
@property (nullable, nonatomic, strong) NSNumber *isEventStub;
@property (nullable, nonatomic, strong) NSNumber *ticketingStatusId;
@property (nullable, nonatomic, strong) NSString *additionalDates;
@property (nullable, nonatomic, strong) NSNumber * listingContiguous;
@property (nullable, nonatomic, strong) NSNumber * transferContiguous;

@property (nullable, nonatomic, strong) AXSSDKVenue *venue;
@property (nullable, nonatomic, strong) NSString *venueTimezoneName;
@property (nullable, nonatomic, strong) NSString *venueTimezoneAbbr;
@property (nullable, nonatomic, strong) NSString *venueCity;
@property (nullable, nonatomic, strong) NSString *venueState;
@property (nullable, nonatomic, strong) NSString *venueName;
@property (nullable, nonatomic, strong) NSNumber *venueLatitude;
@property (nullable, nonatomic, strong) NSNumber *venueLongitude;

@property (nullable, nonatomic, strong) NSNumber *livestreamEnabled;
@property (nullable, nonatomic, strong) NSString *livestreamUrl;

@property (nullable, nonatomic, strong) NSSet<AXSSDKProduct *> *products;

//FS Specific
@property (nullable, nonatomic, strong) NSNumber *eventOwnerId;
@property (nullable, nonatomic, strong) NSString *timeZoneAbbr;
@property (nullable, nonatomic, strong) NSString *categoryIds;
@property (nullable, nonatomic, strong) NSSet<id<AXSSDKOrderProtocol>> *orders;
@property (nullable, nonatomic, strong) NSArray<NSNumber *> *flashEventCategories;

- (BOOL)isCancelled;
- (BOOL)isPostponed;
- (BOOL)isRescheduled;

@end

@interface AXSSDKEvent (CoreDataGeneratedAccessors)

- (void)addProductsObject:(nonnull AXSSDKProduct *)value;
- (void)removeProductsObject:(nonnull AXSSDKProduct *)value;
- (void)addProducts:(nonnull NSSet *)values;
- (void)removeProducts:(nonnull NSSet *)values;

@end
