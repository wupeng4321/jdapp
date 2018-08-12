//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class JDButton, JDStoreNetwork, JDSwitch, NSDictionary, NSString, UIButton, UIImageView, UILabel, UIScrollView, UITextField, UIView;
@protocol MyStowNotificationDelegate;

@interface MyStowNotificationViewController : JDViewController <UIGestureRecognizerDelegate>
{
    UITextField *m_notiPriceTextField;
    UITextField *m_phoneTextField;
    NSDictionary *m_wareModel;
    UIScrollView *m_contentView;
    JDButton *m_btnView;
    float m_marginTop;
    JDStoreNetwork *m_netWork;
    UIButton *backButton;
    JDSwitch *switchPushSms;
    UIView *phoneBgView;
    UILabel *pushLable;
    UIView *splitLine6;
    UIView *splitLine7;
    float lineHeight;
    UIImageView *discountBG;
    UILabel *discountLabel;
    UILabel *qian;
    UIView *priceBgView;
    UIView *currentPriceBgView;
    _Bool changePhoneTextField;
    _Bool isShowMessage;
    _Bool _isFromOut;
    id <MyStowNotificationDelegate> delegate;
    NSString *_phoneNumber;
    UITextField *_field;
    NSString *_beginText;
    NSString *_notifyText;
}

@property(copy, nonatomic) NSString *notifyText; // @synthesize notifyText=_notifyText;
@property(copy, nonatomic) NSString *beginText; // @synthesize beginText=_beginText;
@property(retain, nonatomic) UITextField *field; // @synthesize field=_field;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(nonatomic) _Bool isFromOut; // @synthesize isFromOut=_isFromOut;
@property(nonatomic) _Bool isShowMessage; // @synthesize isShowMessage;
@property(nonatomic) __weak id <MyStowNotificationDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didReceiveMemoryWarning;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)showSuccessMessage:(id)arg1;
- (void)showWarningMessage:(id)arg1;
- (void)submitReduceNoti;
- (void)submitBtn:(id)arg1;
- (void)keyboardCancel:(id)arg1;
- (void)keyboardConfim:(id)arg1;
- (void)myStowNotificationKeyboardWillHide:(id)arg1;
- (void)myStowNotificationKeyboardWillShow:(id)arg1;
- (void)keybordChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)switchAction:(id)arg1;
- (void)Actiondo:(id)arg1;
- (void)getNotifyPhone;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithWareModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

