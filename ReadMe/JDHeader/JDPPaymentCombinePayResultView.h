//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDPCombinePayResultViewModel, UIImageView, UILabel;

@interface JDPPaymentCombinePayResultView : UIView
{
    JDPCombinePayResultViewModel *_viewModel;
    UILabel *_ownerLabel;
    UILabel *_payMoneyLabel;
    UIImageView *_iconImageView;
}

@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *payMoneyLabel; // @synthesize payMoneyLabel=_payMoneyLabel;
@property(retain, nonatomic) UILabel *ownerLabel; // @synthesize ownerLabel=_ownerLabel;
@property(retain, nonatomic) JDPCombinePayResultViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)private_drawViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

