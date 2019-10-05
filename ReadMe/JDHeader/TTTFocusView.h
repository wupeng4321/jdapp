//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class JDCycleScrollView, NSString, TTTFloorModel, UIPageControl;

@interface TTTFocusView : TTTBaseView <TTTBaseViewProtocol>
{
    _Bool _isDisPlay;
    _Bool _isFirstDisPlay;
    int _adsStyle;
    JDCycleScrollView *_scrollerView;
    UIPageControl *_pageControl;
    TTTFloorModel *_viewData;
}

@property(retain, nonatomic) TTTFloorModel *viewData; // @synthesize viewData=_viewData;
@property(nonatomic) _Bool isFirstDisPlay; // @synthesize isFirstDisPlay=_isFirstDisPlay;
@property(nonatomic) _Bool isDisPlay; // @synthesize isDisPlay=_isDisPlay;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) JDCycleScrollView *scrollerView; // @synthesize scrollerView=_scrollerView;
@property(nonatomic) int adsStyle; // @synthesize adsStyle=_adsStyle;
- (void).cxx_destruct;
- (void)viewDidEndDisplaying;
- (void)viewWillDisplay;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)currentPageIndexUpdated:(long long)arg1;
- (id)viewForPageAtIndex:(unsigned long long)arg1 reusingView:(id)arg2;
- (unsigned long long)numberOfPages;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
