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

/**
 *  The AXSIdentity object represents your user identity on the AXS platform. It keeps track of your access token as well as your user information.
 */
@interface AXSSDKIdentity : AXSSDKModel <AXSJsonEncodableModel>

/**
 *  The "anonymous ID" for unauthenticated users.
 */
@property (nonatomic, strong) NSString* axsAppId;
@property (nonatomic, strong) NSString* clientId;
@property (nonatomic, strong) NSNumber* userId;
@property (nonatomic, strong) AXSSDKDevice *device;

@end
