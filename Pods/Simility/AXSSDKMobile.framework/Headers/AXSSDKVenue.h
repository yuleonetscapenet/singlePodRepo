//
//  AXSSDKVenue.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 7/14/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class AXSSDKEvent;

/**
 *  Represents a venue
 */
@interface AXSSDKVenue : NSManagedObject

@property (nullable, nonatomic, retain) NSString * address;
@property (nullable, nonatomic, retain) NSString * city;
@property (nullable, nonatomic, retain) NSString * country;
@property (nullable, nonatomic, retain) NSNumber * latitude;
@property (nullable, nonatomic, retain) NSNumber * longitude;
@property (nullable, nonatomic, retain) NSString * state;
@property (nullable, nonatomic, retain) NSString * timezoneName;
@property (nullable, nonatomic, retain) NSString * title;
@property (nullable, nonatomic, retain) NSString * venueId;
@property (nullable, nonatomic, retain) NSString * venueImageUrl;
@property (nullable, nonatomic, retain) NSString * postalCode;
@property (nullable, nonatomic, retain) NSSet *events;
@end

@interface AXSSDKVenue (CoreDataGeneratedAccessors)

- (void)addEventsObject:(nonnull AXSSDKEvent *)value;
- (void)removeEventsObject:(nonnull AXSSDKEvent *)value;
- (void)addEvents:(nonnull NSSet *)values;
- (void)removeEvents:(nonnull NSSet *)values;

@end
