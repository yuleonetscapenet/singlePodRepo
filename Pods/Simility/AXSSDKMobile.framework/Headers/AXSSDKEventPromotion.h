//
//  AXSSDKEventPromotion.h
//  AXSSDKMobile
//
//  Created by Andrew Choi on 8/1/18.
//  Copyright © 2018 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKModel.h"

@interface AXSSDKEventPromotion : AXSSDKModel

@property (nullable, nonatomic, strong) NSString * promotionId;
@property (nullable, nonatomic, strong) NSString * callToAction;
@property (nullable, nonatomic, strong) NSString * promotionName;
@property (nullable, nonatomic, strong) NSString * promotionDescription;
@property (nullable, nonatomic, strong) NSString * promotionShortDescription;
@property (nullable, nonatomic, strong) NSString * url;
@property (nullable, nonatomic, strong) NSString * ticketLink;
@property (nullable, nonatomic, strong) NSDate * startDateTimeUTC;
@property (nullable, nonatomic, strong) NSString * startDateTimeTimeZone;
@property (nullable, nonatomic, strong) NSDate * endDateTimeUTC;
@property (nullable, nonatomic, strong) NSString * priceLow;
@property (nullable, nonatomic, strong) NSString * priceHigh;
@property (nullable, nonatomic, strong) NSString * priceRange;
@property (nullable, nonatomic, strong) NSString * currency;

@end
