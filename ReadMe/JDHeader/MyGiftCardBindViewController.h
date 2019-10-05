//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "MyGiftCardBindFailLableDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class JDButton, JDStoreNetwork, NSString, UILabel, UITextField, UITextRange, UIView;
@protocol MyGiftCardBindViewControllerDelegate;

@interface MyGiftCardBindViewController : JDViewController <MyGiftCardBindFailLableDelegate, UIActionSheetDelegate, UITextFieldDelegate, JDBaseToastViewDelegate>
{
    UIView *bgView;
    JDStoreNetwork *bindCardNet;
    UITextField *mTextField;
    NSString *previousTextFieldContent;
    UITextRange *previousSelection;
    JDButton *findBtn_;
    JDButton *bindBtn_;
    JDButton *autoBindBtn;
    NSString *saoyisaoText;
    _Bool viewCallKeyboard;
    NSString *cardTitle;
    NSString *phoneNumber;
    NSString *jumpURL;
    id <MyGiftCardBindViewControllerDelegate> delegate;
    UILabel *_remarkLabel;
}

@property(retain, nonatomic) UILabel *remarkLabel; // @synthesize remarkLabel=_remarkLabel;
@property(nonatomic) __weak id <MyGiftCardBindViewControllerDelegate> delegate; // @synthesize delegate;
@property(copy, nonatomic) NSString *jumpURL; // @synthesize jumpURL;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber;
@property(retain, nonatomic) UITextField *mTextField; // @synthesize mTextField;
@property(retain, nonatomic) UITextRange *previousSelection; // @synthesize previousSelection;
@property(retain, nonatomic) NSString *previousTextFieldContent; // @synthesize previousTextFieldContent;
@property(retain, nonatomic) NSString *cardTitle; // @synthesize cardTitle;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)insertSpacesEveryFourDigitsIntoString:(id)arg1 andPreserveCursorPosition:(unsigned long long *)arg2;
- (id)removeNonDigits:(id)arg1 andPreserveCursorPosition:(unsigned long long *)arg2;
- (void)reformatAsCardNumber:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)autoBindBtnClicked:(id)arg1;
- (void)showBindFaildLabel:(id)arg1;
- (void)removeBindFaildLabel;
- (void)clearSelfView;
- (void)bindCard;
- (void)findBalance;
- (void)decipherCardWithString:(id)arg1;
- (void)scanBtnClicked:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)phoneNumberClick:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)addAutoBindCardBtn:(id)arg1 actionURL:(id)arg2;
- (void)addAutoBindCardRequest;
- (void)addScanBtn;
- (void)configRemarkLabelWithText:(id)arg1;
- (void)addBindCardInfoRequest;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
