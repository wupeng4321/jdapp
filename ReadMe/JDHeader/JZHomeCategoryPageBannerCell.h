//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JZHomeBaseCollectionViewCell.h"

@class JDCycleScrollView, JZHomeBannerFloorModel, StyledPageControl;

@interface JZHomeCategoryPageBannerCell : JZHomeBaseCollectionViewCell
{
    JDCycleScrollView *_scrollView;
    StyledPageControl *_pageControl;
    JZHomeBannerFloorModel *_model;
}

@property(retain, nonatomic) JZHomeBannerFloorModel *model; // @synthesize model=_model;
@property(retain, nonatomic) StyledPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) JDCycleScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)cellWillDisPlay;
- (void)cellDidEndDisPlay;
- (void)bindData:(id)arg1;
- (void)cycleScrollViewDidScroll:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)currentPageIndexUpdated:(long long)arg1;
- (id)viewForPageAtIndex:(unsigned long long)arg1 reusingView:(id)arg2;
- (unsigned long long)numberOfPages;
- (void)setupViews;

@end
