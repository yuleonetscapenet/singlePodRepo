//
//  AXSSDKFSEvent.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 11/24/15.
//  Copyright © 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class AXSSDKFSTicket;
@class AXSSDKFSOrder;
@class AXSSDKFSMPOffer;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Represents a FlashSeats event
 */
@interface AXSSDKFSEvent : NSManagedObject

// Insert code here to declare functionality of your managed object subclass

@end

NS_ASSUME_NONNULL_END

#import "AXSSDKFSEvent+CoreDataProperties.h"
