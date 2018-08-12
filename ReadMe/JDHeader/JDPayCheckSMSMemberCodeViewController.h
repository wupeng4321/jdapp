//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPPartBaseViewController.h"

#import "CBCaptchaViewDelegate-Protocol.h"
#import "JDPAttributedLabelDelegate-Protocol.h"

@class CBCaptchaView, JDPAttributedLabel, NSDictionary, NSString, UIButton, UIImageView;
@protocol JDPayMemberCodeVerifyProtocol;

@interface JDPayCheckSMSMemberCodeViewController : JDPPartBaseViewController <CBCaptchaViewDelegate, JDPAttributedLabelDelegate>
{
    NSString *_message;
    id <JDPayMemberCodeVerifyProtocol> _delegate;
    NSDictionary *_params;
    UIImageView *_bgView;
    UIButton *_confirmButton;
    NSString *_mobilePwd;
    NSString *_PCPwd;
    NSString *_fingerPrintPwd;
    NSString *_channelId;
    CBCaptchaView *_captchaView;
    UIButton *_canNotReceiveButton;
    JDPAttributedLabel *_tipLabel;
}

@property(retain, nonatomic) JDPAttributedLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIButton *canNotReceiveButton; // @synthesize canNotReceiveButton=_canNotReceiveButton;
@property(retain, nonatomic) CBCaptchaView *captchaView; // @synthesize captchaView=_captchaView;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(copy, nonatomic) NSString *fingerPrintPwd; // @synthesize fingerPrintPwd=_fingerPrintPwd;
@property(copy, nonatomic) NSString *PCPwd; // @synthesize PCPwd=_PCPwd;
@property(copy, nonatomic) NSString *mobilePwd; // @synthesize mobilePwd=_mobilePwd;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) __weak id <JDPayMemberCodeVerifyProtocol> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)cb_inputAgain;
- (void)endLoadingWithErrorMessage:(id)arg1;
- (void)startLoading;
- (void)repeat_SMS;
- (void)fetchCaptcha;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)jdp_cannotReceiveButtonClick:(id)arg1;
- (void)paycode_verify;
- (void)jdp_confirmButtonClick:(id)arg1;
- (void)cb_createConfirmBotton;
- (void)cb_textFieldEditingChangedAction:(id)arg1;
- (void)cb_createCaptchaView;
- (void)cb_createTipLabel;
- (void)cb_setupSelf;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)cb_leftButtonAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

