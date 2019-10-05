//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDSpecialWordBackgroundView, JDSpecialWordPersonView;

@interface JDSpecialWordAnimationView : UIView
{
    JDSpecialWordBackgroundView *_backgroundView;
    JDSpecialWordPersonView *_personView;
}

+ (id)specialWordAnimationViewWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) JDSpecialWordPersonView *personView; // @synthesize personView=_personView;
@property(retain, nonatomic) JDSpecialWordBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)createUI;
- (void)viewWillDispear;
- (void)stopDeviceMotionManager;
- (void)startDeviceMotionManager;

@end
