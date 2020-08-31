//
//  AXSSDKLocation.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 6/4/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import "AXSSDKModel.h"

/**
 *  Represents a location
 */
@interface AXSSDKLocation : AXSSDKModel

@property (nonatomic, strong) NSString *locationId;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *countryCode;
@property (nonatomic, strong) NSString *stateProvince;
@property (nonatomic, strong) NSString *postalCode;
@property (nonatomic, strong) NSString *city;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSNumber *latitude;
@property (nonatomic, strong) NSNumber *longitude;
@property (nonatomic, strong) NSTimeZone *timezone;
@property (nonatomic, strong) NSString *DMACode;
@property (nonatomic, strong) NSString *areaCode;

@end
