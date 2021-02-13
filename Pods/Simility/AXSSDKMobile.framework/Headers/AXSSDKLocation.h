//
//  AXSSDKLocation.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 6/4/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import "AXSSDKModel.h"
@import CoreLocation;

/**
 *  Represents a location
 */
@interface AXSSDKLocation : AXSSDKModel

@property (nullable, nonatomic, strong) NSNumber *locationId;
@property (nullable, nonatomic, strong) NSString *name;
@property (nullable, nonatomic, strong) NSString *countryCode;
@property (nullable, nonatomic, strong) NSString *stateProvince;
@property (nullable, nonatomic, strong) NSString *postalCode;
@property (nullable, nonatomic, strong) NSString *city;
@property (nullable, nonatomic, strong) NSString *type;
@property (nullable, nonatomic, strong) NSNumber *latitude;
@property (nullable, nonatomic, strong) NSNumber *longitude;
@property (nullable, nonatomic, strong) NSTimeZone *timezone;
@property (nullable, nonatomic, strong) NSString *DMACode;
@property (nullable, nonatomic, strong) NSString *areaCode;
@property (nullable, nonatomic, strong) NSString *label;
@property (nullable, nonatomic, strong, readonly) NSString *shortAddress;


/**
 Create AXSSDKLocation with CLPlacemark from CoreLocation

 @param placemark CLPlacemark
 @return AXSSDKLocation
 */
- (nonnull id)initWithPlacemark:(CLPlacemark * _Nonnull)placemark;

@end
