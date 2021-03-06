//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"
#import "TTTWaresCycleScrollViewDataSource-Protocol.h"
#import "TTTWaresCycleScrollViewDelegate-Protocol.h"

@class NSString, TTTFloorModel, TTTWaresCycleScrollView, UIPageControl;

@interface TTTWaresCarouselThreeLView : TTTBaseView <TTTWaresCycleScrollViewDataSource, TTTWaresCycleScrollViewDelegate, TTTBaseViewProtocol>
{
    TTTWaresCycleScrollView *_cycleScrollView;
    UIPageControl *_pageControl;
    TTTFloorModel *_floorModel;
}

@property(nonatomic) __weak TTTFloorModel *floorModel; // @synthesize floorModel=_floorModel;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) TTTWaresCycleScrollView *cycleScrollView; // @synthesize cycleScrollView=_cycleScrollView;
- (void).cxx_destruct;
- (struct CGRect)cycleScrollViewFrame;
- (void)updatePageControl;
- (double)TTTWaresCycleScrollView:(id)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (void)TTTWaresCycleScrollViewCurrentItemIndexDidChange:(id)arg1;
- (id)TTTWaresCycleScrollView:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)TTTWaresCycleScrollNumberOfItems:(id)arg1;
- (void)updateScrollHeight;
- (void)updateBackcolor;
- (void)bindDataWithViewModel:(id)arg1;
- (void)viewDidEndDisplaying;
- (void)viewWillDisplay;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

