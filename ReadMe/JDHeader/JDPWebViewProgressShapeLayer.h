//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@class NSTimer;

@interface JDPWebViewProgressShapeLayer : CAShapeLayer
{
    NSTimer *_timer;
    double _addWidth;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)closeTimer;
- (void)progressFinish;
- (void)progressLoad;
- (void)timeChange;
- (void)initialize;
- (id)init;

@end

