//
//  AXSSDKEventPageResult.h
//  AXSSDKMobile
//
//  Created by gpan on 6/29/20.
//  Copyright © 2020 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AXSSDKGeneralEvent;

@interface AXSSDKEventPageResult : NSObject

@property (nullable, nonatomic, strong) NSArray<AXSSDKGeneralEvent *> * events;
@property (nullable, nonatomic, strong) NSNumber *totalEventCount;

@end
