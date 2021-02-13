//
//  AXSSDKNotificationInboxManager.h
//  AXSSDKMobile
//
//  Created by Andrii Maliarchuk on 1.10.19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AXSSDKInboxNotification;


/// Notification inbox manager
@interface AXSSDKNotificationInboxManager : NSObject

+ (nonnull instancetype)sharedInstance NS_SWIFT_NAME(shared());

- (void)fetchNotificationsAtPage:(NSInteger)page
                        pageSize:(NSInteger)pageSize
               completionHandler:(void(^_Nullable)(NSArray<AXSSDKInboxNotification *> *_Nullable notifications, NSError *_Nullable error))completionhandler;

- (void)deleteNotificationWithId:(NSString *_Nonnull)notificationId
               completionHandler:(void(^_Nullable)(NSError *_Nullable error))completionHandler;

- (void)deleteNotifications:(NSArray<NSString *> *_Nonnull)notificationIds
          completionHandler:(void(^_Nullable)(NSError *_Nullable error))completionHandler;

- (void)markAsReadNotificationWithId:(NSString *_Nonnull)notificationId
                   completionHandler:(void(^_Nullable)(NSError *_Nullable error))completionHandler;

- (void)markAsReadNotifications:(NSArray<NSString *> *_Nonnull)notificationIds
              completionHandler:(void(^_Nullable)(NSError *_Nullable error))completionHandler;

- (void)getUnreadCountWithCompletionHandler:(void(^_Nullable)(NSNumber * _Nullable, NSError * _Nullable))completionHandler;

- (void)fetchNotificationWithId:(NSString * _Nonnull)notificationId
            completionHandler:(void(^_Nullable)(AXSSDKInboxNotification *_Nullable notification, NSError *_Nullable error))completionHandler;
@end
