//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayModule.h"

#import "JDPayMemberCodeVerifyProtocol-Protocol.h"

@class NSString;

@interface JDPayMemberCode : JDPayModule <JDPayMemberCodeVerifyProtocol>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)mainModule;
- (void)handeSmsBiz;
- (void)cancelRequest;
- (void)jdp_removeScreenShortNotification;
- (void)openURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canOpenURL:(id)arg1 options:(id)arg2;
- (void)closeMemberCodeSDK;
- (void)signAgreementWithParam:(id)arg1;
- (void)private_startFingerprintPayWithResultDict:(id)arg1;
- (void)private_VerifySMSViewControllerWithResultDict:(id)arg1;
- (void)private_showInuptViewControllerWithResultDict:(id)arg1;
- (void)verifyPayWithFingerData:(id)arg1 resultDict:(id)arg2;
- (void)memberCodeForgetPassword:(id)arg1;
- (void)memberPayVerifySuccessed;
- (void)memberVerifyControllerFailedWithModel:(id)arg1;
- (void)memberVerifyControllerSuccessed:(id)arg1 controller:(id)arg2;
- (void)memberVerifyControllerCanceled:(id)arg1;
- (void)receiveMemberCodePushPayResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopMemberCodeWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshMemberCodeWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)private_pushCheckPWDVCTip:(id)arg1;
- (void)private_pushCheckSMSVC;
- (void)openWithFingerData:(id)arg1 resultDict:(id)arg2;
- (void)private_startPayRequestWithFingerprintData:(id)arg1 type:(long long)arg2 resultDict:(id)arg3;
- (void)private_checkFringerToOpen;
- (void)openMemberCodeWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)verifyMemberCodeCompletion:(CDUnknownBlockType)arg1;
- (void)getEntranceWithParam:(id)arg1 hanleMemberCodeOpenStatus:(CDUnknownBlockType)arg2 payVerify:(CDUnknownBlockType)arg3 handleAlertUrl:(CDUnknownBlockType)arg4 closeMemberCode:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

