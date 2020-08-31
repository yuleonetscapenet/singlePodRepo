//
//  AXSSDKHttpClientRequest.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 6/1/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKModel.h"
#import "AXSSDKSettings.h"

/**
 *  The AXSHttpClientRequest is used to generate requests for the AXSHttpClient (and its subclasses.) You should subclass this class for each kind of request you'd like to send.
 */
@interface AXSSDKHttpClientRequest : NSObject

/**
 *  Will have the resource appended to it to create the fullUrl.
 */
@property (nonatomic, strong) NSURL* baseUrl;

/**
 *  Setting the full URL will cause the baseUrl and resource to become nil.
 */
@property (nonatomic, strong) NSURL* fullUrl;

/**
 *  Will be appended to the baseUrl.
 */
@property (nonatomic, strong) NSString* resource;

/**
 *  Keys and values in this dictionary will be used to fill in path segments in the URL. To use, add :pathsegments to the resource. You shouldn't prepend the colon to the front of the keys in the dictionary. To use the resource users/:id/likes, you'd add a value to the dictionary with the key "id".
 */
@property (nonatomic, strong) NSDictionary* urlSegmentParameters;

/**
 *  Keys and values in this dictionary will be used to build the query string, i.e. ?key=value&key=value.
 */
@property (nonatomic, strong) NSDictionary* queryParameters;

/**
 *  The data to send with a POST or PUT. Supported types: anything that implements AXSJsonEncodableModel, an NSArray of AXSJsonEncodableModels, a plain NSArray, or a plain NSDictionary.
 */
@property (nonatomic, strong) id data;

/**
 *  Request timeout interval. Default 30 seconds.
 */
@property (nonatomic, assign) int timeoutInterval;

/**
 *  Any custom HTTP headers that should be sent along with this request.
 */
@property (nonatomic, strong) NSDictionary* customRequestHeaders;

+ (instancetype)requestWithBaseUrl:(NSURL*)baseUrl;
+ (instancetype)requestForApiEnvironment:(AXSSDKTargetAPI)environment;
+ (instancetype)requestForApiEnvironment:(AXSSDKTargetAPI)environment apiType:(AXSSDKTargetAPIType)type;

@end
