//
//  WKHTTPCookieStore+AXSSDKSharedCookies.h
//  AXSSDKMobile
//
//  Created by Andrii Maliarchuk on 20.9.19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <WebKit/WebKit.h>

@interface WKHTTPCookieStore (AXSSDKSharedCookies)

- (void)axssdk_addCookiesFromSharedCookieStorageWithCompletionHandler:(void(^ _Nullable)(void))completionHandler;
- (void)axssdk_addCookies:(NSArray<NSHTTPCookie *> *_Nonnull)cookies completionHandler:(void(^ _Nullable)(void))completionHandler;

@end
