//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, PDBPSkyEyeCountDownTimerView, UIImageView, UILabel;

@interface PDBPSkyEyePricePromotView : UIView
{
    UIImageView *_arrowImageView;
    UILabel *_promotLabel;
    PDBPSkyEyeCountDownTimerView *_countDownView;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) PDBPSkyEyeCountDownTimerView *countDownView; // @synthesize countDownView=_countDownView;
@property(retain, nonatomic) UILabel *promotLabel; // @synthesize promotLabel=_promotLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
- (void).cxx_destruct;
- (void)renderUIWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

