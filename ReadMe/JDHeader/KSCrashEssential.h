//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KSCrashEssential : NSObject
{
}

+ (void)p_storeEventHistory:(id)arg1;
+ (void)markBackgroundLaunch;
+ (void)markWillExit;
+ (void)markWillTerminate;
+ (void)markDidReceiveMemoryWarning;
+ (void)markWillResignActive;
+ (void)markDidBecomeActive;
+ (void)markWillEnterForeground;
+ (void)markDidEnterBackground;
+ (void)p_commonInitEventHistory;
+ (void)p_storeWebviewUrlHistory:(id)arg1;
+ (void)markWebViewUrl:(id)arg1 andStateStr:(id)arg2;
+ (void)p_commonInitWebviewUrlHistory;
+ (void)p_storeDepthOfCurrentNaviVC:(id)arg1;
+ (void)markCurrentNavDepth:(long long)arg1;
+ (void)p_storeNavigationHistory:(id)arg1;
+ (void)markVcHistory:(Class)arg1 andContentStr:(id)arg2;
+ (void)p_commonInitVchistoryArr;
+ (void)p_storeWebViewContentOffsetY:(id)arg1;
+ (void)markWebViewContentOffsetY:(float)arg1;
+ (void)clearAllOOMData;
+ (id)essentialRecord;
+ (_Bool)rebootOrOSUpgradeOrAppUpgradeSinceLastLaunch;
+ (void)markLaunch;
+ (id)p_eventHistory;
+ (id)p_webViewUrlHistory;
+ (id)p_vcHistory;
+ (void)p_appendKscrashUserInfo;
+ (id)convertDateToString:(id)arg1;
+ (id)currentTimeString;

@end

