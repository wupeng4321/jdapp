//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JDLaunchAnimationBaseProtocol-Protocol.h"

@class JDStartLoadingView, JDStartVideoJumpView, LaunchVideoPlayer, NSString, NSTimer, UIButton;

@interface JDStartVideoView : UIView <JDLaunchAnimationBaseProtocol>
{
    LaunchVideoPlayer *_player;
    JDStartLoadingView *_coverImageView;
    UIButton *_audioButton;
    UIButton *_replayButton;
    JDStartVideoJumpView *_jumpView;
    NSTimer *_timer;
    int _intValueDuration;
    CDUnknownBlockType _playCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType playCompletionBlock; // @synthesize playCompletionBlock=_playCompletionBlock;
- (void).cxx_destruct;
- (void)statusBarChange;
- (void)timeRun;
- (void)finish;
- (void)taped;
- (void)jumpViewPressed;
- (void)replayButtonPressed;
- (void)audioButtonPressed;
- (void)startAnimation;
- (void)pause;
- (void)readyToPlay;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

