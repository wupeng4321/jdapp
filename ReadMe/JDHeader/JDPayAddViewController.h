//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBPaymentPayBaseViewController.h"

#import "JDPDatePickerViewDelegate-Protocol.h"
#import "JDPPickerViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class CBPIDCardNumberInputBox, CBPInputBox, CBPUserNameInputBox, CBPaymentPayFillViewParamModel, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITextField, UIView;

@interface JDPayAddViewController : CBPaymentPayBaseViewController <UIScrollViewDelegate, JDPDatePickerViewDelegate, UITextFieldDelegate, JDPPickerViewDelegate>
{
    _Bool _certNameHasChanged;
    CDUnknownBlockType _returnBlock;
    UIImageView *_processImageView;
    UILabel *_tipLabel;
    CBPInputBox *_cardNumberInputBox;
    CBPUserNameInputBox *_cardNameInputBox;
    UIButton *_supportButton;
    UIButton *_checkButton;
    UIButton *_nextButton;
    CBPInputBox *_phoneNumberInputBox;
    UIImageView *_cardImage;
    UILabel *_cardTypeLable;
    UIView *_cardInfoView;
    CBPInputBox *_cardDateInputBox;
    CBPInputBox *_cardCVV2InputBox;
    CBPaymentPayFillViewParamModel *_paramModel;
    UIView *_addCardView;
    UILabel *_safeTipLabel;
    CBPInputBox *_certNameInputBox;
    CBPInputBox *_certTypeInputBox;
    CBPIDCardNumberInputBox *_certNumberInputBox;
    UIButton *_agreeButton;
    UILabel *_protocalLabel;
    UIButton *_protocalButton;
    UILabel *_bankProtocalLabel;
    UIButton *_bankProtocalBtn;
    UITextField *_activeView;
    NSString *_certNumStr;
    NSString *_nameStr;
    NSString *_certNumStrCache;
    NSString *_nameStrCache;
    NSString *_telephoneStrCache;
    NSString *_cvv2StrCache;
    NSString *_cardDateCache;
    NSMutableArray *_inputArray;
    double _offsetY;
}

