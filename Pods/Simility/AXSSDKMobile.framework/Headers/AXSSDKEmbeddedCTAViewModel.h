//
//  AXSSDKEmbeddedCTAViewModel.h
//  AXSSDKMobileUI
//
//  Created by gpan on 7/22/20.
//  Copyright © 2020 AXS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AXSSDKEmbeddedCTAViewModel : NSObject

@property (strong, nonatomic, nullable) NSAttributedString *text;
@property (nonatomic, copy, nullable) void(^onTap)(void);

@end

@interface AXSSDKEmbeddedCTAViewModel (Predefined)

+ (nonnull AXSSDKEmbeddedCTAViewModel *)linkFromText:(nonnull NSString *)text;

@end
