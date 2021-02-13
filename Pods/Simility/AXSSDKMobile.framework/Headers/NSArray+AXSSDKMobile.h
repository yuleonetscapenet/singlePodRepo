//
//  NSArray+AXSSDKMobile.h
//  AXSSDKMobile
//
//  Created by Andrii Maliarchuk on 24.10.19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray<ObjectType> (AXSSDKMobile)

/**
 @brief Makes new array containing the results of mapping.
 @param transform block to be used to map element.
 @returns an array containing the results of mapping the given block over the array’s elements.
 @code
 NSArray<NSString *> *phrases = @[@"Hello World", @"Magical place"];
 NSArray<NSNumber *> *phraseLenghts = [strings axssdk_map:^NSNumber *(NSString *phrase){
    return @(phrase.length);
 }];
 // phraseLenghts are [11, 13]
 @endcode
 */
- (nonnull NSArray *)axssdk_map:(id _Nonnull(^_Nonnull)(NSUInteger idx, ObjectType _Nonnull))transform;

/**
 @brief Makes new array concatenating results of each mapping.
 @param transform block to be used to map element into array.
 @returns an array containing the concatenated results of calling the given transformation with each element of this sequence.
 @code
 NSArray<NSString *> *phrases = @[@"Hello World", @"Magical place"];
 NSArray<NSString *> *words = [strings axssdk_flatMap:^NSArray<NSString *> *(NSString *phrase){
    return [phrase componentsSeparatedByString:@" "];
 }];
 // words are ["Hello", "World", "Magical", "place"]
 @endcode
 */
- (nonnull NSArray *)axssdk_flatMap:(NSArray *_Nonnull(^_Nonnull)(NSUInteger idx, ObjectType _Nonnull))transform;

/**
 @brief Makes new array containing the non-nil results of mapping.
 @param transform block to be used to transform element.
 @returns an array containing the non-nil results of calling the given transformation with each element of this sequence.
 @code
 NSArray<User *> *users = @[[User withName:@"Alex"], [User withName:nil], [User withName:@"Gordon"]];
 NSArray<NSString *> *usernames = [users axssdk_compactMap:^NSString *(User *user){
    return user.name;
 }];
 // usernames are ["Alex", "Gordon"]
 @endcode
 */
- (nonnull NSArray *)axssdk_compactMap:(id _Nullable(^_Nonnull)(NSUInteger idx, ObjectType _Nonnull))transform;

/**
 @brief Returns an array containing, in order, the elements of the sequence that satisfy the given predicate..
 @param predicate  A block that takes an element of the sequence as its argument and returns a Boolean value indicating whether the element should be included in the returned array
 @returns An array of the elements that pass the predicate.
 @code
 NSArray<NSString *> *names = @[@"Alex", @"Andrew", @"Gordon", @"Vivien"];
 NSArray<NSString *> *largeNames = [names axssdk_filter:^BOOL(NSString *name){
    return name.length > 5;
 }];
 // largeNames are ["Andrew", "Gordon", "Vivien"]
 @endcode
 */
- (nonnull NSArray *)axssdk_filter:(BOOL(^_Nonnull)(NSUInteger idx, ObjectType _Nonnull))predicate;

/**
 @brief Returns a value that represents count of elements that pass the predicate.
 @param predicate  A block that takes an element of the sequence as its argument and returns a Boolean value indicating whether the element should be counted or not.
 @returns count of elements that pass the predicate.
 @code
 NSArray<NSString *> *names = @[@"Alex", @"Andrew", @"Gordon", @"Vivien"];
 NSUInteger largeNamesCount = [names axssdk_countWhere:^BOOL(NSString *name){
    return name.length > 5;
 }];
 // largeNamesCount is 3
 @endcode
 */
- (NSUInteger)axssdk_countWhere:(BOOL(^_Nonnull)(ObjectType _Nonnull obj))predicate;

/**
 @brief Returns a Boolean value that indicates whether array contains at least one element that satisfies predicate.
 @param predicate  A block that takes an element of the sequence as its argument and returns a Boolean value indicating whether the element should be treated as satisfying.
 @returns A Boolean that indicates that array contains element that satisfies given predicate.
 @code
 NSArray<NSString *> *names = @[@"Alex", @"Andrew", @"Gordon", @"Vivien"];
 BOOL hasLongWords = [names axssdk_containsWhere:^BOOL(NSString *name){
    return name.length > 5;
 }];
 // hasLongWords is YES
 @endcode
 */
