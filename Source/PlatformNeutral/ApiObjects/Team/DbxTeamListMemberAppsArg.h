///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxStoneSerializers.h"

@class DbxTeamListMemberAppsArg;

/// 
/// The DbxTeamListMemberAppsArg struct.
/// 
@interface DbxTeamListMemberAppsArg : NSObject <DbxSerializable> 

/// The team member id
@property (nonatomic, copy) NSString * _Nonnull teamMemberId;

- (nonnull instancetype)initWithTeamMemberId:(NSString * _Nonnull)teamMemberId;

+ (NSDictionary * _Nonnull)serialize:(id _Nonnull)obj;

+ (id _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

- (NSString * _Nonnull)description;

@end


@interface DbxTeamListMemberAppsArgSerializer : NSObject 

+ (NSDictionary * _Nonnull)serialize:(DbxTeamListMemberAppsArg * _Nonnull)obj;

+ (DbxTeamListMemberAppsArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end