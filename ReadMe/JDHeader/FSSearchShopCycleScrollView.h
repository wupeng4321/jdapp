//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FSSearchCycleScrollViewDataSource-Protocol.h"
#import "FSSearchCycleScrollViewDelegate-Protocol.h"

@class FSSearchCycleImageShopView, FSSearchCycleScrollView, FSSearchPageControl, NSArray, NSString;

@interface FSSearchShopCycleScrollView : UIView <FSSearchCycleScrollViewDelegate, FSSearchCycleScrollViewDataSource>
{
    NSArray *_itemsArray;
    CDUnknownBlockType _shopCycleClick;
    FSSearchCycleScrollView *_pageCycleScrollView;
    FSSearchPageControl *_pageControl;
    FSSearchCycleImageShopView *_haveImageShopView;
    double _showAnimationDuration;
}

@property(nonatomic) double showAnimationDuration; // @synthesize showAnimationDuration=_showAnimationDuration;
@property(retain, nonatomic) FSSearchCycleImageShopView *haveImageShopView; // @synthesize haveImageShopView=_haveImageShopView;
@property(retain, nonatomic) FSSearchPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) FSSearchCycleScrollView *pageCycleScrollView; // @synthesize pageCycleScrollView=_pageCycleScrollView;
@property(copy, nonatomic) CDUnknownBlockType shopCycleClick; // @synthesize shopCycleClick=_shopCycleClick;
@property(retain, nonatomic) NSArray *itemsArray; // @synthesize itemsArray=_itemsArray;
- (void).cxx_destruct;
- (void)pauseShopCycleAnimation;
- (void)resumeShopCycleAnimation;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)currentPageIndexUpdated:(long long)arg1;
- (id)viewForPageAtIndex:(unsigned long long)arg1 reusingView:(id)arg2;
- (unsigned long long)numberOfPages;
- (void)createUI;
- (id)initWithFrame:(struct CGRect)arg1 animationDuration:(double)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

