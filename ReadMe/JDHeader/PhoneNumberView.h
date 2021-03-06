//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UILabel, UITextField;
@protocol PhoneNumberViewDelegate;

@interface PhoneNumberView : UIView <UITextFieldDelegate>
{
    NSString *_titleStr;
    NSString *_placeholderStr;
    UITextField *_phoneTextField;
    id <PhoneNumberViewDelegate> _delegate;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <PhoneNumberViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITextField *phoneTextField; // @synthesize phoneTextField=_phoneTextField;
@property(retain, nonatomic) NSString *placeholderStr; // @synthesize placeholderStr=_placeholderStr;
@property(retain, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)hideKeyBordMethod:(id)arg1;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

