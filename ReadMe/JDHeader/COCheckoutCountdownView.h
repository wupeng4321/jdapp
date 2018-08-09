//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

@class NSTimer, UILabel;

@interface COCheckoutCountdownView : JDView
{
    UILabel *_titleLabel;
    UILabel *_hourLabel;
    UILabel *_minuteLabel;
    UILabel *_secondLabel;
    NSTimer *_timer;
    long long _second;
}

@property(nonatomic) long long second; // @synthesize second=_second;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UILabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) UILabel *minuteLabel; // @synthesize minuteLabel=_minuteLabel;
@property(retain, nonatomic) UILabel *hourLabel; // @synthesize hourLabel=_hourLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)main;
- (void)stop;
- (void)start;
- (void)startWithSecond:(long long)arg1;
- (id)colonLabelWithX:(double)arg1;
- (id)countdownLabelWithX:(double)arg1;
- (void)dealloc;

@end

