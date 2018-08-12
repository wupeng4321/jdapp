//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString, NSTimer, UIImageView;

@interface TDPMobileShakeView : UIView <CAAnimationDelegate>
{
    struct CGPoint startPoint;
    struct CGPoint endPoint;
    int _currentScreenType;
    UIImageView *_phoneImageView;
    UIImageView *_leftView;
    UIImageView *_rightView;
    NSTimer *_animationtimer;
}

@property(nonatomic) int currentScreenType; // @synthesize currentScreenType=_currentScreenType;
@property(retain, nonatomic) NSTimer *animationtimer; // @synthesize animationtimer=_animationtimer;
@property(nonatomic) __weak UIImageView *rightView; // @synthesize rightView=_rightView;
@property(nonatomic) __weak UIImageView *leftView; // @synthesize leftView=_leftView;
@property(nonatomic) __weak UIImageView *phoneImageView; // @synthesize phoneImageView=_phoneImageView;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)stopTimer;
- (void)getPos;
- (void)doAnimation;
- (void)setScreenType:(int)arg1;
- (void)playAnimation;
- (void)showAnimation;
- (void)becomeActiveToRecordState;
- (void)resignActiveToRecordState;
- (id)initWithFrame:(struct CGRect)arg1 ARScreenType:(int)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

