//
//  AXSSDKAnalyticsUtil.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 12/20/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AXSSDKFSEvent;

@interface AXSSDKAnalyticsUtil : NSObject

+ (NSDictionary *)contextDataForPageLoad:(NSString *)pageName pageType:(NSString *)pageType;
+ (NSDictionary *)contextDataForFSEvent:(AXSSDKFSEvent *)event;
+ (NSDictionary *)contextDataProductsWithEventName:(NSString *)eventName;
+ (NSDictionary *)contextDataProductsWithEventName:(NSString *)eventName ticketQty:(NSString *)qty totalCost:(NSString *)totalCost;
+ (NSDictionary *)contextDataWithPushPermission:(BOOL)push locationPermission:(BOOL)location bluetoothPermission:(BOOL)bluetooth;

@end
