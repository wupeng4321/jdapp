//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface SCShopCartPropertyDetailButtonAnimateView : UIView
{
    _Bool _animating;
    _Bool _canStopAnimate;
    UIImageView *_backSnapshotImageView;
    UIImageView *_loadingCircleView;
    UIView *_loadingAnimateView;
}

@property(nonatomic) _Bool canStopAnimate; // @synthesize canStopAnimate=_canStopAnimate;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UIView *loadingAnimateView; // @synthesize loadingAnimateView=_loadingAnimateView;
@property(retain, nonatomic) UIImageView *loadingCircleView; // @synthesize loadingCircleView=_loadingCircleView;
@property(retain, nonatomic) UIImageView *backSnapshotImageView; // @synthesize backSnapshotImageView=_backSnapshotImageView;
- (void).cxx_destruct;
- (void)loadingCircleAnimate;
- (void)changeState;
- (void)scaleAnimate;
- (void)startLoadingAnimate;
- (void)stopLoadingAnimate;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;

@end
