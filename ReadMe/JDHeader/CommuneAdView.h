//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDContentItem.h"

#import "iCarouselDataSource-Protocol.h"
#import "iCarouselDelegate-Protocol.h"

@class CacheNetworkManager, CommuneHomeTempateModel, JDPageControl, JDStoreNetwork, NSArray, NSString, NSTimer, iCarousel;
@protocol AdViewDelegate;

@interface CommuneAdView : JDContentItem <iCarouselDataSource, iCarouselDelegate>
{
    iCarousel *_scrollView;
    JDPageControl *_pageControl;
    long long _currentPageIndex;
    NSTimer *_swapTimer;
    JDStoreNetwork *_adDao;
    CacheNetworkManager *_cacheNetmanager;
    NSArray *_data;
    id <AdViewDelegate> _adviewDelegate;
    CommuneHomeTempateModel *_templateModel;
}

@property(retain, nonatomic) CommuneHomeTempateModel *templateModel; // @synthesize templateModel=_templateModel;
@property(nonatomic) id <AdViewDelegate> adviewDelegate; // @synthesize adviewDelegate=_adviewDelegate;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)carouselCurrentItemIndexUpdated:(id)arg1;
- (_Bool)carouselShouldWrap:(id)arg1;
- (double)carousel:(id)arg1 itemAlphaForOffset:(double)arg2;
- (double)carouselItemWidth:(id)arg1;
- (unsigned long long)numberOfPlaceholdersInCarousel:(id)arg1;
- (id)carousel:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2 reusingView:(id)arg3;
- (unsigned long long)numberOfVisibleItemsInCarousel:(id)arg1;
- (unsigned long long)numberOfItemsInCarousel:(id)arg1;
- (void)updateSuperViewFromDel;
- (void)updatePage:(id)arg1;
- (void)swapTimerFired:(id)arg1;
- (void)loadViewWithData:(id)arg1 components:(id)arg2 error:(id)arg3;
- (void)fetchData;
- (void)postStartAnimation:(float)arg1;
- (void)resetStartAnimation;
- (void)startAnimation:(_Bool)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

