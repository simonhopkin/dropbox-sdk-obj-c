///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBUSERSSpaceAllocation;

#pragma mark - API Object

///
/// The `SpaceUsage` struct.
///
/// Information about a user's space usage and quota.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBUSERSSpaceUsage : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The user's total space usage (bytes).
@property(nonatomic, readonly) NSNumber * _Nonnull used;

/// The user's space allocation.
@property(nonatomic, readonly) DBUSERSSpaceAllocation * _Nonnull allocation;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param used The user's total space usage (bytes).
/// @param allocation The user's space allocation.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUsed:(NSNumber * _Nonnull)used allocation:(DBUSERSSpaceAllocation * _Nonnull)allocation;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SpaceUsage` struct.
///
@interface DBUSERSSpaceUsageSerializer : NSObject

///
/// Serializes `DBUSERSSpaceUsage` instances.
///
/// @param instance An instance of the `DBUSERSSpaceUsage` API object.
///
/// @return A json-compatible dictionary representation of the `DBUSERSSpaceUsage` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBUSERSSpaceUsage * _Nonnull)instance;

///
/// Deserializes `DBUSERSSpaceUsage` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBUSERSSpaceUsage` API object.
///
/// @return An instantiation of the `DBUSERSSpaceUsage` object.
///
+ (DBUSERSSpaceUsage * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
