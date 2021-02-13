//
//  AXSSDKCreditCard.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 8/25/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <AXSSDKMobile/AXSSDKMobile.h>
#import "AXSSDKCCType.h"

@interface AXSSDKCreditCard : AXSSDKModel <AXSJsonEncodableModel>

@property (nullable, nonatomic, strong) NSString *fullName;
@property (nonatomic, assign) AXSSDKCCType cardType;
@property (nullable, nonatomic, strong) NSNumber *cardNumber;
@property (nullable, nonatomic, strong) NSNumber *expMonth;
@property (nullable, nonatomic, strong) NSNumber *expYear;
@property (nullable, nonatomic, strong) NSNumber *securityCode;
@property (nullable, nonatomic, strong) NSString *address1;
@property (nullable, nonatomic, strong) NSString *address2;
@property (nullable, nonatomic, strong) NSString *city;
@property (nullable, nonatomic, strong) NSString *zip;
@property (nullable, nonatomic, strong) NSNumber *fsStateId;
@property (nullable, nonatomic, strong) NSNumber *fsCountryId;

@end
