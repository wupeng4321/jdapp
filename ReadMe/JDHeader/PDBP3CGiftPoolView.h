//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DetailBgContentItem.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class JDIconLabel, NSString, PDBPPromotionModel, UICollectionView, UILabel;

@interface PDBP3CGiftPoolView : DetailBgContentItem <UICollectionViewDelegate, UICollectionViewDataSource>
{
    JDIconLabel *_icon;
    UILabel *_titleLabel;
    UILabel *_rightLabel;
    UICollectionView *_contentView;
    PDBPPromotionModel *_model;
}

@property(retain, nonatomic) PDBPPromotionModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UICollectionView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDIconLabel *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

