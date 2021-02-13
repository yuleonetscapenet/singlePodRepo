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

@property (nullable, nonatomic, strong) NSString *firstName;
@property (nullable, nonatomic, strong) NSString *lastName;
@property (nullable, nonatomic, strong) NSString *email;
@property (nullable, nonatomic, strong) NSString *message;

@end
