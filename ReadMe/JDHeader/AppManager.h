//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JDModalViewDelegate-Protocol.h"

@class JDEmbeddedMHandler, JDStoreNetwork, NSDictionary, NSMutableDictionary, NSString, VersionInfoModel;

@interface AppManager : NSObject <JDModalViewDelegate>
{
    NSMutableDictionary *appContext;
    id progressTarget_;
    SEL progressAction_;
    id target_;
    SEL action_;
    JDStoreNetwork *_network;
    _Bool _launched;
    _Bool _needShowUpgradeView;
    _Bool _shownUpgradeView;
    VersionInfoModel *_currentVersionInfo;
    NSMutableDictionary *_pagePushControlConfigDict;
    NSDictionary *_serverConfig;
    NSString *_isHttpsOpenSt;
    JDEmbeddedMHandler *_embeddedMHandler;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedAppManager;
@property(nonatomic) _Bool shownUpgradeView; // @synthesize shownUpgradeView=_shownUpgradeView;
@property(retain, nonatomic) JDEmbeddedMHandler *embeddedMHandler; // @synthesize embeddedMHandler=_embeddedMHandler;
@property(copy, nonatomic) NSString *isHttpsOpenSt; // @synthesize isHttpsOpenSt=_isHttpsOpenSt;
@property(retain) NSDictionary *serverConfig; // @synthesize serverConfig=_serverConfig;
@property(nonatomic) _Bool needShowUpgradeView; // @synthesize needShowUpgradeView=_needShowUpgradeView;
@property(retain, nonatomic) NSMutableDictionary *pagePushControlConfigDict; // @synthesize pagePushControlConfigDict=_pagePushControlConfigDict;
@property(retain, nonatomic) VersionInfoModel *currentVersionInfo; // @synthesize currentVersionInfo=_currentVersionInfo;
@property(retain, nonatomic) NSMutableDictionary *appContext; // @synthesize appContext;
- (void)updateServerConfig:(id)arg1;
- (void)reqeustABTest;
- (id)getMainFunctionIdWithFunIdKey:(id)arg1;
- (id)getABTestConfig;
- (void)serverConfigRequest:(int)arg1;
- (void)reqeustServerConfigSingle;
- (void)didFinishResponseWithRequestSetup:(id)arg1 components:(id)arg2 msg:(id)arg3;
- (void)storeAppVersion;
- (void)useAppTime;
- (void)saveEnterForeground;
- (void)applicationDidEnterForeground;
- (void)saveEnterBackgroundTime;
- (void)requestActiveDevice;
- (void)configLocalVCCount;
- (id)getIndexWithFunctionId:(id)arg1;
- (void)didTapModalView:(id)arg1;
- (id)getServerConfig;
- (id)getKey;
- (void)runApp;
- (void)requestSetupWithAppSetupType:(int)arg1;
- (id)getParamsWithAppSetupType:(int)arg1;
- (void)runAppWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setProgressTarget:(id)arg1 progressAction:(SEL)arg2;
- (_Bool)checkVersion:(_Bool)arg1;
- (void)showNewUpgradeInfoIfNeed;
- (int)appOpenCount;
- (void)recordAppOpenCount;
- (void)recordAppRunCount;
- (_Bool)isLaunched;
- (void)didFinishLaunching:(_Bool)arg1;
- (id)getTopViewControllerForLoadingOld;
- (id)_topViewControllerForLoading:(id)arg1;
- (id)getTopViewControllerForLoading;
- (id)assignDailLoagViewController:(id)arg1;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 webView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)handleOpenURL:(id)arg1 webView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)handleOpenURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)handleOpenURL:(id)arg1 sourceApplication:(id)arg2;
- (_Bool)handleOpenURL:(id)arg1;
- (void)clearkParams;
- (id)getkParams;
- (void)setkParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

