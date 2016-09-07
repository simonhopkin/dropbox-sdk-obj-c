///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBPROPERTIESPropertyFieldTemplate;

#pragma mark - API Object

///
/// The `UpdatePropertyTemplateArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMUpdatePropertyTemplateArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// An identifier for property template added by `propertiesTemplateAdd`.
@property(nonatomic, readonly, copy) NSString * _Nonnull templateId;

/// A display name for the property template. Property template names can be up to 256 bytes.
@property(nonatomic, readonly) NSString * _Nullable name;

/// Description for new property template. Property template descriptions can be up to 1024 bytes.
@property(nonatomic, readonly) NSString * _Nullable description_;

/// This is a list of custom properties to add to the property template. There can be up to 64
/// properties in a single property template.
@property(nonatomic, readonly) NSArray<DBPROPERTIESPropertyFieldTemplate *> * _Nullable addFields;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param templateId An identifier for property template added by `propertiesTemplateAdd`.
/// @param name A display name for the property template. Property template names can be up to 256
/// bytes.
/// @param description_ Description for new property template. Property template descriptions can be
/// up to 1024 bytes.
/// @param addFields This is a list of custom properties to add to the property template. There can
/// be up to 64 properties in a single property template.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTemplateId:(NSString * _Nonnull)templateId
                                      name:(NSString * _Nullable)name
                              description_:(NSString * _Nullable)description_
                                 addFields:(NSArray<DBPROPERTIESPropertyFieldTemplate *> * _Nullable)addFields;

///
/// Convenience constructor (exposes only non-nullable instance variables with no default value).
///
/// @param templateId An identifier for property template added by `propertiesTemplateAdd`.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTemplateId:(NSString * _Nonnull)templateId;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `UpdatePropertyTemplateArg` struct.
///
@interface DBTEAMUpdatePropertyTemplateArgSerializer : NSObject

///
/// Serializes `DBTEAMUpdatePropertyTemplateArg` instances.
///
/// @param instance An instance of the `DBTEAMUpdatePropertyTemplateArg` API object.
///
/// @return A json-compatible dictionary representation of the `DBTEAMUpdatePropertyTemplateArg` API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMUpdatePropertyTemplateArg * _Nonnull)instance;

///
/// Deserializes `DBTEAMUpdatePropertyTemplateArg` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBTEAMUpdatePropertyTemplateArg`
/// API object.
///
/// @return An instantiation of the `DBTEAMUpdatePropertyTemplateArg` object.
///
+ (DBTEAMUpdatePropertyTemplateArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
