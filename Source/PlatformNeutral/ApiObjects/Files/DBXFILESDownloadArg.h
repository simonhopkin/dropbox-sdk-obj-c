///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESDownloadArg;

/// 
/// The DownloadArg struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESDownloadArg : NSObject <DBXSerializable> 

/// The path of the file to download.
@property (nonatomic, readonly, copy) NSString * _Nonnull path;

/// Deprecated. Please specify revision in path instead
@property (nonatomic, readonly, copy) NSString * _Nullable rev;

/// 
/// Full constructor for the `DBXFILESDownloadArg` struct (exposes all instance
/// variables).
/// 
/// - parameter path: The path of the file to download.
/// - parameter rev: Deprecated. Please specify revision in :field:`path`
/// instead
/// 
/// - returns: An initialized `DBXFILESDownloadArg` instance.
/// 
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path rev:(NSString * _Nullable)rev;

/// 
/// Convenience constructor for the `DBXFILESDownloadArg` struct (exposes only
/// non-nullable instance variables with no default value).
/// 
/// - parameter path: The path of the file to download.
/// 
/// - returns: An initialized `DBXFILESDownloadArg` instance.
/// 
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path;

@end


/// 
/// The serialization class for the DownloadArg struct.
/// 
@interface DBXFILESDownloadArgSerializer : NSObject 

/// 
/// Serializes `DBXFILESDownloadArg` instances.
/// 
///  - parameter instance: An instance of the `DBXFILESDownloadArg` API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXFILESDownloadArg` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXFILESDownloadArg * _Nonnull)instance;

/// 
/// Deserializes `DBXFILESDownloadArg` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXFILESDownloadArg` API object.
/// 
///  - returns: An instantiation of the `DBXFILESDownloadArg` object.
/// 
+ (DBXFILESDownloadArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end