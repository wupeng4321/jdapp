//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTFlexibleContainerView.h"

#import "TTTBaseViewProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, TTTWareModel, TTTWaresRowModel, UICollectionView, UICollectionViewFlowLayout;

@interface TTTFlexibleViewSlide : TTTFlexibleContainerView <UICollectionViewDataSource, UICollectionViewDelegate, TTTBaseViewProtocol>
{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    TTTWaresRowModel *_rowModel;
    TTTWareModel *_wareModel;
    double _ratio;
    struct CGRect _rect;
}

@property(nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) TTTWareModel *wareModel; // @synthesize wareModel=_wareModel;
@property(retain, nonatomic) TTTWaresRowModel *rowModel; // @synthesize rowModel=_rowModel;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadCollectionView;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

