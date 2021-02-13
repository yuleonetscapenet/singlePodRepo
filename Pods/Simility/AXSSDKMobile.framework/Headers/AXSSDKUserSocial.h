//
//  AXSSDKUserSocial.h
//  AXSSDKMobile
//
//  Created by Panda on 2/15/19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKModel.h"


@class AXSSDKUserFacebook;

@interface AXSSDKUserSocial : AXSSDKModel

@property (nullable, nonatomic, strong) AXSSDKUserFacebook *facebook;

@end

