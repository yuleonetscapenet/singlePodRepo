//
//  AXSModel.h
//  AXSMobileSDK
//
//  Created by Marc Chambers on 5/29/14.
//  Copyright (c) 2014 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AXSJsonEncodableModel <NSObject>

/**
 *  Convert class model to JSON data
 *
 *  @return JSON data
 */
- (nullable NSData*)toJson;

/**
 *  Convert class model to NSDictionary
 *
 *  @return NSDictionary
 */
- (nullable NSDictionary*)toDictionary;

/**
 *  Update class model properties with NSDictionary
 *
 *  @param object new values
 */
- (void)updateWithDictionary:(nonnull NSDictionary *)object;
- (void)reset;
+ (nullable instancetype)initWithData:(nonnull NSData*)json;

/**
 *  Initialize class model with NSDictionary
 *
 *  @param json new values
 */
+ (nullable instancetype)initWithJson:(nonnull NSDictionary *)json;

/**
 *  Implement this if you don't want certain property to translate to JSON when toDictionary is called.
 *
 *  @param modelPropertyName property name
 *
 *  @return BOOL
 */
+ (BOOL)shouldSerializeProperty:(nonnull NSString*)modelPropertyName;

/**
 *  Implement this for a model property name and JSON property name mapping
 *
 *  @return dictionary
 */
+ (nullable NSDictionary*)modelToJsonPropertyMappings;

+ (nullable NSString*)jsonPropertyNameForModelProperty:(nonnull NSString*)modelPropertyName;
+ (nullable NSString*)modelPropertyNameForJsonProperty:(nonnull NSString*)jsonPropertyName;
+ (nullable id)serializedValueForProperty:(nonnull NSString*)propertyName value:(nonnull id)value;

@end

/**
 *  AXS base model. Adpots AXSJsonEncodableModel protocol.
 */
@interface AXSSDKModel : NSObject <AXSJsonEncodableModel, NSCoding>
@end

/**
 *  Helper model if we need to serialize an array. Adpots AXSJsonEncodableModel protocol.
 */
@interface AXSArrayModel : AXSSDKModel <AXSJsonEncodableModel>
@property (nullable, nonatomic, strong) NSArray* array;
@end
