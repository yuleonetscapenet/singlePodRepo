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
@class AXSSDKFSUser;
@class AXSSDKFSSiteSkin;

@interface AXSSDKFSMarketPlaceManager : NSObject


/**
 If this property is set, all API calls from this manager will use this Flash Seats user instead of AXSSDKFSUserPreference
 */
@property (nullable, nonatomic, strong) AXSSDKFSUser *flashSeatsUser;

/**
 *  Shared instance of the class to access state, country and site skin lists.
 *
 *  @return class object
 */
+ (nonnull AXSSDKFSMarketPlaceManager *)sharedInstance;

/**
 *  List of states. Available after stateListWithCompletionHandler is completed.
 *
 *  @return NSArray
 */
- (nullable NSArray<AXSSDKFSState *> *)stateList;

/**
 *  List of countries. Available after countryListWithCompletionHandler is completed.
 *
 *  @return NSArray
 */
- (nullable NSArray<AXSSDKFSCountry *> *)countryList;

/**
 *  List of site skins. Available after siteSkinListWithCompletionHandler is completed.
 *
 *  @return NSArray
 */
- (nullable NSArray<AXSSDKFSSiteSkin *> *)siteSkinList;


/**
 Init a manager with a region ID

 @param regionId region ID
 @return manager
 */
- (nonnull instancetype)initWithRegionId:(nonnull NSNumber *)regionId;

/**
 Init a manager with a region ID

 @param regionIdString region ID
 @return manager
 */
- (nonnull instancetype)initWithRegionIdString:(nonnull NSString *)regionIdString;

/**
 *  Update state list from server
 *
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)stateListWithCompletionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSDictionary * _Nullable response))completionHandler;

/**
 *  Update country list from server
 *
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)countryListWithCompletionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSDictionary * _Nullable response))completionHandler;

/**
 *  Update site skin list from server
 *
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)siteSkinListWithCompletionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSDictionary * _Nullable response))completionHandler;

/** DEPRECATED. Instead Use - (void)sellerFee:(NSArray *)ticketIds pricePerTicketString:(NSString *)pricePerTicket completionHandler:(void(^)(NSError *error,   NSDictionary * fee))completionHandler;
 *
 *  Calculate seller fee for a listing
 *
 *  @param ticketIds         Array of ticket IDs
 *  @param pricePerTicket    Price per ticket
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)sellerFee:(nonnull NSArray *)ticketIds pricePerTicket:(nonnull NSNumber *)pricePerTicket completionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSDictionary * _Nullable fee))completionHandler __deprecated_msg("Use `sellerFee pricePerTicketString` instead");

/**
 *  Calculate seller fee for a listing
 *
 *  @param ticketIds         Array of ticket IDs
 *  @param pricePerTicket    Price per ticket
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)sellerFee:(nonnull NSArray *)ticketIds pricePerTicketString:(nonnull NSString *)pricePerTicket completionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSDictionary * _Nullable fee))completionHandler;

/**
 *  Create a listing
 *
 *  @param ticketIds         Array of ticket IDs
 *  @param listing           A listing object
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)createOfferListing:(nonnull NSArray *)ticketIds listing:(nonnull AXSSDKFSTicketListing *)listing completionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSDictionary * _Nullable response))completionHandler;

/**
 *  Retrat or cancel a listing
 *
 *  @param listingId         Listing ID
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)retractOfferListing:(nonnull NSString *)listingId completionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSDictionary * _Nullable response))completionHandler;

/**
 *  Get all listings from server
 *
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)offerListingsWithCompletionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSDictionary * _Nullable response))completionHandler;

/**
 *  Save listings return from server to CoreData - Private
 *
 *  @param listings Array of listings
 */
- (void)saveOfferListings:(nonnull NSArray *)listings;

/**
 *  Get offer listings from CoreData - Private
 *
 *  @return NSArray
 */
- (nullable NSArray<AXSSDKFSMPOffer *> *)offerListings;


/**
 Get listings for an offer from server. Save to core data.

 @param offer offer
 @param completionHandler A completion handler after API request is completed
 */
- (void)listingsForOffer:(nonnull AXSSDKFSMPOffer *)offer completionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSDictionary * _Nullable response))completionHandler;

/**
 *  Get listings for an event
 *
 *  @param eventId           Event ID
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)offerListingsForEvent:(nonnull NSString *)eventId completionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSDictionary * _Nullable response))completionHandler;

/**
 *  Get tickets for a listing
 *
 *  @param listingId         Listing ID
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)ticketsForOfferListing:(nonnull NSString *)listingId completionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSDictionary * _Nullable response))completionHandler;

/**
 *  Get the seat map image URL for an event
 *
 *  @param eventId           Event ID
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)eventSeatMapsUrlByEventId:(nonnull NSString *)eventId completionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSString * _Nullable imageUrl))completionHandler;

/**
 *  Calculate buyer fee for a purchase
 *
 *  @param listingId         Listing ID
 *  @param quantity          Number of tickets
 *  @param completionHandler A completion handler after API request is completed
 */
- (void)buyerFeeForListing:(nonnull NSString *)listingId quantity:(nonnull NSNumber *)quantity completionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSDictionary * _Nullable fee))completionHandler;

/**
 *  Buy an offer listing
 *
 *  @param listingId          Listing ID
 *  @param quantity           Number of tickets
 *  @param settlementMethodId User settlement method ID
 *  @param completionHandler  A completion handler after API request is completed
 */
- (void)buyOfferListing:(nonnull NSString *)listingId quantity:(nonnull NSNumber *)quantity settlementMethodId:(nonnull NSNumber *)settlementMethodId completionHandler:(void(^ _Nullable)(NSError * _Nullable error, NSDictionary * _Nullable response))completionHandler;

@end
