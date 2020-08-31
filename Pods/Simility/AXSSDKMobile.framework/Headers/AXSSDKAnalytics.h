//
//  AXSSDKAnalytics.h
//  AXSSDKMobile
//
//  Created by Dennis Padilla on 7/6/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AXSSDKAnalytics : NSObject

/**
 *  Shared instance of the analytics class
 *
 *  @return class object
 */
+ (AXSSDKAnalytics *)analytics;

/**
 *  Make a request to the AXS platform to track page views
 *
 *  @param page The page that was visited
 */
-(void)trackPageView:(NSString*)page;

/**
 *  Make a request to the AXS platform to track an action inside of a page
 *
 *  @param page   The page where the action occurred
 *  @param action The action that occurred.
 *  @param label  The label of the action
 */
-(void)trackActionForPage:(NSString*)page action:(NSString*)action label:(NSString*)label;


/**
 Track a page with custom omniture context data

 @param page page name
 @param contextData dictionary of data
 */
- (void)trackPage:(NSString *)page contextData:(NSDictionary *)contextData;

@end
