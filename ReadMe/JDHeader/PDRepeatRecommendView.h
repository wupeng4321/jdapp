//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, NewProductModel, PDRepeatRecommendLayout, UICollectionView, UIPageControl;

@interface PDRepeatRecommendView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate>
{
    NSArray *_itemArray;
    NewProductModel *_model;
    PDRepeatRecommendLayout *_layout;
    UICollectionView *_contentView;
    UIPageControl *_pageControl;
    long long _originSectionNum;
    NSMutableArray *_pagedArr;
}

@property(retain, nonatomic) NSMutableArray *pagedArr; // @synthesize pagedArr=_pagedArr;
@property(nonatomic) long long originSectionNum; // @synthesize originSectionNum=_originSectionNum;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UICollectionView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) PDRepeatRecommendLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSArray *itemArray; // @synthesize itemArray=_itemArray;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)handleItemArray;
- (void)resetState;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

