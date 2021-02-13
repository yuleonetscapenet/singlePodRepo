//
//  AXSSDKEither.h
//  AXSSDKMobile
//
//  Created by Andrii Maliarchuk on 26.5.20.
//  Copyright © 2020 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 Represents one of 2 possible states - left or right. Basically, enum that have 2 cases with associated values.
 */
@interface AXSSDKEither<Left, Right> : NSObject

+ (nonnull instancetype)left:(Left _Nullable)leftValue;
+ (nonnull instancetype)right:(Right _Nullable)rightValue;

@end

@interface AXSSDKEither<Left, Right> (Switching)

- (void)caseLeft:(NS_NOESCAPE void(^_Nonnull)(Left _Nullable))leftCase;
- (void)caseRight:(NS_NOESCAPE void(^_Nonnull)(Right _Nullable))rightCase;
- (void)caseLeft:(NS_NOESCAPE void(^_Nonnull)(Left _Nullable))leftCase
       caseRight:(NS_NOESCAPE void(^_Nonnull)(Right _Nullable))rightCase;

@end

@interface AXSSDKEither<Left, Right> (AccessingValuesWithoutSwitching)

@property (readonly, nullable) Left leftValue;
@property (readonly, nullable) Right rightValue;

@end
