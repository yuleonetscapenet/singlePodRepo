//
//  AXSSDKProduct.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 7/6/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class AXSSDKEvent, AXSSDKOrder, AXSSDKTicket;

/**
 *  Represents a product
 */
@interface AXSSDKProduct : NSManagedObject

@property (nonatomic, retain) NSString * productCode;
@property (nonatomic, retain) NSNumber * mobileTicketsEnabled;
@property (nonatomic, retain) NSString * mobileTicketsEnabledMessage;
@property (nonatomic, retain) NSString * productId;
@property (nonatomic, retain) NSSet *orders;
@property (nonatomic, retain) NSSet *events;
@property (nonatomic, retain) NSSet *tickets;
@end

@interface AXSSDKProduct (CoreDataGeneratedAccessors)

- (void)addOrdersObject:(AXSSDKOrder *)value;
- (void)removeOrdersObject:(AXSSDKOrder *)value;
- (void)addOrders:(NSSet *)values;
- (void)removeOrders:(NSSet *)values;

- (void)addEventsObject:(AXSSDKEvent *)value;
- (void)removeEventsObject:(AXSSDKEvent *)value;
- (void)addEvents:(NSSet *)values;
- (void)removeEvents:(NSSet *)values;

- (void)addTicketsObject:(AXSSDKTicket *)value;
- (void)removeTicketsObject:(AXSSDKTicket *)value;
- (void)addTickets:(NSSet *)values;
- (void)removeTickets:(NSSet *)values;

@end
