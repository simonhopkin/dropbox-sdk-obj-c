///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxStoneSerializers.h"

@class DbxSharingListSharedLinksResult;
@class DbxSharingSharedLinkMetadata;

/// 
/// The DbxSharingListSharedLinksResult struct.
/// 
@interface DbxSharingListSharedLinksResult : NSObject <DbxSerializable> 

/// Shared links applicable to the path argument.
@property (nonatomic) NSArray<DbxSharingSharedLinkMetadata *> * _Nonnull links;
/// Is true if there are additional shared links that have not been returned
/// yet. Pass the cursor into listSharedLinks to retrieve them.
@property (nonatomic, copy) NSNumber * _Nonnull hasMore;
/// Pass the cursor into listSharedLinks to obtain the additional links. Cursor
/// is returned only if no path is given or the path is empty.
@property (nonatomic, copy) NSString * _Nullable cursor;

- (nonnull instancetype)initWithLinks:(NSArray<DbxSharingSharedLinkMetadata *> * _Nonnull)links hasMore:(NSNumber * _Nonnull)hasMore cursor:(NSString * _Nullable)cursor;

- (nonnull instancetype)initWithLinks:(NSArray<DbxSharingSharedLinkMetadata *> * _Nonnull)links hasMore:(NSNumber * _Nonnull)hasMore;

+ (NSDictionary * _Nonnull)serialize:(id _Nonnull)obj;

+ (id _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

- (NSString * _Nonnull)description;

@end


@interface DbxSharingListSharedLinksResultSerializer : NSObject 

+ (NSDictionary * _Nonnull)serialize:(DbxSharingListSharedLinksResult * _Nonnull)obj;

+ (DbxSharingListSharedLinksResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end