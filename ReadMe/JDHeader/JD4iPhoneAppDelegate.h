//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIApplicationDelegate-Protocol.h"
#import "UNUserNotificationCenterDelegate-Protocol.h"

@class NSDate, NSString, UIViewController, UIWindow;
@protocol OS_dispatch_queue;

@interface JD4iPhoneAppDelegate : NSObject <UIApplicationDelegate, UNUserNotificationCenterDelegate>
{
    UIWindow *window;
    UIViewController *_tempViewController;
    _Bool canHandleOpenApp_;
    _Bool _alreadyBackgrounded;
    NSObject<OS_dispatch_queue> *_serialSinaRegisterQueue;
    NSDate *_appLaunchTime;
    NSDate *_appEnterBackgroundTime;
}

@property(retain, nonatomic) NSDate *appEnterBackgroundTime; // @synthesize appEnterBackgroundTime=_appEnterBackgroundTime;
@property(retain, nonatomic) NSDate *appLaunchTime; // @synthesize appLaunchTime=_appLaunchTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialSinaRegisterQueue; // @synthesize serialSinaRegisterQueue=_serialSinaRegisterQueue;
@property(nonatomic) _Bool alreadyBackgrounded; // @synthesize alreadyBackgrounded=_alreadyBackgrounded;
@property(nonatomic) _Bool canHandleOpenApp; // @synthesize canHandleOpenApp=canHandleOpenApp_;
@property(retain, nonatomic) UIWindow *window; // @synthesize window;
- (CDUnknownBlockType)sTabBarBlock2;
- (CDUnknownBlockType)sTabBarBlock1;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)debugShowNotification:(id)arg1;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)viewShowController1:(id)arg1 didTapTabBarIndex:(long long)arg2 lastIndex:(long long)arg3 isTap:(_Bool)arg4;
- (_Bool)viewShowController1:(id)arg1 shouldPopToRootViewcontrollerIndex:(long long)arg2 isTap:(_Bool)arg3;
- (void)oldAddressCacheTransfer;
- (void)configurePerformsMonitor;
- (void)removeLocalNotificationOfOlderVersion;
- (void)configureCrashTrack;
- (void)initJDUIUserManagerModule;
- (id)initControllers;
- (void)tabBarMTAForABPlan;
- (id)supportConfigForBPlan;
- (id)supportConfigForAPlan;
- (id)supportConfig;
- (id)defaultConfig;
- (long long)setTabBarSelectedIndexWithTabBarKey:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 willChangeStatusBarFrame:(struct CGRect)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (long long)privateShowAdEnabled;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)loadFontFileToMemory;
- (void)buildTabBarController;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)didFinishLaunchingWithOptions:(id)arg1;
- (void)didFinishSetup;
- (void)GPSNot:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

