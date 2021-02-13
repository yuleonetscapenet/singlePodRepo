//
//  NSString+AXSSDKMobile.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 1/14/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (AXSSDKMobile)

- (nullable NSString *)axssdk_convertHTMLToPlainText;
- (BOOL)axssdk_isValidPhoneFormat;
- (BOOL)axssdk_isValidFSPasswordFormat;
- (BOOL)axssdk_isValidSecurePasswordFormat:(NSError *_Nullable*_Nullable)error;
- (BOOL)axssdk_isValidEmailFormat;
- (BOOL)axssdk_isValidNameFormat;
+ (nonnull NSString *)axssdk_generalErrorMessage;
- (BOOL)axssdk_isAllUppercase;
- (NSRange)axssdk_rangeOfFirstSubstring:(NSStringEnumerationOptions)enumerationOptions;
- (nonnull NSAttributedString *)axssdk_convertToAttributedString;
- (nonnull NSMutableAttributedString *)axssdk_convertToMutableAttributedString;
- (nullable NSString *)axssdk_trimWhitespaceCharacters;
- (BOOL)axssdk_isNumeric;

@end
