//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPFullBaseViewController.h"

@class CBPInputBox, JDPCPaySetInfoModel, JPDCSetFullPasswordDataController, JPDCSetPasswordViewModel, UILabel;

@interface JPDCSetFullPasswordViewController : JDPFullBaseViewController
{
    JPDCSetPasswordViewModel *_viewModel;
    JPDCSetFullPasswordDataController *_dataController;
    UILabel *_tipLabel;
    CBPInputBox *_passwordInputBox;
    UILabel *_messageLabel;
    JDPCPaySetInfoModel *_setInfo;
}

@property(retain, nonatomic) JDPCPaySetInfoModel *setInfo; // @synthesize setInfo=_setInfo;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) CBPInputBox *passwordInputBox; // @synthesize passwordInputBox=_passwordInputBox;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) JPDCSetFullPasswordDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) JPDCSetPasswordViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)updateViewWithViewModel;
- (void)cb_textFieldEditingChangedAction:(id)arg1;
- (void)cb_createMessageLabel;
- (void)cb_createInputBox;
- (void)cb_createTipLabel;
- (void)cb_setupSelf;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPaySetInfo:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)navBarLeftButtonAction:(id)arg1;

@end
