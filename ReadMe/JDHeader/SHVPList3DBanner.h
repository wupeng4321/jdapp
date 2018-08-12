//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JDiCarouselDataSource-Protocol.h"
#import "JDiCarouselDelegate-Protocol.h"

@class JDiCarousel, NSString, NSTimer, SHVPBaseListItem, UIPageControl;

@interface SHVPList3DBanner : UIView <JDiCarouselDataSource, JDiCarouselDelegate>
{
    SHVPBaseListItem *_bannerFloorModel;
    JDiCarousel *_carousel;
    UIPageControl *_pageControl;
    double _animationDuration;
    NSTimer *_animationTimer;
}

@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) JDiCarousel *carousel; // @synthesize carousel=_carousel;
@property(retain, nonatomic) SHVPBaseListItem *bannerFloorModel; // @synthesize bannerFloorModel=_bannerFloorModel;
- (void).cxx_destruct;
- (void)JDiCarousel:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (struct CATransform3D)JDiCarousel:(id)arg1 itemTransformForOffset:(double)arg2 baseTransform:(struct CATransform3D)arg3;
- (void)JDiCarouselCurrentItemIndexDidChange:(id)arg1;
- (id)JDiCarousel:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (double)JDiCarousel:(id)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (long long)JDiCarouselNumberOfItemsInCarousel:(id)arg1;
- (void)bindData:(id)arg1;
- (void)setCurrentPage:(long long)arg1 animated:(_Bool)arg2;
- (void)resumeTimerAfterTimeInterval:(double)arg1;
- (void)resumeScrollAfterTimeInterval:(double)arg1;
- (void)pauseScroll;
- (void)willMoveToSuperview:(id)arg1;
- (void)animationTimerDidFired:(id)arg1;
- (void)setUpTimer;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

