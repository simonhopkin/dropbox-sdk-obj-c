///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESListFolderContinueError.h"
#import "DBXFILESLookupError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESListFolderContinueError 

@synthesize path = _path;

- (instancetype)initWithPath:(DBXFILESLookupError *)path {
    self = [super init];
    if (self) {
        _tag = DBXFILESListFolderContinueErrorPath;
        _path = path;
    }
    return self;
}

- (instancetype)initWithReset {
    self = [super init];
    if (self) {
        _tag = DBXFILESListFolderContinueErrorReset;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self) {
        _tag = DBXFILESListFolderContinueErrorOther;
    }
    return self;
}

- (BOOL)isPath {
    return _tag == DBXFILESListFolderContinueErrorPath;
}

- (BOOL)isReset {
    return _tag == DBXFILESListFolderContinueErrorReset;
}

- (BOOL)isOther {
    return _tag == DBXFILESListFolderContinueErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXFILESListFolderContinueErrorPath:
           return @"DBXFILESListFolderContinueErrorPath";
        case DBXFILESListFolderContinueErrorReset:
           return @"DBXFILESListFolderContinueErrorReset";
        case DBXFILESListFolderContinueErrorOther:
           return @"DBXFILESListFolderContinueErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXFILESLookupError *)path {
    if (![self isPath]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXFILESListFolderContinueErrorPath`, but was %@.", [self getTagName]];
    }
    return _path;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXFILESListFolderContinueErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESListFolderContinueErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESListFolderContinueErrorSerializer serialize:self] description];
}

@end


@implementation DBXFILESListFolderContinueErrorSerializer 

+ (NSDictionary *)serialize:(DBXFILESListFolderContinueError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isPath]) {
        jsonDict = [[DBXFILESLookupErrorSerializer serialize:valueObj.path] mutableCopy];
        jsonDict[@".tag"] = @"path";
    }
    else if ([valueObj isReset]) {
        jsonDict[@".tag"] = @"reset";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXFILESListFolderContinueError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"path"]) {
        DBXFILESLookupError *path = [DBXFILESLookupErrorSerializer deserialize:valueDict[@"path"]];
        return [[DBXFILESListFolderContinueError alloc] initWithPath:path];
    }
    else if ([tag isEqualToString:@"reset"]) {
        return [[DBXFILESListFolderContinueError alloc] initWithReset];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXFILESListFolderContinueError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end