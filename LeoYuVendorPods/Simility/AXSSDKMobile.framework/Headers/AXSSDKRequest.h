//
//  AXSSDKRequest.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 6/1/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKSettings.h"

/// Represents a request to the AXS API. All requests require an access token. Access token is added to query parameter automatically if user is logged in.
@interface AXSSDKRequest : NSObject

/**
 *  Request time out interval. Default 30 seconds.
 */
@property (nonatomic, assign) int timeoutInterval;

/**
 *  Construct a request with path and query parameters
 *
 *  @param path       path segement
 *  @param parameters query parameters
 *
 *  @return class object
 */
- (instancetype)initRequestWithPath:(NSString *)path parameters:(NSDictionary *)parameters;

/**
 *  Construct a request with path, query parameters and API type.
 *
 *  @param path       path segement
 *  @param parameters query parameters
 *  @param type       API type
 *
 *  @return class object
 */
- (instancetype)initRequestWithPath:(NSString *)path parameters:(NSDictionary *)parameters apiType:(AXSSDKTargetAPIType)type;

/**
 *  Construct a request with path, query parameters, post body data in NSDictionary or NSArray format and method type
 *
 *  @param path       path segement
 *  @param parameters query parameters
 *  @param postData   post boday data in NSDictionary or NSArray format
 *  @param HTTPMethod GET, POST, DELETE, PUT
 *
 *  @return class object
 */
- (instancetype)initRequestWithPath:(NSString *)path parameters:(NSDictionary *)parameters postData:(id)postData HTTPMethod:(NSString *)HTTPMethod;

/**
 *  Construct a request with path, query parameters, post body data in NSDictionary or NSArray format and method type
 *
 *  @param path       path segement
 *  @param parameters query parameters
 *  @param postData   post boday data in NSDictionary or NSArray format
 *  @param HTTPMethod GET, POST, DELETE, PUT
 *  @param type       API type
 *
 *  @return class object
 */
- (instancetype)initRequestWithPath:(NSString *)path parameters:(NSDictionary *)parameters postData:(id)postData HTTPMethod:(NSString *)HTTPMethod apiType:(AXSSDKTargetAPIType)type;


/**
 *  Start a request to AXS APIs.
 *
 *  @param completionHandler completion handler with error and response from server.
 */
- (void)startWithCompletionHandler:(void(^)(NSError *error, id response))completionHandler;

@end
