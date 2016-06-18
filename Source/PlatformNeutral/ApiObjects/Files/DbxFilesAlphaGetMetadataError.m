///
/// Auto-generated by Stone, do not modify.
///

#import "DbxFilesAlphaGetMetadataError.h"
#import "DbxFilesGetMetadataError.h"
#import "DbxFilesLookUpPropertiesError.h"
#import "DbxFilesLookupError.h"
#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"

@implementation DbxFilesAlphaGetMetadataError 

- (instancetype)initWithPath:(DbxFilesLookupError *)path {
    self = [super init];
    if (self != nil) {
        _tag = (FilesAlphaGetMetadataErrorTag)FilesAlphaGetMetadataErrorPath;
        _path = path;
    }
    return self;
}

- (instancetype)initWithPropertiesError:(DbxFilesLookUpPropertiesError *)propertiesError {
    self = [super init];
    if (self != nil) {
        _tag = (FilesAlphaGetMetadataErrorTag)FilesAlphaGetMetadataErrorPropertiesError;
        _propertiesError = propertiesError;
    }
    return self;
}

- (BOOL)isPath {
    return _tag == (FilesAlphaGetMetadataErrorTag)FilesAlphaGetMetadataErrorPath;
}

- (BOOL)isPropertiesError {
    return _tag == (FilesAlphaGetMetadataErrorTag)FilesAlphaGetMetadataErrorPropertiesError;
}

- (NSString *)getTagName {
    if (_tag == (FilesAlphaGetMetadataErrorTag)FilesAlphaGetMetadataErrorPath) {
        return @"(FilesAlphaGetMetadataErrorTag)FilesAlphaGetMetadataErrorPath";
    }
    if (_tag == (FilesAlphaGetMetadataErrorTag)FilesAlphaGetMetadataErrorPropertiesError) {
        return @"(FilesAlphaGetMetadataErrorTag)FilesAlphaGetMetadataErrorPropertiesError";
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

- (DbxFilesLookupError *)path {
    if (_tag != (FilesAlphaGetMetadataErrorTag)FilesAlphaGetMetadataErrorPath) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required (FilesAlphaGetMetadataErrorTag)FilesAlphaGetMetadataErrorPath, but was %@.", [self getTagName]];
    }
    return _path;
}

- (DbxFilesLookUpPropertiesError *)propertiesError {
    if (_tag != (FilesAlphaGetMetadataErrorTag)FilesAlphaGetMetadataErrorPropertiesError) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required (FilesAlphaGetMetadataErrorTag)FilesAlphaGetMetadataErrorPropertiesError, but was %@.", [self getTagName]];
    }
    return _propertiesError;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxFilesAlphaGetMetadataErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxFilesAlphaGetMetadataErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxFilesAlphaGetMetadataErrorSerializer serialize:self] description];
}

@end


@implementation DbxFilesAlphaGetMetadataErrorSerializer 

+ (NSDictionary *)serialize:(DbxFilesAlphaGetMetadataError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isPath]) {
        jsonDict[@"path"] = [DbxFilesLookupErrorSerializer serialize:valueObj.path];
        jsonDict[@".tag"] = @"path";
    }
    else if ([valueObj isPropertiesError]) {
        jsonDict[@"properties_error"] = [DbxFilesLookUpPropertiesErrorSerializer serialize:valueObj.propertiesError];
        jsonDict[@".tag"] = @"properties_error";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DbxFilesAlphaGetMetadataError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"path"]) {
        DbxFilesLookupError *path = [DbxFilesLookupErrorSerializer deserialize:valueDict[@"path"]];
        return [[DbxFilesAlphaGetMetadataError alloc] initWithPath:path];
    }
    if ([tag isEqualToString:@"properties_error"]) {
        DbxFilesLookUpPropertiesError *propertiesError = [DbxFilesLookUpPropertiesErrorSerializer deserialize:valueDict[@"properties_error"]];
        return [[DbxFilesAlphaGetMetadataError alloc] initWithPropertiesError:propertiesError];
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

@end