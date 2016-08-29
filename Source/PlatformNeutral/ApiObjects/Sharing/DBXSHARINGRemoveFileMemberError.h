///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGMemberAccessLevelResult;
@class DBXSHARINGRemoveFileMemberError;
@class DBXSHARINGSharingFileAccessError;
@class DBXSHARINGSharingUserError;

/// 
/// The RemoveFileMemberError union.
/// 
/// Errors for removeFileMember2.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGRemoveFileMemberError : NSObject <DBXSerializable> 

/// The `DBXSHARINGRemoveFileMemberErrorTag` enum type represents the possible
/// tag states with which the `DBXSHARINGRemoveFileMemberError` union can exist.
typedef NS_ENUM(NSInteger, DBXSHARINGRemoveFileMemberErrorTag) {
    /// (no description).
    DBXSHARINGRemoveFileMemberErrorUserError,

    /// (no description).
    DBXSHARINGRemoveFileMemberErrorAccessError,

    /// This member does not have explicit access to the file and therefore
    /// cannot be removed. The return value is the access that a user might have
    /// to the file from a parent folder.
    DBXSHARINGRemoveFileMemberErrorNoExplicitAccess,

    /// (no description).
    DBXSHARINGRemoveFileMemberErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXSHARINGRemoveFileMemberErrorTag tag;

/// (no description).
@property (nonatomic, readonly) DBXSHARINGSharingUserError * _Nonnull userError;

/// (no description).
@property (nonatomic, readonly) DBXSHARINGSharingFileAccessError * _Nonnull accessError;

/// This member does not have explicit access to the file and therefore cannot
/// be removed. The return value is the access that a user might have to the
/// file from a parent folder.
@property (nonatomic, readonly) DBXSHARINGMemberAccessLevelResult * _Nonnull noExplicitAccess;

/// 
/// Initializes union class with tag state of `UserError`.
/// 
/// - parameter userError: (no description).
/// 
/// - returns: An initialized `DBXSHARINGRemoveFileMemberError` instance.
/// 
- (nonnull instancetype)initWithUserError:(DBXSHARINGSharingUserError * _Nonnull)userError;

/// 
/// Initializes union class with tag state of `AccessError`.
/// 
/// - parameter accessError: (no description).
/// 
/// - returns: An initialized `DBXSHARINGRemoveFileMemberError` instance.
/// 
- (nonnull instancetype)initWithAccessError:(DBXSHARINGSharingFileAccessError * _Nonnull)accessError;

/// 
/// Initializes union class with tag state of `NoExplicitAccess`.
/// 
/// About the `NoExplicitAccess` tag state: This member does not have explicit
/// access to the file and therefore cannot be removed. The return value is the
/// access that a user might have to the file from a parent folder.
/// 
/// - parameter noExplicitAccess: This member does not have explicit access to
/// the file and therefore cannot be removed. The return value is the access
/// that a user might have to the file from a parent folder.
/// 
/// - returns: An initialized `DBXSHARINGRemoveFileMemberError` instance.
/// 
- (nonnull instancetype)initWithNoExplicitAccess:(DBXSHARINGMemberAccessLevelResult * _Nonnull)noExplicitAccess;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXSHARINGRemoveFileMemberError` instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Retrieves whether the union's current tag state has value `UserError`.
/// 
/// - returns: Whether the union's current tag state has value `UserError`.
/// 
- (BOOL)isUserError;

/// 
/// Retrieves whether the union's current tag state has value `AccessError`.
/// 
/// - returns: Whether the union's current tag state has value `AccessError`.
/// 
- (BOOL)isAccessError;

/// 
/// Retrieves whether the union's current tag state has value
/// `NoExplicitAccess`.
/// 
/// - returns: Whether the union's current tag state has value
/// `NoExplicitAccess`.
/// 
- (BOOL)isNoExplicitAccess;

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
/// The serialization class for the `DBXSHARINGRemoveFileMemberError` union.
/// 
@interface DBXSHARINGRemoveFileMemberErrorSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGRemoveFileMemberError` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGRemoveFileMemberError`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGRemoveFileMemberError` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGRemoveFileMemberError * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGRemoveFileMemberError` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGRemoveFileMemberError` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGRemoveFileMemberError`
/// object.
/// 
+ (DBXSHARINGRemoveFileMemberError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end