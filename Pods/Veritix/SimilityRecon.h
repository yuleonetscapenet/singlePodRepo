//
//  SimilityRecon.h
//  SimilityRecon
//
//  Created by Anupam on 20/01/17.
//  Copyright © 2017 Simility. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, SimilityScriptError) {
    kInvalidCustomerId = 0,
    kRequestTimeout,
    kRuntimeError,
    kServiceUnavailable,
    kPermissionDenied,
    kInvalidParam
};

typedef NS_ENUM(NSInteger, SimilityScriptExtras) {
    kLocation = 0,
    kAccelerometer,
    kGyroscope
};

typedef void (^WorkerScriptDebugHandler)(NSString *, BOOL, NSError *);
typedef void (^ScriptCompletionHandler)(NSDictionary *);

@interface SimilityTouchEvent : NSObject

@property (readonly) NSTimeInterval timestamp;
@property (readonly) UITouchPhase phase;
@property (readonly) CGPoint location;
@property (readonly) CGFloat force;
@property (readonly) NSString *json;

- (id) initWithTouchData:(NSTimeInterval) timestamp phase:(UITouchPhase) phase location:(CGPoint) location force:(CGFloat) force;

@end

@interface SimilityContext : NSObject

@property NSString *customerId;
@property NSString *sessionId;
@property NSString *userId;
@property NSDictionary *metadata;
@property NSString *zone;
@property NSString *requestEndpoint;
@property NSString *eventTypes;
@property NSString *transactionSubCustomerId;
@property NSString *transactionInfo;
@property NSMutableArray *transactionEntries;
@property NSMutableArray *extras;
@property NSMutableArray *touchEvents;
@property BOOL similityLite;
@property (readonly) NSTimeInterval creationTimestamp;

- (void) addTransactionEntry:(NSString *) entity id:(NSString *) id fields:(NSDictionary *) fields;
@end

@interface SimilityScript : NSObject

+ (SimilityScript *) sharedInstance;
- (void) getDeviceId:(SimilityContext *) similityContext scriptCompletionHandler:(ScriptCompletionHandler) scriptCompletionHandler;
- (void) execute:(SimilityContext *) similityContext;
- (void) execute:(SimilityContext *) similityContext scriptCompletionHandler:(ScriptCompletionHandler) scriptCompletionHandler;

+ (NSString *) getSessionId;
+ (NSString *) resetSessionId;

@end
