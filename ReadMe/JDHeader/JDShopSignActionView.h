//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CAShapeLayer, CXCountDownLabel, JDShopSignModel, NSTimer, STScratchView, UIButton, UIImageView, UILabel;

@interface JDShopSignActionView : UIView
{
    _Bool _isProbability;
    STScratchView *_scratchView;
    NSTimer *_timer;
    NSTimer *_timer1;
    UILabel *_scratchTipsLabel;
    UIImageView *_lightView;
    UIImageView *_signTextView;
    UIImageView *_signBaseView;
    UIImageView *_signedView;
    UIImageView *_signPointView;
    UIButton *_signBtn;
    UIImageView *_signBtnCoverView;
    CXCountDownLabel *_countLabel;
    UILabel *_prizeTipsLabel;
    CAShapeLayer *_progressLayer;
    CALayer *_gradientLayer;
    long long _currentPercent;
    long long _totalPercent;
    JDShopSignModel *signModel;
    UILabel *_label1;
    UILabel *_label2;
    UIImageView *_lineView;
    UIImageView *_scratch_signatureView;
}

@property(retain, nonatomic) JDShopSignModel *signModel; // @synthesize signModel;
- (void)STScratchViewTouchEnd;
- (void)postAnimationEndNoti;
- (void)setPercent:(long long)arg1;
- (void)startSignAnimation;
- (void)signBtnClicked;
- (void)updateSignState:(id)arg1;
- (void)setViewWithModel:(id)arg1;
- (void)resetScratchView;
- (void)dealloc;
- (void)stopLightAnimation;
- (void)startLightAnimation;
- (void)lightAnimation:(id)arg1;
- (void)animationFour:(id)arg1;
- (void)animationThree:(id)arg1;
- (void)animationTwo:(id)arg1;
- (void)animationOne:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

