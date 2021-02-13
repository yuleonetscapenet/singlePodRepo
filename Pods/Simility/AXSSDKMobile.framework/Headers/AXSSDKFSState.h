//
//  AXSSDKFSState.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 8/24/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import "AXSSDKModel.h"

@interface AXSSDKFSState : AXSSDKModel <AXSJsonEncodableModel>

@property (nullable, nonatomic, strong) NSString *abbreviation;
@property (nullable, nonatomic, strong) NSNumber *countryId;
@property (nullable, nonatomic, strong) NSString *name;
@property (nullable, nonatomic, strong) NSNumber *stateId;


@end
