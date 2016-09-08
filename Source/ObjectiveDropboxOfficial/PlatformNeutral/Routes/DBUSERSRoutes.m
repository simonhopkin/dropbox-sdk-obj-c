///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBUSERSRoutes.h"

@implementation DBUSERSRoutes

- (instancetype)init:(DBTransportClient *)client {
  self = [super init];
  if (self) {
    _client = client;
  }
  return self;
}

- (DBRpcTask *)getAccount:(NSString *)accountId {
  DBRoute *route = DBUSERSRouteObjects.DBUSERSGetAccount;
  DBUSERSGetAccountArg *arg = [[DBUSERSGetAccountArg alloc] initWithAccountId:accountId];
  return [self.client requestRpc:route arg:arg];
}

- (DBRpcTask *)getAccountBatch:(NSArray<NSString *> *)accountIds {
  DBRoute *route = DBUSERSRouteObjects.DBUSERSGetAccountBatch;
  DBUSERSGetAccountBatchArg *arg = [[DBUSERSGetAccountBatchArg alloc] initWithAccountIds:accountIds];
  return [self.client requestRpc:route arg:arg];
}

- (DBRpcTask *)getCurrentAccount {
  DBRoute *route = DBUSERSRouteObjects.DBUSERSGetCurrentAccount;
  return [self.client requestRpc:route arg:nil];
}

- (DBRpcTask *)getSpaceUsage {
  DBRoute *route = DBUSERSRouteObjects.DBUSERSGetSpaceUsage;
  return [self.client requestRpc:route arg:nil];
}

@end