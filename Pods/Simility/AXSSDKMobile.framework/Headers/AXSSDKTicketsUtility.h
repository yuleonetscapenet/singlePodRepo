//
//  AXSSDKTicketsUtility.h
//  AXSSDKMobile
//
//  Created by jnation on 12/14/20.
//  Copyright © 2020 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
@protocol AXSSDKEventProtocol;
@protocol AXSSDKTicketProtocol;
@protocol AXSSDKOrderProtocol;

@interface AXSSDKTicketsUtility : NSObject

/**
 Returns all contiguous neighbors of a particular seat. Does not include the root seat.
 */
+ (nonnull NSArray<id<AXSSDKTicketProtocol>> *)contiguousSeatsWithRoot:(nonnull id<AXSSDKTicketProtocol>)rootSeat seats:(nonnull NSArray<id<AXSSDKTicketProtocol>> *)seats;

@end
