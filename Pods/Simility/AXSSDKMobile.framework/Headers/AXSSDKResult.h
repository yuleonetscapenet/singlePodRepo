//
//  AXSSDKResult.h
//  AXSSDKMobile
//
//  Created by Andrii Maliarchuk on 12.11.19.
//  Copyright © 2019 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AXSSDKResult<Success, Failure> : NSObject

@property (nonatomic, readonly, nullable) Success successValue;
@property (nonatomic, readonly, nullable) Failure failureValue;

+ (nonnull instancetype)success;
+ (nonnull instancetype)success:(nullable Success)successValue;
+ (nonnull instancetype)failure;
+ (nonnull instancetype)failure:(nullable Failure)failureValue;

- (BOOL)isSuccess;
- (BOOL)isFailure;

- (void)caseSuccess:(void(^_Nonnull NS_NOESCAPE)(Success _Nullable))successHandler
        caseFailure:(void(^_Nonnull NS_NOESCAPE)(Failure _Nullable))failureHandler;

- (void)caseSuccess:(void(^_Nonnull NS_NOESCAPE)(Success _Nullable))successHandler;

- (void)caseFailure:(void(^_Nonnull NS_NOESCAPE)(Failure _Nullable))failureHandler;

/**
 * @brief Transforms success value into new one in case of success.
 * @param transform block that is used to transform success value
 * @returns result of type AXSSDKResult<NewSuccess, Failure>
 * @code
 * AXSSDKResult<NSArray<NSString *> *, NSError *> *messagesResult = [AXSSDKResult success:@[@"Hello", @"World"]];
 * AXSSDKResult<NSNumber *, NSError *> *countOfMessagesResult = [result map:^NSNumber *(NSArray<NSString *> *messages){
 *     // this block will be executed due to messagesResult is `success`
 *     return @(messages.count);
 * }];
 * // countOfMessagesResult is `success` and successValue is 2
 * @endcode
 */
- (nonnull AXSSDKResult *)map:(id _Nullable(^_Nonnull)(Success _Nullable))transform;

/**
 * @brief Transforms success value into AXSSDKResult in case of success. Used to prevent nesting AXSSDKResults from transform that may fail.
 * @param transform the block that is used to transform success value into AXSSDKResult.
 * @returns result of type AXSSDKResult<NewSuccess, NewFailure>
 * @code
 * AXSSDKResult<NSArray<NSString *> *, NSError *> *messagesResult = [AXSSDKResult success:@[@"Hello", @"World"]];
 * AXSSDKResult<NSString *, NSError *> *compoundMessageResult = [messagesResult flatMap:^AXSSDKResult *(NSArray<NSString *> *messages){
 *     // this block will be executed due to messagesResult is `success`
 *     if (messages.count == 0) {
 *         return [AXSSDKResult failure:[NSError new]];
 *     }
 *     return [AXSSDKResult success:[messages componentsJoinedByString:@" "]];
 * }];
 * // compoundMessageResult is `success` and successValue is "Hello World"
 * @endcode
 */
- (nonnull AXSSDKResult *)flatMap:(AXSSDKResult *_Nonnull(^_Nonnull)(Success _Nullable))transform;

/**
 * @brief Transforms array of results into result of array that contains success values.
 * @param results An array of results
 * @returns Returns `success` with array of success values if all provided results are successful, otherwise – `failure` with failureValue of the first failed result.
 * @code
 * AXSSDKResult<NSArray *, NSError *> result1 = [AXSSDKResult zip:@[
 *     [AXSSDKResult success:@"Hello"],
 *     [AXSSDKResult success:@23],
 * ]];
 * // result1 is `success` and successValue is ["Hello", 23]
 *
 * AXSSDKResult<NSArray *, NSError *> result2 = [AXSSDKResult zip:@[
 *     [AXSSDKResult success:@"Hello"],
 *     [AXSSDKResult failure:[NSError error1]],
 *     [AXSSDKResult failure:[NSError error2]],
 *     [AXSSDKResult success:@23],
 * ]];
 * // result2 is `failure` and failureValue is [NSError error1]
 * @endcode
 */
+ (nonnull AXSSDKResult<NSArray *, Failure> *)zip:(nonnull NSArray<AXSSDKResult *> *)results;

@end

@interface AXSSDKResult<Success, Failure> (Initializers)

/**
 * @brief Helper initializer that is designed to simplify cocoa error handling.
 * @param block Code that may produce cocoa error. Runs immediately after call.
 * @code
 * NSDictionary *body = @{};
 * AXSSDKResult<NSData *, NSError *> *result = [AXSSDKResult catchingCocoaError:^NSData *(NSError **error){
 *     return [NSJSONSerialization dataWithJSONObject:body options:0 error:error];
 * }];
 * // result will be `success` and successValue is NSData returned by block if operation succeeded
 * // result will be `failure` and failureValue is NSError provided by serialization method if operation has failed
 * @endcode
 */
+ (nonnull AXSSDKResult<Success, NSError *> *)catchingCocoaError:(Success _Nullable(^_Nonnull)(NSError *_Nullable *_Nonnull))block;

/**
 * @brief Helper initializer that is designed to simplify exception handling.
 * @param block Code that may produce an exception. Runs immediately after call.
 * @code
 * AXSSDKResult<id, NSException *> *result = [AXSSDKResult catchingException:^id{
 *     return [obj valueForKey:@"someKey"];
 * }];
 * // result will be `success` and successValue is a value of "someKey" if obj responds to "someKey"
 * // result will be `failure` and failureValue is NSException that was raised during block execution if obj does not respond to "someKey"
 * @endcode
 */
+ (nonnull AXSSDKResult<Success, NSException *> *)catchingException:(Success _Nullable(^_Nonnull)(void))block;

@end
