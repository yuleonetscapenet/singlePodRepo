//
//  EGOCache.h
//  enormego
//
//  Created by Shaun Harrison.
//  Copyright (c) 2009-2015 enormego.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

// This is a modified version of EGOCache, do not replace with EGOCache without merging.

#import <Foundation/Foundation.h>

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#endif

#if !__has_feature(nullability)
#	define nullable
#	define nonnull
#	define __nullable
#	define __nonnull
#endif

@interface AXSSDKCache : NSObject

+ (nonnull instancetype)currentCache __deprecated_msg("Renamed to globalCache");

// Global cache for easy use
+ (nonnull instancetype)globalCache;

// Opitionally create a different EGOCache instance with it's own cache directory
- (nonnull instancetype)initWithCacheDirectory:(nonnull NSString*)cacheDirectory;

- (void)clearCache;
- (void)removeCacheForKey:(nonnull NSString *)key;

- (BOOL)hasCacheForKey:(nonnull NSString*)key;

- (nullable NSData*)dataForKey:(nonnull NSString*)key;
- (void)setData:(nonnull NSData*)data forKey:(nonnull NSString*)key;
- (void)setData:(nonnull NSData*)data forKey:(nonnull NSString*)key withTimeoutInterval:(NSTimeInterval)timeoutInterval;

- (nullable NSString*)stringForKey:(nonnull NSString*)key;
- (void)setString:(nonnull NSString*)aString forKey:(nonnull NSString*)key;
- (void)setString:(nonnull NSString*)aString forKey:(nonnull NSString*)key withTimeoutInterval:(NSTimeInterval)timeoutInterval;

- (nullable NSDate*)dateForKey:(nonnull NSString*)key;
- (nonnull NSArray*)allKeys;

#if TARGET_OS_IPHONE
- (nullable UIImage*)imageForKey:(nonnull NSString*)key;
- (void)setImage:(nonnull UIImage*)anImage forKey:(nonnull NSString*)key;
- (void)setImage:(nonnull UIImage*)anImage forKey:(nonnull NSString*)key withTimeoutInterval:(NSTimeInterval)timeoutInterval;
#else
- (nullable NSImage*)imageForKey:(nonnull NSString*)key;
- (void)setImage:(nonnull NSImage*)anImage forKey:(nonnull NSString*)key;
- (void)setImage:(nonnull NSImage*)anImage forKey:(nonnull NSString*)key withTimeoutInterval:(NSTimeInterval)timeoutInterval;
#endif

- (nullable NSData*)plistForKey:(nonnull NSString*)key;
- (void)setPlist:(nonnull id)plistObject forKey:(nonnull NSString*)key;
- (void)setPlist:(nonnull id)plistObject forKey:(nonnull NSString*)key withTimeoutInterval:(NSTimeInterval)timeoutInterval;

- (void)copyFilePath:(nonnull NSString*)filePath asKey:(nonnull NSString*)key;
- (void)copyFilePath:(nonnull NSString*)filePath asKey:(nonnull NSString*)key withTimeoutInterval:(NSTimeInterval)timeoutInterval;

- (nullable id<NSCoding>)objectForKey:(nonnull NSString*)key;
- (void)setObject:(nonnull id<NSCoding>)anObject forKey:(nonnull NSString*)key;
- (void)setObject:(nonnull id<NSCoding>)anObject forKey:(nonnull NSString*)key withTimeoutInterval:(NSTimeInterval)timeoutInterval;

@property(nonatomic) NSTimeInterval defaultTimeoutInterval; // Default is 1 day
@end
