//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBPaymentBaseViewController.h"

#import "CBCaptchaViewDelegate-Protocol.h"
#import "JDPCheckTipViewDelegate-Protocol.h"

@class CBCaptchaView, CBPaymentCheckViewParamModel, JDPCheckTipView, NSString, UIButton, UILabel;

@interface CBPaymentCheckViewController : CBPaymentBaseViewController <CBCaptchaViewDelegate, JDPCheckTipViewDelegate>
{
    CBCaptchaView *_captchaView;
    CBPaymentCheckViewParamModel *_paramModel;
    double _checkViewOriginY;
    UILabel *_tipLabel;
    UIButton *_confirmButton;
    UIButton *_captchaButton;
    JDPCheckTipView *_checkView;
}

@property(retain, nonatomic) JDPCheckTipView *checkView; // @synthesize checkView=_checkView;
@property(retain, nonatomic) UIButton *captchaButton; // @synthesize captchaButton=_captchaButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) double checkViewOriginY; // @synthesize checkViewOriginY=_checkViewOriginY;
@property(retain, nonatomic) CBPaymentCheckViewParamModel *paramModel; // @synthesize paramModel=_paramModel;
@property(retain, nonatomic) CBCaptchaView *captchaView; // @synthesize captchaView=_captchaView;
- (void).cxx_destruct;
- (void)cb_inputAgain;
- (void)btQuickPay;
- (void)btQuickPayReSendSMS;
- (void)sendSMS_Internally;
- (void)cb_passwordButtonAction:(id)arg1;
- (void)hideCheckView;
- (void)didSelectToPhoneNumber;
- (void)sendSMS_Open;
- (void)fetchCaptcha;
- (void)cb_confirmButtonAction:(id)arg1;
- (void)cb_createConfirmBotton;
- (void)cb_textFieldEditingChangedAction:(id)arg1;
- (void)cb_createCaptchaView;
- (void)cb_createCaptchaButton;
- (void)cb_createTipLabel;
- (void)cb_setupSelf;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithParamModel:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)cb_rightButtonAction:(id)arg1;
- (void)cb_leftButtonAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
