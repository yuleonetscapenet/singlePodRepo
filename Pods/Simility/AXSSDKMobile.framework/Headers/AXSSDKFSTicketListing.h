//
//  AXSSDKFSTicketListing.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 7/20/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class AXSSDKFSMPOffer;
@class AXSSDKTicket;

/**
 *  Represents a FlashSeats marketplace listing
 */
@interface AXSSDKFSTicketListing : NSManagedObject

// Insert code here to declare functionality of your managed object subclass

@property (nullable, nonatomic, readonly) NSArray *purchasableQuantity;

@end

#import "AXSSDKFSTicketListing+CoreDataProperties.h"
