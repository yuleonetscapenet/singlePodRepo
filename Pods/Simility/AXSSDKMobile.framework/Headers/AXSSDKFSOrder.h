//
//  AXSSDKFSOrder.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 1/8/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class AXSSDKFSEvent, AXSSDKFSTicket;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Represents a FlashSeats user order
 */
@interface AXSSDKFSOrder : NSManagedObject

// Insert code here to declare functionality of your managed object subclass

- (NSSet *)availableTickets;
- (NSSet *)transferedTickets;
- (NSSet *)listedTickets;
- (NSSet *)availableAndListedTickets;

@end

NS_ASSUME_NONNULL_END

#import "AXSSDKFSOrder+CoreDataProperties.h"
