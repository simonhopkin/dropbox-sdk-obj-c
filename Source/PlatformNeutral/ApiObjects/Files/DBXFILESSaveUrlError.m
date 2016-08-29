///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESSaveUrlError.h"
#import "DBXFILESWriteError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESSaveUrlError 

@synthesize path = _path;

- (instancetype)initWithPath:(DBXFILESWriteError *)path {
    self = [super init];
    if (self) {
        _tag = DBXFILESSaveUrlErrorPath;
        _path = path;
    }
    return self;
}

- (instancetype)initWithDownloadFailed {
    self = [super init];
    if (self) {
        _tag = DBXFILESSaveUrlErrorDownloadFailed;
    }
    return self;
}

- (instancetype)initWithInvalidUrl {
    self = [super init];
    if (self) {
        _tag = DBXFILESSaveUrlErrorInvalidUrl;
    }
    return self;
}

- (instancetype)initWithNotFound {
    self = [super init];
    if (self) {
        _tag = DBXFILESSaveUrlErrorNotFound;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self) {
        _tag = DBXFILESSaveUrlErrorOther;
    }
    return self;
}

- (BOOL)isPath {
    return _tag == DBXFILESSaveUrlErrorPath;
}

- (BOOL)isDownloadFailed {
    return _tag == DBXFILESSaveUrlErrorDownloadFailed;
}

- (BOOL)isInvalidUrl {
    return _tag == DBXFILESSaveUrlErrorInvalidUrl;
}

- (BOOL)isNotFound {
    return _tag == DBXFILESSaveUrlErrorNotFound;
}

- (BOOL)isOther {
    return _tag == DBXFILESSaveUrlErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXFILESSaveUrlErrorPath:
           return @"DBXFILESSaveUrlErrorPath";
        case DBXFILESSaveUrlErrorDownloadFailed:
           return @"DBXFILESSaveUrlErrorDownloadFailed";
        case DBXFILESSaveUrlErrorInvalidUrl:
           return @"DBXFILESSaveUrlErrorInvalidUrl";
        case DBXFILESSaveUrlErrorNotFound:
           return @"DBXFILESSaveUrlErrorNotFound";
        case DBXFILESSaveUrlErrorOther:
           return @"DBXFILESSaveUrlErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXFILESWriteError *)path {
    if (![self isPath]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXFILESSaveUrlErrorPath`, but was %@.", [self getTagName]];
    }
    return _path;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXFILESSaveUrlErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESSaveUrlErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESSaveUrlErrorSerializer serialize:self] description];
}

@end


@implementation DBXFILESSaveUrlErrorSerializer 

+ (NSDictionary *)serialize:(DBXFILESSaveUrlError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isPath]) {
        jsonDict = [[DBXFILESWriteErrorSerializer serialize:valueObj.path] mutableCopy];
        jsonDict[@".tag"] = @"path";
    }
    else if ([valueObj isDownloadFailed]) {
        jsonDict[@".tag"] = @"download_failed";
    }
    else if ([valueObj isInvalidUrl]) {
        jsonDict[@".tag"] = @"invalid_url";
    }
    else if ([valueObj isNotFound]) {
        jsonDict[@".tag"] = @"not_found";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXFILESSaveUrlError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"path"]) {
        DBXFILESWriteError *path = [DBXFILESWriteErrorSerializer deserialize:valueDict[@"path"]];
        return [[DBXFILESSaveUrlError alloc] initWithPath:path];
    }
    else if ([tag isEqualToString:@"download_failed"]) {
        return [[DBXFILESSaveUrlError alloc] initWithDownloadFailed];
    }
    else if ([tag isEqualToString:@"invalid_url"]) {
        return [[DBXFILESSaveUrlError alloc] initWithInvalidUrl];
    }
    else if ([tag isEqualToString:@"not_found"]) {
        return [[DBXFILESSaveUrlError alloc] initWithNotFound];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXFILESSaveUrlError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end