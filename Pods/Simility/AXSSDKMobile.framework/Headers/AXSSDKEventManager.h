//
//  AXSSDKEventManager.h
//  AXSSDKMobile
//
//  Created by Andrew Choi on 7/6/18.
//  Copyright © 2018 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKResult.h"
@import CoreLocation;

typedef enum : NSUInteger {
    AXSSDKEventAPICategoryArtAndFamily = 1,
    AXSSDKEventAPICategoryMusic,
    AXSSDKEventAPICategorySports
} AXSSDKEventAPICategory;

@class AXSSDKGeneralEvent, AXSSDKEventBatch, AXSSDKEvent, AXSSDKEventPageResult, AXSSDKEventTicketBack;

/// Event manager
@interface AXSSDKEventManager : NSObject

/**
 *  Get events for a venue
 *
 *  @param venueId           VenueId ID
 *  @param page              Number of page
 *  @param rows              Rows
 *  @param completionHandler Completion handler that includes error and events
 */
- (void)getEventsForVenue:(nonnull NSString *)venueId
                     page:(NSUInteger)page
              andRowCount:(NSUInteger)rows
        completionHandler:(void(^_Nullable)(NSError * _Nullable error, id _Nullable response, NSArray<AXSSDKGeneralEvent *> * _Nullable events))completionHandler;


/**
 *  Get events by date range
 *
 *  @param startDate         Start Date
 *  @param endDate           End Date
 *  @param page              Number of page
 *  @param rows              Rows
 *  @param coordinate        CLLocationCoordinate2D
 *  @param completionHandler Completion handler that includes error and events
 */
- (void)getEventsFrom:(NSDate * _Nonnull)startDate
                until:(NSDate * _Nonnull)endDate
                 page:(NSUInteger)page
          andRowCount:(NSUInteger)rows
        andCoordinate:(CLLocationCoordinate2D)coordinate
    completionHandler:(void(^_Nullable)(NSError * _Nullable error, id _Nullable  response, NSArray<AXSSDKGeneralEvent *> * _Nullable events))completionHandler;

/**
 *  Get events for a category
 *
 *  @param categories        Array of AXSSDKEventAPICategory (Category ID)
 *  @param page              Number of page
 *  @param rows              Rows
 *  @param coordinate        CLLocationCoordinate2D
 *  @param startDate         Start Date
 *  @param endDate           End Date
 *  @param completionHandler Completion handler that includes error and events
 */
- (void)getEventsForCategories:(nonnull NSArray *)categories
                          page:(NSUInteger)page
                   andRowCount:(NSUInteger)rows
                 andCoordinate:(CLLocationCoordinate2D)coordinate
                          from:(nullable NSDate *)startDate
                            to:(nullable NSDate *)endDate
             completionHandler:(void(^ _Nullable )(NSError * _Nullable  error, id _Nullable  response, NSArray<AXSSDKGeneralEvent *> * _Nullable event, NSUInteger total))completionHandler;

/**
 *  Get event detail info by event ID
 *
 *  @param eventId           Event ID
 *  @param completionHandler Completion handler that includes error and event
 */
- (void)eventById:(nonnull NSString *)eventId completionHandler:(void(^_Nullable)(NSError * _Nullable error, AXSSDKGeneralEvent * _Nullable event))completionHandler;

/**
 *  Get events (featured events, events near you) for a user
 *
 *  @param page              Number of page
 *  @param rows              Rows
 *  @param coordinate        CLLocationCoordinate2D
 *  @param completionHandler Completion handler that includes error and events
 */
- (void)getEventsWithPage:(NSUInteger)page
              andRowCount:(NSUInteger)rows
            andCoordinate:(CLLocationCoordinate2D)coordinate
        completionHandler:(void(^ _Nullable)(NSError * _Nullable error, id _Nullable response, AXSSDKEventBatch * _Nullable results))completionHandler;

/**
 *  Get events from cache
 *
 *  @param completionHandler Completion handler that includes error and events
 */
- (void)loadCachedEvents:(void(^ _Nullable)(NSError * _Nullable error, AXSSDKEventBatch * _Nullable results))completionHandler;

/**
 *  Get events by venue ID. A temporary method for native purchsae flow.
 *
 *  @param venueId           VenueId ID
 *  @param completionHandler Completion handler that includes error and events
 */
- (void)eventsByVenueId:(nonnull NSString *)venueId completionHandler:(void(^_Nullable)(NSError * _Nullable error, NSArray<AXSSDKEvent *> * _Nullable events))completionHandler;

/**
 * Get count of rescheduled events by category.
 * @param completionHandler handler that provides result of operation. in case of success, it provides dictionary where key is a category, value – count of rescheduled events.
 */
- (void)countRescheduledEventsWithCoordinates:(CLLocationCoordinate2D)coordinate
                                   andCountry:(nullable NSString *)country
                            completionHandler:(void (^_Nonnull)(AXSSDKResult<NSDictionary<NSNumber *, NSNumber *> *, NSError *> *_Nonnull))completionHandler;

/**
 * Get rescheduled featured events by category.
 * @param completionHandler handler that provides result of operation. in case of success, it provides an AXSSDKEventPageResult that contains an array of featured events for a category, as well as the total count of all featured events in the category.
 */
- (void)rescheduledFeaturedEventsOfCategory:(AXSSDKEventAPICategory)category
                                       page:(NSUInteger)page
                                andRowCount:(NSUInteger)rows
                              andCoordinate:(CLLocationCoordinate2D)coordinate
                                 andCountry:(nullable NSString *)country
                          completionHandler:(void(^_Nullable)(AXSSDKResult<AXSSDKEventPageResult *, NSError *> *_Nonnull))completionHandler;

/**
 * Get rescheduled events by category.
 * @param completionHandler handler that provides result of operation. in case of success, it provides an AXSSDKEventPageResult that contains an array of events for a category, as well as the total count of all events in the category.
 */
- (void)rescheduledEventsOfCategory:(AXSSDKEventAPICategory)category
                               page:(NSUInteger)page
                        andRowCount:(NSUInteger)rows
                      andCoordinate:(CLLocationCoordinate2D)coordinate
                         andCountry:(nullable NSString *)country
                  completionHandler:(void(^_Nullable)(AXSSDKResult<AXSSDKEventPageResult *, NSError *> *_Nonnull))completionHandler;

/**
 * Get the ticket back for an event.
 * @param eventId           EventId ID
 * @param completionHandler handler that provides result of operation. in case of success, it provides an AXSSDKTicketBack that contains the title and details.
 */
- (void)ticketBackByEventId:(nonnull NSString *)eventId
          completionHandler:(void(^_Nullable)(AXSSDKResult<AXSSDKEventTicketBack *, NSError *> *_Nonnull))completionHandler;

@end
