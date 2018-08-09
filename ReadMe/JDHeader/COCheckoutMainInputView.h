//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutMainAbstractView.h"

#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class COCheckoutMainInputVM, NSString, UILabel, UITextField, UIView;

@interface COCheckoutMainInputView : COCheckoutMainAbstractView <UITextViewDelegate, UITextFieldDelegate>
{
    COCheckoutMainInputVM *_inputVM;
    UIView *_editingBgView;
    UILabel *_promptLabel;
    UITextField *_textField;
    UILabel *_placeholderLabel;
}

@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(retain, nonatomic) UIView *editingBgView; // @synthesize editingBgView=_editingBgView;
@property(retain, nonatomic) COCheckoutMainInputVM *inputVM; // @synthesize inputVM=_inputVM;
- (void).cxx_destruct;
- (void)showToastViewWithType:(long long)arg1 showTime:(id)arg2 message:(id)arg3;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setViewModel:(id)arg1;
- (void)saveIdentityCard:(id)arg1;
- (id)removeNonIDCardDigits:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)singleLineNoteStateSetVM;
- (void)IDCardStateSetVM;
- (void)phoneNumStateSetVM;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