- (BOOL)axssdk_containsWhere:(BOOL(^_Nonnull)(ObjectType _Nonnull obj))predicate;

/**
 @brief Returns the result of combining the elements of the array using the given block.
 @param initial The value to use as the initial accumulating value. initial is passed to nextPartialResult the first time the block is executed.
 @param nextPartialResult A block that combines an accumulating value and an element of the sequence into a new accumulating value, to be used in the next call of the nextPartialResult block or returned to the caller.
 @returns The final accumulated value. If array has no elements, the result is initial.
 @code
 NSArray<NSString *> *names = @[@"Alex", @"Andrew", @"Gordon", @"Vivien"];
 NSNumber *lettersCount = [names axssdk_reduce:@0 withBlock:^NSNumber *(NSNumber *sum, NSUInteger idx, NSString *name){
    return @([sum integerValue] + name.length)
 }];
 // lettersCount is 22
 @endcode
 */
- (nullable id)axssdk_reduce:(nullable id)initial
                   withBlock:(id _Nullable (^_Nonnull)(id _Nullable result, NSUInteger idx, ObjectType _Nonnull obj))nextPartialResult;

/**
@brief Returns the result of combining the elements of the array using the given block.
@param initial The value to use as the initial accumulating value.
@param nextPartialResult A block that updates the accumulating value with an element of the sequence.
@returns The final accumulated value. If array has no elements, the result is initial.
@code
NSArray<NSString *> *names = @[@"Alex", @"Andrew", @"Gordon", @"Vivien"];
NSMutableString *acronym = [names axssdk_reduceInto:[NSMutableString new] withBlock:^(NSMutableString *acronym, NSUInteger idx, NSString *name){
   [acronym appendString:[name substringToIndex:1]];
}];
// acronym is "AAGV"
@endcode
*/
- (nullable id)axssdk_reduceInto:(nullable id)initial
                       withBlock:(void(^_Nonnull)(id _Nullable, NSUInteger, id _Nonnull obj))nextPartialResult;

/**
 @brief Enumerates over each pair of sibling elements
 @param block  A block that is called on each pair of sibling elements.
 @code
 NSArray<NSString *> *names = @[@"Alex", @"Andrew", @"Gordon", @"Vivien"];
 [names axssdk_enumerateSiblings:^(NSString *left, NSString *right){
    NSLog(@"(%@, %@)", left, right);
 }];
 // result will be:
 // (Alex, Andrew)
 // (Andrew, Gordon)
 // (Gordon, Vivien)
 @endcode
 @remark block will not be called if array contains are less that two elements
 */
- (void)axssdk_enumerateSiblings:(void(^_Nonnull)(ObjectType _Nonnull, ObjectType _Nonnull))block;

/**
 @brief Returns index of the first element that satisfies the given predicate
 @param predicate A block that takes an element of the sequence and returns a Boolean value indicating whether the element should be treated as satisfying.
 @returns Index of the first satisfying element. Returns NSNotFound if all elemens has not passed the predicate.
 @code
 NSArray<NSString *> *names = @[@"Alex", @"Andrew", @"Gordon", @"Vivien"];
 NSUInteger firstLargeNameIndex = [names axssdk_firstIndexWhere:^BOOL(NSString *name){
     return name.length > 5;
 }];
 // firstLargeNameIndex is 1
 @endcode
 */
- (NSUInteger)axssdk_firstIndexWhere:(BOOL(^_Nonnull)(ObjectType _Nonnull object))predicate;

/**
@brief Returns the first element of an array that satisfies the given predicate
@param predicate A block that takes an element of the sequence and returns a Boolean value indicating whether the element should be treated as satisfying.
@returns First satisfying element. Returns nil if all elemens has not passed the predicate.
@code
NSArray<NSString *> *names = @[@"Alex", @"Andrew", @"Gordon", @"Vivien"];
NSString *firstLargeName = [names axssdk_firstWhere:^BOOL(NSString *name){
    return name.length > 5;
}];
// firstLargeName is @"Andrew"
@endcode
*/
- (nullable ObjectType)axssdk_firstWhere:(BOOL(^_Nonnull)(ObjectType _Nonnull object))predicate;

/**
 @brief Returns min element using provided comparator;
 @param comparator `NSComparator` that will be used to compare elements with each other.
 @returns Min element, `nil` if there are no element.
 */
- (nullable ObjectType)axssdk_minElementUsingComparator:(nonnull NSComparator)comparator;

@end
