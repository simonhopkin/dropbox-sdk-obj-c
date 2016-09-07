///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

#pragma mark - API Object

///
/// The `GroupMemberSetAccessTypeError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMGroupMemberSetAccessTypeError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBTEAMGroupMemberSetAccessTypeErrorTag` enum type represents the possible tag states with
/// which the `DBTEAMGroupMemberSetAccessTypeError` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMGroupMemberSetAccessTypeErrorTag) {
  /// No matching group found. No groups match the specified group ID.
  DBTEAMGroupMemberSetAccessTypeErrorGroupNotFound,

  /// (no description).
  DBTEAMGroupMemberSetAccessTypeErrorOther,

  /// The specified user is not a member of this group.
  DBTEAMGroupMemberSetAccessTypeErrorMemberNotInGroup,

  /// A company managed group cannot be managed by a user.
  DBTEAMGroupMemberSetAccessTypeErrorUserCannotBeManagerOfCompanyManagedGroup,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBTEAMGroupMemberSetAccessTypeErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "group_not_found".
///
/// Description of the "group_not_found" tag state: No matching group found. No groups match the
/// specified group ID.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithGroupNotFound;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

///
/// Initializes union class with tag state of "member_not_in_group".
///
/// Description of the "member_not_in_group" tag state: The specified user is not a member of this
/// group.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithMemberNotInGroup;

///
/// Initializes union class with tag state of "user_cannot_be_manager_of_company_managed_group".
///
/// Description of the "user_cannot_be_manager_of_company_managed_group" tag state: A company
/// managed group cannot be managed by a user.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUserCannotBeManagerOfCompanyManagedGroup;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "group_not_found".
///
/// @return Whether the union's current tag state has value "group_not_found".
///
- (BOOL)isGroupNotFound;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves whether the union's current tag state has value "member_not_in_group".
///
/// @return Whether the union's current tag state has value "member_not_in_group".
///
- (BOOL)isMemberNotInGroup;

///
/// Retrieves whether the union's current tag state has value
/// "user_cannot_be_manager_of_company_managed_group".
///
/// @return Whether the union's current tag state has value
/// "user_cannot_be_manager_of_company_managed_group".
///
- (BOOL)isUserCannotBeManagerOfCompanyManagedGroup;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMGroupMemberSetAccessTypeError` union.
///
@interface DBTEAMGroupMemberSetAccessTypeErrorSerializer : NSObject

///
/// Serializes `DBTEAMGroupMemberSetAccessTypeError` instances.
///
/// @param instance An instance of the `DBTEAMGroupMemberSetAccessTypeError` API object.
///
/// @return A json-compatible dictionary representation of the `DBTEAMGroupMemberSetAccessTypeError`
/// API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMGroupMemberSetAccessTypeError * _Nonnull)instance;

///
/// Deserializes `DBTEAMGroupMemberSetAccessTypeError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMGroupMemberSetAccessTypeError` API object.
///
/// @return An instantiation of the `DBTEAMGroupMemberSetAccessTypeError` object.
///
+ (DBTEAMGroupMemberSetAccessTypeError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
