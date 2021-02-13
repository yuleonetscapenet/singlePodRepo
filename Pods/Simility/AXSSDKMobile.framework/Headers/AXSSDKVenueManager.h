//
//  AXSSDKVenueManager.h
//  AXSSDKMobile
//
//  Created by Andrew Choi on 7/11/18.
//  Copyright © 2018 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AXSSDKGeneralVenue;


/// Venue manager
@interface AXSSDKVenueManager : NSObject

/**
 *  Get venue detail by venue Id
 *
 *  @param venueId           VenueId ID
 *  @param completionHandler Completion handler that includes error and venue info
 */
- (void)venueById:(nonnull NSString *)venueId
    completionHandler:(nullable void(^)(NSError * _Nullable error, AXSSDKGeneralVenue * _Nullable venue))completionHandler;

@end
