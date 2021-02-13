//
//  AXSSDKFSMobileId.h
//  AXSSDKMobileIDUI
//
//  Created by Wilson Lei on 11/11/15.
//  Copyright © 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKResult.h"
@import UIKit;
@class AXSSDKFSUser;
@protocol AXSSDKOrderProtocol;

extern NSErrorDomain const _Nonnull AXSSDKFSMobileIdErrorDomain;
extern NSErrorUserInfoKey const _Nonnull AXSSDKMobileIdPlaceholderImageKey;

/**
 Errors that may occur within creating a Mobile ID image.
 */
typedef NS_ERROR_ENUM(AXSSDKFSMobileIdErrorDomain, AXSSDKFSMobileIdImageError) {
    /**
     Error that indicates that input data missing to create mobiel Id image.
     */
    AXSSDKFSMobileIdImageErrorMissingData = 1,
    /**
     Error that indicates that user has not agreed to COVID risk terms. In such case you need to show AXSSDKCOVIDRiskAlertController for that user.
     UserInfo contains template QR image under AXSSDKMobileIdPlaceholderImageKey.
     */
    AXSSDKFSMobileIdImageErrorUserHasNotAgreedToCOVIDRiskTerms
};

extern NSError * _Nonnull AXSSDKFSMobileIdError(AXSSDKFSMobileIdImageError error, NSDictionary<NSErrorUserInfoKey, id> * _Nonnull userInfo);

/// AXS Mobile ID QR helper class
@interface AXSSDKFSMobileId : NSObject

/**
 Generate AXS Mobile ID QR code for `defaultLinkedFSAccount`. Require user to be logged-in first.

 @return result object. In case of success – QR image, failure – AXSSDKFSMobileIdImageError
 */
+ (nonnull AXSSDKResult<UIImage *, NSError *> *)createMobileIdImage;

/**
 Generate AXS Mobile ID QR code for specific FSUser

 @param user user that should be used for generating image
 @returns result object. In case of success – QR image, failure – AXSSDKFSMobileIdImageError
 */
+ (nonnull AXSSDKResult<UIImage *, NSError *> *)createMobileIdImageWithUser:(nonnull AXSSDKFSUser *)user;

/**
 Generate AXS Mobile ID QR code using AXSSDKOrder which returns from AXSSDKOrderHistoryManager class fetchOrderHistoryForPage method

 @param order order that should be used for generating image
 @return result object. In case of success – QR image, failure – AXSSDKFSMobileIdImageError
 */
+ (nonnull AXSSDKResult<UIImage *, NSError *> *)createMobileIdImageWithOrder:(nonnull id<AXSSDKOrderProtocol>)order;

@end
