///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMMembersListResult;
@class DBXTEAMTeamMemberInfo;

/// 
/// The MembersListResult struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMMembersListResult : NSObject <DBXSerializable> 

/// List of team members.
@property (nonatomic, readonly) NSArray<DBXTEAMTeamMemberInfo *> * _Nonnull members;

/// Pass the cursor into membersListContinue to obtain the additional members.
@property (nonatomic, readonly, copy) NSString * _Nonnull cursor;

/// Is true if there are additional team members that have not been returned
/// yet. An additional call to membersListContinue can retrieve them.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull hasMore;

/// 
/// Full constructor for the `DBXTEAMMembersListResult` struct (exposes all
/// instance variables).
/// 
/// - parameter members: List of team members.
/// - parameter cursor: Pass the cursor into :route:`members/list/continue` to
/// obtain the additional members.
/// - parameter hasMore: Is true if there are additional team members that have
/// not been returned yet. An additional call to :route:`members/list/continue`
/// can retrieve them.
/// 
/// - returns: An initialized `DBXTEAMMembersListResult` instance.
/// 
- (nonnull instancetype)initWithMembers:(NSArray<DBXTEAMTeamMemberInfo *> * _Nonnull)members cursor:(NSString * _Nonnull)cursor hasMore:(NSNumber * _Nonnull)hasMore;

@end


/// 
/// The serialization class for the MembersListResult struct.
/// 
@interface DBXTEAMMembersListResultSerializer : NSObject 

/// 
/// Serializes `DBXTEAMMembersListResult` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMMembersListResult` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMMembersListResult` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMMembersListResult * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMMembersListResult` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMMembersListResult` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMMembersListResult` object.
/// 
+ (DBXTEAMMembersListResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end