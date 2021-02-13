//
//  AXSSDKHomeVenue.h
//  AXSSDKMobile
//
//  Created by Andrew Choi on 7/13/18.
//  Copyright © 2018 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKModel.h"

@interface AXSSDKGeneralVenue : AXSSDKModel

@property (nullable, nonatomic, strong) NSString * venueUrl;
@property (nullable, nonatomic, strong) NSString * title;
@property (nullable, nonatomic, strong) NSString * url;
@property (nullable, nonatomic, strong) NSString * country;
@property (nullable, nonatomic, strong) NSString * venueId;
@property (nullable, nonatomic, strong) NSString * axs_ticketed_venue;
@property (nullable, nonatomic, strong) NSString * currency;
@property (nullable, nonatomic, strong) NSString * city;
@property (nullable, nonatomic, strong) NSString * locale;
@property (nullable, nonatomic, strong) NSArray * keywords;
@property (nullable, nonatomic, strong) NSString * skinCode;
@property (nullable, nonatomic, strong) NSString * state;
@property (nullable, nonatomic, strong) NSDictionary * localeAvailable;
@property (nullable, nonatomic, strong) NSString * longitude;
@property (nullable, nonatomic, strong) NSString * latitude;
@property (nullable, nonatomic, strong) NSString * timezone;
@property (nullable, nonatomic, strong) NSString * postalCode;
@property (nullable, nonatomic, strong) NSString * address_line;
@property (nullable, nonatomic, strong) NSString * address;
@property (nullable, nonatomic, strong) NSString * imageUrl;
@property (nullable, nonatomic, strong) NSString * phone1;
@property (nullable, nonatomic, strong) NSString * phone2;

@end
