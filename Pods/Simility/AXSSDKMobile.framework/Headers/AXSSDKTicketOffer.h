//
//  AXSSDKTicketOffer.h
//  AXSSDKMobile
//
//  Created by Andrew Choi on 8/13/18.
//  Copyright © 2018 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKModel.h"

@interface AXSSDKTicketOffer : AXSSDKModel

@property (nullable, nonatomic, strong) NSString *title;
@property (nullable, nonatomic, strong) NSString *detail;
@property (nullable, nonatomic, strong) NSString *link;
@property (nullable, nonatomic, strong) NSDate *onSale;
@property (nullable, nonatomic, strong) NSString *presaleLink;
@property (nullable, nonatomic, strong) NSDate *presaleDate;

- (nonnull instancetype)initWithTitle:(nullable NSString *)title
                            andDetail:(nullable NSString *)detail
                              andLink:(nullable NSString *)link
                            andOnSale:(nullable NSDate *)onSale;

@end
