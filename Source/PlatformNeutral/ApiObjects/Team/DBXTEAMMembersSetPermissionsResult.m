///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMAdminTier.h"
#import "DBXTEAMMembersSetPermissionsResult.h"

@implementation DBXTEAMMembersSetPermissionsResult 

- (instancetype)initWithTeamMemberId:(NSString *)teamMemberId role:(DBXTEAMAdminTier *)role {

    self = [super init];
    if (self) {
        _teamMemberId = teamMemberId;
        _role = role;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXTEAMMembersSetPermissionsResultSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMMembersSetPermissionsResultSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMMembersSetPermissionsResultSerializer serialize:self] description];
}

@end


@implementation DBXTEAMMembersSetPermissionsResultSerializer 

+ (NSDictionary *)serialize:(DBXTEAMMembersSetPermissionsResult *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"team_member_id"] = valueObj.teamMemberId;
    jsonDict[@"role"] = [DBXTEAMAdminTierSerializer serialize:valueObj.role];

    return jsonDict;
}

+ (DBXTEAMMembersSetPermissionsResult *)deserialize:(NSDictionary *)valueDict {
    NSString *teamMemberId = valueDict[@"team_member_id"];
    DBXTEAMAdminTier *role = [DBXTEAMAdminTierSerializer deserialize:valueDict[@"role"]];

    return [[DBXTEAMMembersSetPermissionsResult alloc] initWithTeamMemberId:teamMemberId role:role];
}

@end