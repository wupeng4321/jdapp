//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSNumber, SecKillCutDownView, UIImageView;

@interface SSSNewBrandTimerView : UIView
{
    NSNumber *_remainingTime;
    UIImageView *_remainingTimeBackgroundView;
    SecKillCutDownView *_cutDownView;
}

@property(retain, nonatomic) SecKillCutDownView *cutDownView; // @synthesize cutDownView=_cutDownView;
@property(retain, nonatomic) UIImageView *remainingTimeBackgroundView; // @synthesize remainingTimeBackgroundView=_remainingTimeBackgroundView;
@property(retain, nonatomic) NSNumber *remainingTime; // @synthesize remainingTime=_remainingTime;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

