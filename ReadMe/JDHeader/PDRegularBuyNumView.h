//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PDViewProtocol-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class JDScrollTextField, NSString, NewProductModel, UIButton;
@protocol PDRegularBuyNumViewDelegate;

@interface PDRegularBuyNumView : UIView <UITextFieldDelegate, PDViewProtocol>
{
    id <PDRegularBuyNumViewDelegate> _delegate;
    long long _maxCount;
    long long _minCount;
    NSString *_quantityTextFieldCount;
    long long _regularBuyNumType;
    JDScrollTextField *_quantityTextField;
    UIButton *_minusButton;
    UIButton *_plusButton;
    NewProductModel *_model;
}

@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *plusButton; // @synthesize plusButton=_plusButton;
@property(retain, nonatomic) UIButton *minusButton; // @synthesize minusButton=_minusButton;
@property(retain, nonatomic) JDScrollTextField *quantityTextField; // @synthesize quantityTextField=_quantityTextField;
@property(nonatomic) long long regularBuyNumType; // @synthesize regularBuyNumType=_regularBuyNumType;
@property(retain, nonatomic) NSString *quantityTextFieldCount; // @synthesize quantityTextFieldCount=_quantityTextFieldCount;
@property(nonatomic) long long minCount; // @synthesize minCount=_minCount;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) __weak id <PDRegularBuyNumViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textFieldChanged:(id)arg1;
- (void)recordRegularBuyNum:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)keyboardWillHide:(id)arg1;
- (void)notKeyboardCancel:(id)arg1;
- (void)notKeyboardConfim:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)plusButtonClicked:(id)arg1;
- (void)minusButtonClicked:(id)arg1;
- (void)renderUIWithProductModel:(id)arg1;
- (void)resetState;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

