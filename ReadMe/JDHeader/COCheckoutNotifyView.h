//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JDBaseToastTextListViewDataSource-Protocol.h"
#import "JDBaseToastViewDelegate-Protocol.h"

@class CAGradientLayer, COCheckoutNotifyRM, JDImageView, NSString, UIButton, UILabel;
@protocol COCheckoutNotifyViewDelegate;

@interface COCheckoutNotifyView : UIView <JDBaseToastViewDelegate, JDBaseToastTextListViewDataSource>
{
    unsigned long long _viewType;
    unsigned long long _notifyType;
    id <COCheckoutNotifyViewDelegate> _delegate;
    double _showTime;
    double _duration;
    double _animationStartY;
    double _animationEndY;
    JDImageView *_backgroundImageView;
    JDImageView *_notifyIconImageView;
    CAGradientLayer *_gradientLayer;
    UILabel *_notifyMessageLabel;
    UIButton *_notifyCloseBtn;
    COCheckoutNotifyRM *_notifyRM;
    UIView *_backColorView;
}

+ (id)notifyViewWithTipText:(id)arg1;
+ (id)notifyViewWithNotifyRM:(id)arg1 andType:(unsigned long long)arg2;
@property(retain, nonatomic) UIView *backColorView; // @synthesize backColorView=_backColorView;
@property(retain, nonatomic) COCheckoutNotifyRM *notifyRM; // @synthesize notifyRM=_notifyRM;
@property(retain, nonatomic) UIButton *notifyCloseBtn; // @synthesize notifyCloseBtn=_notifyCloseBtn;
@property(retain, nonatomic) UILabel *notifyMessageLabel; // @synthesize notifyMessageLabel=_notifyMessageLabel;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) JDImageView *notifyIconImageView; // @synthesize notifyIconImageView=_notifyIconImageView;
@property(retain, nonatomic) JDImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) double animationEndY; // @synthesize animationEndY=_animationEndY;
@property(nonatomic) double animationStartY; // @synthesize animationStartY=_animationStartY;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double showTime; // @synthesize showTime=_showTime;
@property(nonatomic) __weak id <COCheckoutNotifyViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long notifyType; // @synthesize notifyType=_notifyType;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
- (void).cxx_destruct;
- (void)logNoticeBarEvent;
- (void)logNotificeBarExpoEvent;
- (id)getEventParam;
- (void)didClickBackgroundInToastView:(id)arg1;
- (id)toastView:(id)arg1 DetailForSection:(long long)arg2;
- (id)toastView:(id)arg1 titleForSection:(long long)arg2;
- (long long)numberOfSectionsInToastView:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)__dismissWithAnimation;
- (void)__showWithAnimation;
- (void)showFromNavgationBar:(id)arg1 withSuperview:(id)arg2;
- (void)closeNotify:(id)arg1;
- (void)refreshUI;
- (id)initWithViewType:(unsigned long long)arg1 notifyRM:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

