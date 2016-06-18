///
/// Auto-generated by Stone, do not modify.
///

#import "DbxFilesUploadSessionStartArg.h"
#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"

@implementation DbxFilesUploadSessionStartArg 

- (instancetype)initWithClose:(NSNumber *)close {

    self = [super init];
    if (self != nil) {
        _close = close ?: @NO;
    }
    return self;
}

- (instancetype)init {
    return [self initWithClose:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxFilesUploadSessionStartArgSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxFilesUploadSessionStartArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxFilesUploadSessionStartArgSerializer serialize:self] description];
}

@end


@implementation DbxFilesUploadSessionStartArgSerializer 

+ (NSDictionary *)serialize:(DbxFilesUploadSessionStartArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"close"] = [DbxBoolSerializer serialize:valueObj.close];

    return jsonDict;
}

+ (DbxFilesUploadSessionStartArg *)deserialize:(NSDictionary *)valueDict {
    NSNumber *close = [DbxBoolSerializer deserialize:valueDict[@"close"]];

    return [[DbxFilesUploadSessionStartArg alloc] initWithClose:close];
}

@end