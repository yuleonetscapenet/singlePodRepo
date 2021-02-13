//
//  AXSSDKEventProtocol.h
//  AXSSDKMobile
//
//  Created by Panda on 7/9/17.
//  Copyright © 2017 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AXSSDKEventProtocol <NSObject>

@property (nullable, nonatomic, strong) NSString *eventId;
@property (nullable, nonatomic, strong) NSString *eventImageUrl;
@property (nullable, nonatomic, strong) NSNumber *dateOnly;
@property (nullable, nonatomic, strong) NSDate *startDate;
@property (nullable, nonatomic, strong) NSDate *startDateLocal;
@property (nullable, nonatomic, strong) NSDate *endDate;
@property (nullable, nonatomic, strong) NSDate *doorDate;
@property (nullable, nonatomic, strong) NSDate *doorDateLocal;
@property (nullable, nonatomic, strong) NSString *title;
@property (nullable, nonatomic, strong) NSString *eventDescription;
@property (nullable, nonatomic, strong) NSNumber *isEventStub;
@property (nullable, nonatomic, strong) NSNumber *ticketingStatusId;
@property (nullable, nonatomic, strong) NSString *additionalDates;
@property (nullable, nonatomic, strong) NSNumber *eventOwnerId;
@property (nullable, nonatomic, strong) NSNumber * listingContiguous;
@property (nullable, nonatomic, strong) NSNumber * transferContiguous;

@property (nullable, nonatomic, strong) NSString *venueTimezoneName;
@property (nullable, nonatomic, strong) NSString *venueTimezoneAbbr;
@property (nullable, nonatomic, strong) NSString *venueCity;
@property (nullable, nonatomic, strong) NSString *venueState;
@property (nullable, nonatomic, strong) NSString *venueName;
@property (nullable, nonatomic, strong) NSNumber *venueLatitude;
@property (nullable, nonatomic, strong) NSNumber *venueLongitude;

@property (nullable, nonatomic, strong) NSNumber *livestreamEnabled;
@property (nullable, nonatomic, strong) NSString *livestreamUrl;

- (BOOL)isCancelled;
- (BOOL)isPostponed;
- (BOOL)isRescheduled;

@end
