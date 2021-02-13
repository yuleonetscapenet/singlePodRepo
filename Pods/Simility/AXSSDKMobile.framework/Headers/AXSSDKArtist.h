//
//  AXSSDKArtist.h
//  AXSSDKMobile
//
//  Created by Andrew Choi on 7/13/18.
//  Copyright © 2018 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKModel.h"

@class AXSSDKGeneralEvent;

/// Represents an artist
@interface AXSSDKArtist : AXSSDKModel

@property (nullable, nonatomic, strong) NSString * performerId;
@property (nullable, nonatomic, strong) NSString * name;
@property (nullable, nonatomic, strong) NSString * majorCategoryText;
@property (nullable, nonatomic, strong) NSNumber * majorCategoryId;
@property (nullable, nonatomic, strong) NSString * majorCategoryUrl;
@property (nullable, nonatomic, strong) NSString * minorCategoryText;
@property (nullable, nonatomic, strong) NSNumber * minorCategoryId;
@property (nullable, nonatomic, strong) NSString * minorCategoryUrl;
@property (nullable, nonatomic, strong) NSString * url;
@property (nullable, nonatomic, strong) NSString * urlSlug;
@property (nullable, nonatomic, strong) NSString * bio;
@property (nullable, nonatomic, strong) NSString * shortBio;
@property (nullable, nonatomic, strong) NSString * aliases;
@property (nullable, nonatomic, strong) NSArray * keywords;
@property (nullable, nonatomic, strong) NSString * imageURL;
@property (nullable, nonatomic, strong) NSArray<AXSSDKGeneralEvent *> * events;

@end
