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

@property (nonatomic, retain) NSString * address;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * country;
@property (nonatomic, retain) NSNumber * latitude;
@property (nonatomic, retain) NSNumber * longitude;
@property (nonatomic, retain) NSString * state;
@property (nonatomic, retain) NSString * timezoneName;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * venueId;
@property (nonatomic, retain) NSString * venueImageUrl;
@property (nonatomic, retain) NSString * postalCode;
@property (nonatomic, retain) NSSet *events;
@end

@interface AXSSDKVenue (CoreDataGeneratedAccessors)

- (void)addEventsObject:(AXSSDKEvent *)value;
- (void)removeEventsObject:(AXSSDKEvent *)value;
- (void)addEvents:(NSSet *)values;
- (void)removeEvents:(NSSet *)values;

@end
