//
//  AXSSDKSearchResult.h
//  AXSSDKMobile
//
//  Created by Wilson Lei on 6/20/18.
//  Copyright © 2018 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXSSDKModel.h"
#import "AXSSDKSettings.h"

typedef enum : NSUInteger {
    AXSSDKSearchResultCategoryUnknown,
    AXSSDKSearchResultCategoryEvent,
    AXSSDKSearchResultCategoryPerformer,
    AXSSDKSearchResultCategoryArticle,
} AXSSDKSearchResultCategory;

/// Represents a search result
@interface AXSSDKSearchResult : AXSSDKModel

@property (nullable, nonatomic, strong) NSString *resultId;
@property (nullable, nonatomic, strong) NSString *label;
@property (nullable, nonatomic, strong) NSString *detail;
@property (nullable, nonatomic, strong) NSNumber *ticketingStatusId;
@property (nonatomic, assign) AXSSDKSearchResultCategory category;
@property (nonatomic, assign) AXSSDKEventTicketingStatus ticketingStatus;

@end
