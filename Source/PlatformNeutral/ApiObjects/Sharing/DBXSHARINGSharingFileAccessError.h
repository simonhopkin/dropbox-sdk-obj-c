///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGSharingFileAccessError;

/// 
/// The SharingFileAccessError union.
/// 
/// User could not access this file.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGSharingFileAccessError : NSObject <DBXSerializable> 

/// The `DBXSHARINGSharingFileAccessErrorTag` enum type represents the possible
/// tag states with which the `DBXSHARINGSharingFileAccessError` union can
/// exist.
typedef NS_ENUM(NSInteger, DBXSHARINGSharingFileAccessErrorTag) {
    /// Current user does not have sufficient privileges to perform the desired
    /// action.
    DBXSHARINGSharingFileAccessErrorNoPermission,

    /// File specified was not found.
    DBXSHARINGSharingFileAccessErrorInvalidFile,

    /// A folder can't be shared this way. Use folder sharing or a shared link
    /// instead.
    DBXSHARINGSharingFileAccessErrorIsFolder,

    /// A file inside a public folder can't be shared this way. Use a public
    /// link instead.
    DBXSHARINGSharingFileAccessErrorInsidePublicFolder,

    /// A Mac OS X package can't be shared this way. Use a shared link instead.
    DBXSHARINGSharingFileAccessErrorInsideOsxPackage,

    /// (no description).
    DBXSHARINGSharingFileAccessErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXSHARINGSharingFileAccessErrorTag tag;

/// 
/// Initializes union class with tag state of `NoPermission`.
/// 
/// About the `NoPermission` tag state: Current user does not have sufficient
/// privileges to perform the desired action.
/// 
/// - returns: An initialized `DBXSHARINGSharingFileAccessError` instance.
/// 
- (nonnull instancetype)initWithNoPermission;

/// 
/// Initializes union class with tag state of `InvalidFile`.
/// 
/// About the `InvalidFile` tag state: File specified was not found.
/// 
/// - returns: An initialized `DBXSHARINGSharingFileAccessError` instance.
/// 
- (nonnull instancetype)initWithInvalidFile;

/// 
/// Initializes union class with tag state of `IsFolder`.
/// 
/// About the `IsFolder` tag state: A folder can't be shared this way. Use
/// folder sharing or a shared link instead.
/// 
/// - returns: An initialized `DBXSHARINGSharingFileAccessError` instance.
/// 
- (nonnull instancetype)initWithIsFolder;

/// 
/// Initializes union class with tag state of `InsidePublicFolder`.
/// 
/// About the `InsidePublicFolder` tag state: A file inside a public folder
/// can't be shared this way. Use a public link instead.
/// 
/// - returns: An initialized `DBXSHARINGSharingFileAccessError` instance.
/// 
- (nonnull instancetype)initWithInsidePublicFolder;

/// 
/// Initializes union class with tag state of `InsideOsxPackage`.
/// 
/// About the `InsideOsxPackage` tag state: A Mac OS X package can't be shared
/// this way. Use a shared link instead.
/// 
/// - returns: An initialized `DBXSHARINGSharingFileAccessError` instance.
/// 
- (nonnull instancetype)initWithInsideOsxPackage;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXSHARINGSharingFileAccessError` instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Retrieves whether the union's current tag state has value `NoPermission`.
/// 
/// - returns: Whether the union's current tag state has value `NoPermission`.
/// 
- (BOOL)isNoPermission;

/// 
/// Retrieves whether the union's current tag state has value `InvalidFile`.
/// 
/// - returns: Whether the union's current tag state has value `InvalidFile`.
/// 
- (BOOL)isInvalidFile;

/// 
/// Retrieves whether the union's current tag state has value `IsFolder`.
/// 
/// - returns: Whether the union's current tag state has value `IsFolder`.
/// 
- (BOOL)isIsFolder;

/// 
/// Retrieves whether the union's current tag state has value
/// `InsidePublicFolder`.
/// 
/// - returns: Whether the union's current tag state has value
/// `InsidePublicFolder`.
/// 
- (BOOL)isInsidePublicFolder;

/// 
/// Retrieves whether the union's current tag state has value
/// `InsideOsxPackage`.
/// 
/// - returns: Whether the union's current tag state has value
/// `InsideOsxPackage`.
/// 
- (BOOL)isInsideOsxPackage;

/// 
/// Retrieves whether the union's current tag state has value `Other`.
/// 
/// - returns: Whether the union's current tag state has value `Other`.
/// 
- (BOOL)isOther;

/// 
/// Retrieves string value of union's current tag state.
/// 
/// - returns: A human-readable string representing the union's current tag
/// state.
/// 
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXSHARINGSharingFileAccessError` union.
/// 
@interface DBXSHARINGSharingFileAccessErrorSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGSharingFileAccessError` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGSharingFileAccessError`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGSharingFileAccessError` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGSharingFileAccessError * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGSharingFileAccessError` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGSharingFileAccessError` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGSharingFileAccessError`
/// object.
/// 
+ (DBXSHARINGSharingFileAccessError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end