//
//  AXSSDKFSMobileId.h
//  AXSSDKMobileIDUI
//
//  Created by Wilson Lei on 11/11/15.
//  Copyright © 2015 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;

@interface AXSSDKFSMobileId : NSObject

/**
 Generate FlashSeats Mobile ID QR code. Require user to be login first.

 @return QR code
 */
+ (UIImage *)createMobileIdImage;

@end
