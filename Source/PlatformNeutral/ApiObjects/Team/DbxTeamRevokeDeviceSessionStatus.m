///
/// Auto-generated by Stone, do not modify.
///

#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"
#import "DbxTeamRevokeDeviceSessionError.h"
#import "DbxTeamRevokeDeviceSessionStatus.h"

@implementation DbxTeamRevokeDeviceSessionStatus 

- (instancetype)initWithSuccess:(NSNumber *)success errorType:(DbxTeamRevokeDeviceSessionError *)errorType {

    self = [super init];
    if (self != nil) {
        _success = success;
        _errorType = errorType;
    }
    return self;
}

- (instancetype)initWithSuccess:(NSNumber *)success {
    return [self initWithSuccess:success errorType:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxTeamRevokeDeviceSessionStatusSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxTeamRevokeDeviceSessionStatusSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxTeamRevokeDeviceSessionStatusSerializer serialize:self] description];
}

@end


@implementation DbxTeamRevokeDeviceSessionStatusSerializer 

+ (NSDictionary *)serialize:(DbxTeamRevokeDeviceSessionStatus *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"success"] = [DbxBoolSerializer serialize:valueObj.success];
    if (valueObj.errorType != nil) {
        jsonDict[@"error_type"] = [DbxTeamRevokeDeviceSessionErrorSerializer serialize:valueObj.errorType];
    }

    return jsonDict;
}

+ (DbxTeamRevokeDeviceSessionStatus *)deserialize:(NSDictionary *)valueDict {
    NSNumber *success = [DbxBoolSerializer deserialize:valueDict[@"success"]];
    DbxTeamRevokeDeviceSessionError *errorType = valueDict[@"error_type"] != nil ? [DbxTeamRevokeDeviceSessionErrorSerializer deserialize:valueDict[@"error_type"]] : nil;

    return [[DbxTeamRevokeDeviceSessionStatus alloc] initWithSuccess:success errorType:errorType];
}

@end