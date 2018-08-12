//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "UIAlertViewDelegate-Protocol.h"

@class JDStoreNetwork, NSString, UIButton, UITextField;
@protocol XiaoBingInputDelegate;

@interface JDXiaoBingInputViewController : JDViewController <UIAlertViewDelegate>
{
    JDStoreNetwork *netWork_;
    UITextField *m_phoneField;
    UITextField *m_pwdField;
    UIButton *m_pwdButton;
    long long m_leftTime;
    UIButton *m_startButton;
    id <XiaoBingInputDelegate> _inputDelegate;
}

@property(nonatomic) __weak id <XiaoBingInputDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)turnToChatViewController;
- (void)showRegisterWarningDialog:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)registerWithValidCode;
- (void)getRegisterValidCode;
- (void)startLeftTimeCount;
- (void)openWebView:(id)arg1;
- (void)startBtnClick:(id)arg1;
- (void)viewTapClick;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

