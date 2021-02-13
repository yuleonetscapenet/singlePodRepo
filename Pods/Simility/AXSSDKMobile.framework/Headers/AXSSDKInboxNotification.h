//
//  AXSSDKInboxNotification.h
//  AXSSDKMobile
//
//  Created by Andrii Maliarchuk on 1.10.19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKModel.h"

#define AXSSDKInboxNotificationListWasUpdated @"AXSSDKInboxNotificationListWasUpdated"

@interface AXSSDKInboxNotification : AXSSDKModel

@property (nonnull, strong, nonatomic) NSString *id;
@property (nullable, strong, nonatomic) NSString *title;
@property (nullable, strong, nonatomic) NSString *body;
@property (nonnull, strong, nonatomic) NSDate *createTime;
@property (nonnull, strong, nonatomic) NSNumber *isRead;
@property (nullable, strong, nonatomic) NSString *imageURL;
@property (nullable, strong, nonatomic) NSString *ctaButtonText;
@property (nullable, strong, nonatomic) NSString *ctaButtonLink;
@property (nullable, strong, nonatomic) NSDictionary *data;

@end
