//
//  AXSSDKFSMarketPlaceManager.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 7/18/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AXSSDKFSTicketListing;
@class AXSSDKFSState;
@class AXSSDKFSCountry;
@class AXSSDKFSMPOffer;

@interface AXSSDKFSMarketPlaceManager : NSObject

/**
 *  Shared instance of the class
 *
 *  @return class object
 */
+ (AXSSDKFSMarketPlaceManager *)sharedInstance;

/**
 *  List of states
 *
 *  @return NSArray
 */
- (NSArray<AXSSDKFSState *> *)stateList;

/**
 *  List of countries
 *
 *  @return NSArray
 */
- (NSArray<AXSSDKFSCountry *> *)countryList;

/**
 *  Update state list from server
 *
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)stateListWithCompletionHandler:(void(^)(NSError *error, NSDictionary *response))completionHandler;

/**
 *  Update country list from server
 *
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)countryListWithCompletionHandler:(void(^)(NSError *error, NSDictionary *response))completionHandler;

/**
 *  Calculate seller fee for a listing
 *
 *  @param ticketIds         Array of ticket IDs
 *  @param pricePerTicket    Price per ticket
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)sellerFee:(NSArray *)ticketIds pricePerTicket:(NSNumber *)pricePerTicket completionHandler:(void(^)(NSError *error, NSDictionary *fee))completionHandler;

/**
 *  Create a listing
 *
 *  @param ticketIds         Array of ticket IDs
 *  @param listing           A listing object
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)createOfferListing:(NSArray *)ticketIds listing:(AXSSDKFSTicketListing *)listing completionHandler:(void(^)(NSError *error, NSDictionary *response))completionHandler;

/**
 *  Retrat or cancel a listing
 *
 *  @param listingId         Listing ID
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)retractOfferListing:(NSString *)listingId completionHandler:(void(^)(NSError *error, NSDictionary *response))completionHandler;

/**
 *  Get all listings from server
 *
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)offerListingsWithCompletionHandler:(void(^)(NSError *error, NSDictionary *response))completionHandler;

/**
 *  Save listings return from server to CoreData - Private
 *
 *  @param listings Array of listings
 */
- (void)saveOfferListings:(NSArray *)listings;

/**
 *  Get offer listings from CoreData - Private
 *
 *  @return NSArray
 */
- (NSArray<AXSSDKFSMPOffer *> *)offerListings;


/**
 Get listings for an offer from server. Save to core data.

 @param offer offer
 @param completionHandler A completion handler after API request is completed
 */
- (void)listingsForOffer:(AXSSDKFSMPOffer *)offer completionHandler:(void(^)(NSError *error, NSDictionary *response))completionHandler;

/**
 *  Get listings for an event
 *
 *  @param eventId           Event ID
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)offerListingsForEvent:(NSString *)eventId completionHandler:(void(^)(NSError *error, NSDictionary *response))completionHandler;

/**
 *  Get tickets for a listing
 *
 *  @param listingId         Listing ID
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)ticketsForOfferListing:(NSString *)listingId completionHandler:(void(^)(NSError *error, NSDictionary *response))completionHandler;

/**
 *  Get the seat map image URL for an event
 *
 *  @param eventId           Event ID
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)eventSeatMapsUrlByEventId:(NSString *)eventId completionHandler:(void(^)(NSError *error, NSString *imageUrl))completionHandler;

/**
 *  Calculate buyer fee for a purchase
 *
 *  @param listingId         Listing ID
 *  @param quantity          Number of tickets
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)buyerFeeForListing:(NSString *)listingId quantity:(NSNumber *)quantity completionHandler:(void(^)(NSError *error, NSDictionary *fee))completionHandler;

/**
 *  Buy an offer listing
 *
 *  @param listingId          Listing ID
 *  @param quantity           Number of tickets
 *  @param settlementMethodId User settlement method ID
 *  @param completionHandler  A completion handler after API request is completed
 */
- (void)buyOfferListing:(NSString *)listingId quantity:(NSNumber *)quantity settlementMethodId:(NSNumber *)settlementMethodId completionHandler:(void(^)(NSError *error, NSDictionary *response))completionHandler;

@end
