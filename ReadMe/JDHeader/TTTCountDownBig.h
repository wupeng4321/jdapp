//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTCountDownParentView.h"

@class TTTCountDownNumView, UILabel;

@interface TTTCountDownBig : TTTCountDownParentView
{
    unsigned long long _countDownType;
    TTTCountDownNumView *_firstRegionLeftLabel;
    TTTCountDownNumView *_firstRegionRightLabel;
    UILabel *_firstRegionTextLabel;
    TTTCountDownNumView *_secondRegionLeftLabel;
    TTTCountDownNumView *_secondRegionRightLabel;
    UILabel *_secondRegionTextLabel;
    TTTCountDownNumView *_thirdRegionLeftLabel;
    TTTCountDownNumView *_thirdRegionRightLabel;
    UILabel *_thirdRegionTextLabel;
}

@property(retain, nonatomic) UILabel *thirdRegionTextLabel; // @synthesize thirdRegionTextLabel=_thirdRegionTextLabel;
@property(retain, nonatomic) TTTCountDownNumView *thirdRegionRightLabel; // @synthesize thirdRegionRightLabel=_thirdRegionRightLabel;
@property(retain, nonatomic) TTTCountDownNumView *thirdRegionLeftLabel; // @synthesize thirdRegionLeftLabel=_thirdRegionLeftLabel;
@property(retain, nonatomic) UILabel *secondRegionTextLabel; // @synthesize secondRegionTextLabel=_secondRegionTextLabel;
@property(retain, nonatomic) TTTCountDownNumView *secondRegionRightLabel; // @synthesize secondRegionRightLabel=_secondRegionRightLabel;
@property(retain, nonatomic) TTTCountDownNumView *secondRegionLeftLabel; // @synthesize secondRegionLeftLabel=_secondRegionLeftLabel;
@property(retain, nonatomic) UILabel *firstRegionTextLabel; // @synthesize firstRegionTextLabel=_firstRegionTextLabel;
@property(retain, nonatomic) TTTCountDownNumView *firstRegionRightLabel; // @synthesize firstRegionRightLabel=_firstRegionRightLabel;
@property(retain, nonatomic) TTTCountDownNumView *firstRegionLeftLabel; // @synthesize firstRegionLeftLabel=_firstRegionLeftLabel;
@property(nonatomic) unsigned long long countDownType; // @synthesize countDownType=_countDownType;
- (void).cxx_destruct;
- (void)reSetRemainTime:(long long)arg1;
- (void)dateStringFromInterval;
- (void)createTextLabel:(id)arg1;
- (void)createNumLabel:(id)arg1;
- (void)setLabelsPosition;
- (void)creatLabels;
- (void)initUI;
- (void)setWithRemainTime:(long long)arg1 numColor:(id)arg2 numBackColor:(id)arg3 textColor:(id)arg4 countDownViewType:(unsigned long long)arg5;
- (id)init;

@end

