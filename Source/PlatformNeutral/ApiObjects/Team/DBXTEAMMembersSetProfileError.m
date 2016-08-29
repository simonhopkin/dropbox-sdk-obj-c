///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMMemberSelectorError.h"
#import "DBXTEAMMembersSetProfileError.h"

@implementation DBXTEAMMembersSetProfileError 

- (instancetype)initWithUserNotFound {
    self = [super init];
    if (self) {
        _tag = DBXTEAMMembersSetProfileErrorUserNotFound;
    }
    return self;
}

- (instancetype)initWithUserNotInTeam {
    self = [super init];
    if (self) {
        _tag = DBXTEAMMembersSetProfileErrorUserNotInTeam;
    }
    return self;
}

- (instancetype)initWithExternalIdAndNewExternalIdUnsafe {
    self = [super init];
    if (self) {
        _tag = DBXTEAMMembersSetProfileErrorExternalIdAndNewExternalIdUnsafe;
    }
    return self;
}

- (instancetype)initWithNoNewDataSpecified {
    self = [super init];
    if (self) {
        _tag = DBXTEAMMembersSetProfileErrorNoNewDataSpecified;
    }
    return self;
}

- (instancetype)initWithEmailReservedForOtherUser {
    self = [super init];
    if (self) {
        _tag = DBXTEAMMembersSetProfileErrorEmailReservedForOtherUser;
    }
    return self;
}

- (instancetype)initWithExternalIdUsedByOtherUser {
    self = [super init];
    if (self) {
        _tag = DBXTEAMMembersSetProfileErrorExternalIdUsedByOtherUser;
    }
    return self;
}

- (instancetype)initWithSetProfileDisallowed {
    self = [super init];
    if (self) {
        _tag = DBXTEAMMembersSetProfileErrorSetProfileDisallowed;
    }
    return self;
}

- (instancetype)initWithParamCannotBeEmpty {
    self = [super init];
    if (self) {
        _tag = DBXTEAMMembersSetProfileErrorParamCannotBeEmpty;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self) {
        _tag = DBXTEAMMembersSetProfileErrorOther;
    }
    return self;
}

- (BOOL)isUserNotFound {
    return _tag == DBXTEAMMembersSetProfileErrorUserNotFound;
}

- (BOOL)isUserNotInTeam {
    return _tag == DBXTEAMMembersSetProfileErrorUserNotInTeam;
}

- (BOOL)isExternalIdAndNewExternalIdUnsafe {
    return _tag == DBXTEAMMembersSetProfileErrorExternalIdAndNewExternalIdUnsafe;
}

- (BOOL)isNoNewDataSpecified {
    return _tag == DBXTEAMMembersSetProfileErrorNoNewDataSpecified;
}

- (BOOL)isEmailReservedForOtherUser {
    return _tag == DBXTEAMMembersSetProfileErrorEmailReservedForOtherUser;
}

- (BOOL)isExternalIdUsedByOtherUser {
    return _tag == DBXTEAMMembersSetProfileErrorExternalIdUsedByOtherUser;
}

- (BOOL)isSetProfileDisallowed {
    return _tag == DBXTEAMMembersSetProfileErrorSetProfileDisallowed;
}

- (BOOL)isParamCannotBeEmpty {
    return _tag == DBXTEAMMembersSetProfileErrorParamCannotBeEmpty;
}

