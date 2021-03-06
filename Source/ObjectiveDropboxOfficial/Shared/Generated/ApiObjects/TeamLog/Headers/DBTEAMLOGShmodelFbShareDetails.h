///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGNonTeamMemberLogInfo;
@class DBTEAMLOGShmodelFbShareDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ShmodelFbShareDetails` struct.
///
/// Shared a link with Facebook users.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGShmodelFbShareDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Sharing non member recipients.
@property (nonatomic, readonly) NSArray<DBTEAMLOGNonTeamMemberLogInfo *> *sharingNonMemberRecipients;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param sharingNonMemberRecipients Sharing non member recipients.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharingNonMemberRecipients:
    (NSArray<DBTEAMLOGNonTeamMemberLogInfo *> *)sharingNonMemberRecipients;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ShmodelFbShareDetails` struct.
///
@interface DBTEAMLOGShmodelFbShareDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGShmodelFbShareDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGShmodelFbShareDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGShmodelFbShareDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGShmodelFbShareDetails *)instance;

///
/// Deserializes `DBTEAMLOGShmodelFbShareDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGShmodelFbShareDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGShmodelFbShareDetails` object.
///
+ (DBTEAMLOGShmodelFbShareDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
