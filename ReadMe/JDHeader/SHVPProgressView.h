//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SHVPProgressLayer, UIColor, UILabel;

@interface SHVPProgressView : UIView
{
    UILabel *_progressLabel;
    SHVPProgressLayer *_progressLayer;
}

@property(retain, nonatomic) SHVPProgressLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *trackTintColor; // @dynamic trackTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @dynamic progressTintColor;
@property(retain, nonatomic) UIColor *borderTintColor; // @dynamic borderTintColor;
@property(nonatomic) double progress;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

