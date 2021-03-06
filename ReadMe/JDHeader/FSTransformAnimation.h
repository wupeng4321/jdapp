//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface FSTransformAnimation : NSObject
{
    _Bool manualClosed;
    UIView *_maskView;
    UIView *_bottomView;
    UIView *_backView;
    double _duration;
    CDUnknownBlockType _ClosedBlock;
    CDUnknownBlockType _FinishBlock;
    CDUnknownBlockType _ShowBlock;
}

+ (void)stopAnimationWithCompletion:(CDUnknownBlockType)arg1;
+ (void)startAnimationWithDuration:(double)arg1 animationView:(id)arg2 showFinished:(CDUnknownBlockType)arg3 hideFinished:(CDUnknownBlockType)arg4;
+ (void)startAnimationWithDuration:(double)arg1 animationView:(id)arg2 comletion:(CDUnknownBlockType)arg3;
+ (id)sharedAnimation;
@property(copy, nonatomic) CDUnknownBlockType ShowBlock; // @synthesize ShowBlock=_ShowBlock;
@property(copy, nonatomic) CDUnknownBlockType FinishBlock; // @synthesize FinishBlock=_FinishBlock;
@property(copy, nonatomic) CDUnknownBlockType ClosedBlock; // @synthesize ClosedBlock=_ClosedBlock;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void).cxx_destruct;
- (void)hideAnimation;
- (struct CATransform3D)secondTransform;
- (struct CATransform3D)firstTransform;
- (void)reAnimateForView;
- (void)animateForView;
- (id)keyWindow;
- (id)currentAnimationView;
- (id)currentNavigationController;
- (id)init;
- (void)dealloc;

@end

