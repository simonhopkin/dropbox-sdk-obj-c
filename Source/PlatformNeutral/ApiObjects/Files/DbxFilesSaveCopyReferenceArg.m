///
/// Auto-generated by Stone, do not modify.
///

#import "DbxFilesSaveCopyReferenceArg.h"
#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"

@implementation DbxFilesSaveCopyReferenceArg 

- (instancetype)initWithDCopyReference:(NSString *)dCopyReference path:(NSString *)path {
    [DbxStoneValidators stringValidator:nil maxLength:nil pattern:@"/(.|[\\r\\n])*"](path);

    self = [super init];
    if (self != nil) {
        _dCopyReference = dCopyReference;
        _path = path;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxFilesSaveCopyReferenceArgSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxFilesSaveCopyReferenceArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxFilesSaveCopyReferenceArgSerializer serialize:self] description];
}

@end


@implementation DbxFilesSaveCopyReferenceArgSerializer 

+ (NSDictionary *)serialize:(DbxFilesSaveCopyReferenceArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"copy_reference"] = [DbxStringSerializer serialize:valueObj.dCopyReference];
    jsonDict[@"path"] = [DbxStringSerializer serialize:valueObj.path];

    return jsonDict;
}

+ (DbxFilesSaveCopyReferenceArg *)deserialize:(NSDictionary *)valueDict {
    NSString *dCopyReference = [DbxStringSerializer deserialize:valueDict[@"copy_reference"]];
    NSString *path = [DbxStringSerializer deserialize:valueDict[@"path"]];

    return [[DbxFilesSaveCopyReferenceArg alloc] initWithDCopyReference:dCopyReference path:path];
}

@end