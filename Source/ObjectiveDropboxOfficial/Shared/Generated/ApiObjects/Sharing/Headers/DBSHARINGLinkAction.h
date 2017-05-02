///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGLinkAction;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LinkAction` union.
///
/// Actions that can be performed on a link.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGLinkAction : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGLinkActionTag` enum type represents the possible tag states
/// with which the `DBSHARINGLinkAction` union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGLinkActionTag) {
  /// Change the audience of the link.
  DBSHARINGLinkActionChangeAudience,

  /// Remove the expiry date of the link.
  DBSHARINGLinkActionRemoveExpiry,

  /// Remove the password of the link.
  DBSHARINGLinkActionRemovePassword,

  /// Create or modify the expiry date of the link.
  DBSHARINGLinkActionSetExpiry,

  /// Create or modify the password of the link.
  DBSHARINGLinkActionSetPassword,

  /// (no description).
  DBSHARINGLinkActionOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGLinkActionTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "change_audience".
///
/// Description of the "change_audience" tag state: Change the audience of the
/// link.
///
/// @return An initialized instance.
///
- (instancetype)initWithChangeAudience;

///
/// Initializes union class with tag state of "remove_expiry".
///
/// Description of the "remove_expiry" tag state: Remove the expiry date of the
/// link.
///
/// @return An initialized instance.
///
- (instancetype)initWithRemoveExpiry;

///
/// Initializes union class with tag state of "remove_password".
///
/// Description of the "remove_password" tag state: Remove the password of the
/// link.
///
/// @return An initialized instance.
///
- (instancetype)initWithRemovePassword;

///
/// Initializes union class with tag state of "set_expiry".
///
/// Description of the "set_expiry" tag state: Create or modify the expiry date
/// of the link.
///
/// @return An initialized instance.
///
- (instancetype)initWithSetExpiry;

///
/// Initializes union class with tag state of "set_password".
///
/// Description of the "set_password" tag state: Create or modify the password
/// of the link.
///
/// @return An initialized instance.
///
- (instancetype)initWithSetPassword;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "change_audience".
///
/// @return Whether the union's current tag state has value "change_audience".
///
- (BOOL)isChangeAudience;

///
/// Retrieves whether the union's current tag state has value "remove_expiry".
///
/// @return Whether the union's current tag state has value "remove_expiry".
///
- (BOOL)isRemoveExpiry;

///
/// Retrieves whether the union's current tag state has value "remove_password".
///
/// @return Whether the union's current tag state has value "remove_password".
///
- (BOOL)isRemovePassword;

///
/// Retrieves whether the union's current tag state has value "set_expiry".
///
/// @return Whether the union's current tag state has value "set_expiry".
///
- (BOOL)isSetExpiry;

///
/// Retrieves whether the union's current tag state has value "set_password".
///
/// @return Whether the union's current tag state has value "set_password".
///
- (BOOL)isSetPassword;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBSHARINGLinkAction` union.
///
@interface DBSHARINGLinkActionSerializer : NSObject

///
/// Serializes `DBSHARINGLinkAction` instances.
///
/// @param instance An instance of the `DBSHARINGLinkAction` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGLinkAction` API object.
///
+ (NSDictionary *)serialize:(DBSHARINGLinkAction *)instance;

///
/// Deserializes `DBSHARINGLinkAction` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGLinkAction` API object.
///
/// @return An instantiation of the `DBSHARINGLinkAction` object.
///
+ (DBSHARINGLinkAction *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
