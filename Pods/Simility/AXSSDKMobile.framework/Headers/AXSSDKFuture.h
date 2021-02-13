//
//  AXSSDKFuture.h
//  AXSSDKMobile
//
//  Created by Andrii Maliarchuk on 12.11.19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AXSSDKFuture<Value> : NSObject

typedef void(^AXSSDKFutureResultHandler)(Value _Nullable);

+ (nonnull instancetype)withBlock:(void(^_Nonnull)(AXSSDKFutureResultHandler _Nonnull))block;

- (void)onResult:(nonnull AXSSDKFutureResultHandler)valueHandler;

@end
