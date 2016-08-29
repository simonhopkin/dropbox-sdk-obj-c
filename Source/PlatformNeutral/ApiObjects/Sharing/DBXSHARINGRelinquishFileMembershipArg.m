///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGRelinquishFileMembershipArg.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGRelinquishFileMembershipArg 

- (instancetype)initWithFile:(NSString *)file {
    [DBXStoneValidators stringValidator:@(1) maxLength:nil pattern:@"((/|id:).*|nspath:[^:]*:[^:]*)"](file);

    self = [super init];
    if (self) {
        _file = file;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXSHARINGRelinquishFileMembershipArgSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGRelinquishFileMembershipArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGRelinquishFileMembershipArgSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGRelinquishFileMembershipArgSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGRelinquishFileMembershipArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"file"] = valueObj.file;

    return jsonDict;
}

+ (DBXSHARINGRelinquishFileMembershipArg *)deserialize:(NSDictionary *)valueDict {
    NSString *file = valueDict[@"file"];

    return [[DBXSHARINGRelinquishFileMembershipArg alloc] initWithFile:file];
}

@end