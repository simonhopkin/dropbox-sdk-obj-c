///
/// Auto-generated by Stone, do not modify.
///

#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"
#import "DbxTeamMembersDeactivateError.h"
#import "DbxTeamMembersUnsuspendError.h"

@implementation DbxTeamMembersUnsuspendError 

- (instancetype)initWithUserNotFound {
    self = [super init];
    if (self != nil) {
        _tag = (TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorUserNotFound;
    }
    return self;
}

- (instancetype)initWithUserNotInTeam {
    self = [super init];
    if (self != nil) {
        _tag = (TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorUserNotInTeam;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = (TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorOther;
    }
    return self;
}

- (instancetype)initWithUnsuspendNonSuspendedMember {
    self = [super init];
    if (self != nil) {
        _tag = (TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorUnsuspendNonSuspendedMember;
    }
    return self;
}

- (instancetype)initWithTeamLicenseLimit {
    self = [super init];
    if (self != nil) {
        _tag = (TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorTeamLicenseLimit;
    }
    return self;
}

- (BOOL)isUserNotFound {
    return _tag == (TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorUserNotFound;
}

- (BOOL)isUserNotInTeam {
    return _tag == (TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorUserNotInTeam;
}

- (BOOL)isOther {
    return _tag == (TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorOther;
}

- (BOOL)isUnsuspendNonSuspendedMember {
    return _tag == (TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorUnsuspendNonSuspendedMember;
}

- (BOOL)isTeamLicenseLimit {
    return _tag == (TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorTeamLicenseLimit;
}

- (NSString *)getTagName {
    if (_tag == (TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorUserNotFound) {
        return @"(TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorUserNotFound";
    }
    if (_tag == (TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorUserNotInTeam) {
        return @"(TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorUserNotInTeam";
    }
    if (_tag == (TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorOther) {
        return @"(TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorOther";
    }
    if (_tag == (TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorUnsuspendNonSuspendedMember) {
        return @"(TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorUnsuspendNonSuspendedMember";
    }
    if (_tag == (TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorTeamLicenseLimit) {
        return @"(TeamMembersUnsuspendErrorTag)TeamMembersUnsuspendErrorTeamLicenseLimit";
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxTeamMembersUnsuspendErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxTeamMembersUnsuspendErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxTeamMembersUnsuspendErrorSerializer serialize:self] description];
}

@end


@implementation DbxTeamMembersUnsuspendErrorSerializer 

+ (NSDictionary *)serialize:(DbxTeamMembersUnsuspendError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isUserNotFound]) {
        jsonDict[@".tag"] = @"user_not_found";
    }
    else if ([valueObj isUserNotInTeam]) {
        jsonDict[@".tag"] = @"user_not_in_team";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else if ([valueObj isUnsuspendNonSuspendedMember]) {
        jsonDict[@".tag"] = @"unsuspend_non_suspended_member";
    }
    else if ([valueObj isTeamLicenseLimit]) {
        jsonDict[@".tag"] = @"team_license_limit";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DbxTeamMembersUnsuspendError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"user_not_found"]) {
        return [[DbxTeamMembersUnsuspendError alloc] initWithUserNotFound];
    }
    if ([tag isEqualToString:@"user_not_in_team"]) {
        return [[DbxTeamMembersUnsuspendError alloc] initWithUserNotInTeam];
    }
    if ([tag isEqualToString:@"other"]) {
        return [[DbxTeamMembersUnsuspendError alloc] initWithOther];
    }
    if ([tag isEqualToString:@"unsuspend_non_suspended_member"]) {
        return [[DbxTeamMembersUnsuspendError alloc] initWithUnsuspendNonSuspendedMember];
    }
    if ([tag isEqualToString:@"team_license_limit"]) {
        return [[DbxTeamMembersUnsuspendError alloc] initWithTeamLicenseLimit];
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

@end