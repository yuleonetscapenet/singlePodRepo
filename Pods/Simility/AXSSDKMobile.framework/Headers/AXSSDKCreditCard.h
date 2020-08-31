//
//  AXSSDKCreditCard.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 8/25/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <AXSSDKMobile/AXSSDKMobile.h>

typedef enum : NSUInteger {
    AXSSDKCCTypeVisa,
    AXSSDKCCTypeMastercard,
    AXSSDKCCTypeAmex,
    AXSSDKCCTypeDiscover
} AXSSDKCCType;

@interface AXSSDKCreditCard : AXSSDKModel <AXSJsonEncodableModel>

@property (nonatomic, strong) NSString *fullName;
@property (nonatomic, assign) AXSSDKCCType cardType;
@property (nonatomic, strong) NSNumber *cardNumber;
@property (nonatomic, strong) NSNumber *expMonth;
@property (nonatomic, strong) NSNumber *expYear;
@property (nonatomic, strong) NSNumber *securityCode;
@property (nonatomic, strong) NSString *address1;
@property (nonatomic, strong) NSString *address2;
@property (nonatomic, strong) NSString *city;
@property (nonatomic, strong) NSString *zip;
@property (nonatomic, strong) NSNumber *fsStateId;
@property (nonatomic, strong) NSNumber *fsCountryId;

@end
