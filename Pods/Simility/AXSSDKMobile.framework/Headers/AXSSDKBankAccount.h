//
//  AXSSDKBankAccount.h
//  AXSSDKMobile
//
//  Created by Andrew Choi on 1/14/19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKModel.h"

@interface AXSSDKBankAccount : AXSSDKModel

@property (nullable, nonatomic, strong) NSString *firstName;
@property (nullable, nonatomic, strong) NSString *lastName;
@property (nullable, nonatomic, strong) NSString *routingNumber;
@property (nullable, nonatomic, strong) NSString *accountNumber;
@property (nullable, nonatomic, strong) NSNumber *accountType;
@property (nullable, nonatomic, strong) NSString *address1;
@property (nullable, nonatomic, strong) NSString *address2;
@property (nullable, nonatomic, strong) NSString *zipCode;
@property (nullable, nonatomic, strong) NSString *state;
@property (nullable, nonatomic, strong) NSString *city;

- (nonnull id)initWithFirstName:(nonnull NSString *)firstName
                     andLastName:(nonnull NSString *)lastName
                andRoutingNumber:(nonnull NSString *)routingNumber
                andAccountNumber:(nonnull NSString *)accountNumber
                  andAccountType:(nonnull NSNumber *)accountType
                     andAddress1:(nonnull NSString *)address1
                     andAddress2:(nonnull NSString *)address2
                      andZipCode:(nonnull NSString *)zipCode
                        andState:(nonnull NSString *)state
                         andCity:(nonnull NSString *)city;
@end
