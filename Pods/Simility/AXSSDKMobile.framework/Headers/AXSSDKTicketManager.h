//
//  AXSSDKTicketManager.h
//  AXSSDKMobile
//
//  Created by Ruslan Syakin on 06/03/2019.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AXSSDKResult.h"
@import PassKit.PKPass;
@class AXSSDKOrder;
@class AXSSDKTicket;
@class AXSSDKTicketAPI;
@protocol AXSSDKTicketProtocol;


/// Ticket manager
@interface AXSSDKTicketManager : NSObject
/**
 Create Flash barcode image
 @param ticket FSTicket containing flashBarcode value
 */
+ (nullable UIImage *)createSeatBarcodeImageWithTicket:(nonnull id<AXSSDKTicketProtocol>)ticket;

/**
 Create ticket barcode image with order and ticket.

 @param order order object from order history
 @param ticket ticket in the order
 @return result object. In case of success – QR image, failure – AXSSDKFSMobileIdImageError
 */
+ (nonnull AXSSDKResult<UIImage *, NSError *> *)createMobileBarcodeImageWithOrder:(nonnull AXSSDKOrder *)order ticket:(nonnull AXSSDKTicket *)ticket;


/**
 Create a TicketAPI object which can be used to Share/Transfer/Revoke a ticket.

 @param order AXSSDKOrder object
 @param ticket AXSSDKTicket object
 @return AXSSDKTicketAPI
 */
+ (nullable AXSSDKTicketAPI *)ticketAPIWithOrder:(nonnull AXSSDKOrder *)order ticket:(nonnull AXSSDKTicket *)ticket;


/**
 Create a TicketAPI object which can be used to Transfer/Revoke one or more tickets. NOTE: This doesn't support Share.

 @param order AXSSDKOrder object
 @param tickets Array of AXSSDKTicket objects
 @return AXSSDKTicketAPI
 */
+ (nullable AXSSDKTicketAPI *)ticketAPIWithOrder:(nonnull AXSSDKOrder *)order tickets:(nonnull NSArray<id<AXSSDKTicketProtocol>> *)tickets;

/**
 Generate PKPass which can be added to Wallet and used to enter the venue.
 */
+ (void)mobileIDPassWithCompletionHandler:(void(^_Nonnull)(PKPass *_Nullable pass, NSError *_Nullable error))completionHandler;

@end
