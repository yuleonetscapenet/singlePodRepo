//
//  AXSSDKKeyValueObservation.h
//  AXSSDKMobile
//
//  Created by Andrii Maliarchuk on 20.9.19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AXSSDKKeyValueObservation : NSObject

- (nonnull instancetype)initWithSubject:(id _Nonnull)subject
                                keyPath:(NSString *_Nonnull)keyPath
                          changeHandler:(void(^ _Nullable)(id _Nonnull object, NSDictionary *_Nonnull change))handler;

- (void *_Nonnull)context;
- (void)cancel;

@end

@interface NSObject(AXSSDKKeyValueObservation)

- (AXSSDKKeyValueObservation * _Nonnull)axssdk_observeKeyPath:(NSString *_Nonnull)keyPath
                                                      handler:(void(^_Nullable)(NSDictionary *_Nonnull change))handler;

- (AXSSDKKeyValueObservation * _Nonnull)axssdk_observeKeyPath:(NSString *_Nonnull)keyPath
                                                      options:(NSKeyValueObservingOptions)options
                                                      handler:(void(^_Nullable)(NSDictionary *_Nonnull change))handler;

@end
