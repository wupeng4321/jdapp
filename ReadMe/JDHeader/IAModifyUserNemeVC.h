//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class IANickTextField, JDStoreNetwork, NSString, UIBarButtonItem, UIButton, UILabel;

@interface IAModifyUserNemeVC : JDViewController <UITextFieldDelegate>
{
    NSString *_oldName;
    IANickTextField *_textField;
    JDStoreNetwork *_net;
    UIButton *_sureBtn;
    UIBarButtonItem *_btnSure;
    UILabel *_warningLabel;
}

@property(retain, nonatomic) UILabel *warningLabel; // @synthesize warningLabel=_warningLabel;
@property(retain, nonatomic) UIBarButtonItem *btnSure; // @synthesize btnSure=_btnSure;
@property(retain, nonatomic) UIButton *sureBtn; // @synthesize sureBtn=_sureBtn;
@property(retain, nonatomic) JDStoreNetwork *net; // @synthesize net=_net;
@property(retain, nonatomic) IANickTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSString *oldName; // @synthesize oldName=_oldName;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textChangedAction:(id)arg1;
- (void)updateWarning:(id)arg1 state:(long long)arg2;
- (void)p_enableBtn:(_Bool)arg1;
- (void)p_validateSureBtnEnabel;
- (void)p_validateDeleteBtnHidden;
- (_Bool)nickNameIsValidAndUpdate;
- (void)setUserInterAct:(_Bool)arg1;
- (void)_netHandle;
- (void)sureClick;
- (void)clearText:(id)arg1;
- (void)setupWarningLabel;
- (id)setupLineLayer;
- (id)setupTextFieldLeftSpace;
- (id)setupDeleteBtn;
- (void)setupTextField;
- (id)setupRightBarButtonItems;
- (void)backButtonClicked;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

