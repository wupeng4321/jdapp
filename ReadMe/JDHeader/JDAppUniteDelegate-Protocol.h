//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol JDAppUniteDelegate <NSObject>
- (void)notifyMessageToNative:(NSString *)arg1;
- (void)openWeChatPay:(NSString *)arg1 jsCallBack:(NSString *)arg2;
- (void)callRouterModuleWithParams:(NSString *)arg1;
- (void)getPhoneBasicInfo:(NSString *)arg1;
- (void)sourceIsReady:(NSString *)arg1;
- (void)getOpenDoorVideoPlayState:(NSString *)arg1;
- (void)getNetWorkType:(NSString *)arg1;
- (void)getFingerInfo:(NSString *)arg1;
- (void)signWeixinPay:(NSString *)arg1;
- (void)closeLiveSWindow;
- (void)requestIsvToken:(NSString *)arg1 jsCallBack:(NSString *)arg2;
- (void)requestLogin:(NSString *)arg1;
- (void)isAppLogin:(NSString *)arg1;
- (void)getAllRemindersWithTimeSpanAndBusinessType:(NSString *)arg1;
- (void)checkReminder:(NSString *)arg1;
- (void)removeReminder:(NSString *)arg1;
- (void)addReminder:(NSString *)arg1;
- (void)saveImageToPhoteAlbum:(NSString *)arg1;
@end

