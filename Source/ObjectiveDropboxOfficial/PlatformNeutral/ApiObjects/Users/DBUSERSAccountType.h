///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

#pragma mark - API Object

///
/// The `AccountType` union.
///
/// What type of account this user has.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBUSERSAccountType : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBUSERSAccountTypeTag` enum type represents the possible tag states with which the
/// `DBUSERSAccountType` union can exist.
typedef NS_ENUM(NSInteger, DBUSERSAccountTypeTag) {
  /// The basic account type.
  DBUSERSAccountTypeBasic,

  /// The Dropbox Pro account type.
  DBUSERSAccountTypePro,

  /// The Dropbox Business account type.
  DBUSERSAccountTypeBusiness,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBUSERSAccountTypeTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "basic".
///
/// Description of the "basic" tag state: The basic account type.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithBasic;

///
/// Initializes union class with tag state of "pro".
///
/// Description of the "pro" tag state: The Dropbox Pro account type.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithPro;

///
/// Initializes union class with tag state of "business".
///
/// Description of the "business" tag state: The Dropbox Business account type.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithBusiness;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "basic".
///
/// @return Whether the union's current tag state has value "basic".
///
- (BOOL)isBasic;

///
/// Retrieves whether the union's current tag state has value "pro".
///
/// @return Whether the union's current tag state has value "pro".
///
- (BOOL)isPro;

///
/// Retrieves whether the union's current tag state has value "business".
///
/// @return Whether the union's current tag state has value "business".
///
- (BOOL)isBusiness;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBUSERSAccountType` union.
///
@interface DBUSERSAccountTypeSerializer : NSObject

///
/// Serializes `DBUSERSAccountType` instances.
///
/// @param instance An instance of the `DBUSERSAccountType` API object.
///
/// @return A json-compatible dictionary representation of the `DBUSERSAccountType` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBUSERSAccountType * _Nonnull)instance;

///
/// Deserializes `DBUSERSAccountType` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBUSERSAccountType` API object.
///
/// @return An instantiation of the `DBUSERSAccountType` object.
///
+ (DBUSERSAccountType * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
