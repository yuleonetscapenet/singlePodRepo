//
//  AXSSDKUtility+AXSSDKEventProtocol.h
//  AXSSDKMobile
//
//  Created by gpan on 9/14/20.
//  Copyright © 2020 AXS. All rights reserved.
//

#import <AXSSDKMobile/AXSSDKMobile.h>

@protocol AXSSDKEventProtocol;

typedef enum: NSUInteger {
    AXSSDKEventDatePartWeekdayAbbreviation,
    AXSSDKEventDatePartCalendarDay,
    AXSSDKEventDatePartDivider,
    AXSSDKEventDatePartDoorsTime,
    AXSSDKEventDatePartEventTime,
    AXSSDKEventDatePartDoorsTimeOnly,
    AXSSDKEventDatePartEventTimeOnly,
    AXSSDKEventDatePartSummary,
} AXSSDKEventDatePart;

@interface AXSSDKUtility (AXSSDKEventProtocol)

+ (BOOL)eventDoorDateMetExceededWithEvent:(nonnull id<AXSSDKEventProtocol>)event;
+ (BOOL)eventStartDateMetExceededWithEvent:(nonnull id<AXSSDKEventProtocol>)event;
+ (BOOL)eventStartDateIsWithinTimeInterval:(NSTimeInterval)timeInterval ofEvent:(nonnull id<AXSSDKEventProtocol>)event;
+ (BOOL)eventLocalTimeMeetsExceedsMidnightOfStartDateWithDateOnlyEvent:(nonnull id<AXSSDKEventProtocol>)event;
+ (BOOL)virtualEventStarted:(nonnull id<AXSSDKEventProtocol>)event;

@end
