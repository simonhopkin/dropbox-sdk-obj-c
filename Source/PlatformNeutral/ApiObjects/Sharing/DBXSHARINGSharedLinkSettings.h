///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGRequestedVisibility;
@class DBXSHARINGSharedLinkSettings;

/// 
/// The SharedLinkSettings struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGSharedLinkSettings : NSObject <DBXSerializable> 

/// The requested access for this shared link.
@property (nonatomic, readonly) DBXSHARINGRequestedVisibility * _Nullable requestedVisibility;

/// If requestedVisibility is password in RequestedVisibility this is needed to
/// specify the password to access the link.
@property (nonatomic, readonly, copy) NSString * _Nullable linkPassword;

/// Expiration time of the shared link. By default the link won't expire.
@property (nonatomic, readonly) NSDate * _Nullable expires;

/// 
/// Full constructor for the `DBXSHARINGSharedLinkSettings` struct (exposes all
/// instance variables).
/// 
/// - parameter requestedVisibility: The requested access for this shared link.
/// - parameter linkPassword: If :field:`requested_visibility` is
/// :field:`RequestedVisibility.password` this is needed to specify the password
/// to access the link.
/// - parameter expires: Expiration time of the shared link. By default the link
/// won't expire.
/// 
/// - returns: An initialized `DBXSHARINGSharedLinkSettings` instance.
/// 
- (nonnull instancetype)initWithRequestedVisibility:(DBXSHARINGRequestedVisibility * _Nullable)requestedVisibility linkPassword:(NSString * _Nullable)linkPassword expires:(NSDate * _Nullable)expires;

/// 
/// Convenience constructor for the `DBXSHARINGSharedLinkSettings` struct
/// (exposes only non-nullable instance variables with no default value).
/// 
/// 
/// - returns: An initialized `DBXSHARINGSharedLinkSettings` instance.
/// 
- (nonnull instancetype)init;

@end


/// 
/// The serialization class for the SharedLinkSettings struct.
/// 
@interface DBXSHARINGSharedLinkSettingsSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGSharedLinkSettings` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGSharedLinkSettings` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGSharedLinkSettings` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGSharedLinkSettings * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGSharedLinkSettings` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGSharedLinkSettings` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGSharedLinkSettings` object.
/// 
+ (DBXSHARINGSharedLinkSettings * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end