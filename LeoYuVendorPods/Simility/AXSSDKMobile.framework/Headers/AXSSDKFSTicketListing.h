//
//  AXSSDKFSTicketListing.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 7/20/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@class AXSSDKFSMPOffer;
@class AXSSDKFSTicket;

/**
 *  Represents a FlashSeats marketplace listing
 */
@interface AXSSDKFSTicketListing : NSManagedObject

// Insert code here to declare functionality of your managed object subclass

@property (nonatomic, readonly) NSArray *purchasableQuantity;

@end

NS_ASSUME_NONNULL_END

#import "AXSSDKFSTicketListing+CoreDataProperties.h"
