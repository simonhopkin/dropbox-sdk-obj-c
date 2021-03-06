///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGExternalSharingAccessibilityPolicy;
@class DBTEAMLOGSharingChangeLinkPolicyDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharingChangeLinkPolicyDetails` struct.
///
/// Changed whether team members can share links externally (i.e. outside the
/// team), and if so, whether links should be accessible only by team members or
/// anyone by default.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharingChangeLinkPolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New external link accessibility policy.
@property (nonatomic, readonly) DBTEAMLOGExternalSharingAccessibilityPolicy *dNewValue;

/// Previous external link accessibility policy. Might be missing due to
/// historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGExternalSharingAccessibilityPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New external link accessibility policy.
/// @param previousValue Previous external link accessibility policy. Might be
/// missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGExternalSharingAccessibilityPolicy *)dNewValue
                    previousValue:(nullable DBTEAMLOGExternalSharingAccessibilityPolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewValue New external link accessibility policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGExternalSharingAccessibilityPolicy *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharingChangeLinkPolicyDetails` struct.
///
@interface DBTEAMLOGSharingChangeLinkPolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharingChangeLinkPolicyDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGSharingChangeLinkPolicyDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharingChangeLinkPolicyDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGSharingChangeLinkPolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharingChangeLinkPolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharingChangeLinkPolicyDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGSharingChangeLinkPolicyDetails`
/// object.
///
+ (DBTEAMLOGSharingChangeLinkPolicyDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
