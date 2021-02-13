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

@property (nullable, nonatomic, readonly) NSString *deviceId;
@property (nullable, nonatomic, strong) NSString *deviceToken;
@property (nullable, nonatomic, readonly) NSString *type;
@property (nullable, nonatomic, readonly) NSString *name;
@property (nullable, nonatomic, readonly) NSString *operatingSystem;
@property (nullable, nonatomic, readonly) NSString *appVersion;
@property (nullable, nonatomic, readonly) NSString *phoneNumber;
@property (nullable, nonatomic, readonly) NSString *carrier;

+ (instancetype _Nonnull)currentDevice;

@end
