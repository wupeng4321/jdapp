//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class UIColor;

@interface SecKillProgressLayer : CALayer
{
    double _progress;
    UIColor *_borderTintColor;
    UIColor *_progressTintColor;
    UIColor *_trackTintColor;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
@property(retain, nonatomic) UIColor *trackTintColor; // @synthesize trackTintColor=_trackTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(retain, nonatomic) UIColor *borderTintColor; // @synthesize borderTintColor=_borderTintColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;

@end

