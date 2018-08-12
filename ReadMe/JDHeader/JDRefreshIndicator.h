//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UIImage;

@interface JDRefreshIndicator : UIView
{
    CALayer *_circleLayer;
    CALayer *_iconLayer;
    UIView *_LOTView;
    _Bool _mask;
    _Bool _isAnimating;
    _Bool _isJDLoading;
    int _direction;
    double _duration;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool isJDLoading; // @synthesize isJDLoading=_isJDLoading;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) int direction; // @synthesize direction=_direction;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool mask; // @synthesize mask=_mask;
- (void).cxx_destruct;
- (void)stopLOTAnimation;
- (void)playLOTAnimation;
- (id)creatLOTView;
- (_Bool)isOpenLottieLoading;
- (void)rotation;
- (void)stopAnimation;
- (void)startAnimation;
- (void)showIndicatorAddedTo:(id)arg1 animated:(_Bool)arg2;
- (void)applicationWillEnterForeground;
- (void)dismiss;
- (void)show;
- (void)layoutSubviews;
- (id)initRefreshIndicatorWithFrame:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1;
- (id)initJDLoadingIndicator;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

