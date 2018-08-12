//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JDiCarouselDataSource-Protocol.h"
#import "JDiCarouselDelegate-Protocol.h"

@class JDiCarousel, NSString, NSTimer, TTTElementModel, UIPageControl;

@interface TTTElementAdsCarouselView : UIView <JDiCarouselDelegate, JDiCarouselDataSource>
{
    JDiCarousel *_cycleView;
    UIPageControl *_pageControl;
    NSTimer *_timer;
    TTTElementModel *_elementModel;
}

@property(nonatomic) __weak TTTElementModel *elementModel; // @synthesize elementModel=_elementModel;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) JDiCarousel *cycleView; // @synthesize cycleView=_cycleView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)willMoveToSuperview:(id)arg1;
- (void)valueChanged;
- (void)JDiCarousel:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)JDiCarouselCurrentItemIndexDidChange:(id)arg1;
- (double)JDiCarousel:(id)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (id)JDiCarousel:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (double)JDiCarouselItemWidth:(id)arg1;
- (long long)JDiCarouselNumberOfItemsInCarousel:(id)arg1;
- (void)cycleViewAnimation;
- (void)reloadCycleView;
- (void)setFrame:(struct CGRect)arg1 data:(id)arg2;
- (void)pauseTimer;
- (void)resumeTimer;
- (void)adsCarouselDidEndDisplaying;
- (void)adsCarouselWillDisplay;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

