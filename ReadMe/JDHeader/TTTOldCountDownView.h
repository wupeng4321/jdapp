//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class NSString, NSTimer, TTTAdsModel, TTTCountDownContentModel, TTTCountDownModel, TTTCountDownUnit, TTTFloorModel, UIButton, UIColor, UILabel, UIView;

@interface TTTOldCountDownView : TTTBaseView <TTTBaseViewProtocol>
{
    long long _remainingTimeInterval;
    long long _timeIntervalToNow;
    double _unitX;
    double _unitY;
    _Bool _hasChangeState;
    UIColor *_textColor;
    UIColor *_numColor;
    NSString *_numBackImageStyle;
    UIButton *_backGroundImgBtn;
    UIView *_countDownBackgroundView;
    TTTAdsModel *_configModel;
    UILabel *_countDownLeftLab;
    TTTCountDownUnit *_countDownUnit;
    TTTFloorModel *_floorModel;
    TTTCountDownModel *_model;
    NSTimer *_countDownTimer;
    long long _countDownStyle;
    TTTCountDownContentModel *_showModel;
}

@property(retain, nonatomic) TTTCountDownContentModel *showModel; // @synthesize showModel=_showModel;
@property(nonatomic) long long countDownStyle; // @synthesize countDownStyle=_countDownStyle;
@property(retain, nonatomic) NSTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(retain, nonatomic) TTTCountDownModel *model; // @synthesize model=_model;
@property(retain, nonatomic) TTTFloorModel *floorModel; // @synthesize floorModel=_floorModel;
@property(retain, nonatomic) TTTCountDownUnit *countDownUnit; // @synthesize countDownUnit=_countDownUnit;
@property(retain, nonatomic) UILabel *countDownLeftLab; // @synthesize countDownLeftLab=_countDownLeftLab;
@property(retain, nonatomic) TTTAdsModel *configModel; // @synthesize configModel=_configModel;
@property(retain, nonatomic) UIView *countDownBackgroundView; // @synthesize countDownBackgroundView=_countDownBackgroundView;
@property(retain, nonatomic) UIButton *backGroundImgBtn; // @synthesize backGroundImgBtn=_backGroundImgBtn;
- (void).cxx_destruct;
- (void)viewTaped:(id)arg1;
- (void)countDownEnd;
- (void)setNowTimeInterval;
- (void)reSetCountDownWithRestartTimer:(_Bool)arg1;
- (void)tick:(id)arg1;
- (void)stopTimer;
- (void)restartTimer;
- (void)setUpLeftLabelAndCountDownUnit;
- (void)initData;
- (void)initCountDownBackgroundViewPosition;
- (void)setBackGroundImage;
- (void)setUpUI;
- (id)p_validColor:(id)arg1 defaltColor:(id)arg2;
- (_Bool)hasChangedCountDownStatus;
- (void)initShowModelAndRemainTime;
- (void)p_updateBackgroundColor;
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

