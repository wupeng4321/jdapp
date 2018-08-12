//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface STScratchView : UIView
{
    struct CGPoint previousTouchLocation;
    struct CGPoint currentTouchLocation;
    struct CGImage *hideImage;
    struct CGImage *scratchImage;
    struct CGContext *contextMask;
    float _percentAccomplishment;
    float _sizeBrush;
    UIView *_hideView;
}

@property(retain, nonatomic) UIView *hideView; // @synthesize hideView=_hideView;
@property(nonatomic) float sizeBrush; // @synthesize sizeBrush=_sizeBrush;
@property(nonatomic) float percentAccomplishment; // @synthesize percentAccomplishment=_percentAccomplishment;
- (void).cxx_destruct;
- (void)initScratch;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)scratchTheViewFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

