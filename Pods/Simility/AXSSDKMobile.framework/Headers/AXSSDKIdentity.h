//
//  AXSIdentity.h
//  AXSMobileSDK
//
//  Created by Marc Chambers on 5/28/14.
//  Copyright (c) 2014 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKModel.h"
#import "AXSSDKDevice.h"
#import "AXSSDKLocation.h"

/**
 *  The AXSIdentity object represents your user identity on the AXS platform. It keeps track of your access token as well as your user information.
 */
@interface AXSSDKIdentity : AXSSDKModel <AXSJsonEncodableModel>

/**
 *  The "anonymous ID" for unauthenticated users.
 */
@property (nullable, nonatomic, strong) NSString* axsAppId;
@property (nullable, nonatomic, strong) NSString* clientId;
@property (nullable, nonatomic, strong) NSNumber* userId;
@property (nullable, nonatomic, strong) AXSSDKDevice *device;

/**
 Device location. Not user's location that is stored on the server.
 */
@property (nullable, nonatomic, strong) AXSSDKLocation *location;

@end
