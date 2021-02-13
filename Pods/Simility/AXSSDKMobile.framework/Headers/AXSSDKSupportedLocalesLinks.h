//
//  AXSSDKSupportedLocalesLinks.h
//  AXSSDKMobile
//
//  Created by gpan on 3/11/20.
//  Copyright © 2020 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AXSSDKMobile/AXSSDKMobile.h>

@interface AXSSDKSupportedLocalesLinks : AXSSDKModel

@property (nullable, nonatomic, strong) NSString *privacyUrl;
@property (nullable, nonatomic, strong) NSString *termsUrl;
@property (nullable, nonatomic, strong) NSString *purchaseAgreementUrl;
@property (nullable, nonatomic, strong) NSString *assumptionOfRiskUrl;
@property (nullable, nonatomic, strong) NSString *optOutUrl;
@property (nonatomic, assign) BOOL globalHeaderEnabled;
@property (nullable, nonatomic, strong) NSString *globalHeaderTitle;
@property (nullable, nonatomic, strong) NSString *globalHeaderDescription;
@property (nullable, nonatomic, strong) NSString *globalHeaderCTAText;
@property (nullable, nonatomic, strong) NSString *globalHeaderCTALink;
@property (nonatomic, assign) BOOL mobileInterstitialEnabled;
@property (nullable, nonatomic, strong) NSString *mobileInterstitialLink;

@end
