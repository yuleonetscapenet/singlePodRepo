//
//  AXSSDKFSUser.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 7/20/17.
//  Copyright © 2017 AXS. All rights reserved.
//

#import <AXSSDKMobile/AXSSDKMobile.h>

@interface AXSSDKFSUser : AXSSDKModel <AXSJsonEncodableModel>

@property (nullable, nonatomic, strong) NSString *email;
@property (nullable, nonatomic, strong) NSString *firstName;
@property (nullable, nonatomic, strong) NSString *lastName;
@property (nullable, nonatomic, strong) NSString *memberId;
@property (nullable, nonatomic, strong) NSString *mobileId;
@property (nullable, nonatomic, strong) NSString *token;
@property (nullable, nonatomic, strong) NSNumber *regionId;
@property (nonatomic, assign, readonly) AXSSDKTicketingRegion region;
@property (nullable, nonatomic, strong) NSNumber *salesBalance;

@end