- (BOOL)isOther {
    return _tag == DBXTEAMMembersSetProfileErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXTEAMMembersSetProfileErrorUserNotFound:
           return @"DBXTEAMMembersSetProfileErrorUserNotFound";
        case DBXTEAMMembersSetProfileErrorUserNotInTeam:
           return @"DBXTEAMMembersSetProfileErrorUserNotInTeam";
        case DBXTEAMMembersSetProfileErrorExternalIdAndNewExternalIdUnsafe:
           return @"DBXTEAMMembersSetProfileErrorExternalIdAndNewExternalIdUnsafe";
        case DBXTEAMMembersSetProfileErrorNoNewDataSpecified:
           return @"DBXTEAMMembersSetProfileErrorNoNewDataSpecified";
        case DBXTEAMMembersSetProfileErrorEmailReservedForOtherUser:
           return @"DBXTEAMMembersSetProfileErrorEmailReservedForOtherUser";
        case DBXTEAMMembersSetProfileErrorExternalIdUsedByOtherUser:
           return @"DBXTEAMMembersSetProfileErrorExternalIdUsedByOtherUser";
        case DBXTEAMMembersSetProfileErrorSetProfileDisallowed:
           return @"DBXTEAMMembersSetProfileErrorSetProfileDisallowed";
        case DBXTEAMMembersSetProfileErrorParamCannotBeEmpty:
           return @"DBXTEAMMembersSetProfileErrorParamCannotBeEmpty";
        case DBXTEAMMembersSetProfileErrorOther:
           return @"DBXTEAMMembersSetProfileErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXTEAMMembersSetProfileErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMMembersSetProfileErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMMembersSetProfileErrorSerializer serialize:self] description];
}

@end


@implementation DBXTEAMMembersSetProfileErrorSerializer 

+ (NSDictionary *)serialize:(DBXTEAMMembersSetProfileError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isUserNotFound]) {
        jsonDict[@".tag"] = @"user_not_found";
    }
    else if ([valueObj isUserNotInTeam]) {
        jsonDict[@".tag"] = @"user_not_in_team";
    }
    else if ([valueObj isExternalIdAndNewExternalIdUnsafe]) {
        jsonDict[@".tag"] = @"external_id_and_new_external_id_unsafe";
    }
    else if ([valueObj isNoNewDataSpecified]) {
        jsonDict[@".tag"] = @"no_new_data_specified";
    }
    else if ([valueObj isEmailReservedForOtherUser]) {
        jsonDict[@".tag"] = @"email_reserved_for_other_user";
    }
    else if ([valueObj isExternalIdUsedByOtherUser]) {
        jsonDict[@".tag"] = @"external_id_used_by_other_user";
    }
    else if ([valueObj isSetProfileDisallowed]) {
        jsonDict[@".tag"] = @"set_profile_disallowed";
    }
    else if ([valueObj isParamCannotBeEmpty]) {
        jsonDict[@".tag"] = @"param_cannot_be_empty";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXTEAMMembersSetProfileError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"user_not_found"]) {
        return [[DBXTEAMMembersSetProfileError alloc] initWithUserNotFound];
    }
    else if ([tag isEqualToString:@"user_not_in_team"]) {
        return [[DBXTEAMMembersSetProfileError alloc] initWithUserNotInTeam];
    }
    else if ([tag isEqualToString:@"external_id_and_new_external_id_unsafe"]) {
        return [[DBXTEAMMembersSetProfileError alloc] initWithExternalIdAndNewExternalIdUnsafe];
    }
    else if ([tag isEqualToString:@"no_new_data_specified"]) {
        return [[DBXTEAMMembersSetProfileError alloc] initWithNoNewDataSpecified];
    }
    else if ([tag isEqualToString:@"email_reserved_for_other_user"]) {
        return [[DBXTEAMMembersSetProfileError alloc] initWithEmailReservedForOtherUser];
    }
    else if ([tag isEqualToString:@"external_id_used_by_other_user"]) {
        return [[DBXTEAMMembersSetProfileError alloc] initWithExternalIdUsedByOtherUser];
    }
    else if ([tag isEqualToString:@"set_profile_disallowed"]) {
        return [[DBXTEAMMembersSetProfileError alloc] initWithSetProfileDisallowed];
    }
    else if ([tag isEqualToString:@"param_cannot_be_empty"]) {
        return [[DBXTEAMMembersSetProfileError alloc] initWithParamCannotBeEmpty];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXTEAMMembersSetProfileError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end