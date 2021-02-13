//
//  WKProcessPool+Shared.h
//  AXSSDKMobile
//
//  Created by Andrii Maliarchuk on 24.9.19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <WebKit/WebKit.h>

@interface WKProcessPool (AXSSDKSharedPool)

+ (nonnull WKProcessPool *)axssdk_sharedPool;

@end
