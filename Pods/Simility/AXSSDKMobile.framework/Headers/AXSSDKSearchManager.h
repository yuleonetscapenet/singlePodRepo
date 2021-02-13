//
//  AXSSDKSearchManager.h
//  AXSSDKMobile
//
//  Created by Andrew Choi on 7/19/18.
//  Copyright © 2018 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@import CoreLocation;

typedef enum : NSUInteger {
    AXSSDKSearchAPICategoryEvent = 1,
    AXSSDKSearchAPICategoryArtist = 6,
    AXSSDKSearchAPICategoryVenue = 7
} AXSSDKSearchAPICategory;

@class AXSSDKGeneralEvent, AXSSDKArtist, AXSSDKGeneralVenue;
@class AXSSDKSearchResult;


/// Search manager
@interface AXSSDKSearchManager : NSObject


/**
 real time search by term

 @param term search term
 @param coordinate CLLocationCoordinate2D
 @param completionHandler Completion handler that includes error and results. Results includes events and artists.
 */
- (void)searchByTerm:(nonnull NSString *)term coordinate:(CLLocationCoordinate2D)coordinate completionHandler:(nullable void(^)(NSError * _Nullable error, id _Nullable response, NSArray<AXSSDKSearchResult *> * _Nullable results))completionHandler;

/**
 *  Search events by searech term
 *
 *  @param searchTerm        Search term
 *  @param page              Number of page
 *  @param rows              Rows
 *  @param coordinate        CLLocationCoordinate2D
 *  @param completionHandler Completion handler that includes error, events, top matches and number of total results
 */
- (void)searchEventsByTerm:(nonnull NSString *)searchTerm
                page:(NSUInteger)page
         andRowCount:(NSUInteger)rows
       andCoordinate:(CLLocationCoordinate2D)coordinate
   completionHandler:(nullable void(^)(NSError * _Nullable error, id _Nullable response, NSArray<AXSSDKGeneralEvent *> * _Nullable events, NSArray<AXSSDKGeneralEvent *> * _Nullable topMatches, NSUInteger totalResults))completionHandler;

/**
 *  Search artists by searech term
 *
 *  @param searchTerm        Search term
 *  @param page              Number of page
 *  @param rows              Rows
 *  @param coordinate        CLLocationCoordinate2D
 *  @param completionHandler Completion handler that includes error, artists, top matches and number of total results
 */
- (void)searchArtistsByTerm:(nonnull NSString *)searchTerm
                      page:(NSUInteger)page
               andRowCount:(NSUInteger)rows
             andCoordinate:(CLLocationCoordinate2D)coordinate
         completionHandler:(nullable void(^)(NSError * _Nullable error, id _Nullable response, NSArray<AXSSDKArtist *> * _Nullable artists, NSArray<AXSSDKArtist *> * _Nullable topMatches, NSUInteger totalResults))completionHandler;

/**
*  Search venues by searech term
 *
 *  @param searchTerm        Search term
 *  @param page              Number of page
 *  @param rows              Rows
 *  @param coordinate        CLLocationCoordinate2D
 *  @param completionHandler Completion handler that includes error, venues, top matches and number of total results
 */
- (void)searchVenuesByTerm:(nonnull NSString *)searchTerm
                      page:(NSUInteger)page
               andRowCount:(NSUInteger)rows
             andCoordinate:(CLLocationCoordinate2D)coordinate
         completionHandler:(nullable void(^)(NSError * _Nullable error, id _Nullable response, NSArray<AXSSDKGeneralVenue *> * _Nullable venues, NSArray<AXSSDKGeneralVenue *> * _Nullable topMatches, NSUInteger totalResults))completionHandler;

@end
