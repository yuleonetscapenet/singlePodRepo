//
//  AXSSDKOrder.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 8/14/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class AXSSDKProduct;

/**
 *  Represents a user order
 */
@interface AXSSDKOrder : NSManagedObject

@property (nonatomic, retain) NSNumber * isMultiDay;
@property (nonatomic, retain) NSNumber * isHidden;
@property (nonatomic, retain) NSDate * orderDate;
@property (nonatomic, retain) NSString * orderId;
@property (nonatomic, retain) NSString * orderNumber;
@property (nonatomic, retain) NSString * orderStatus;
@property (nonatomic, retain) NSString * ticketingSystem;
@property (nonatomic, retain) NSNumber * userId;
@property (nonatomic, retain) NSSet *products;
@end

@interface AXSSDKOrder (CoreDataGeneratedAccessors)

- (void)addProductsObject:(AXSSDKProduct *)value;
- (void)removeProductsObject:(AXSSDKProduct *)value;
- (void)addProducts:(NSSet *)values;
- (void)removeProducts:(NSSet *)values;

@end
