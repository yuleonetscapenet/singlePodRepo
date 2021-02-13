//
//  AXSSDKUserCreditCard.h
//  AXSSDKMobile
//
//  Created by Andrii Maliarchuk on 9.12.19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <AXSSDKMobile/AXSSDKMobile.h>
@class AXSSDKUserCreditCardAddress;

@interface AXSSDKUserCreditCard : AXSSDKModel

@property (strong, nonatomic, nullable) AXSSDKUserCreditCardAddress *address;
@property (strong, nonatomic, nullable) NSNumber *expMonth;
@property (strong, nonatomic, nullable) NSNumber *expYear;
@property (strong, nonatomic, nullable) NSString *fullName;
@property (strong, nonatomic, nullable) NSNumber *identifier;
@property (strong, nonatomic, nullable) NSNumber *lastFourDigits;
@property (strong, nonatomic, nullable) NSString *cardType;

@end

@interface AXSSDKUserCreditCardAddress : AXSSDKModel

@property (strong, nonatomic, nullable) NSString *addressID;
@property (strong, nonatomic, nullable) NSString *city;
@property (strong, nonatomic, nullable) NSString *country;
@property (strong, nonatomic, nullable) NSNumber *isPrimaryAddress;
@property (strong, nonatomic, nullable) NSString *line1;
@property (strong, nonatomic, nullable) NSString *line2;
@property (strong, nonatomic, nullable) NSString *name;
@property (strong, nonatomic, nullable) NSString *state;
@property (strong, nonatomic, nullable) NSString *zip;

@end
