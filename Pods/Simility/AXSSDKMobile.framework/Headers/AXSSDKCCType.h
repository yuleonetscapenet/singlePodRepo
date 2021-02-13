//
//  AXSSDKCCType.h
//  AXSSDKMobile
//
//  Created by Andrii Maliarchuk on 16.12.19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    AXSSDKCCTypeVisa = 1,
    AXSSDKCCTypeMastercard,
    AXSSDKCCTypeAmex,
    AXSSDKCCTypeDiscover
} AXSSDKCCType;

AXSSDKCCType AXSSDKCCTypeFromString(NSString *_Nullable cardType);
AXSSDKCCType AXSSDKCCTypeFromCardNumber(NSString *_Nullable cardNumber);
