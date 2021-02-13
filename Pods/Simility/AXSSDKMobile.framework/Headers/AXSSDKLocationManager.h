//
//  AXSSDKLocationManager.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 3/22/18.
//  Copyright © 2018 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AXSSDKLocation;

@interface AXSSDKLocationManager : NSObject

/**
 Check if location permission is granted.

 @return BOOL
 */
+ (BOOL)isLocationAccessGranted;

/**
 *  Get user's location (with location permission granted). Fall back to use IP if permission is not granted.
 *
 *  @param completionHandler Completion handler that includes location detail
 */
- (void)getUserLocationWithCompletionHandler:(void(^)(AXSSDKLocation *location))completionHandler;

/**
 *  Get a location by IP (use this if a user has declined the location permission)
 *
 *  @param completionHandler Completion handler that includes error and location detail
 */
- (void)getLocationByIPWithCompletionHandler:(void(^)(NSError *error, AXSSDKLocation *location))completionHandler;

/**
 *  Get list of locations by keyword
 *
 *  @param keyword           Search term
 *  @param completionHandler Completion handler that includes error and list of locations
 */
- (void)getLocationsByKeyword:(NSString *)keyword
        completionHandler:(void(^)(NSError *error, NSArray<AXSSDKLocation *> *locations))completionHandler;

/**
 *  Get a location by location Id
 *
 *  @param locationId        Location Id
 *  @param completionHandler Completion handler that includes error and a location detail
 */
- (void)getLocationById:(NSString *)locationId
   completionHandler:(void(^)(NSError *error, AXSSDKLocation *location))completionHandler;

@end
