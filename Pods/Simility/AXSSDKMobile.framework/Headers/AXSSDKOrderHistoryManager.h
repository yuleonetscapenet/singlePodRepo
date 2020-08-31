//
//  AXSSDKOrderHistoryManager.h
//  AXSSDKMobileID
//
//  Created by Wilson Lei on 7/24/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AXSSDKOrder;

@interface AXSSDKOrderHistoryManager : NSObject

/**
 *  Shared instance of the class
 *
 *  @return class object
 */
+ (AXSSDKOrderHistoryManager *)sharedInstance;

/**
 *  Get an order from local database
 *
 *  @param orderId order id
 *
 *  @return order
 */
- (AXSSDKOrder *)getOrderById:(NSString *)orderId;

/**
 *  Get current user's order history from local database
 *
 *  @return array of AXSSDKOrder
 */
- (NSArray *)orderHistory;

/**
 *  Get current user's order history from server
 *
 *  @param page              Page
 *  @param perPage           Number per page
 *  @param completionHandler Completion handler that includes error and current user's full order history
 */
- (void)fetchOrderHistoryForPage:(NSNumber *)page perPage:(NSNumber *)perPage completionHandler:(void(^)(NSError *error, NSArray *orderHistory))completionHandler;
@end
