//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDImageView.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSString;

@interface SSSNewPersonView : JDImageView <CAAnimationDelegate>
{
    struct CGPoint _beginPoint;
    _Bool _animationEnable;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool animationEnable; // @synthesize animationEnable=_animationEnable;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)animationFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 during:(double)arg3;
- (void)show;
- (void)hide;
- (void)paned:(id)arg1;
- (void)needDelayShow;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

