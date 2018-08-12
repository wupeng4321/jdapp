//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBPaymentPayBaseViewController.h"

#import "CBCaptchaViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class CBCaptchaView, CBPaymentPayCaptchaViewParamModel, JDPCheckTipView, NSString, UIButton, UILabel;

@interface CBPaymentPayCaptchaViewController : CBPaymentPayBaseViewController <CBCaptchaViewDelegate, UIScrollViewDelegate>
{
    CBCaptchaView *_captchaView;
    CBPaymentPayCaptchaViewParamModel *_paramModel;
    UILabel *_payDescLabel;
    UILabel *_payAmountLabel;
    UILabel *_payTypeLabel;
    UILabel *_payDiscountLabel;
    UIButton *_confirmButton;
    UIButton *_captchaButton;
    JDPCheckTipView *_checkView;
    UILabel *_tipLabel;
}

@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) JDPCheckTipView *checkView; // @synthesize checkView=_checkView;
@property(retain, nonatomic) UIButton *captchaButton; // @synthesize captchaButton=_captchaButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *payDiscountLabel; // @synthesize payDiscountLabel=_payDiscountLabel;
@property(retain, nonatomic) UILabel *payTypeLabel; // @synthesize payTypeLabel=_payTypeLabel;
@property(retain, nonatomic) UILabel *payAmountLabel; // @synthesize payAmountLabel=_payAmountLabel;
@property(retain, nonatomic) UILabel *payDescLabel; // @synthesize payDescLabel=_payDescLabel;
@property(retain, nonatomic) CBPaymentPayCaptchaViewParamModel *paramModel; // @synthesize paramModel=_paramModel;
@property(retain, nonatomic) CBCaptchaView *captchaView; // @synthesize captchaView=_captchaView;
- (void).cxx_destruct;
- (void)hideCheckView;
- (void)didSelectToPhoneNumber;
- (void)cb_passwordButtonAction:(id)arg1;
- (void)private_keyboardWillShow:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)cb_inputAgain;
- (void)sendSMS_Internally;
- (void)sendSMS_Open;
- (void)fetchCaptcha;
- (void)didReceiveMemoryWarning;
- (void)private_pay;
- (void)cb_confirmButtonAction:(id)arg1;
- (void)cb_createConfirmBotton;
- (void)cb_textFieldEditingChangedAction:(id)arg1;
- (void)cb_createCaptchaView;
- (void)cb_createCaptchaButton;
- (void)private_createTipLabel;
- (void)cb_createMarketingView;
- (void)cb_createPayAmountLabel;
- (void)private_createPayDescLabel;
- (void)cb_createScrollView;
- (void)cb_setupSelf;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithParamModel:(id)arg1;
- (void)navBarLeftButtonAction:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
