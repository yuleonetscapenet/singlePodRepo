//
//  AXSSDKHomeEvent.h
//  AXSSDKMobile
//
//  Created by Andrew Choi on 7/13/18.
//  Copyright © 2018 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKModel.h"
#import "AXSSDKSettings.h"

@class AXSSDKGeneralVenue, AXSSDKArtist, AXSSDKEventPromotion, AXSSDKTicketOffer, AXSSDKSafetyIcon, AXSSDKEventTicketBack;

@interface AXSSDKGeneralEvent : AXSSDKModel

@property (nullable, nonatomic, strong) NSString * eventId;
@property (nullable, nonatomic, strong) NSNumber * ticketingStatusId;
@property (nullable, nonatomic, strong) NSString * eventUrl;
@property (nullable, nonatomic, strong) NSString * ticketUrl;
@property (nullable, nonatomic, strong) NSString * accessibleUrl;
@property (nullable, nonatomic, strong, readonly) NSString * presaleTicketUrl;
@property (nullable, nonatomic, strong, readonly) NSString * presaleAccessibleUrl;
@property (nullable, nonatomic, strong) NSString * eventTitle;
@property (nullable, nonatomic, strong) NSDate * eventDateTime;
@property (nullable, nonatomic, strong) NSDate * eventDateTimeUTC;
@property (nullable, nonatomic, strong) NSDate * doorDateTimeUTC;
@property (nullable, nonatomic, strong) NSString * eventDateTimeZone;
@property (nullable, nonatomic, strong) NSString * venueId;
@property (nullable, nonatomic, strong) NSString * venueName;
@property (nullable, nonatomic, strong) NSString * largeImage;
@property (nullable, nonatomic, strong) NSString * supportingAct;
@property (nullable, nonatomic, strong) NSString * performerId;
@property (nullable, nonatomic, strong) NSString * presentedBy;
@property (nullable, nonatomic, strong) NSString * age;
@property (nullable, nonatomic, strong) NSDate * presaleDateTimeUTC;
@property (nullable, nonatomic, strong) NSString * presaleDateTimeTimeZone;
@property (nullable, nonatomic, strong) NSDate * onsaleDateTimeUTC;
@property (nullable, nonatomic, strong) NSString * onsaleDateTimeTimeZone;
@property (nullable, nonatomic, strong) NSString * ticketPrice;
@property (nullable, nonatomic, strong) NSString * doorPrice;
@property (nullable, nonatomic, strong) NSString * currency;
@property (nullable, nonatomic, strong) NSString * currencySymbol;
@property (nullable, nonatomic, strong) NSString * eventDescription;
@property (nullable, nonatomic, strong) NSString * majorCategoryId1;
@property (nullable, nonatomic, strong) NSString * majorCategoryId1Label;

@property (nonatomic) BOOL dateOnly;
@property (nullable, nonatomic, strong) NSArray<NSDate *> * additionalDates;
@property (nullable, nonatomic, strong) NSArray<AXSSDKArtist *> * performers;
@property (nullable, nonatomic, strong) NSArray<AXSSDKSafetyIcon *> * safetyIcons;
@property (nullable, nonatomic, strong) AXSSDKGeneralVenue * venue;
@property (nullable, nonatomic, strong) NSArray<AXSSDKEventPromotion *> * promotions;
@property (nullable, nonatomic, strong) NSArray<AXSSDKTicketOffer *> * ticketOffers;
@property (nonatomic, assign) AXSSDKEventTicketingStatus ticketingStatus;
@property (nullable, nonatomic, strong) AXSSDKEventTicketBack *ticketBack;

- (nullable NSTimeZone *)eventTimeZone;

@end
