//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class NSString, NSTimer, TTTRushCountDownModel, TTTRushCountDownUnit, UILabel;

@interface TTTRushCountDownView : TTTBaseView <TTTBaseViewProtocol>
{
    _Bool isRemainTimeSeted;
    long long _remainingTimeInterval;
    long long _timeIntervalToNow;
    TTTRushCountDownModel *_model;
    UILabel *_tipLab;
    UILabel *_countDownLeftLab;
    TTTRushCountDownUnit *_countDownUnit;
    NSTimer *_countDownTimer;
}

@property(retain, nonatomic) NSTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(retain, nonatomic) TTTRushCountDownUnit *countDownUnit; // @synthesize countDownUnit=_countDownUnit;
@property(retain, nonatomic) UILabel *countDownLeftLab; // @synthesize countDownLeftLab=_countDownLeftLab;
@property(retain, nonatomic) UILabel *tipLab; // @synthesize tipLab=_tipLab;
@property(retain, nonatomic) TTTRushCountDownModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setNowTimeInterval;
- (void)changeRushState;
- (void)reSetTimeAndState:(_Bool)arg1;
- (void)tick:(id)arg1;
- (void)stopTimer;
- (void)restartTimer;
- (void)initCountDown;
- (void)setCounDown;
- (void)setUpView;
- (void)setHighLightTextColor:(id)arg1;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)viewDidEndDisplaying;
- (void)viewWillDisplay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
