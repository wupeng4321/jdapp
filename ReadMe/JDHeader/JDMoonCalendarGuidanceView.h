//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UILabel;

@interface JDMoonCalendarGuidanceView : UIView
{
    UILabel *_label;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)removeGuidanceView;
- (void)initTimer;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

