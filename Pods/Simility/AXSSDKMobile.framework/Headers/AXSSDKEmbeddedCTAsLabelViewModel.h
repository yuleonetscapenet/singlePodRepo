//
//  AXSSDKEmbeddedCTAsLabelViewModel.h
//  AXSSDKMobileUI
//
//  Created by gpan on 7/22/20.
//  Copyright © 2020 AXS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AXSSDKEmbeddedCTAViewModel.h"

@interface AXSSDKEmbeddedCTAsLabelViewModel : NSObject

@property (strong, nonatomic, nullable) NSAttributedString *text;
@property (strong, nonatomic, nullable) NSArray<AXSSDKEmbeddedCTAViewModel *> *ctas;

@end
