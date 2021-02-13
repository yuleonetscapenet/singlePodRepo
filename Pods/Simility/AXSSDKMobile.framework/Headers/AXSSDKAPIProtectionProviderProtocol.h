//
//  AXSSDKAPIProtectionProviderProtocol.h
//  AXSSDKMobile
//
//  Created by gpan on 4/13/20.
//  Copyright © 2020 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKAPIProtection.h"

@protocol AXSSDKAPIProtectionProviderProtocol

/**
 *  Get token to place in the header of api requests
 */
- (void)getTokenForProtection:(nonnull AXSSDKAPIProtection *)protection completionHandler:(void (^ _Nonnull)(NSString* _Nullable token, NSError* _Nullable error))completionHandler;

@end
