//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDStoreNetwork, NSString, QuickActionModel, UIApplicationShortcutItem;

@interface QuickActionsManager : NSObject
{
    JDStoreNetwork *_network;
    NSString *_cacheFilePath;
    UIApplicationShortcutItem *_launchedShortcutItem;
    QuickActionModel *_quickActionModel;
}

+ (void)handleNotification:(id)arg1;
+ (void)load;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedQuickActionsManager;
@property(retain, nonatomic) QuickActionModel *quickActionModel; // @synthesize quickActionModel=_quickActionModel;
@property(retain, nonatomic) UIApplicationShortcutItem *launchedShortcutItem; // @synthesize launchedShortcutItem=_launchedShortcutItem;
- (void).cxx_destruct;
- (void)requestConfigInfoFinished:(id)arg1;
- (void)didDismissCurrentViewController:(CDUnknownBlockType)arg1;
- (id)currentNavigationController;
- (id)cacheFilePath;
- (id)itemModelWithType:(id)arg1;
- (void)requestConfigInfo;
- (_Bool)handleShortcutItem:(id)arg1;
- (void)makeupShortcuts;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

