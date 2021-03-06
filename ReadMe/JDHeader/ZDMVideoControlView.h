//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITapGestureRecognizer, ZDMVideoActivityView, ZDMVideoProgressView;

@interface ZDMVideoControlView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _viewIsShow;
    _Bool _isTimeOverHour;
    _Bool _hasResetTimeLab;
    UIView *_needAutoHidenViewRef;
    double _videoDuration;
    UIButton *_playeBtn;
    UILabel *_timeLab;
    CDUnknownBlockType _stateChangeBlock;
    UIView *_customMaskView;
    UITapGestureRecognizer *_viewtap;
    UIView *_bottomCoverView;
    ZDMVideoActivityView *_activityView;
    ZDMVideoProgressView *_progressView;
}

@property(nonatomic) _Bool hasResetTimeLab; // @synthesize hasResetTimeLab=_hasResetTimeLab;
@property(nonatomic) _Bool isTimeOverHour; // @synthesize isTimeOverHour=_isTimeOverHour;
@property(retain, nonatomic) ZDMVideoProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) ZDMVideoActivityView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIView *bottomCoverView; // @synthesize bottomCoverView=_bottomCoverView;
@property(retain, nonatomic) UITapGestureRecognizer *viewtap; // @synthesize viewtap=_viewtap;
@property(retain, nonatomic) UIView *customMaskView; // @synthesize customMaskView=_customMaskView;
@property(copy, nonatomic) CDUnknownBlockType stateChangeBlock; // @synthesize stateChangeBlock=_stateChangeBlock;
@property(retain, nonatomic) UILabel *timeLab; // @synthesize timeLab=_timeLab;
@property(retain, nonatomic) UIButton *playeBtn; // @synthesize playeBtn=_playeBtn;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) _Bool viewIsShow; // @synthesize viewIsShow=_viewIsShow;
@property(retain, nonatomic) UIView *needAutoHidenViewRef; // @synthesize needAutoHidenViewRef=_needAutoHidenViewRef;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopLoadingAnimating;
- (void)startLoadingAnimating;
- (void)updatePlayBtnStatus:(_Bool)arg1;
- (void)touchBGView:(id)arg1;
- (void)changePlayBtnState:(id)arg1;
- (_Bool)isPlaying;
- (id)getStrWithDuration:(double)arg1;
- (void)refreshCache:(double)arg1 videoDuration:(double)arg2;
- (void)refreshSliderValue:(double)arg1 videoDuration:(double)arg2;
- (void)updateWithDuration:(double)arg1 stateChangeBlock:(CDUnknownBlockType)arg2;
- (void)hidenBottomView:(_Bool)arg1;
- (void)customerAddSubView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

