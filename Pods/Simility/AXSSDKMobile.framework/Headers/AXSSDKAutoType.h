//
//  AXSSDKAutoType.h
//  AXSSDKMobile
//
//  Created by Andrii Maliarchuk on 18.12.19.
//  Copyright © 2019 AXS. All rights reserved.
//

#ifndef AXSSDKAutoType_h
#define AXSSDKAutoType_h

/**
 Swift-like constant declaration keyword
 */
#if defined(__cplusplus)
#define let auto const
#else
#define let const __auto_type
#endif

/**
 Swift-like variable declaration keyword
 */
#if defined(__cplusplus)
#define var auto
#else
#define var __auto_type
#endif

/**
 Swift-like `if let` statement.
 @code
 if_let(NSArray *events, json[@"events_key"]) {
    //...
 }
 @endcode
 */
#define if_let(VARIABLE, VALUE) \
    if_let_where(VARIABLE, VALUE, YES)

/**
 Swift-line `if let` statement with `where` condition.
 @code
 if_let_where(NSArray *tickets, product[@"seats"], [ticketsResponse isKindOfClass:NSArray.class]) {
    //...
 }
 @endcode
 */
#define if_let_where(VARIABLE, VALUE, WHERE) \
    for (BOOL __stop = NO; !__stop;) \
        _Pragma("clang diagnostic push") \
        _Pragma("clang diagnostic ignored \"-Wauto-var-id\"") \
        for (let __tmp = (VALUE); !__stop;) \
            _Pragma("clang diagnostic pop") \
            for (VARIABLE = __tmp; !__stop; __stop = YES) \
                if (__tmp != nil && (WHERE))

/**
 Swift-like `guard` statement.
 @code
 guard([name isEqualToString:@Joan"]) else {
    //condition isn't true
    return;
 }
 // condition is true
 @endcode
 */
#define guard(CONDITION) \
    if (CONDITION) {}

/**
 Swift-like `guard let ` statement.
 @code
 guard_let(NSString *userId, user.userId) else {
    // userId is nil
    return;
 }
 // userId is not nil
 @endcode
 */
#define guard_let(VARIABLE, VALUE) \
    guard_let_where(VARIABLE, VALUE, YES)

/**
 Swift-like `guard let` statement with `where` condition
 @code
 guard_let_where(NSString *userId, user.userId, userId.length > 0) else {
    // userId is nil or length is 0
    return;
 }
 // userId is not empty
 @endcode
 */
#define guard_let_where(VARIABLE, VALUE, WHERE) \
    VARIABLE = VALUE; \
    if ((VALUE) != nil && (WHERE)) {}

#endif /* AXSSDKAutoType_h */
