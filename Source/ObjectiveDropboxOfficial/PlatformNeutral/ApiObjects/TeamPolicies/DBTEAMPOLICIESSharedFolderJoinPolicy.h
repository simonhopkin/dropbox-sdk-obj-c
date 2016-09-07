///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

#pragma mark - API Object

///
/// The `SharedFolderJoinPolicy` union.
///
/// Policy governing which shared folders a team member can join.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMPOLICIESSharedFolderJoinPolicy : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBTEAMPOLICIESSharedFolderJoinPolicyTag` enum type represents the possible tag states with
/// which the `DBTEAMPOLICIESSharedFolderJoinPolicy` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMPOLICIESSharedFolderJoinPolicyTag) {
  /// Team members can only join folders shared by teammates.
  DBTEAMPOLICIESSharedFolderJoinPolicyFromTeamOnly,

  /// Team members can join any shared folder, including those shared by users outside the team.
  DBTEAMPOLICIESSharedFolderJoinPolicyFromAnyone,

  /// (no description).
  DBTEAMPOLICIESSharedFolderJoinPolicyOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBTEAMPOLICIESSharedFolderJoinPolicyTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "from_team_only".
///
/// Description of the "from_team_only" tag state: Team members can only join folders shared by
/// teammates.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithFromTeamOnly;

///
/// Initializes union class with tag state of "from_anyone".
///
/// Description of the "from_anyone" tag state: Team members can join any shared folder, including
/// those shared by users outside the team.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithFromAnyone;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "from_team_only".
///
/// @return Whether the union's current tag state has value "from_team_only".
///
- (BOOL)isFromTeamOnly;

///
/// Retrieves whether the union's current tag state has value "from_anyone".
///
/// @return Whether the union's current tag state has value "from_anyone".
///
- (BOOL)isFromAnyone;

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
/// The serialization class for the `DBTEAMPOLICIESSharedFolderJoinPolicy` union.
///
@interface DBTEAMPOLICIESSharedFolderJoinPolicySerializer : NSObject

///
/// Serializes `DBTEAMPOLICIESSharedFolderJoinPolicy` instances.
///
/// @param instance An instance of the `DBTEAMPOLICIESSharedFolderJoinPolicy` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMPOLICIESSharedFolderJoinPolicy` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMPOLICIESSharedFolderJoinPolicy * _Nonnull)instance;

///
/// Deserializes `DBTEAMPOLICIESSharedFolderJoinPolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMPOLICIESSharedFolderJoinPolicy` API object.
///
/// @return An instantiation of the `DBTEAMPOLICIESSharedFolderJoinPolicy` object.
///
+ (DBTEAMPOLICIESSharedFolderJoinPolicy * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
