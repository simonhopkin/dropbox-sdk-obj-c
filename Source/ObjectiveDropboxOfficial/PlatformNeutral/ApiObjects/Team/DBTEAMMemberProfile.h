///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBTEAMTeamMemberStatus;
@class DBTEAMTeamMembershipType;
@class DBUSERSName;

#pragma mark - API Object

///
/// The `MemberProfile` struct.
///
/// Basic member profile.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMMemberProfile : NSObject <DBSerializable>

#pragma mark - Instance fields

/// ID of user as a member of a team.
@property(nonatomic, readonly, copy) NSString * _Nonnull teamMemberId;

/// External ID that a team can attach to the user. An application using the API may find it easier
/// to use their own IDs instead of Dropbox IDs like account_id or team_member_id.
@property(nonatomic, readonly) NSString * _Nullable externalId;

/// A user's account identifier.
@property(nonatomic, readonly) NSString * _Nullable accountId;

/// Email address of user.
@property(nonatomic, readonly, copy) NSString * _Nonnull email;

/// Is true if the user's email is verified to be owned by the user.
@property(nonatomic, readonly) NSNumber * _Nonnull emailVerified;

/// The user's status as a member of a specific team.
@property(nonatomic, readonly) DBTEAMTeamMemberStatus * _Nonnull status;

/// Representations for a person's name.
@property(nonatomic, readonly) DBUSERSName * _Nonnull name;

/// The user's membership type: full (normal team member) vs limited (does not use a license; no
/// access to the team's shared quota).
@property(nonatomic, readonly) DBTEAMTeamMembershipType * _Nonnull membershipType;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param teamMemberId ID of user as a member of a team.
/// @param email Email address of user.
/// @param emailVerified Is true if the user's email is verified to be owned by the user.
/// @param status The user's status as a member of a specific team.
/// @param name Representations for a person's name.
/// @param membershipType The user's membership type: full (normal team member) vs limited (does not
/// use a license; no access to the team's shared quota).
/// @param externalId External ID that a team can attach to the user. An application using the API
/// may find it easier to use their own IDs instead of Dropbox IDs like account_id or
/// team_member_id.
/// @param accountId A user's account identifier.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTeamMemberId:(NSString * _Nonnull)teamMemberId
                                       email:(NSString * _Nonnull)email
                               emailVerified:(NSNumber * _Nonnull)emailVerified
                                      status:(DBTEAMTeamMemberStatus * _Nonnull)status
                                        name:(DBUSERSName * _Nonnull)name
                              membershipType:(DBTEAMTeamMembershipType * _Nonnull)membershipType
                                  externalId:(NSString * _Nullable)externalId
                                   accountId:(NSString * _Nullable)accountId;

///
/// Convenience constructor (exposes only non-nullable instance variables with no default value).
///
/// @param teamMemberId ID of user as a member of a team.
/// @param email Email address of user.
/// @param emailVerified Is true if the user's email is verified to be owned by the user.
/// @param status The user's status as a member of a specific team.
/// @param name Representations for a person's name.
/// @param membershipType The user's membership type: full (normal team member) vs limited (does not
/// use a license; no access to the team's shared quota).
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTeamMemberId:(NSString * _Nonnull)teamMemberId
                                       email:(NSString * _Nonnull)email
                               emailVerified:(NSNumber * _Nonnull)emailVerified
                                      status:(DBTEAMTeamMemberStatus * _Nonnull)status
                                        name:(DBUSERSName * _Nonnull)name
                              membershipType:(DBTEAMTeamMembershipType * _Nonnull)membershipType;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MemberProfile` struct.
///
@interface DBTEAMMemberProfileSerializer : NSObject

///
/// Serializes `DBTEAMMemberProfile` instances.
///
/// @param instance An instance of the `DBTEAMMemberProfile` API object.
///
/// @return A json-compatible dictionary representation of the `DBTEAMMemberProfile` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMMemberProfile * _Nonnull)instance;

///
/// Deserializes `DBTEAMMemberProfile` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBTEAMMemberProfile` API object.
///
/// @return An instantiation of the `DBTEAMMemberProfile` object.
///
+ (DBTEAMMemberProfile * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
