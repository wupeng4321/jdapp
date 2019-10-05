//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "VBVideoViewProtocol-Protocol.h"

@class JDImageView, NSString, UITapGestureRecognizer, ZDMVideoControlView, ZDMVideoErrorTipView, ZDMVideoFinishedView, ZDMVideoToastView, ZDMVideoTopInfoView;
@protocol VBVideoViewDelegate;

@interface ZDMVideoPlayerView : UIView <VBVideoViewProtocol>
{
    _Bool _isListVideoPlayer;
    UIView *_videoView;
    id <VBVideoViewDelegate> _viewDelegate;
    ZDMVideoControlView *_controlView;
    ZDMVideoFinishedView *_finishedView;
    ZDMVideoErrorTipView *_tipView;
    ZDMVideoTopInfoView *_topInfoView;
    ZDMVideoToastView *_toastView;
    JDImageView *_bgImgView;
    UITapGestureRecognizer *_touchViewGesture;
}

@property(nonatomic) _Bool isListVideoPlayer; // @synthesize isListVideoPlayer=_isListVideoPlayer;
@property(retain, nonatomic) UITapGestureRecognizer *touchViewGesture; // @synthesize touchViewGesture=_touchViewGesture;
@property(retain, nonatomic) JDImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) ZDMVideoToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) ZDMVideoTopInfoView *topInfoView; // @synthesize topInfoView=_topInfoView;
@property(retain, nonatomic) ZDMVideoErrorTipView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) ZDMVideoFinishedView *finishedView; // @synthesize finishedView=_finishedView;
@property(retain, nonatomic) ZDMVideoControlView *controlView; // @synthesize controlView=_controlView;
@property(nonatomic) __weak id <VBVideoViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(nonatomic) __weak UIView *videoView; // @synthesize videoView=_videoView;
- (void).cxx_destruct;
- (void)touchPlayViewEvent;
- (void)resetSubviewsFrame;
- (void)hidenBottomView:(_Bool)arg1;
- (void)hidenFinishedView;
- (void)setBgImageWithURLString:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)showNotWifiToast;
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
- (id)initWithFrame:(struct CGRect)arg1 isListVideoPlayer:(_Bool)arg2;
- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType buryDataCall;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool interactiveEnabled;
@property(readonly, nonatomic) _Bool isFullScreen;
@property(nonatomic) _Bool isMuted;
@property(readonly) Class superclass;

@end
