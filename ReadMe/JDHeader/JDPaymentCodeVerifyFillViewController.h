//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPFullScreenScrollViewController.h"

#import "JDPDatePickerViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class CBPInputBox, JDPCertTypeInputBox, JDPaymentCodeAuthVerifyReturnModel, JDPaymentCodeVerifyFillViewParam, NSMutableArray, NSString, UIButton, UILabel, UITextField;

@interface JDPaymentCodeVerifyFillViewController : JDPFullScreenScrollViewController <JDPDatePickerViewDelegate, UIScrollViewDelegate>
{
    JDPaymentCodeAuthVerifyReturnModel *_paramModel;
    JDPaymentCodeVerifyFillViewParam *_viewParam;
    double _originY;
    NSMutableArray *_inputArray;
    CBPInputBox *_cardTypeInputBox;
    CBPInputBox *_cardNumberInputBox;
    CBPInputBox *_cardDateInputBox;
    CBPInputBox *_cardCVV2InputBox;
    JDPCertTypeInputBox *_certTypeInputBox;
    CBPInputBox *_certNameInputBox;
    CBPInputBox *_phoneNumberInputBox;
    UIButton *_nextButton;
    UILabel *_protocalLabel;
    UITextField *_activeTextField;
    UIButton *_supportButton;
    NSString *_cardNumStr;
    NSString *_certNumStr;
    NSString *_nameStr;
    NSString *_telephoneStr;
}

@property(copy, nonatomic) NSString *telephoneStr; // @synthesize telephoneStr=_telephoneStr;
@property(copy, nonatomic) NSString *nameStr; // @synthesize nameStr=_nameStr;
@property(copy, nonatomic) NSString *certNumStr; // @synthesize certNumStr=_certNumStr;
@property(copy, nonatomic) NSString *cardNumStr; // @synthesize cardNumStr=_cardNumStr;
@property(retain, nonatomic) UIButton *supportButton; // @synthesize supportButton=_supportButton;
@property(nonatomic) __weak UITextField *activeTextField; // @synthesize activeTextField=_activeTextField;
@property(retain, nonatomic) UILabel *protocalLabel; // @synthesize protocalLabel=_protocalLabel;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) CBPInputBox *phoneNumberInputBox; // @synthesize phoneNumberInputBox=_phoneNumberInputBox;
@property(retain, nonatomic) CBPInputBox *certNameInputBox; // @synthesize certNameInputBox=_certNameInputBox;
@property(retain, nonatomic) JDPCertTypeInputBox *certTypeInputBox; // @synthesize certTypeInputBox=_certTypeInputBox;
@property(retain, nonatomic) CBPInputBox *cardCVV2InputBox; // @synthesize cardCVV2InputBox=_cardCVV2InputBox;
@property(retain, nonatomic) CBPInputBox *cardDateInputBox; // @synthesize cardDateInputBox=_cardDateInputBox;
@property(retain, nonatomic) CBPInputBox *cardNumberInputBox; // @synthesize cardNumberInputBox=_cardNumberInputBox;
@property(retain, nonatomic) CBPInputBox *cardTypeInputBox; // @synthesize cardTypeInputBox=_cardTypeInputBox;
@property(retain, nonatomic) NSMutableArray *inputArray; // @synthesize inputArray=_inputArray;
@property(nonatomic) double originY; // @synthesize originY=_originY;
@property(retain, nonatomic) JDPaymentCodeVerifyFillViewParam *viewParam; // @synthesize viewParam=_viewParam;
@property(retain, nonatomic) JDPaymentCodeAuthVerifyReturnModel *paramModel; // @synthesize paramModel=_paramModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)private_keyboardWillChangeFrame:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)private_aucSendMsg;
- (void)verifyCardNo;
- (void)datePickerView:(id)arg1 confirmButtonAction:(id)arg2;
- (void)datePickerView:(id)arg1 cancelButtonAction:(id)arg2;
- (void)cb_nextButtonAction:(id)arg1;
- (void)cb_supportButtonAction:(id)arg1;
- (void)cb_createSupportButton;
- (void)cb_createNextButton;
- (void)cb_protocalButtonAction:(id)arg1;
- (void)cb_createProtocalView;
- (void)jdp_textFieldDidBeginEdit:(id)arg1;
- (void)cb_textFieldEditingChangedAction:(id)arg1;
- (void)cb_createPhoneNumberInputBox;
- (void)cb_createCardCVV2InputBox;
- (void)cb_createCardDateInputBox;
- (void)cb_createCardNumberInputBox;
- (void)cb_createCardTypeInputBox;
- (void)private_createTipTextView;
- (void)private_BtnStatus;
- (void)cb_setupSelf;
- (void)cb_createScrollView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)navBarLeftButtonAction:(id)arg1;
- (id)initWithParam:(id)arg1 builder:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

