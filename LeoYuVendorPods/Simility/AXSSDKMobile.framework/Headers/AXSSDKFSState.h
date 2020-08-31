//
//  AXSSDKFSState.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 8/24/16.
//  Copyright © 2016 AXS. All rights reserved.
//

#import "AXSSDKModel.h"

@interface AXSSDKFSState : AXSSDKModel <AXSJsonEncodableModel>

@property (nonatomic, strong) NSString *abbreviation;
@property (nonatomic, strong) NSNumber *countryId;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSNumber *stateId;


@end
