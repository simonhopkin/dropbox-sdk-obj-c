///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

#pragma mark - API Object

///
/// The `TeamSpaceAllocation` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBUSERSTeamSpaceAllocation : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The total space currently used by the user's team (bytes).
@property(nonatomic, readonly) NSNumber * _Nonnull used;

/// The total space allocated to the user's team (bytes).
@property(nonatomic, readonly) NSNumber * _Nonnull allocated;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param used The total space currently used by the user's team (bytes).
/// @param allocated The total space allocated to the user's team (bytes).
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUsed:(NSNumber * _Nonnull)used allocated:(NSNumber * _Nonnull)allocated;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TeamSpaceAllocation` struct.
///
@interface DBUSERSTeamSpaceAllocationSerializer : NSObject

///
/// Serializes `DBUSERSTeamSpaceAllocation` instances.
///
/// @param instance An instance of the `DBUSERSTeamSpaceAllocation` API object.
///
/// @return A json-compatible dictionary representation of the `DBUSERSTeamSpaceAllocation` API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBUSERSTeamSpaceAllocation * _Nonnull)instance;

///
/// Deserializes `DBUSERSTeamSpaceAllocation` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBUSERSTeamSpaceAllocation` API
/// object.
///
/// @return An instantiation of the `DBUSERSTeamSpaceAllocation` object.
///
+ (DBUSERSTeamSpaceAllocation * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
