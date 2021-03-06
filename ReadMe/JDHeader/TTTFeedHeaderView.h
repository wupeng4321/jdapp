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

@class NSString, TTTFloorModel, UICollectionView, UIView;

@interface TTTFeedHeaderView : TTTBaseView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, TTTBaseViewProtocol>
{
    UICollectionView *_tabCollectionView;
    UIView *_moveLineView;
    TTTFloorModel *_floorModel;
    double _interitemSpacing;
    double _sectionPadding;
}

@property(nonatomic) double sectionPadding; // @synthesize sectionPadding=_sectionPadding;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(retain, nonatomic) TTTFloorModel *floorModel; // @synthesize floorModel=_floorModel;
@property(retain, nonatomic) UIView *moveLineView; // @synthesize moveLineView=_moveLineView;
@property(retain, nonatomic) UICollectionView *tabCollectionView; // @synthesize tabCollectionView=_tabCollectionView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)p_updateSelectIndex:(long long)arg1;
- (void)p_updateCellStatusAtIndexPath:(id)arg1;
- (void)moveLineToX:(struct CGRect)arg1 isAnim:(_Bool)arg2;
- (void)moveToIndex:(unsigned long long)arg1 isAnim:(_Bool)arg2;
- (void)adjustCateCollectionViewPadding;
- (void)updateBackgroundColor;
- (void)bindDataWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)listScrolled:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

