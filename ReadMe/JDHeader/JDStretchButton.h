//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString, NSTimer, UIButton, UILabel;

@interface JDStretchButton : UIImageView
{
    _Bool _isStretched;
    _Bool _isAnimation;
    float _stayDurataion;
    float _rushCloser;
    NSString *_text;
    UILabel *_textLabel;
    UIButton *_imageButton;
    UIButton *_closeButton;
    UIImageView *_accessoryView;
    SEL _action;
    id _target;
    NSTimer *_timer;
    long long _timeflag;
    struct CGRect _originalFrame;
}

@property(nonatomic) long long timeflag; // @synthesize timeflag=_timeflag;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isAnimation; // @synthesize isAnimation=_isAnimation;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
@property(retain, nonatomic) UIImageView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) _Bool isStretched; // @synthesize isStretched=_isStretched;
@property(nonatomic) float rushCloser; // @synthesize rushCloser=_rushCloser;
@property(nonatomic) float stayDurataion; // @synthesize stayDurataion=_stayDurataion;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)shrink;
- (void)timepp;
- (void)stopTimer;
- (void)startTimer;
- (void)showCloseButton;
- (void)stretcheAnimation;
- (void)shrinkAnimation;
- (void)setStretched:(_Bool)arg1;
- (void)setButtonImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)closeButtonClicked:(id)arg1;
- (void)targetAction;
- (void)tapAction:(id)arg1;
- (void)buttonAction:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)changeFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

