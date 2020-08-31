//
//  AXSSDKTicket.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 7/7/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class AXSSDKProduct;

/**
 *  Represents a ticket
 */
@interface AXSSDKTicket : NSManagedObject

@property (nonatomic, retain) NSString * barcodeForwardedEmail;
@property (nonatomic, retain) NSString * barcodeForwardedFirstName;
@property (nonatomic, retain) NSString * barcodeForwardedLastName;
@property (nonatomic, retain) NSData * barcodeImageData;
@property (nonatomic, retain) NSNumber * barcodeIsValid;
@property (nonatomic, retain) NSString * barcodeStatus;
@property (nonatomic, retain) NSNumber * forwardAllowed;
@property (nonatomic, retain) NSNumber * itemNumber;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * seatNumber;
@property (nonatomic, retain) NSString * seatRow;
@property (nonatomic, retain) NSString * seatSection;
@property (nonatomic, retain) NSString * ticketStatus;
@property (nonatomic, retain) NSString * ticketId;
@property (nonatomic, retain) NSNumber * barcodeStatusId;
@property (nonatomic, retain) NSString * fulfillmentId;
@property (nonatomic, retain) NSDate * fulfillmentHeldUntilDate;
@property (nonatomic, retain) NSString * barcodeOriginalCustomerName;
@property (nonatomic, retain) AXSSDKProduct *product;

@end
