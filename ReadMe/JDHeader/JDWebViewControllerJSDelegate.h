//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JDWebViewJSBridgeProtocol-Protocol.h"

@class JDSHNavItemView, JDWebViewBindSocialAccount, JDWebViewISVToken, JDWebViewSaveImageToPhotoAlbum, JDWebViewSetRemindInCalendar, NSString, UIViewController;
@protocol OS_dispatch_queue;

@interface JDWebViewControllerJSDelegate : NSObject <JDWebViewJSBridgeProtocol>
{
    UIViewController *_webViewController;
    JDWebViewBindSocialAccount *_socialAccount;
    JDWebViewSaveImageToPhotoAlbum *_imageSaver;
    JDWebViewSetRemindInCalendar *_calendarRemind;
    JDSHNavItemView *_webViewNavi;
    JDWebViewISVToken *_isvToken;
    unsigned long long _networkStatus;
    CDUnknownBlockType _payFinishedHandler;
    CDUnknownBlockType _miniProgramFinishedHandler;
    NSString *_payCallBackName;
    NSString *_miniProgramCallBackName;
    NSString *_platform;
    NSObject<OS_dispatch_queue> *_mjQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mjQueue; // @synthesize mjQueue=_mjQueue;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *miniProgramCallBackName; // @synthesize miniProgramCallBackName=_miniProgramCallBackName;
@property(copy, nonatomic) NSString *payCallBackName; // @synthesize payCallBackName=_payCallBackName;
@property(copy, nonatomic) CDUnknownBlockType miniProgramFinishedHandler; // @synthesize miniProgramFinishedHandler=_miniProgramFinishedHandler;
@property(copy, nonatomic) CDUnknownBlockType payFinishedHandler; // @synthesize payFinishedHandler=_payFinishedHandler;
@property(nonatomic) unsigned long long networkStatus; // @synthesize networkStatus=_networkStatus;
@property(retain, nonatomic) JDWebViewISVToken *isvToken; // @synthesize isvToken=_isvToken;
@property(retain, nonatomic) JDSHNavItemView *webViewNavi; // @synthesize webViewNavi=_webViewNavi;
@property(retain, nonatomic) JDWebViewSetRemindInCalendar *calendarRemind; // @synthesize calendarRemind=_calendarRemind;
@property(retain, nonatomic) JDWebViewSaveImageToPhotoAlbum *imageSaver; // @synthesize imageSaver=_imageSaver;
@property(retain, nonatomic) JDWebViewBindSocialAccount *socialAccount; // @synthesize socialAccount=_socialAccount;
@property(nonatomic) __weak UIViewController *webViewController; // @synthesize webViewController=_webViewController;
- (void).cxx_destruct;
- (_Bool)isWXSupportApi;
- (_Bool)isWXInstalled;
- (void)configXView:(id)arg1;
- (void)configCloseButton:(id)arg1;
- (void)close;
- (void)jdpaysdk_pop;
- (void)jdpaysdk_pay:(id)arg1;
- (void)configNavigationBar:(id)arg1;
- (void)showNativeUpload;
- (void)rememberKuaiDiCallbackName:(id)arg1;
- (void)openBarcodeScanForKuaiDiDanHao;
- (void)showNativeBarcodeScan:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)enableTransparent:(id)arg1;
- (void)showCloseBtn;
- (void)setTitle:(id)arg1;
- (void)setNaviBackground:(id)arg1;
- (void)configBtnSince610:(id)arg1;
- (void)configBtn:(id)arg1;
- (void)notifyMessageToNative:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)payFinishedCallBackWithStatus:(id)arg1 Data:(id)arg2 Msg:(id)arg3;
- (void)miniProgramBackedCallBackWithStatus:(id)arg1 Data:(id)arg2 Msg:(id)arg3;
- (void)p_miniProgramBacked:(id)arg1;
- (void)p_payFinished:(id)arg1;
- (void)openWeChatPay:(id)arg1 jsCallBack:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (void)getInfoOnSpecificQueueWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getPhoneBasicInfo:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)sourceIsReady:(id)arg1;
- (void)closeLiveSWindow;
- (void)getOpenDoorVideoPlayState:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (id)getNetWorkString;
- (void)reachabilityChanged:(id)arg1;
- (void)getNetWorkType:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)getNaviHeight:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)getFingerInfo:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)signWeixinPay:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)requestIsvToken:(id)arg1 jsCallBack:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (void)requestLogin:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)isAppLogin:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)getAllRemindersWithTimeSpanAndBusinessType:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)checkReminder:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)removeReminder:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)addReminder:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)saveImageToPhoteAlbum:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)p_socialAccountBind:(id)arg1;
- (void)bindSocialAccountWithJsonString:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
