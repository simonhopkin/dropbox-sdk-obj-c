///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBTeamBaseClient.h"
#import "DBTEAMTeamAuthRoutes.h"
#import "DBTransportClientProtocol.h"

@implementation DBTeamBaseClient

- (instancetype)initWithTransportClient:(id<DBTransportClient>)client {
  self = [super init];
  if (self) {
    _transportClient = client;
    _teamRoutes = [[DBTEAMTeamAuthRoutes alloc] init:client];
  }
  return self;
}
@end
