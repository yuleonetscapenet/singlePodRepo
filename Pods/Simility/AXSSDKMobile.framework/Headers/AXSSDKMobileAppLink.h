//
//  AXSSDKMobileAppLink.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 6/11/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface AXSSDKMobileAppLink : NSObject

/**
*  Handles URL scheme for tasks such as accepting ticket links.
*
*  @param application       application from app delegate
*  @param url               url from app delegate
*  @param sourceApplication sourceApplication from app delegate
*  @param annotation        annotation from app delegate
*
*  @return BOOL indicates if url is handled or not
*/
+ (BOOL)application:(nonnull UIApplication *)application openURL:(nullable NSURL *)url sourceApplication:(nullable NSString *)sourceApplication annotation:(nullable id)annotation;

@end


