//
//  AXSSDKAPIProtectionManager.h
//  AXSSDKMobile
//
//  Created by gpan on 3/25/20.
//  Copyright © 2020 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKAPIProtectionProviderProtocol.h"
#import "AXSSDKSettings.h"

@interface AXSSDKAPIProtectionManager : NSObject

/**
 *  Current AXSSDKAPIProtectionManager instantiated for user session.
 *
 *  @return class object
 */
+ (nonnull instancetype)sharedInstance;


/**
 *  Set the protection provider to use to retrieve the protection token.
 *
 *  @param provider provides protection token. Defaults to nil.
 */
- (void)setAPIProtectionProvider:(nonnull id<AXSSDKAPIProtectionProviderProtocol>)provider;


/**
 *  Fetch protection token.
 *
 *  @param completionHandler completion handler with error and token
 */
- (void)getTokenForAPIType:(AXSSDKTargetAPIType)type completionHandler:(void(^ _Nonnull)(NSError* _Nullable error, NSString* _Nullable token))completionHandler;

@end
