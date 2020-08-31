//
//  AXSSDKFSTicket.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 11/24/15.
//  Copyright © 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class AXSSDKFSEvent;
@class AXSSDKFSOrder;
@class AXSSDKFSTicketListing;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Represents a FlashSeats user ticket
 */
@interface AXSSDKFSTicket : NSManagedObject

// Insert code here to declare functionality of your managed object subclass

@end

NS_ASSUME_NONNULL_END

#import "AXSSDKFSTicket+CoreDataProperties.h"
