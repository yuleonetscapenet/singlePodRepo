//
//  AXSSDKMobileIdPassManager.h
//  AXSSDKMobile
//
//  Created by Andrii Maliarchuk on 15.11.19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
@class PKPass;

typedef void (^AXSSDKMobileIdPassStorageReviewHandler)(void(^_Nonnull completed)(void));
typedef void (^AXSSDKMobileIdPassStorageCompletionHandler)(BOOL success);

/**
 @brief Manager that is responsible for accessing and adding user's Mobile Id pass to the Wallet.
 */
@interface AXSSDKMobileIdPassManager : NSObject

+ (nonnull instancetype)defaultManager;

/**
 @brief Access the Mobile Id pass.
 @return A PKPass that represents user's Mobile Id. Returns nil if pass is not in the Wallet.
 */
- (PKPass *_Nullable)pass;

/**
 @brief Adds PKPass that represents user's Mobile Id into Wallet.
 @discussion The process of adding passes to Wallet requires explicit user interaction (system prompt) which may result in either: reviewing pass, canceling the process, successfully adding a pass to the wallet.
 @param addMobileIdPass A PKPass that represents user's Mobile Id.
 @param reviewPassHandler A handler that is called whenever the user chooses to preview pass before adding it to the wallet. It provides a completion handler which should be called at the end of the review.
 @param completionHandler A handler that is called when the process of adding a pass to the wallet is finished. Reports if a pass was successfully added or not.
 */
- (void)addMobileIdPass:(PKPass *_Nonnull)pass
      reviewPassHandler:(nonnull AXSSDKMobileIdPassStorageReviewHandler)reviewPassHandler
      completionHandler:(nullable AXSSDKMobileIdPassStorageCompletionHandler)completionHandler;

@end
