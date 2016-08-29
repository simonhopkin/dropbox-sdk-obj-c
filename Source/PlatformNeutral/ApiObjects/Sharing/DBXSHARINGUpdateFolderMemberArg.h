///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGAccessLevel;
@class DBXSHARINGMemberSelector;
@class DBXSHARINGUpdateFolderMemberArg;

/// 
/// The UpdateFolderMemberArg struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGUpdateFolderMemberArg : NSObject <DBXSerializable> 

/// The ID for the shared folder.
@property (nonatomic, readonly, copy) NSString * _Nonnull sharedFolderId;

/// The member of the shared folder to update.  Only the dropboxId in
/// MemberSelector may be set at this time.
@property (nonatomic, readonly) DBXSHARINGMemberSelector * _Nonnull member;

/// The new access level for member. owner in AccessLevel is disallowed.
@property (nonatomic, readonly) DBXSHARINGAccessLevel * _Nonnull accessLevel;

/// 
/// Full constructor for the `DBXSHARINGUpdateFolderMemberArg` struct (exposes
/// all instance variables).
/// 
/// - parameter sharedFolderId: The ID for the shared folder.
/// - parameter member: The member of the shared folder to update.  Only the
/// :field:`MemberSelector.dropbox_id` may be set at this time.
/// - parameter accessLevel: The new access level for :field:`member`.
/// :field:`AccessLevel.owner` is disallowed.
/// 
/// - returns: An initialized `DBXSHARINGUpdateFolderMemberArg` instance.
/// 
- (nonnull instancetype)initWithSharedFolderId:(NSString * _Nonnull)sharedFolderId member:(DBXSHARINGMemberSelector * _Nonnull)member accessLevel:(DBXSHARINGAccessLevel * _Nonnull)accessLevel;

@end


/// 
/// The serialization class for the UpdateFolderMemberArg struct.
/// 
@interface DBXSHARINGUpdateFolderMemberArgSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGUpdateFolderMemberArg` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGUpdateFolderMemberArg`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGUpdateFolderMemberArg` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGUpdateFolderMemberArg * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGUpdateFolderMemberArg` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGUpdateFolderMemberArg` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGUpdateFolderMemberArg`
/// object.
/// 
+ (DBXSHARINGUpdateFolderMemberArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end