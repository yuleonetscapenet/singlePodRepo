//
//  AXSSDKFSOrder2.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 3/15/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import "AXSSDKFSOrder.h"
#import "AXSSDKSettings.h"

@interface AXSSDKFSOrder2 : NSObject

@property (nonatomic, strong) AXSSDKFSOrder *order;
@property (nonatomic, strong) NSString *forwardedEmail;
@property (nonatomic, assign) AXSSDKFSTicketState forwardedTicketState;
@property (nonatomic, strong) NSDate *forwardedDate;

- (NSSet *)transferedTicketsForEmail;

@end
