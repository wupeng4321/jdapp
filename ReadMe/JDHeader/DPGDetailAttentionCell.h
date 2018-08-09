//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DPGDetailTableViewCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class DPGDetailRelatedSkuCellModel, NSString, UICollectionView;

@interface DPGDetailAttentionCell : DPGDetailTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    CDUnknownBlockType _detailAttentionArticClickBlock;
    UICollectionView *_mCollectionView;
    DPGDetailRelatedSkuCellModel *_model;
}

@property(retain, nonatomic) DPGDetailRelatedSkuCellModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UICollectionView *mCollectionView; // @synthesize mCollectionView=_mCollectionView;
@property(copy, nonatomic) CDUnknownBlockType detailAttentionArticClickBlock; // @synthesize detailAttentionArticClickBlock=_detailAttentionArticClickBlock;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)assignValue:(id)arg1;
- (void)setupViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

