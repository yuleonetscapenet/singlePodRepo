//
//  AXSSDKFSTicketShareRecipient.h
//  AXSSDKMobileUI
//
//  Created by Wilson Lei on 3/8/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  Represents a FlashSeats ticket share recipient.
 */
@interface AXSSDKFSTicketShareRecipient : NSObject

@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, strong) NSString *email;
@property (nonatomic, strong) NSString *message;

@end
