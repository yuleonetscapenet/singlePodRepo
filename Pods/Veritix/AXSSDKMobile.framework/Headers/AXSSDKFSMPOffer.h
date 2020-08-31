//
//  AXSSDKFSMPOffer.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 7/25/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class AXSSDKFSEvent;
@class AXSSDKFSTicketListing;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Represents a FlashSeats marketplace offer
 */
@interface AXSSDKFSMPOffer : NSManagedObject

// Insert code here to declare functionality of your managed object subclass

@end

NS_ASSUME_NONNULL_END

#import "AXSSDKFSMPOffer+CoreDataProperties.h"