@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(retain, nonatomic) NSMutableArray *inputArray; // @synthesize inputArray=_inputArray;
@property(copy, nonatomic) NSString *cardDateCache; // @synthesize cardDateCache=_cardDateCache;
@property(copy, nonatomic) NSString *cvv2StrCache; // @synthesize cvv2StrCache=_cvv2StrCache;
@property(copy, nonatomic) NSString *telephoneStrCache; // @synthesize telephoneStrCache=_telephoneStrCache;
@property(copy, nonatomic) NSString *nameStrCache; // @synthesize nameStrCache=_nameStrCache;
@property(copy, nonatomic) NSString *certNumStrCache; // @synthesize certNumStrCache=_certNumStrCache;
@property(copy, nonatomic) NSString *nameStr; // @synthesize nameStr=_nameStr;
@property(copy, nonatomic) NSString *certNumStr; // @synthesize certNumStr=_certNumStr;
@property(retain, nonatomic) UITextField *activeView; // @synthesize activeView=_activeView;
@property(retain, nonatomic) UIButton *bankProtocalBtn; // @synthesize bankProtocalBtn=_bankProtocalBtn;
@property(retain, nonatomic) UILabel *bankProtocalLabel; // @synthesize bankProtocalLabel=_bankProtocalLabel;
@property(retain, nonatomic) UIButton *protocalButton; // @synthesize protocalButton=_protocalButton;
@property(retain, nonatomic) UILabel *protocalLabel; // @synthesize protocalLabel=_protocalLabel;
@property(retain, nonatomic) UIButton *agreeButton; // @synthesize agreeButton=_agreeButton;
@property(retain, nonatomic) CBPIDCardNumberInputBox *certNumberInputBox; // @synthesize certNumberInputBox=_certNumberInputBox;
@property(retain, nonatomic) CBPInputBox *certTypeInputBox; // @synthesize certTypeInputBox=_certTypeInputBox;
@property(retain, nonatomic) CBPInputBox *certNameInputBox; // @synthesize certNameInputBox=_certNameInputBox;
@property(retain, nonatomic) UILabel *safeTipLabel; // @synthesize safeTipLabel=_safeTipLabel;
@property(retain, nonatomic) UIView *addCardView; // @synthesize addCardView=_addCardView;
@property(retain, nonatomic) CBPaymentPayFillViewParamModel *paramModel; // @synthesize paramModel=_paramModel;
@property(retain, nonatomic) CBPInputBox *cardCVV2InputBox; // @synthesize cardCVV2InputBox=_cardCVV2InputBox;
@property(retain, nonatomic) CBPInputBox *cardDateInputBox; // @synthesize cardDateInputBox=_cardDateInputBox;
@property(retain, nonatomic) UIView *cardInfoView; // @synthesize cardInfoView=_cardInfoView;
@property(retain, nonatomic) UILabel *cardTypeLable; // @synthesize cardTypeLable=_cardTypeLable;
@property(retain, nonatomic) UIImageView *cardImage; // @synthesize cardImage=_cardImage;
@property(retain, nonatomic) CBPInputBox *phoneNumberInputBox; // @synthesize phoneNumberInputBox=_phoneNumberInputBox;
@property(nonatomic) _Bool certNameHasChanged; // @synthesize certNameHasChanged=_certNameHasChanged;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UIButton *checkButton; // @synthesize checkButton=_checkButton;
@property(retain, nonatomic) UIButton *supportButton; // @synthesize supportButton=_supportButton;
@property(retain, nonatomic) CBPUserNameInputBox *cardNameInputBox; // @synthesize cardNameInputBox=_cardNameInputBox;
@property(retain, nonatomic) CBPInputBox *cardNumberInputBox; // @synthesize cardNumberInputBox=_cardNumberInputBox;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *processImageView; // @synthesize processImageView=_processImageView;
@property(copy, nonatomic) CDUnknownBlockType returnBlock; // @synthesize returnBlock=_returnBlock;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pickerView:(id)arg1 didSelectValues:(id)arg2 keys:(id)arg3;
- (void)pickerViewUndidSelected:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)private_keyboardWillShow:(id)arg1;
- (void)private_keyboardWillHide:(id)arg1;
- (void)clearAndInputAgain;
- (void)cb_inputAgain;
- (void)private_next;
- (void)private_back;
- (void)private_nextButtonAction:(id)arg1;
- (void)private_removeAddCardView;
- (void)private_createNextButton;
- (void)cb_protocalButtonAction:(id)arg1;
- (void)private_bankProtocalButtonAction:(id)arg1;
- (void)private_createProtocalView;
- (void)private_agreeButtonAction:(id)arg1;
- (void)private_createAgreeButton;
- (void)private_createSafeTipLable;
- (void)private_createCertNumberInputBox;
- (void)private_createCertTypeInputBox;
- (void)private_createCertNameInputBox;
- (void)private_BtnStatus;
- (void)cb_textFieldEditingChangedAction:(id)arg1;
- (void)private_crateCVV2InputBox;
- (void)private_crateCardDateInputBox;
- (void)private_createPhoneNumberInputBox;
- (void)private_setFirstResponder;
- (void)private_reloadVeiw;
- (void)private_verifyCardBin;
- (void)private_preVerifyCardBin;
- (void)cb_checkButtonAction:(id)arg1;
- (void)private_scrollViewSettings;
- (void)cb_createCheckButton;
- (void)cb_supportButtonAction:(id)arg1;
- (void)cb_createSupportButton;
- (void)datePickerView:(id)arg1 confirmButtonAction:(id)arg2;
- (void)datePickerView:(id)arg1 cancelButtonAction:(id)arg2;
- (void)jdp_textFieldDidBeginEdit:(id)arg1;
- (void)private_createCardTypeLable;
- (void)cb_createCardNumberInputBox;
- (void)private_textFieldEditingChangedAction:(id)arg1;
- (void)private_createCardNameInputBox;
- (void)private_createTipLabel;
- (void)cb_createProcessImageView;
- (void)private_createScrollView;
- (void)private_setupSelf;
- (void)setFirstResponder;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithReturnBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)navBarLeftButtonAction:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

