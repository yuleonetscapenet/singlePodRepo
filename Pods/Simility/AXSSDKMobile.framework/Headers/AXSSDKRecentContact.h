//
//  AXSSDKRecentContact.h
//  AXSSDKMobile
//
//  Created by Andrii Maliarchuk on 28.10.19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import "AXSSDKModel.h"

@interface AXSSDKRecentContact : AXSSDKModel

@property (nullable, nonatomic, copy) NSString *email;
@property (nullable, nonatomic, copy) NSString *firstName;
@property (nullable, nonatomic, copy) NSString *lastName;
@property (nullable, nonatomic, copy) NSString *displayName;
@property (nullable, nonatomic, copy) NSString *phoneExtension;
@property (nullable, nonatomic, copy) NSString *phoneNumber;

- (NSString *_Nonnull)fullName;

@end
