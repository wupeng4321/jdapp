//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIButton, UILabel, UIProgressView, UISlider;
@protocol JDPlayerBottomBarDelegate;

@interface JDVideoPlayerBottomBar : UIView
{
    _Bool _sliderValueChanging;
    float _maximumValue;
    UIButton *_playOrPauseBtn;
    UIButton *_exitOrInScreenBtn;
    id <JDPlayerBottomBarDelegate> _delegate;
    UIProgressView *_progressView;
    UISlider *_slider;
    UILabel *_totalTimeLabel;
    UILabel *_currentTimeLabel;
    CAGradientLayer *_gradLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradLayer; // @synthesize gradLayer=_gradLayer;
@property(retain, nonatomic) UILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UISlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) _Bool sliderValueChanging; // @synthesize sliderValueChanging=_sliderValueChanging;
@property(nonatomic) __weak id <JDPlayerBottomBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *exitOrInScreenBtn; // @synthesize exitOrInScreenBtn=_exitOrInScreenBtn;
@property(retain, nonatomic) UIButton *playOrPauseBtn; // @synthesize playOrPauseBtn=_playOrPauseBtn;
- (void).cxx_destruct;
- (void)setCurrentTime:(id)arg1;
- (void)setTotalTime:(id)arg1;
- (void)setLoadProgress:(float)arg1;
- (void)setProgress:(float)arg1;
- (void)updateGradLayer;
- (void)exitOrInFullScreen:(id)arg1;
- (void)playOrPauseButtonClicked:(id)arg1;
- (void)sliderTouchBegan:(id)arg1;
- (void)sliderTouchEnd:(id)arg1;
- (void)sliderTouching:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
