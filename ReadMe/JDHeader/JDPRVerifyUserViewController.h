//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPFullScreenScrollViewController.h"

#import "JDPPickerViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class CBPIDCardNumberInputBox, CBPUserNameInputBox, JDPCertTypeInputBox, JDPRAuthBindCardReturnModel, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITextField;

@interface JDPRVerifyUserViewController : JDPFullScreenScrollViewController <JDPPickerViewDelegate, UIScrollViewDelegate>
{
    double _offsetY;
    _Bool _certNameHasChanged;
    JDPRAuthBindCardReturnModel *_dataParam;
    UIImageView *_processImageView;
    CBPUserNameInputBox *_certNameInputBox;
    JDPCertTypeInputBox *_certTypeInputBox;
    CBPIDCardNumberInputBox *_certNumberInputBox;
    UIButton *_nextButton;
    UILabel *_pageDescLabel;
    UITextField *_activeTextField;
    NSMutableArray *_inputArray;
}

@property(retain, nonatomic) NSMutableArray *inputArray; // @synthesize inputArray=_inputArray;
@property(retain, nonatomic) UITextField *activeTextField; // @synthesize activeTextField=_activeTextField;
@property(nonatomic) _Bool certNameHasChanged; // @synthesize certNameHasChanged=_certNameHasChanged;
@property(retain, nonatomic) UILabel *pageDescLabel; // @synthesize pageDescLabel=_pageDescLabel;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) CBPIDCardNumberInputBox *certNumberInputBox; // @synthesize certNumberInputBox=_certNumberInputBox;
@property(retain, nonatomic) JDPCertTypeInputBox *certTypeInputBox; // @synthesize certTypeInputBox=_certTypeInputBox;
@property(retain, nonatomic) CBPUserNameInputBox *certNameInputBox; // @synthesize certNameInputBox=_certNameInputBox;
@property(retain, nonatomic) UIImageView *processImageView; // @synthesize processImageView=_processImageView;
@property(retain, nonatomic) JDPRAuthBindCardReturnModel *dataParam; // @synthesize dataParam=_dataParam;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)private_keyboardWillShow:(id)arg1;
- (void)private_keyboardWillHide:(id)arg1;
- (void)cb_inputAgain;
- (void)pickerView:(id)arg1 didSelectValues:(id)arg2 keys:(id)arg3;
- (void)pickerViewUndidSelected:(id)arg1;
- (void)private_authVerify;
- (void)cb_nextButtonAction:(id)arg1;
- (void)private_scrollViewSettings;
- (void)cb_createNextButton;
- (void)private_textFieldEditingChangedAction:(id)arg1;
- (void)jdp_textFieldDidBeginEdit:(id)arg1;
- (void)cb_createCertNumberInputBox;
- (void)cb_createCertTypeInputBox;
- (void)private_createCardNameInputBox;
- (void)prevate_createDesLabel;
- (void)cb_createProcessImageView;
- (void)private_createScrollView;
- (void)drawViews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithParam:(id)arg1;
- (void)navBarLeftButtonAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

