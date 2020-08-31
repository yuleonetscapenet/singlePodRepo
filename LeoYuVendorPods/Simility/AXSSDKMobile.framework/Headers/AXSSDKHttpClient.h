//
//  AXSSDKHttpClient.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 6/1/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKHttpClientRequest.h"

/**
 *  The AxsHttpClient uses NSURLSession to make lightweight, ephemeral calls to the AXS platform. Use -request: to make calls. Build URLs for these requests by constructing AXSHttpClientRequest objects. 
 */
@interface AXSSDKHttpClient : NSObject

/**
 *  The NSURLSession used by this client.
 */
@property (nonatomic, strong) NSURLSession* session;

/**
 *  The API platform to use for requests created by this client. Note, this only applies to request objects CREATED by this client. If you pass in a pre-made request object, the API platform you've already specified won't be overridden.
 */
@property (nonatomic, assign) AXSSDKTargetAPI apiEnvironment;

/**
 *  Enable verbose logging of raw requests to the console.
 */
@property (nonatomic, assign) BOOL verboseLogging;

/**
 *  Make a request to the AXS APIs.
 *
 *  @param request    The descriptor for the request.
 *  @param httpMethod       The HTTP method to use.
 *  @param completionBlock A completion block that returns request error and the decoded JSON, either an NSString, NSDictionary or an NSArray.
 */
- (void)request:(AXSSDKHttpClientRequest*)request httpMethod:(NSString *)httpMethod completionBlock:(void (^)(NSError *error, id response))completionBlock;

/**
 *  Convert an AXSHttpClientRequest into an NSURLRequest.
 *
 *  @param request The AXSHttpClientRequest to use when constructing the NSURLRequest.
 *  @param httpMethod    The HTTP method to use when constructing the request.
 *
 *  @return The fully-composed NSURLRequest, ready to queue in an existing NSURLSession.
 */
- (NSURLRequest*)urlRequestForRequest:(AXSSDKHttpClientRequest*)request httpMethod:(NSString *)httpMethod;

@end
