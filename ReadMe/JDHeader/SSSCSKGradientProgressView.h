//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SSSCSKGradientProgressLayer, UILabel;

@interface SSSCSKGradientProgressView : UIView
{
    SSSCSKGradientProgressLayer *_gradientProgress;
    UILabel *_progressLabel;
}

@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) SSSCSKGradientProgressLayer *gradientProgress; // @synthesize gradientProgress=_gradientProgress;
- (void).cxx_destruct;
- (double)progressFontSize;
@property(nonatomic) double progress;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

