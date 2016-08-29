///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESAddPropertiesError;
@class DBXFILESLookupError;

/// 
/// The AddPropertiesError union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESAddPropertiesError : NSObject <DBXSerializable> 

/// The `DBXFILESAddPropertiesErrorTag` enum type represents the possible tag
/// states with which the `DBXFILESAddPropertiesError` union can exist.
typedef NS_ENUM(NSInteger, DBXFILESAddPropertiesErrorTag) {
    /// Property template does not exist for given identifier.
    DBXFILESAddPropertiesErrorTemplateNotFound,

    /// You do not have the permissions to modify this property template.
    DBXFILESAddPropertiesErrorRestrictedContent,

    /// (no description).
    DBXFILESAddPropertiesErrorOther,

    /// (no description).
    DBXFILESAddPropertiesErrorPath,

    /// A field value in this property group is too large.
    DBXFILESAddPropertiesErrorPropertyFieldTooLarge,

    /// The property group specified does not conform to the property template.
    DBXFILESAddPropertiesErrorDoesNotFitTemplate,

    /// This property group already exists for this file.
    DBXFILESAddPropertiesErrorPropertyGroupAlreadyExists,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXFILESAddPropertiesErrorTag tag;

/// Property template does not exist for given identifier.
@property (nonatomic, readonly, copy) NSString * _Nonnull templateNotFound;

/// (no description).
@property (nonatomic, readonly) DBXFILESLookupError * _Nonnull path;

/// 
/// Initializes union class with tag state of `TemplateNotFound`.
/// 
/// About the `TemplateNotFound` tag state: Property template does not exist for
/// given identifier.
/// 
/// - parameter templateNotFound: Property template does not exist for given
/// identifier.
/// 
/// - returns: An initialized `DBXFILESAddPropertiesError` instance.
/// 
- (nonnull instancetype)initWithTemplateNotFound:(NSString * _Nonnull)templateNotFound;

/// 
/// Initializes union class with tag state of `RestrictedContent`.
/// 
/// About the `RestrictedContent` tag state: You do not have the permissions to
/// modify this property template.
/// 
/// - returns: An initialized `DBXFILESAddPropertiesError` instance.
/// 
- (nonnull instancetype)initWithRestrictedContent;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXFILESAddPropertiesError` instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Initializes union class with tag state of `Path`.
/// 
/// - parameter path: (no description).
/// 
/// - returns: An initialized `DBXFILESAddPropertiesError` instance.
/// 
- (nonnull instancetype)initWithPath:(DBXFILESLookupError * _Nonnull)path;

/// 
/// Initializes union class with tag state of `PropertyFieldTooLarge`.
/// 
/// About the `PropertyFieldTooLarge` tag state: A field value in this property
/// group is too large.
/// 
/// - returns: An initialized `DBXFILESAddPropertiesError` instance.
/// 
- (nonnull instancetype)initWithPropertyFieldTooLarge;

/// 
/// Initializes union class with tag state of `DoesNotFitTemplate`.
/// 
/// About the `DoesNotFitTemplate` tag state: The property group specified does
/// not conform to the property template.
/// 
/// - returns: An initialized `DBXFILESAddPropertiesError` instance.
/// 
- (nonnull instancetype)initWithDoesNotFitTemplate;

/// 
/// Initializes union class with tag state of `PropertyGroupAlreadyExists`.
/// 
/// About the `PropertyGroupAlreadyExists` tag state: This property group
/// already exists for this file.
/// 
/// - returns: An initialized `DBXFILESAddPropertiesError` instance.
/// 
- (nonnull instancetype)initWithPropertyGroupAlreadyExists;

/// 
/// Retrieves whether the union's current tag state has value
/// `TemplateNotFound`.
/// 
/// - returns: Whether the union's current tag state has value
/// `TemplateNotFound`.
/// 
- (BOOL)isTemplateNotFound;

/// 
/// Retrieves whether the union's current tag state has value
/// `RestrictedContent`.
/// 
/// - returns: Whether the union's current tag state has value
/// `RestrictedContent`.
/// 
- (BOOL)isRestrictedContent;

/// 
/// Retrieves whether the union's current tag state has value `Other`.
/// 
/// - returns: Whether the union's current tag state has value `Other`.
/// 
- (BOOL)isOther;

/// 
/// Retrieves whether the union's current tag state has value `Path`.
/// 
/// - returns: Whether the union's current tag state has value `Path`.
/// 
- (BOOL)isPath;

/// 
/// Retrieves whether the union's current tag state has value
/// `PropertyFieldTooLarge`.
/// 
/// - returns: Whether the union's current tag state has value
/// `PropertyFieldTooLarge`.
/// 
- (BOOL)isPropertyFieldTooLarge;

/// 
/// Retrieves whether the union's current tag state has value
/// `DoesNotFitTemplate`.
/// 
/// - returns: Whether the union's current tag state has value
/// `DoesNotFitTemplate`.
/// 
- (BOOL)isDoesNotFitTemplate;

/// 
/// Retrieves whether the union's current tag state has value
/// `PropertyGroupAlreadyExists`.
/// 
/// - returns: Whether the union's current tag state has value
/// `PropertyGroupAlreadyExists`.
/// 
- (BOOL)isPropertyGroupAlreadyExists;

/// 
/// Retrieves string value of union's current tag state.
/// 
/// - returns: A human-readable string representing the union's current tag
/// state.
/// 
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXFILESAddPropertiesError` union.
/// 
@interface DBXFILESAddPropertiesErrorSerializer : NSObject 

/// 
/// Serializes `DBXFILESAddPropertiesError` instances.
/// 
///  - parameter instance: An instance of the `DBXFILESAddPropertiesError` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXFILESAddPropertiesError` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXFILESAddPropertiesError * _Nonnull)instance;

/// 
/// Deserializes `DBXFILESAddPropertiesError` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXFILESAddPropertiesError` API object.
/// 
///  - returns: An instantiation of the `DBXFILESAddPropertiesError` object.
/// 
+ (DBXFILESAddPropertiesError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end