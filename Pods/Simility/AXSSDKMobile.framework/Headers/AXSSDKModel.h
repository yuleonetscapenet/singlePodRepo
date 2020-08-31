//
//  AXSModel.h
//  AXSMobileSDK
//
//  Created by Marc Chambers on 5/29/14.
//  Copyright (c) 2014 AXS. All rights reserved.
//

#import <Foundation/Foundation.h>

/// A model that can convert between JSON, NSDictionary and class object.
@protocol AXSJsonEncodableModel <NSObject>

/**
 *  Convert class model to JSON data
 *
 *  @return JSON data
 */
- (NSData*)toJson;

/**
 *  Convert class model to NSDictionary
 *
 *  @return NSDictionary
 */
- (NSDictionary*)toDictionary;

/**
 *  Update class model properties with NSDictionary
 *
 *  @param object new values
 */
- (void)updateWithDictionary:(NSDictionary *)object;
- (void)reset;
+ (instancetype)initWithJson:(NSData*)json;

/**
 *  Implement this if you don't want certain property to translate to JSON when toDictionary is called.
 *
 *  @param modelPropertyName property name
 *
 *  @return BOOL
 */
+ (BOOL)shouldSerializeProperty:(NSString*)modelPropertyName;

/**
 *  Implement this for a model property name and JSON property name mapping
 *
 *  @return dictionary
 */
+ (NSDictionary*)modelToJsonPropertyMappings;

+ (NSString*)jsonPropertyNameForModelProperty:(NSString*)modelPropertyName;
+ (NSString*)modelPropertyNameForJsonProperty:(NSString *)jsonPropertyName;
+ (id)serializedValueForProperty:(NSString*)propertyName value:(id)value;

@end

/**
 *  AXS base model. Adpots AXSJsonEncodableModel protocol.
 */
@interface AXSSDKModel : NSObject <AXSJsonEncodableModel>
@end

/**
 *  Helper model if we need to serialize an array. Adpots AXSJsonEncodableModel protocol.
 */
@interface AXSArrayModel : AXSSDKModel <AXSJsonEncodableModel>
@property (nonatomic, strong) NSArray* array;
@end