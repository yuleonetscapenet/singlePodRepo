//
//  AXSSDKTransferredOrder.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 3/15/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import "AXSSDKOrderProtocol.h"
#import "AXSSDKSettings.h"

@interface AXSSDKTransferredOrder : NSObject

@property (nullable, nonatomic, strong) id<AXSSDKOrderProtocol> order;
@property (nullable, nonatomic, strong) NSString *forwardedEmail;
@property (nonatomic, assign) AXSSDKBarcodeStatus forwardedBarcodeStatus;
@property (nullable, nonatomic, strong) NSDate *forwardedDate;

- (nullable NSSet *)transferredTicketsForEmail;

@end
