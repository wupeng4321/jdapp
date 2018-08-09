//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "VBVideoViewProtocol-Protocol.h"

@class FinderAttentionVideoControlView, JDImageView, NSString, SHAVErrorTipView, SHAVFinishedView, SHAVPlayerActivityView, SHAVToastView, UITapGestureRecognizer;
@protocol VBVideoViewDelegate;

@interface FinderAttentionVideoView : UIView <VBVideoViewProtocol>
{
    _Bool _interactiveEnabled;
    UIView *_videoView;
    id <VBVideoViewDelegate> _viewDelegate;
    NSString *_durationString;
    CDUnknownBlockType _rePlayCallBack;
    FinderAttentionVideoControlView *_controlView;
    SHAVFinishedView *_finishedView;
    SHAVErrorTipView *_tipView;
    SHAVToastView *_toastView;
    SHAVPlayerActivityView *_activityView;
    JDImageView *_bgImgView;
    UITapGestureRecognizer *_bgTapGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *bgTapGesture; // @synthesize bgTapGesture=_bgTapGesture;
@property(retain, nonatomic) JDImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) SHAVPlayerActivityView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) SHAVToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) SHAVErrorTipView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) SHAVFinishedView *finishedView; // @synthesize finishedView=_finishedView;
@property(retain, nonatomic) FinderAttentionVideoControlView *controlView; // @synthesize controlView=_controlView;
@property(copy, nonatomic) CDUnknownBlockType rePlayCallBack; // @synthesize rePlayCallBack=_rePlayCallBack;
@property(copy, nonatomic) NSString *durationString; // @synthesize durationString=_durationString;
@property(nonatomic) _Bool interactiveEnabled; // @synthesize interactiveEnabled=_interactiveEnabled;
@property(nonatomic) __weak id <VBVideoViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(nonatomic) __weak UIView *videoView; // @synthesize videoView=_videoView;
- (void).cxx_destruct;
- (void)bgTapGestureTouchEvent:(id)arg1;
- (void)resetSubviewsFrame;
- (void)toastErrorViewBaseNetworkEnvironment;
- (void)setFinishViewShow:(id)arg1 times:(id)arg2;
- (void)hidenFinishedView;
- (void)setBgImageWithURLString:(id)arg1;
- (void)showContentError;
- (void)showContentLost;
- (void)showFinishedView;
- (void)showPauseView;
- (void)showPlayingView;
- (void)hidenLoading;
- (void)showLoading;
- (void)updateCacheValue:(double)arg1 videoDuration:(double)arg2;
- (void)updateProgressValue:(double)arg1 videoDuration:(double)arg2;
- (void)initVideoShow;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType buryDataCall;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isFullScreen;
@property(nonatomic) _Bool isMuted;
@property(readonly) Class superclass;

@end

