//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class COCheckoutMainPresaleInfoVM, JDButton, NSString;
@protocol PreSaleStepViewMainDelegate;

@interface PreSaleStepViewMain : UIView
{
    JDButton *_checkBox;
    _Bool _isCheckBox;
    COCheckoutMainPresaleInfoVM *_preSaleModel;
    id <PreSaleStepViewMainDelegate> _stepViewDelegate;
    NSString *_earnestDescription;
}

@property(retain, nonatomic) NSString *earnestDescription; // @synthesize earnestDescription=_earnestDescription;
@property(nonatomic) id <PreSaleStepViewMainDelegate> stepViewDelegate; // @synthesize stepViewDelegate=_stepViewDelegate;
@property(nonatomic) _Bool isCheckBox; // @synthesize isCheckBox=_isCheckBox;
@property(retain, nonatomic) COCheckoutMainPresaleInfoVM *preSaleModel; // @synthesize preSaleModel=_preSaleModel;
- (void).cxx_destruct;
- (void)jdIconClick:(id)arg1;
- (void)setIsChecked:(_Bool)arg1;
- (long long)setLeftLabelWithArray:(id)arg1 originX:(long long)arg2 originY:(long long)arg3;
- (void)setPreSaleModel:(id)arg1 selected:(_Bool)arg2;
- (id)labelDic:(id)arg1 font:(id)arg2 color:(id)arg3;
- (long long)setlabelsOfArray:(id)arg1 oriX:(long long)arg2 oriY:(long long)arg3;
- (long long)setValueLabelsOfArray:(id)arg1 oriX:(long long)arg2 oriY:(long long)arg3;
- (void)setValue:(id)arg1 font:(id)arg2 color:(id)arg3 rightValueArray:(id)arg4;
- (void)setOperator:(id)arg1 font:(id)arg2 color:(id)arg3 labelArray:(id)arg4;
- (void)setLabel:(id)arg1 ori:(struct CGPoint)arg2 font:(id)arg3 color:(id)arg4 tag:(long long)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end

