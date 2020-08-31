//
//  NSManagedObject+AXSSDKMobile.h
//  AXSSDKMobile
//  Base off open source library ObjectiveRecord.
//  https://github.com/supermarin/ObjectiveRecord
//
//  Created by Wilson Lei on 7/6/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface NSManagedObjectContext (AXSSDKMobile)

/**
 The default context (as defined on the @c CoreDataManager singleton).

 @see -[CoreDataManager managedObjectContext]

 @return A managed object context.
 */
+ (NSManagedObjectContext *)axssdk_defaultContext;

@end

@interface NSManagedObject (AXSSDKMobile)


#pragma mark - Default Context

- (BOOL)axssdk_save;
- (void)axssdk_delete;
+ (void)axssdk_deleteAll;

+ (id)axssdk_create;
+ (id)axssdk_create:(NSDictionary *)attributes;
- (void)axssdk_update:(NSDictionary *)attributes;

+ (NSArray *)axssdk_all;
+ (NSArray *)axssdk_allWithOrder:(id)order;
+ (NSArray *)axssdk_where:(id)condition, ...;
+ (NSArray *)axssdk_where:(id)condition order:(id)order;
+ (NSArray *)axssdk_where:(id)condition limit:(NSNumber *)limit;
+ (NSArray *)axssdk_where:(id)condition order:(id)order limit:(NSNumber *)limit;
+ (instancetype)axssdk_findOrCreate:(NSDictionary *)attributes;
+ (instancetype)axssdk_find:(id)condition, ...;
+ (NSUInteger)axssdk_count;
+ (NSUInteger)axssdk_countWhere:(id)condition, ...;

#pragma mark - Custom Context

+ (id)axssdk_createInContext:(NSManagedObjectContext *)context;
+ (id)axssdk_create:(NSDictionary *)attributes inContext:(NSManagedObjectContext *)context;

+ (void)axssdk_deleteAllInContext:(NSManagedObjectContext *)context;

+ (NSArray *)axssdk_allInContext:(NSManagedObjectContext *)context;
+ (NSArray *)axssdk_allInContext:(NSManagedObjectContext *)context order:(id)order;
+ (NSArray *)axssdk_where:(id)condition inContext:(NSManagedObjectContext *)context;
+ (NSArray *)axssdk_where:(id)condition inContext:(NSManagedObjectContext *)context order:(id)order;
+ (NSArray *)axssdk_where:(id)condition inContext:(NSManagedObjectContext *)context limit:(NSNumber *)limit;
+ (NSArray *)axssdk_where:(id)condition inContext:(NSManagedObjectContext *)context order:(id)order limit:(NSNumber *)limit;
+ (instancetype)axssdk_findOrCreate:(NSDictionary *)properties inContext:(NSManagedObjectContext *)context;
+ (instancetype)axssdk_find:(id)condition inContext:(NSManagedObjectContext *)context;
+ (NSUInteger)axssdk_countInContext:(NSManagedObjectContext *)context;
+ (NSUInteger)axssdk_countWhere:(id)condition inContext:(NSManagedObjectContext *)context;

#pragma mark - Naming

+ (NSString *)axssdk_entityName;

#pragma mark - Mappings
/**
 A dictionary mapping remote (server) attribute names to local (Core Data) attribute names. Optionally overridden in NSManagedObject subclasses.
 
 @return A dictionary.
 */
+ (NSDictionary *)axssdk_mappings;

/**
 Returns a Core Data attribute name for a remote attribute name. Returns values defined in @c +mappings or, by default, converts snake case to camel case (e.g., @c @@"first_name" becomes @c @@"firstName").
 
 @see +[NSManagedObject mappings]
 
 @param key     A remote (server) attribute name.
 @param context A local managed object context.
 
 @return A local (Core Data) attribute name.
 */
+ (NSString *)axssdk_keyForRemoteKey:(NSString *)remoteKey inContext:(NSManagedObjectContext *)context;

/**
 Transforms a given object for a remote attribute name.
 
 @param value     Object to be transformed (e.g., a dictionary may become a managed object)
 @param remoteKey A remote (server) attribute name.
 @param context   A local managed object context.
 
 @return A tranformed object.
 */
+ (id)axssdk_transformValue:(id)value forRemoteKey:(NSString *)remoteKey inContext:(NSManagedObjectContext *)context;

/**
 The keypath uniquely identifying your entity. Usually an ID, e.g., @c @@"remoteID".
 
 @return An attribute name.
 */
+ (NSString *)axssdk_primaryKey;

@end
