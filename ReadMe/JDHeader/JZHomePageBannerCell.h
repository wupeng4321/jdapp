//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JZHomeBaseCollectionViewCell.h"

@class JDCycleScrollView, JZHomeBannerFloorModel, StyledPageControl, UIImageView, UIView;

@interface JZHomePageBannerCell : JZHomeBaseCollectionViewCell
{
    double defaultOffset;
    double imgHeight;
    _Bool isDragScroll;
    UIImageView *_bgImageView;
    JDCycleScrollView *_scrollView;
    StyledPageControl *_pageControl;
    JZHomeBannerFloorModel *_model;
    double _dragBeginOffset;
    unsigned long long _dragBeginBannerIndex;
    double _bgOriginX;
    UIView *_whiteMask;
    UIView *_grayRect;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *grayRect; // @synthesize grayRect=_grayRect;
@property(retain, nonatomic) UIView *whiteMask; // @synthesize whiteMask=_whiteMask;
@property(nonatomic) double bgOriginX; // @synthesize bgOriginX=_bgOriginX;
@property(nonatomic) unsigned long long dragBeginBannerIndex; // @synthesize dragBeginBannerIndex=_dragBeginBannerIndex;
@property(nonatomic) double dragBeginOffset; // @synthesize dragBeginOffset=_dragBeginOffset;
@property(retain, nonatomic) JZHomeBannerFloorModel *model; // @synthesize model=_model;
@property(retain, nonatomic) StyledPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) JDCycleScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (void)cellWillDisPlay;
- (void)cellDidEndDisPlay;
- (void)cycleScrollViewDidEndScrollingAnimation:(id)arg1;
- (void)cycleScrollViewWillBeginDragging:(id)arg1;
- (void)scrollVidewDidScroll:(id)arg1;
- (void)bindData:(id)arg1;
- (void)cycleScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2 shouldScroll:(_Bool)arg3;
- (void)cycleScrollViewDidScroll:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)currentPageIndexUpdated:(long long)arg1;
- (id)viewForPageAtIndex:(unsigned long long)arg1 reusingView:(id)arg2;
- (unsigned long long)numberOfPages;
- (void)setupViews;

@end

