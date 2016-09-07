///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBFILESFileMetadata;

#pragma mark - API Object

///
/// The `GetTemporaryLinkResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBFILESGetTemporaryLinkResult : NSObject <DBSerializable>

#pragma mark - Instance fields

/// Metadata of the file.
@property(nonatomic, readonly) DBFILESFileMetadata * _Nonnull metadata;

/// The temporary link which can be used to stream content the file.
@property(nonatomic, readonly, copy) NSString * _Nonnull link;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param metadata Metadata of the file.
/// @param link The temporary link which can be used to stream content the file.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithMetadata:(DBFILESFileMetadata * _Nonnull)metadata link:(NSString * _Nonnull)link;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GetTemporaryLinkResult` struct.
///
@interface DBFILESGetTemporaryLinkResultSerializer : NSObject

///
/// Serializes `DBFILESGetTemporaryLinkResult` instances.
///
/// @param instance An instance of the `DBFILESGetTemporaryLinkResult` API object.
///
/// @return A json-compatible dictionary representation of the `DBFILESGetTemporaryLinkResult` API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESGetTemporaryLinkResult * _Nonnull)instance;

///
/// Deserializes `DBFILESGetTemporaryLinkResult` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBFILESGetTemporaryLinkResult`
/// API object.
///
/// @return An instantiation of the `DBFILESGetTemporaryLinkResult` object.
///
+ (DBFILESGetTemporaryLinkResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
