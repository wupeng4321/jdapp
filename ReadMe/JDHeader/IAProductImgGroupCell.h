//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IAMainSessionBaseCell.h"

#import "IAProductImgGroupGetMoreDataDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IAProductImgGroupCellCollectionView, IAProductImgGroupModel, NSString, UICollectionReusableView;

@interface IAProductImgGroupCell : IAMainSessionBaseCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IAProductImgGroupGetMoreDataDelegate>
{
    IAProductImgGroupCellCollectionView *productImgGroupCollectionView;
    IAProductImgGroupModel *iaProductImgGroupModel;
    _Bool isMore;
    UICollectionReusableView *_resuableFootView;
}

@property(retain, nonatomic) UICollectionReusableView *resuableFootView; // @synthesize resuableFootView=_resuableFootView;
- (void).cxx_destruct;
- (unsigned long long)getNumberOnePage:(id)arg1;
- (unsigned long long)getMaxNumerOnePage;
- (void)setSectionInsert:(_Bool)arg1;
- (void)getMoreProduct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configDelegate:(id)arg1;
- (void)configModel:(id)arg1 publicModel:(id)arg2;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

