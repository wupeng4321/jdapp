//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JDUIUserManagerModule : NSObject
{
}

+ (void)applicationWillEnterForeground:(id)arg1;
+ (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
+ (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
+ (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
+ (id)routerHandle_JDUIUserManagerModule_get_kUserCancelLoginNotification:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_get_kUserDidLogoutNotification:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_get_JD_QQ_URL_SCHEMA:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_get_UserLoginNotification:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_loginSdkWithScannedPcTvToken:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_startBonusFunction:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_getBounsFunctionStatus:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_QQHandleOpenURL:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_sendtoQQzone:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_sendtoQQ:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_WXBindWithPostNotificationName:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_QQBindWithPostNotificationName:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_QQLoginWithPostNotificationName:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_refreshServiceConfig:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_removeAllActions:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_logout:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_checkUserLogin:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_loginOnlenReport:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_goToFaceLoginSetting:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_thirdPartyLoginWithURL:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_launchWithOptions:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_needLoginAnimation:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_checkSdkAutoLogin:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_needRegisterWithRegisterUndo:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_needLoginWithRegisterUndo:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_loginCookieOnlyForSafeMode:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_logoutAfterCheck:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_getAccount:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_getUserEnPin:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_getUserA2String:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_getLoginCookieString:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_getUserPin:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_hasUserLogined:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDUIUserManagerModule_init:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)checkAndInit;
+ (id)getUserManager;

@end

