//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PDBPYuyueModel, UILabel;

@interface PDBPYuyueCountDownTimerView : UIView
{
    UIView *_countDownView;
    UILabel *_countDownTitleLabel;
    UILabel *_dayLabel;
    UILabel *_hourLabel;
    UILabel *_colonLabel1;
    UILabel *_minuteLabel;
    UILabel *_colonLabel2;
    UILabel *_secondLabel;
    UILabel *_noTimeLabel;
    UIView *_dateView;
    double _timeSeconds;
    PDBPYuyueModel *_model;
}

@property(retain, nonatomic) PDBPYuyueModel *model; // @synthesize model=_model;
@property(nonatomic) double timeSeconds; // @synthesize timeSeconds=_timeSeconds;
@property(retain, nonatomic) UIView *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) UILabel *noTimeLabel; // @synthesize noTimeLabel=_noTimeLabel;
@property(retain, nonatomic) UILabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) UILabel *colonLabel2; // @synthesize colonLabel2=_colonLabel2;
@property(retain, nonatomic) UILabel *minuteLabel; // @synthesize minuteLabel=_minuteLabel;
@property(retain, nonatomic) UILabel *colonLabel1; // @synthesize colonLabel1=_colonLabel1;
@property(retain, nonatomic) UILabel *hourLabel; // @synthesize hourLabel=_hourLabel;
@property(retain, nonatomic) UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(retain, nonatomic) UILabel *countDownTitleLabel; // @synthesize countDownTitleLabel=_countDownTitleLabel;
@property(retain, nonatomic) UIView *countDownView; // @synthesize countDownView=_countDownView;
- (void).cxx_destruct;
- (void)noCountDownTime;
- (void)updateWithTime:(double)arg1;
- (void)renderWithData:(id)arg1;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;

@end

