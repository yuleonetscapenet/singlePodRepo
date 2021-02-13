//
//  AXSSDKUserFacebook.h
//  AXSSDKMobile
//
//  Created by Panda on 2/15/19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKModel.h"

@interface AXSSDKUserFacebook : AXSSDKModel

@property (nonatomic, assign) BOOL isActive;
@property (nullable, nonatomic, strong) NSString *facebookId;
@property (nullable, nonatomic, strong) NSString *firstName;
@property (nullable, nonatomic, strong) NSString *lastName;
@property (nullable, nonatomic, strong) NSString *email;
@property (nullable, nonatomic, strong) NSArray *likes;
@property (nullable, nonatomic, strong) NSArray *events;

@end

