//
//  AXSSDKBuyManager.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 10/19/17.
//  Copyright © 2017 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AXSSDKBuyManager : NSObject

- (void)buyPreflow:(nonnull NSString *)onSaleId completionHandler:(void(^ _Nullable)(NSError * _Nullable error, id _Nullable response))completionHandler;

- (void)createSessionWithOnSaleId:(nonnull NSString *)onSaleId completionHandler:(void(^_Nullable)(NSError * _Nullable error, id _Nullable response))completionHandler;

- (void)onSaleInfoWithId:(nonnull NSString *)onSaleId completionHandler:(void(^_Nullable)(NSError * _Nullable error, id _Nullable response))completionHandler;

- (void)inventoryWithId:(nonnull NSString *)onSaleId completionHandler:(void(^_Nullable)(NSError * _Nullable error, id _Nullable response))completionHandler;

- (void)deliveryMethodsWithId:(nonnull NSString *)onSaleId completionHandler:(void(^_Nullable)(NSError * _Nullable error, id _Nullable response))completionHandler;

- (void)addItemsWithId:(nonnull NSString *)onSaleId completionHandler:(void(^_Nullable)(NSError * _Nullable error, id _Nullable response))completionHandler;

- (void)addItemsWithId:(nonnull NSString *)onSaleId deliveryMethodId:(nonnull NSNumber *)deliveryMethodId completionHandler:(void(^_Nonnull)(NSError * _Nonnull error, id _Nonnull response))completionHandler;

- (void)placeOrderWithId:(nonnull NSString *)onSaleId completionHandler:(void(^_Nonnull)(NSError * _Nonnull error, id _Nonnull response))completionHandler;

@end
