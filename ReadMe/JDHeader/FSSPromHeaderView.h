//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UIImageView, UILabel;

@interface FSSPromHeaderView : UIView
{
    UIView *_bgView;
    UILabel *_countdownHourLabel;
    UILabel *_countdownMinuteLabel;
    UILabel *_countdownSecondLabel;
    UIView *_countdownView;
    UILabel *_promotionOneLineLabel;
    long long _remainingTimeInterval;
    NSTimer *_countdownTimer;
    UILabel *_titleNameLabel;
    UIImageView *_titleImageView;
    double _leftOrigin;
}

- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)arg1;
- (void)tick:(id)arg1;
- (void)stopTimer;
- (void)restartTimer;
- (void)setPromotionUIWithPromotionText:(id)arg1 promotionTime:(long long)arg2;
- (void)setTitleUIWithTitleName:(id)arg1 imageName:(id)arg2;
- (void)updateTimeLabelWithRemainingTimeInterval:(id)arg1;
- (void)updateCountdownLabel;
- (void)createCountView;
- (void)createPromotionLabel;
- (void)createTitleView;
- (void)createView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
