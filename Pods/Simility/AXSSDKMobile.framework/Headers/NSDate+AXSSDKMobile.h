//
//  NSDate+AXSSDKMobile.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 11/6/18.
//  Copyright © 2018 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (AXSSDKMobile)

- (nonnull NSString *)axssdk_timeAgo;
+ (nonnull NSDate *)axssdk_yesterday;
+ (nonnull NSDate *)axssdk_tomorrow;
+ (nonnull NSDate *)axssdk_dayBeforeYesterday;
- (nonnull NSDate *)axssdk_utcToLocalTime;

/**
 Check if the date is today with local timezone
 @return boolean that indicates whehter the receiver about to happen today
 */
- (BOOL)axssdk_isToday;

/**
 Use this method to detect if the receiver is in the future.
 @returns boolean that indicates whether the receiver is a future date.
 */
- (BOOL)axssdk_isFutureDate;

/**
 Use this method to detect if the receiver is in future relative to the provided date.
 @param otherDate date to be compared with receiver
 @returns boolean that indicates whether the receiver is in the future relative to `otherDate`
 */
- (BOOL)axssdk_isLaterThan:(nonnull NSDate *)otherDate;

/**
 Use this method to detect if the receiver is in the past relative to the provided date.
 @param otherDate date to be compared with receiver
 @returns boolean that indicates whether the receiver is in the past relative to `otherDate`
 */
- (BOOL)axssdk_isEarlierThan:(nonnull NSDate *)otherDate;

@end
