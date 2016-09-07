///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

#pragma mark - API Object

///
/// The `ResolvedVisibility` union.
///
/// The actual access permissions values of shared links after taking into account user preferences
/// and the team and shared folder settings. Check the RequestedVisibility for more info on the
/// possible visibility values that can be set by the shared link's owner.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGResolvedVisibility : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBSHARINGResolvedVisibilityTag` enum type represents the possible tag states with which the
/// `DBSHARINGResolvedVisibility` union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGResolvedVisibilityTag) {
  /// Anyone who has received the link can access it. No login required.
  DBSHARINGResolvedVisibilityPublic,

  /// Only members of the same team can access the link. Login is required.
  DBSHARINGResolvedVisibilityTeamOnly,

  /// A link-specific password is required to access the link. Login is not required.
  DBSHARINGResolvedVisibilityPassword,

  /// Only members of the same team who have the link-specific password can access the link. Login
  /// is required.
  DBSHARINGResolvedVisibilityTeamAndPassword,

  /// Only members of the shared folder containing the linked file can access the link. Login is
  /// required.
  DBSHARINGResolvedVisibilitySharedFolderOnly,

  /// (no description).
  DBSHARINGResolvedVisibilityOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBSHARINGResolvedVisibilityTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "public".
///
/// Description of the "public" tag state: Anyone who has received the link can access it. No login
/// required.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithPublic;

///
/// Initializes union class with tag state of "team_only".
///
/// Description of the "team_only" tag state: Only members of the same team can access the link.
/// Login is required.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTeamOnly;

///
/// Initializes union class with tag state of "password".
///
/// Description of the "password" tag state: A link-specific password is required to access the
/// link. Login is not required.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithPassword;

///
/// Initializes union class with tag state of "team_and_password".
///
/// Description of the "team_and_password" tag state: Only members of the same team who have the
/// link-specific password can access the link. Login is required.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTeamAndPassword;

///
/// Initializes union class with tag state of "shared_folder_only".
///
/// Description of the "shared_folder_only" tag state: Only members of the shared folder containing
/// the linked file can access the link. Login is required.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithSharedFolderOnly;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "public".
///
/// @return Whether the union's current tag state has value "public".
///
- (BOOL)isPublic;

///
/// Retrieves whether the union's current tag state has value "team_only".
///
/// @return Whether the union's current tag state has value "team_only".
///
- (BOOL)isTeamOnly;

///
/// Retrieves whether the union's current tag state has value "password".
///
/// @return Whether the union's current tag state has value "password".
///
- (BOOL)isPassword;

///
/// Retrieves whether the union's current tag state has value "team_and_password".
///
/// @return Whether the union's current tag state has value "team_and_password".
///
- (BOOL)isTeamAndPassword;

///
/// Retrieves whether the union's current tag state has value "shared_folder_only".
///
/// @return Whether the union's current tag state has value "shared_folder_only".
///
- (BOOL)isSharedFolderOnly;

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
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBSHARINGResolvedVisibility` union.
///
@interface DBSHARINGResolvedVisibilitySerializer : NSObject

///
/// Serializes `DBSHARINGResolvedVisibility` instances.
///
/// @param instance An instance of the `DBSHARINGResolvedVisibility` API object.
///
/// @return A json-compatible dictionary representation of the `DBSHARINGResolvedVisibility` API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGResolvedVisibility * _Nonnull)instance;

///
/// Deserializes `DBSHARINGResolvedVisibility` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBSHARINGResolvedVisibility` API
/// object.
///
/// @return An instantiation of the `DBSHARINGResolvedVisibility` object.
///
+ (DBSHARINGResolvedVisibility * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
