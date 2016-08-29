///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESDimensions;
@class DBXFILESGpsCoordinates;
@class DBXFILESMediaMetadata;

/// 
/// The MediaMetadata struct.
/// 
/// Metadata for a photo or video.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESMediaMetadata : NSObject <DBXSerializable> 

/// Dimension of the photo/video.
@property (nonatomic, readonly) DBXFILESDimensions * _Nullable dimensions;

/// The GPS coordinate of the photo/video.
@property (nonatomic, readonly) DBXFILESGpsCoordinates * _Nullable location;

/// The timestamp when the photo/video is taken.
@property (nonatomic, readonly) NSDate * _Nullable timeTaken;

/// 
/// Full constructor for the `DBXFILESMediaMetadata` struct (exposes all
/// instance variables).
/// 
/// - parameter dimensions: Dimension of the photo/video.
/// - parameter location: The GPS coordinate of the photo/video.
/// - parameter timeTaken: The timestamp when the photo/video is taken.
/// 
/// - returns: An initialized `DBXFILESMediaMetadata` instance.
/// 
- (nonnull instancetype)initWithDimensions:(DBXFILESDimensions * _Nullable)dimensions location:(DBXFILESGpsCoordinates * _Nullable)location timeTaken:(NSDate * _Nullable)timeTaken;

/// 
/// Convenience constructor for the `DBXFILESMediaMetadata` struct (exposes only
/// non-nullable instance variables with no default value).
/// 
/// 
/// - returns: An initialized `DBXFILESMediaMetadata` instance.
/// 
- (nonnull instancetype)init;

@end


/// 
/// The serialization class for the MediaMetadata struct.
/// 
@interface DBXFILESMediaMetadataSerializer : NSObject 

/// 
/// Serializes `DBXFILESMediaMetadata` instances.
/// 
///  - parameter instance: An instance of the `DBXFILESMediaMetadata` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXFILESMediaMetadata` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXFILESMediaMetadata * _Nonnull)instance;

/// 
/// Deserializes `DBXFILESMediaMetadata` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXFILESMediaMetadata` API object.
/// 
///  - returns: An instantiation of the `DBXFILESMediaMetadata` object.
/// 
+ (DBXFILESMediaMetadata * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end