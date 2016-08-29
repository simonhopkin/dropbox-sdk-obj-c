///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMGroupFullInfo;
@class DBXTEAMGroupMembersChangeResult;

/// 
/// The GroupMembersChangeResult struct.
/// 
/// Result returned by groupsMembersAdd and groupsMembersRemove.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMGroupMembersChangeResult : NSObject <DBXSerializable> 

/// The group info after member change operation has been performed.
@property (nonatomic, readonly) DBXTEAMGroupFullInfo * _Nonnull groupInfo;

/// An ID that can be used to obtain the status of granting/revoking group-owned
/// resources.
@property (nonatomic, readonly, copy) NSString * _Nonnull asyncJobId;

/// 
/// Full constructor for the `DBXTEAMGroupMembersChangeResult` struct (exposes
/// all instance variables).
/// 
/// - parameter groupInfo: The group info after member change operation has been
/// performed.
/// - parameter asyncJobId: An ID that can be used to obtain the status of
/// granting/revoking group-owned resources.
/// 
/// - returns: An initialized `DBXTEAMGroupMembersChangeResult` instance.
/// 
- (nonnull instancetype)initWithGroupInfo:(DBXTEAMGroupFullInfo * _Nonnull)groupInfo asyncJobId:(NSString * _Nonnull)asyncJobId;

@end


/// 
/// The serialization class for the GroupMembersChangeResult struct.
/// 
@interface DBXTEAMGroupMembersChangeResultSerializer : NSObject 

/// 
/// Serializes `DBXTEAMGroupMembersChangeResult` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMGroupMembersChangeResult`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMGroupMembersChangeResult` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMGroupMembersChangeResult * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMGroupMembersChangeResult` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMGroupMembersChangeResult` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMGroupMembersChangeResult`
/// object.
/// 
+ (DBXTEAMGroupMembersChangeResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end