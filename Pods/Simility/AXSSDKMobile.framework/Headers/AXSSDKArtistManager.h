//
//  AXSSDKArtistManager.h
//  AXSSDKMobile
//
//  Created by Andrew Choi on 7/25/18.
//  Copyright © 2018 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AXSSDKArtist;


/// Artist manager
@interface AXSSDKArtistManager : NSObject

/**
 *  Get artist by Id
 *
 *  @param artistId          Artist Id
 *  @param completionHandler Completion handler that includes error and artist
 */
- (void)artistById:(nonnull NSString *)artistId
       completionHandler:(nullable void(^)(NSError * _Nullable error, id _Nullable response, AXSSDKArtist * _Nullable artist))completionHandler;

@end
