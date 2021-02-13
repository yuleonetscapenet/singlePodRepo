//
//  AXSSDKTicketingRegion.h
//  AXSSDKMobile
//
//  Created by Andrii Maliarchuk on 4.6.20.
//  Copyright © 2020 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, AXSSDKTicketingRegion) {
    AXSSDKTicketingRegionUnknown,
    AXSSDKTicketingRegionUS,
    AXSSDKTicketingRegionGB,
    AXSSDKTicketingRegionSE,
    AXSSDKTicketingRegionJP,
    AXSSDKTicketingRegionVegas
};

AXSSDKTicketingRegion AXSSDKTicketingRegionFromRegionId(id _Nullable regionId);
