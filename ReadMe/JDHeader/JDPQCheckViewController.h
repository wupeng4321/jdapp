//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPQPartBaseViewController.h"

@class CBPInputBox, JDPQCheckViewParamModel, UIButton, UILabel, UIScrollView;

@interface JDPQCheckViewController : JDPQPartBaseViewController
{
    UIScrollView *_contentScrollView;
    CBPInputBox *_passwordInputBox;
    UILabel *_remarkLabel;
    UIButton *_passwordButton;
    JDPQCheckViewParamModel *_viewParamModel;
}

@property(retain, nonatomic) JDPQCheckViewParamModel *viewParamModel; // @synthesize viewParamModel=_viewParamModel;
@property(retain, nonatomic) UIButton *passwordButton; // @synthesize passwordButton=_passwordButton;
@property(retain, nonatomic) UILabel *remarkLabel; // @synthesize remarkLabel=_remarkLabel;
@property(retain, nonatomic) CBPInputBox *passwordInputBox; // @synthesize passwordInputBox=_passwordInputBox;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
- (void).cxx_destruct;
- (void)cb_inputAgain;
- (void)jdpq_applyVerity;
- (void)jdpq_textFieldEditingChangedAction:(id)arg1;
- (void)jdpq_textFieldEditingDidBeginAction:(id)arg1;
- (void)passwordButtonAction:(id)arg1;
- (void)private_createPasswordButton;
- (void)private_createRemarkLabel;
- (void)private_createPasswordInputBox;
- (void)private_createContentScrollView;
- (void)private_setup;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)cb_leftButtonAction:(id)arg1;
- (id)initWithViewModel:(id)arg1;

@end

