//
//  ViewController.h
//  TestObjectiveDropbox_OSX
//
//  Copyright © 2016 Dropbox. All rights reserved.
//

#import <Cocoa/Cocoa.h>

typedef NS_ENUM(NSInteger, ApiAppPermissionType) {
  FullDropbox,
  TeamMemberFileAccess,
  TeamMemberManagement,
};

/// Toggle this variable depending on which set of tests you are running.
static ApiAppPermissionType appPermission = (ApiAppPermissionType)TeamMemberFileAccess;

@interface ViewController : NSViewController

- (void)checkButtons;

@end
