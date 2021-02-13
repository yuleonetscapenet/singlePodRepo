//
//  AXSSDKUserBankAccount.h
//  AXSSDKMobile
//
//  Created by Andrew Choi on 1/14/19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKModel.h"

@interface AXSSDKUserBankAccount : AXSSDKModel

@property (nullable, nonatomic, strong) NSString *accountType;
@property (nullable, nonatomic, strong) NSString *lastFourDigits;
@property (nullable, nonatomic, strong) NSNumber *settlementMethodId;

@end
