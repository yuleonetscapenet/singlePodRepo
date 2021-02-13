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

typedef NSString *AXSSDKProductID NS_TYPED_EXTENSIBLE_ENUM NS_SWIFT_NAME(AXSSDKProduct.ID);
AXSSDKProductID _Nonnull AXSSDKProductIDWithOrderIdAndEventCode(NSString *_Nonnull orderId, NSString *_Nonnull eventCode) NS_SWIFT_NAME(AXSSDKProductID.init(orderId:eventCode:));

/**
 *  Represents a product
 */
@interface AXSSDKProduct : NSManagedObject

@property (nullable, nonatomic, retain) NSString * productCode;
@property (nullable, nonatomic, retain) NSNumber * mobileTicketsEnabled;
@property (nullable, nonatomic, retain) NSString * mobileTicketsEnabledMessage;
@property (nullable, nonatomic, retain) AXSSDKProductID productId;
@property (nullable, nonatomic, retain) NSString * zoneId;
@property (nullable, nonatomic, retain) NSArray<NSNumber *> *flashEventCategories;
@property (nullable, nonatomic, retain) NSSet<AXSSDKOrder *> *orders;
@property (nullable, nonatomic, retain) NSSet<AXSSDKEvent *> *events;
@property (nullable, nonatomic, retain) NSSet<AXSSDKTicket *> *tickets;

@end

@interface AXSSDKProduct (CoreDataGeneratedAccessors)

- (void)addOrdersObject:(nonnull AXSSDKOrder *)value;
- (void)removeOrdersObject:(nonnull AXSSDKOrder *)value;
- (void)addOrders:(nonnull NSSet *)values;
- (void)removeOrders:(nonnull NSSet *)values;

- (void)addEventsObject:(nonnull AXSSDKEvent *)value;
- (void)removeEventsObject:(nonnull AXSSDKEvent *)value;
- (void)addEvents:(nonnull NSSet *)values;
- (void)removeEvents:(nonnull NSSet *)values;

- (void)addTicketsObject:(nonnull AXSSDKTicket *)value;
- (void)removeTicketsObject:(nonnull AXSSDKTicket *)value;
- (void)addTickets:(nonnull NSSet *)values;
- (void)removeTickets:(nonnull NSSet *)values;

@end
