//
//  AXSSDKTicketBuyFlow.h
//  AXSSDKMobileUI
//
//  Created by Wilson Lei on 10/18/17.
//  Copyright © 2017 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKModel.h"

@protocol AXSSDKEventProtocol;
@class AXSSDKTicket, AXSSDKFSUser;

@interface AXSSDKTicketSearchCriteriaQuantity : NSObject

@property (nullable, nonatomic, strong) NSNumber *min;
@property (nullable, nonatomic, strong) NSNumber *max;
@property (nullable, nonatomic, strong) NSNumber *step;

@end

@interface AXSSDKTicketDeliveryMethod : NSObject

@property (nullable, nonatomic, strong) NSNumber *methodId;
@property (nullable, nonatomic, strong) NSString *label;

@end

@interface AXSSDKCartSummaryItem : AXSSDKModel

@property (nullable, nonatomic, strong) NSString *label;
@property (nullable, nonatomic, strong) NSNumber *quantity;
@property (nullable, nonatomic, strong) NSNumber *unitPrice;
@property (nullable, nonatomic, strong) NSNumber *priceTotal;

@end

@interface AXSSDKCartSummary : NSObject

@property (nullable, nonatomic, strong) NSNumber *subTotal;
@property (nullable, nonatomic, strong) NSNumber *feeTotal;
@property (nullable, nonatomic, strong) NSNumber *grandTotal;
@property (nullable, nonatomic, strong) NSArray<AXSSDKCartSummaryItem *> *items;

@end

@interface AXSSDKCartPayment : NSObject

@property (nullable, nonatomic, strong) NSNumber *token;
@property (nullable, nonatomic, strong) NSNumber *ccLastFour;
@property (nullable, nonatomic, strong) NSString *ccType;
@property (nullable, nonatomic, strong) NSString *firstName;
@property (nullable, nonatomic, strong) NSString *lastName;
@property (nullable, nonatomic, strong) NSString *email;
@property (nullable, nonatomic, strong) NSNumber *ccExpMonth;
@property (nullable, nonatomic, strong) NSNumber *ccExpYear;
@property (nullable, nonatomic, strong) NSString *address1;
@property (nullable, nonatomic, strong) NSString *address2;
@property (nullable, nonatomic, strong) NSString *city;
@property (nullable, nonatomic, strong) NSString *state;
@property (nullable, nonatomic, strong) NSString *postalCode;
@property (nullable, nonatomic, strong) NSString *countryCode;
@property (nullable, nonatomic, strong) NSString *phone;

@end

@interface AXSSDKTicketBuyFlow : NSObject

@property (nullable, nonatomic, strong) NSString *onSaleId;
@property (nullable, nonatomic, strong) NSString *sessionId;
@property (nullable, nonatomic, strong) NSString *sessionCookie;
@property (nullable, nonatomic, strong) id<AXSSDKEventProtocol> event;
@property (nullable, nonatomic, strong) NSString *eventId;
@property (nullable, nonatomic, strong) NSString *offerId;

@property (nullable, nonatomic, strong) NSNumber *filterQuantity;

@property (nullable, nonatomic, strong) NSDictionary *ticketSearchCriteria;
@property (nullable, nonatomic, strong) NSDictionary *cart;
@property (nullable, nonatomic, strong) NSArray *deliveryMethods;
@property (nullable, nonatomic, strong) NSArray *payments;

@property (nullable, nonatomic, strong) NSString *orderId;

//INFO TEST
@property (nullable, nonatomic, strong) AXSSDKFSUser *user;

+ (nonnull instancetype)sharedInstance;

- (nullable AXSSDKTicketSearchCriteriaQuantity *)ticketSearchCriteriaQuantityByPriceTypeId:(nonnull NSNumber *)priceTypeId;
- (nullable NSArray<AXSSDKTicket *>*)cartTickets;
- (nullable NSArray<AXSSDKTicketDeliveryMethod *>*)allDeliveryMethods;
- (nullable AXSSDKCartSummary *)cartSummary;
- (nullable NSArray<AXSSDKCartPayment *> *)cartPayments;

@end
