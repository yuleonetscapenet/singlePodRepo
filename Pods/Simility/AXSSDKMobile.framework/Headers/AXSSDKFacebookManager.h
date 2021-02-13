//
//  AXSSDKFacebookManager.h
//  AXSSDKMobile
//
//  Created by Panda on 2/15/19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AXSSDKUserFacebook;

@interface AXSSDKFacebookManager : NSObject

- (void)userProfileWithFacebookToken:(nonnull NSString *)facebookToken handler:(void(^ _Nullable)(NSError * _Nullable error, AXSSDKUserFacebook * _Nullable facebook))completionHandler;

@end
