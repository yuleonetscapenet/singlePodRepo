//
//  AXSSDKRecentContactsManager.h
//  AXSSDKMobile
//
//  Created by Andrii Maliarchuk on 28.10.19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>
@protocol AXSSDKOrderProtocol;
@class AXSSDKRecentContact;


/// Recent transfer contacts manager
@interface AXSSDKRecentContactsManager : NSObject

+ (instancetype _Nonnull)defaultManagerForOrder:(nonnull id<AXSSDKOrderProtocol>)order NS_SWIFT_NAME(default(for:));


/// Retrieve list of recent transfer contacts
/// @param completionHandler completion handler
- (void)fetchRecentContacts:(void(^_Nonnull)(NSArray<AXSSDKRecentContact *> *_Nullable contacts, NSError *_Nullable error))completionHandler;

@end
