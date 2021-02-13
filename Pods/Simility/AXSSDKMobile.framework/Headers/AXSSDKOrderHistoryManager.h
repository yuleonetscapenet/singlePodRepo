//
//  AXSSDKOrderHistoryManager.h
//  AXSSDKMobileID
//
//  Created by Wilson Lei on 7/24/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kAXSSDKlastFetchedOrderHistoryTime @"kAXSSDKlastFetchedOrderHistoryTime"
@protocol AXSSDKOrderProtocol;
@class AXSSDKOrder;


/// User order history manager
@interface AXSSDKOrderHistoryManager : NSObject

@property (nonatomic, assign, readonly) BOOL isFetchingOrderHistory;

/**
 *  Shared instance of the class
 *
 *  @return class object
 */
+ (nonnull AXSSDKOrderHistoryManager *)sharedInstance;

/**
 *  Get an order from local database
 *
 *  @param orderId order id
 *
 *  @return order
 */
- (nullable AXSSDKOrder *)getOrderById:(nonnull NSString *)orderId;

/**
 *  Get current user's entire order history from local database
 *
 *  @return array of AXSSDKOrder
 */
- (nullable NSArray<AXSSDKOrder *> *)orderHistory;

/**
 *  Get current user's upcoming orders from local database.
 *
 *  @return array of AXSSDKOrder
 */
- (nullable NSArray<AXSSDKOrder *> *)myUpcomingOrders;

/**
 *  Get current user's shared orders from local database.
 *
 *  @return array of AXSSDKOrder
 */
- (nullable NSArray<AXSSDKOrder *> *)mySharedOrders;

/**
 *  Get current user's transferred orders from local database.
 *
 *  @return array of AXSSDKOrder
 */
- (nullable NSArray<AXSSDKOrder *> *)myTransferredOrders;

/**
 *  Remove all order's from Order Histoty
 *
 */
- (void)cleanHistory;

/**
 *  Check if the day of the upcoming event is the current day.
 *
 *  @return YES if the day of the upcoming event is the current day.
 */
- (BOOL)isUpcomingEventToday;

/**
 *  Find the Non-Refunded upcoming order which the event happens today. Default is first order from API.
 *
 *  @return the order or nil if no orders.
 */
- (nullable AXSSDKOrder *)myUpcomingOrder;

/**
 *  Find first upcoming order that is enabled to enter with nfc pass.
 */
- (nullable AXSSDKOrder *)myUpcomingNFCEnabledOrder;

/**
 *  Get current user's order history from server
 *
 *  @param page              Page
 *  @param perPage           Number per page
 *  @param completionHandler Completion handler that includes error and current user's full order history
 */
- (void)fetchOrderHistoryForPage:(nonnull NSNumber *)page perPage:(nonnull NSNumber *)perPage completionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSArray * _Nullable orderHistory))completionHandler;

/**
 *  Get current user's order history from server filter by one or more AXSSDKBarcodeStatus on the tickets.
 *
 *  @param page              Page
 *  @param perPage           Number per page
 *  @param ticketStatus      Array of AXSSDKBarcodeStatus
 *  @param completionHandler Completion handler that includes error and current user's full order history
 */
- (void)fetchOrderHistoryForPage:(nonnull NSNumber *)page perPage:(nonnull NSNumber *)perPage ticketStatus:(nullable NSArray<NSNumber *> *)ticketStatus completionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSArray * _Nullable orderHistory))completionHandler;

/**
 *  Get current user's order history from server filter by one or more AXSSDKBarcodeStatus on the tickets and start date.
 *
 *  @param page              Page
 *  @param perPage           Number per page
 *  @param ticketStatus      Array of AXSSDKBarcodeStatus
 *  @param startDate         Orders since this date
 *  @param completionHandler Completion handler that includes error and current user's full order history
 */
- (void)fetchOrderHistoryForPage:(nonnull NSNumber *)page perPage:(nonnull NSNumber *)perPage startDate:(nullable NSDate *)startDate ticketStatus:(nullable NSArray<NSNumber *> *)ticketStatus completionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSArray<AXSSDKOrder *> * _Nullable orderHistory))completionHandler;


/**
 Returns the timestamp of the last successful order history fetch from API

 @return timestamp value
 */
- (nullable NSNumber *)lastFetchedOrderHistoryTimestamp;


/// Request a refund for an order
/// @param order an order
/// @param completionHandler Completion handler that includes error
- (void)requestRefundForOrder:(nonnull id<AXSSDKOrderProtocol>)order
            completionHandler:(void(^ __nullable)(NSError * _Nullable error))completionHandler;

/// Request a donation for an order
/// @param order an order
/// @param completionHandler Completion handler that includes error
- (void)requestDonationForOrder:(nonnull id<AXSSDKOrderProtocol>)order
                  charityId:(nonnull NSString *)charityId
            completionHandler:(void(^ __nullable)(NSError * _Nullable error))completionHandler;


/// Unschedule any user upcoming event local push notifications.
/// @param completionHandler
- (void)unscheduleLocalNotificationsForUpcomingEventsWithCompletionHandler:(void(^_Nullable)(void))completionHandler;

@end
