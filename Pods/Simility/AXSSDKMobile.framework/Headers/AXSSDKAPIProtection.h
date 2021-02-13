//
//  AXSSDKAPIProtection.h
//  AXSSDKMobile
//
//  Created by Panda on 4/20/20.
//  Copyright © 2020 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKSettings.h"

@interface AXSSDKAPIProtection : NSObject

@property (nonatomic, strong, readonly, nonnull) NSString *domainUrl;
@property (nonatomic, assign, readonly) AXSSDKTargetAPIType apiType;

- (nonnull instancetype)initWithAPIType:(AXSSDKTargetAPIType)apiType;

@end
