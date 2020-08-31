//
//  AXSSDKDevice.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 6/4/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import "AXSSDKModel.h"

/**
 *  Represents a device
 */
@interface AXSSDKDevice : AXSSDKModel

@property (nonatomic, readonly) NSString *deviceId;
@property (nonatomic, strong) NSString *deviceToken;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *operatingSystem;
@property (nonatomic, readonly) NSString *appVersion;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *carrier;

+ (instancetype)currentDevice;

@end
