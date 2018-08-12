//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, TTTAdsWareContainerModel, TTTFloorModel, UICollectionView;

@interface TTTAWWareView : TTTBaseView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, TTTBaseViewProtocol>
{
    UICollectionView *_collectionView;
    double _itemLineSpace;
    long long _numOfSection;
    long long _numOfItems;
    TTTFloorModel *_floorModel;
    TTTAdsWareContainerModel *_containerModel;
    struct CGSize _itemSize;
}

@property(nonatomic) __weak TTTAdsWareContainerModel *containerModel; // @synthesize containerModel=_containerModel;
@property(nonatomic) __weak TTTFloorModel *floorModel; // @synthesize floorModel=_floorModel;
@property(nonatomic) long long numOfItems; // @synthesize numOfItems=_numOfItems;
@property(nonatomic) long long numOfSection; // @synthesize numOfSection=_numOfSection;
@property(nonatomic) double itemLineSpace; // @synthesize itemLineSpace=_itemLineSpace;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (struct CGRect)collectionFrame;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)itemSizeWithLineSpaceByType:(long long)arg1;
- (void)p_setBackgroundColor;
- (void)bindDataWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

