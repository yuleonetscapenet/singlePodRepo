//
//  AXSSDKCOVIDEventTimestamp.h
//  AXSSDKMobile
//
//  Created by gpan on 6/25/20.
//  Copyright © 2020 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKModel.h"
@class AXSSDKFSUser;
@protocol AXSSDKOrderProtocol;

typedef NSString *AXSSDKCOVIDEventTimestampKey NS_TYPED_EXTENSIBLE_ENUM NS_SWIFT_NAME(AXSSDKCOVIDEventTimestamp.Key);

@interface AXSSDKCOVIDEventTimestamp : AXSSDKModel

@property (nullable, nonatomic, strong) NSString *timestamp;
@property (nullable, nonatomic, strong) AXSSDKCOVIDEventTimestampKey key;
@property (nullable, nonatomic, strong) NSString *region;

@end

AXSSDKCOVIDEventTimestampKey _Nullable AXSSDKCOVIDEventTimestampKeyForFSUser(AXSSDKFSUser *_Nonnull user) NS_SWIFT_NAME(AXSSDKCOVIDEventTimestampKey.init(fsUser:));
AXSSDKCOVIDEventTimestampKey _Nullable AXSSDKCOVIDEventTimestampKeyForOrder(id<AXSSDKOrderProtocol> _Nonnull order) NS_SWIFT_NAME(AXSSDKCOVIDEventTimestampKey.init(event:));
AXSSDKCOVIDEventTimestampKey _Nullable AXSSDKCOVIDEventTimestampKeyWithMemberIdAndRegion(NSString *_Nonnull memberId, NSNumber *_Nonnull region) NS_SWIFT_NAME(AXSSDKCOVIDEventTimestampKey.init(memberId:regionId:));
AXSSDKCOVIDEventTimestampKey _Nullable AXSSDKCOVIDEventTimestampKeyWithMemberIdAndRegionString(NSString *_Nonnull memberId, NSString *_Nonnull region) NS_SWIFT_NAME(AXSSDKCOVIDEventTimestampKey.init(memberId:regionId:));
