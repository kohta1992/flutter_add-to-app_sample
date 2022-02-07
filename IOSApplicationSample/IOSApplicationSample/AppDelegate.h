//
//  AppDelegate.h
//  IOSApplicationSample
//

#import <UIKit/UIKit.h>
@import Flutter;    // Added

@interface AppDelegate : FlutterAppDelegate   // Changed
@property (nonatomic,strong) FlutterEngine *flutterEngine;   // Added

@end

