///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxStoneSerializers.h"

@class DbxTeamMembersListResult;
@class DbxTeamTeamMemberInfo;

/// 
/// The DbxTeamMembersListResult struct.
/// 
@interface DbxTeamMembersListResult : NSObject <DbxSerializable> 

/// List of team members.
@property (nonatomic) NSArray<DbxTeamTeamMemberInfo *> * _Nonnull members;
/// Pass the cursor into membersListContinue to obtain the additional members.
@property (nonatomic, copy) NSString * _Nonnull cursor;
/// Is true if there are additional team members that have not been returned
/// yet. An additional call to membersListContinue can retrieve them.
@property (nonatomic, copy) NSNumber * _Nonnull hasMore;

- (nonnull instancetype)initWithMembers:(NSArray<DbxTeamTeamMemberInfo *> * _Nonnull)members cursor:(NSString * _Nonnull)cursor hasMore:(NSNumber * _Nonnull)hasMore;

+ (NSDictionary * _Nonnull)serialize:(id _Nonnull)obj;

+ (id _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

- (NSString * _Nonnull)description;

@end


@interface DbxTeamMembersListResultSerializer : NSObject 

+ (NSDictionary * _Nonnull)serialize:(DbxTeamMembersListResult * _Nonnull)obj;

+ (DbxTeamMembersListResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end