//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseView.h"

#import "PDBPClothesColorFloorItemCellProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSDictionary, NSString, PDBPClothesColorModel, UICollectionView, UILabel, UIView;

@interface PDBPClothesColorFloorView : PDFloorBaseView <UICollectionViewDelegate, UICollectionViewDataSource, PDBPClothesColorFloorItemCellProtocol>
{
    NSString *_skuId;
    NSDictionary *_track_dic;
    PDBPClothesColorModel *_model;
    UILabel *_countLabel;
    UICollectionView *_collView;
    UIView *_selectBorderView;
    UIView *_line;
    long long _curIndex;
}

@property(nonatomic) long long curIndex; // @synthesize curIndex=_curIndex;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIView *selectBorderView; // @synthesize selectBorderView=_selectBorderView;
@property(retain, nonatomic) UICollectionView *collView; // @synthesize collView=_collView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) PDBPClothesColorModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSDictionary *track_dic; // @synthesize track_dic=_track_dic;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
- (void).cxx_destruct;
- (void)didTapCell:(id)arg1 index:(long long)arg2;
- (void)changeSkuMTA:(id)arg1 saleOut:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)renderWithData:(id)arg1;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
