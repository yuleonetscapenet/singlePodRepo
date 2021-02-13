//
//  AXSSDKEventBatch.h
//  AXSSDKMobile
//
//  Created by Andrew Choi on 6/22/18.
//  Copyright © 2018 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKModel.h"

@class AXSSDKGeneralEvent;

@interface AXSSDKEventBatch : NSObject

@property (nullable, nonatomic, strong) NSArray<AXSSDKGeneralEvent *> * featuredEvents;
@property (nullable, nonatomic, strong) NSArray<AXSSDKGeneralEvent *> * eventsNearYou;

- (void)save;
- (void)load:(void(^ _Nullable)(NSError * _Nullable error , AXSSDKEventBatch * _Nullable results))completionHandler;

@end
