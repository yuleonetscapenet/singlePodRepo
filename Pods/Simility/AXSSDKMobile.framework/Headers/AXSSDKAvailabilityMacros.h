//
//  AXSSDKAvailabilityMacros.h
//  AXSSDKMobile
//
//  Created by Andrii Maliarchuk on 4.8.20.
//  Copyright © 2020 AXS. All rights reserved.
//

#ifndef AXSSDKAvailabilityMacros_h
#define AXSSDKAvailabilityMacros_h

#if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#define AXSSDK_FINAL __attribute__((objc_subclassing_restricted))
#else
#define AXSSDK_FINAL
#endif

#endif /* AXSSDKAvailabilityMacros_h */
