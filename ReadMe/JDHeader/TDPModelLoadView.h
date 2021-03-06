//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSTimer, TDPCircularView, TDPModelLoadErrorView, TDPNetworkErrorView, TDPReloadButton, UIButton, UILabel, UIView;
@protocol TDPModelLoadViewDelegate;

@interface TDPModelLoadView : UIImageView
{
    float _cacheProgress;
    _Bool _cacheReady;
    long long _state;
    id <TDPModelLoadViewDelegate> _delegate;
    NSTimer *_timer;
    UIButton *_blurBackButton;
    TDPReloadButton *_reloadButton;
    TDPModelLoadErrorView *_modelLoadErrorView;
    TDPNetworkErrorView *_networkErrorView;
    UILabel *_progressLabel;
    TDPCircularView *_circularView;
    UIView *_errorBg;
}

@property(retain, nonatomic) UIView *errorBg; // @synthesize errorBg=_errorBg;
@property(retain, nonatomic) TDPCircularView *circularView; // @synthesize circularView=_circularView;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) TDPNetworkErrorView *networkErrorView; // @synthesize networkErrorView=_networkErrorView;
@property(retain, nonatomic) TDPModelLoadErrorView *modelLoadErrorView; // @synthesize modelLoadErrorView=_modelLoadErrorView;
@property(retain, nonatomic) TDPReloadButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(retain, nonatomic) UIButton *blurBackButton; // @synthesize blurBackButton=_blurBackButton;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <TDPModelLoadViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool cacheReady; // @synthesize cacheReady=_cacheReady;
- (void).cxx_destruct;
- (void)clickBackButton;
- (void)clickReloadButton;
- (void)showModelErrorView;
- (void)showErrorView;
- (void)runToEnd_;
- (void)runToEnd;
- (void)setModelCacheReady:(_Bool)arg1;
- (void)setModelProgress:(float)arg1;
- (void)manipulateLoading;
- (void)cacheLoad;
- (void)setModelState:(long long)arg1;
- (void)setStateImageNormal:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 cacheReady:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)quit;
- (void)dealloc;

@end

