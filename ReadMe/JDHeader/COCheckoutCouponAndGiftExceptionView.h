//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDButton, UIImageView, UILabel;

@interface COCheckoutCouponAndGiftExceptionView : UIView
{
    JDButton *_exceptionButton;
    UILabel *_tipsLabelOne;
    UILabel *_tipsLabelTwo;
    UIImageView *_imageView;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *tipsLabelTwo; // @synthesize tipsLabelTwo=_tipsLabelTwo;
@property(retain, nonatomic) UILabel *tipsLabelOne; // @synthesize tipsLabelOne=_tipsLabelOne;
@property(retain, nonatomic) JDButton *exceptionButton; // @synthesize exceptionButton=_exceptionButton;
- (void).cxx_destruct;
- (void)setExecptionViewWithExecptionType:(long long)arg1 ExecptionMsg1:(id)arg2 ExecptionMsg2:(id)arg3;
- (double)__calHeightWithFontSize:(double)arg1;
- (void)layoutSubviews;
- (id)initTipsViewWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

