//
//  AXSSDKEvent.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 7/7/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class AXSSDKProduct, AXSSDKVenue;

/**
 *  Represents an event
 */
@interface AXSSDKEvent : NSManagedObject

@property (nonatomic, retain) NSDate * doorDate;
@property (nonatomic, retain) NSDate * endDate;
@property (nonatomic, retain) NSString * eventId;
@property (nonatomic, retain) NSString * eventImageUrl;
@property (nonatomic, retain) NSDate * startDate;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * additionalDates;
@property (nonatomic, retain) NSSet *products;
@property (nonatomic, retain) AXSSDKVenue *venue;
@end

@interface AXSSDKEvent (CoreDataGeneratedAccessors)

- (void)addProductsObject:(AXSSDKProduct *)value;
- (void)removeProductsObject:(AXSSDKProduct *)value;
- (void)addProducts:(NSSet *)values;
- (void)removeProducts:(NSSet *)values;

@end
