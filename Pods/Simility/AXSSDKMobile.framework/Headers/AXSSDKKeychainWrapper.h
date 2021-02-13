//
//  AXSSDKKeychainWrapper.h
//  AXSSDKMobile
//
//  Created by Irina Revkina on 2/14/19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Security/Security.h>

@interface AXSSDKKeychainWrapper : NSObject

- (void)setObject:(nonnull id)inObject forKey:(nonnull NSString *)key;
- (void)setString:(nonnull NSString *)string forKey:(nonnull NSString *)key;
- (nullable id)objectForKey:(nonnull NSString *)key;
- (nullable NSString *)stringForKey:(nonnull NSString *)key;
- (void)removeObjectForKey:(nonnull NSString *)key;

@end
