//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface SecKillCutDownView : UIView
{
    UILabel *_titleDes;
    UILabel *_countdownHourLabel;
    UILabel *_colonLabel1;
    UILabel *_countdownMinuteLabel;
    UILabel *_colonLabel2;
    UILabel *_countdownSecondLabel;
    UILabel *_senceDesLabel;
    int _cutDownType;
    long long _style;
}

@property(nonatomic) int cutDownType; // @synthesize cutDownType=_cutDownType;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)updateCountdownLabelContent:(id)arg1;
- (void)setUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;

@end
