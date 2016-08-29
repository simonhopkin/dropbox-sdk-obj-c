///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"
#import "DBXSHARINGSharedLinkMetadata.h"

@class DBXSHARINGFileLinkMetadata;
@class DBXSHARINGLinkPermissions;
@class DBXSHARINGTeamMemberInfo;
@class DBXUSERSTeam;

/// 
/// The FileLinkMetadata struct.
/// 
/// The metadata of a file shared link
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGFileLinkMetadata : DBXSHARINGSharedLinkMetadata <DBXSerializable> 

/// The modification time set by the desktop client when the file was added to
/// Dropbox. Since this time is not verified (the Dropbox server stores whatever
/// the desktop client sends up), this should only be used for display purposes
/// (such as sorting) and not, for example, to determine if a file has changed
/// or not.
@property (nonatomic, readonly) NSDate * _Nonnull clientModified;

/// The last time the file was modified on Dropbox.
@property (nonatomic, readonly) NSDate * _Nonnull serverModified;

/// A unique identifier for the current revision of a file. This field is the
/// same rev as elsewhere in the API and can be used to detect changes and avoid
/// conflicts.
@property (nonatomic, readonly, copy) NSString * _Nonnull rev;

/// The file size in bytes.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull size;

/// 
/// Full constructor for the `DBXSHARINGFileLinkMetadata` struct (exposes all
/// instance variables).
/// 
/// - parameter url: URL of the shared link.
/// - parameter name: The linked file name (including extension). This never
/// contains a slash.
/// - parameter linkPermissions: The link's access permissions.
/// - parameter clientModified: The modification time set by the desktop client
/// when the file was added to Dropbox. Since this time is not verified (the
/// Dropbox server stores whatever the desktop client sends up), this should
/// only be used for display purposes (such as sorting) and not, for example, to
/// determine if a file has changed or not.
/// - parameter serverModified: The last time the file was modified on Dropbox.
/// - parameter rev: A unique identifier for the current revision of a file.
/// This field is the same rev as elsewhere in the API and can be used to detect
/// changes and avoid conflicts.
/// - parameter size: The file size in bytes.
/// - parameter id_: A unique identifier for the linked file.
/// - parameter expires: Expiration time, if set. By default the link won't
/// expire.
/// - parameter pathLower: The lowercased full path in the user's Dropbox. This
/// always starts with a slash. This field will only be present only if the
/// linked file is in the authenticated user's  dropbox.
/// - parameter teamMemberInfo: The team membership information of the link's
/// owner.  This field will only be present  if the link's owner is a team
/// member.
/// - parameter contentOwnerTeamInfo: The team information of the content's
/// owner. This field will only be present if the content's owner is a team
/// member and the content's owner team is different from the link's owner team.
/// 
/// - returns: An initialized `DBXSHARINGFileLinkMetadata` instance.
/// 
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url name:(NSString * _Nonnull)name linkPermissions:(DBXSHARINGLinkPermissions * _Nonnull)linkPermissions clientModified:(NSDate * _Nonnull)clientModified serverModified:(NSDate * _Nonnull)serverModified rev:(NSString * _Nonnull)rev size:(NSNumber * _Nonnull)size id_:(NSString * _Nullable)id_ expires:(NSDate * _Nullable)expires pathLower:(NSString * _Nullable)pathLower teamMemberInfo:(DBXSHARINGTeamMemberInfo * _Nullable)teamMemberInfo contentOwnerTeamInfo:(DBXUSERSTeam * _Nullable)contentOwnerTeamInfo;

/// 
/// Convenience constructor for the `DBXSHARINGFileLinkMetadata` struct (exposes
/// only non-nullable instance variables with no default value).
/// 
/// - parameter url: URL of the shared link.
/// - parameter name: The linked file name (including extension). This never
/// contains a slash.
/// - parameter linkPermissions: The link's access permissions.
/// - parameter clientModified: The modification time set by the desktop client
/// when the file was added to Dropbox. Since this time is not verified (the
/// Dropbox server stores whatever the desktop client sends up), this should
/// only be used for display purposes (such as sorting) and not, for example, to
/// determine if a file has changed or not.
/// - parameter serverModified: The last time the file was modified on Dropbox.
/// - parameter rev: A unique identifier for the current revision of a file.
/// This field is the same rev as elsewhere in the API and can be used to detect
/// changes and avoid conflicts.
/// - parameter size: The file size in bytes.
/// 
/// - returns: An initialized `DBXSHARINGFileLinkMetadata` instance.
/// 
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url name:(NSString * _Nonnull)name linkPermissions:(DBXSHARINGLinkPermissions * _Nonnull)linkPermissions clientModified:(NSDate * _Nonnull)clientModified serverModified:(NSDate * _Nonnull)serverModified rev:(NSString * _Nonnull)rev size:(NSNumber * _Nonnull)size;

@end


/// 
/// The serialization class for the FileLinkMetadata struct.
/// 
@interface DBXSHARINGFileLinkMetadataSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGFileLinkMetadata` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGFileLinkMetadata` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGFileLinkMetadata` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGFileLinkMetadata * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGFileLinkMetadata` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGFileLinkMetadata` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGFileLinkMetadata` object.
/// 
+ (DBXSHARINGFileLinkMetadata * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end