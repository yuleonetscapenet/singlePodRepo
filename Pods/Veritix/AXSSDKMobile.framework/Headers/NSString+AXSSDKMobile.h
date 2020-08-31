//
//  NSString+AXSSDKMobile.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 1/14/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (AXSSDKMobile)

- (NSString *)axssdk_convertHTMLToPlainText;
- (BOOL)axssdk_isValidPhoneFormat;
- (BOOL)axssdk_isValidFSPasswordFormat;
- (BOOL)axssdk_isValidEmailFormat;
- (BOOL)axssdk_isValidNameFormat;

@end
