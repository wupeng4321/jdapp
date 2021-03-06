//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BJCCLoopSignModel, CAGradientLayer;

@interface CCCouponLoopSignStatesView : UIView
{
    _Bool _isESignType;
    UIView *_rateView;
    UIView *_rateBackRedView;
    UIView *_periodView;
    UIView *_grayView;
    UIView *_lineView;
    UIView *_giftsView;
    BJCCLoopSignModel *_loopSignModel;
    CAGradientLayer *_rateBackRedGradientLayer;
}

@property(nonatomic) _Bool isESignType; // @synthesize isESignType=_isESignType;
@property(retain, nonatomic) CAGradientLayer *rateBackRedGradientLayer; // @synthesize rateBackRedGradientLayer=_rateBackRedGradientLayer;
@property(retain, nonatomic) BJCCLoopSignModel *loopSignModel; // @synthesize loopSignModel=_loopSignModel;
@property(retain, nonatomic) UIView *giftsView; // @synthesize giftsView=_giftsView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *grayView; // @synthesize grayView=_grayView;
@property(retain, nonatomic) UIView *periodView; // @synthesize periodView=_periodView;
@property(retain, nonatomic) UIView *rateBackRedView; // @synthesize rateBackRedView=_rateBackRedView;
@property(retain, nonatomic) UIView *rateView; // @synthesize rateView=_rateView;
- (void).cxx_destruct;
- (id)getNormalView;
- (void)resetGiftsView;
- (void)resetRateView;
- (void)resetPeriodView;
- (void)refresViewWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

