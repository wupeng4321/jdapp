//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SHAVSimpleProgressView, UIButton, UILabel;

@interface VBListVideoControlView : UIView
{
    _Bool _isTimeOverHour;
    _Bool _hasResetTimeLab;
    CDUnknownBlockType _clickPlayBtnEvent;
    UILabel *_playTimeLab;
    UILabel *_leftTimeLab;
    SHAVSimpleProgressView *_progressView;
    UIView *_coverView;
    UIButton *_playBtn;
}

@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) _Bool hasResetTimeLab; // @synthesize hasResetTimeLab=_hasResetTimeLab;
@property(nonatomic) _Bool isTimeOverHour; // @synthesize isTimeOverHour=_isTimeOverHour;
@property(retain, nonatomic) SHAVSimpleProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *leftTimeLab; // @synthesize leftTimeLab=_leftTimeLab;
@property(retain, nonatomic) UILabel *playTimeLab; // @synthesize playTimeLab=_playTimeLab;
@property(copy, nonatomic) CDUnknownBlockType clickPlayBtnEvent; // @synthesize clickPlayBtnEvent=_clickPlayBtnEvent;
- (void).cxx_destruct;
- (id)getStrWithDuration:(double)arg1;
- (void)didClickPlayButton;
- (void)hidenPlayButton;
- (void)showPlayButton;
- (void)refreshCache:(double)arg1 videoDuration:(double)arg2;
- (void)refreshSliderValue:(double)arg1 videoDuration:(double)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

