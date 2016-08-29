///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMMobileClientPlatform;

/// 
/// The MobileClientPlatform union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMMobileClientPlatform : NSObject <DBXSerializable> 

/// The `DBXTEAMMobileClientPlatformTag` enum type represents the possible tag
/// states with which the `DBXTEAMMobileClientPlatform` union can exist.
typedef NS_ENUM(NSInteger, DBXTEAMMobileClientPlatformTag) {
    /// Official Dropbox iPhone client
    DBXTEAMMobileClientPlatformIphone,

    /// Official Dropbox iPad client
    DBXTEAMMobileClientPlatformIpad,

    /// Official Dropbox Android client
    DBXTEAMMobileClientPlatformAndroid,

    /// Official Dropbox Windows phone client
    DBXTEAMMobileClientPlatformWindowsPhone,

    /// Official Dropbox Blackberry client
    DBXTEAMMobileClientPlatformBlackberry,

    /// (no description).
    DBXTEAMMobileClientPlatformOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMMobileClientPlatformTag tag;

/// 
/// Initializes union class with tag state of `Iphone`.
/// 
/// About the `Iphone` tag state: Official Dropbox iPhone client
/// 
/// - returns: An initialized `DBXTEAMMobileClientPlatform` instance.
/// 
- (nonnull instancetype)initWithIphone;

/// 
/// Initializes union class with tag state of `Ipad`.
/// 
/// About the `Ipad` tag state: Official Dropbox iPad client
/// 
/// - returns: An initialized `DBXTEAMMobileClientPlatform` instance.
/// 
- (nonnull instancetype)initWithIpad;

/// 
/// Initializes union class with tag state of `Android`.
/// 
/// About the `Android` tag state: Official Dropbox Android client
/// 
/// - returns: An initialized `DBXTEAMMobileClientPlatform` instance.
/// 
- (nonnull instancetype)initWithAndroid;

/// 
/// Initializes union class with tag state of `WindowsPhone`.
/// 
/// About the `WindowsPhone` tag state: Official Dropbox Windows phone client
/// 
/// - returns: An initialized `DBXTEAMMobileClientPlatform` instance.
/// 
- (nonnull instancetype)initWithWindowsPhone;

/// 
/// Initializes union class with tag state of `Blackberry`.
/// 
/// About the `Blackberry` tag state: Official Dropbox Blackberry client
/// 
/// - returns: An initialized `DBXTEAMMobileClientPlatform` instance.
/// 
- (nonnull instancetype)initWithBlackberry;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXTEAMMobileClientPlatform` instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Retrieves whether the union's current tag state has value `Iphone`.
/// 
/// - returns: Whether the union's current tag state has value `Iphone`.
/// 
- (BOOL)isIphone;

/// 
/// Retrieves whether the union's current tag state has value `Ipad`.
/// 
/// - returns: Whether the union's current tag state has value `Ipad`.
/// 
- (BOOL)isIpad;

/// 
/// Retrieves whether the union's current tag state has value `Android`.
/// 
/// - returns: Whether the union's current tag state has value `Android`.
/// 
- (BOOL)isAndroid;

/// 
/// Retrieves whether the union's current tag state has value `WindowsPhone`.
/// 
/// - returns: Whether the union's current tag state has value `WindowsPhone`.
/// 
- (BOOL)isWindowsPhone;

/// 
/// Retrieves whether the union's current tag state has value `Blackberry`.
/// 
/// - returns: Whether the union's current tag state has value `Blackberry`.
/// 
- (BOOL)isBlackberry;

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
/// The serialization class for the `DBXTEAMMobileClientPlatform` union.
/// 
@interface DBXTEAMMobileClientPlatformSerializer : NSObject 

/// 
/// Serializes `DBXTEAMMobileClientPlatform` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMMobileClientPlatform` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMMobileClientPlatform` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMMobileClientPlatform * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMMobileClientPlatform` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMMobileClientPlatform` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMMobileClientPlatform` object.
/// 
+ (DBXTEAMMobileClientPlatform * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end