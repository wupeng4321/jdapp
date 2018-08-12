//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol JDWebViewJSBridgeProtocol <NSObject>

@optional
- (void)configXView:(NSString *)arg1;
- (void)configCloseButton:(NSDictionary *)arg1;
- (void)close;
- (void)bindSocialAccountWithJsonString:(NSString *)arg1 completeHandler:(void (^)(NSString *))arg2;
- (void)notifyMessageToNative:(NSString *)arg1 completeHandler:(void (^)(NSString *))arg2;
- (void)openWeChatPay:(NSString *)arg1 jsCallBack:(NSString *)arg2 completeHandler:(void (^)(NSString *))arg3;
- (void)getPhoneBasicInfo:(NSString *)arg1 completeHandler:(void (^)(NSString *))arg2;
- (void)sourceIsReady:(NSString *)arg1;
- (void)getOpenDoorVideoPlayState:(NSString *)arg1 completeHandler:(void (^)(NSString *))arg2;
- (void)getNetWorkType:(NSString *)arg1 completeHandler:(void (^)(NSString *))arg2;
- (void)getNaviHeight:(NSString *)arg1 completeHandler:(void (^)(NSString *))arg2;
- (void)getFingerInfo:(NSString *)arg1 completeHandler:(void (^)(NSString *))arg2;
- (void)signWeixinPay:(NSString *)arg1 completeHandler:(void (^)(NSString *))arg2;
- (void)closeLiveSWindow;
- (void)requestIsvToken:(NSDictionary *)arg1 jsCallBack:(NSString *)arg2 completeHandler:(void (^)(NSString *))arg3;
- (void)requestLogin:(NSString *)arg1 completeHandler:(void (^)(NSString *))arg2;
- (void)isAppLogin:(NSString *)arg1 completeHandler:(void (^)(NSString *))arg2;
- (void)getAllRemindersWithTimeSpanAndBusinessType:(NSString *)arg1 completeHandler:(void (^)(NSString *))arg2;
- (void)checkReminder:(NSString *)arg1 completeHandler:(void (^)(NSString *))arg2;
- (void)removeReminder:(NSString *)arg1 completeHandler:(void (^)(NSString *))arg2;
- (void)addReminder:(NSString *)arg1 completeHandler:(void (^)(NSString *))arg2;
- (void)saveImageToPhoteAlbum:(NSString *)arg1 completeHandler:(void (^)(NSString *))arg2;
- (void)callRouterModuleWithParams:(NSDictionary *)arg1 completeHandler:(void (^)(NSString *))arg2;
- (void)configNavigationBar:(NSDictionary *)arg1;
- (void)jdpaysdk_pop;
- (void)jdpaysdk_pay:(NSDictionary *)arg1;
- (void)showNativeUpload;
- (void)showNativeBarcodeScan:(NSString *)arg1 completeHandler:(void (^)(NSString *))arg2;
- (void)rememberKuaiDiCallbackName:(NSString *)arg1;
- (void)openBarcodeScanForKuaiDiDanHao;
- (void)enableTransparent:(NSDictionary *)arg1;
- (void)showCloseBtn;
- (void)setTitle:(NSString *)arg1;
- (void)setNaviBackground:(NSString *)arg1;
- (void)configBtnSince610:(NSString *)arg1;
- (void)configBtn:(NSString *)arg1;
@end

