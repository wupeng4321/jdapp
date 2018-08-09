//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DJXYBaseCollectionViewCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class DJXYHomeSwFloorModel, JDImageView, NSString, UICollectionView, UILabel;

@interface DJXYRecommendFloorCell : DJXYBaseCollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    JDImageView *_logo;
    UILabel *_title;
    JDImageView *_leftIcon;
    JDImageView *_rightIcon;
    UICollectionView *_collectionView;
    DJXYHomeSwFloorModel *_model;
}

+ (struct CGSize)fixedSize;
@property(retain, nonatomic) DJXYHomeSwFloorModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) JDImageView *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain, nonatomic) JDImageView *leftIcon; // @synthesize leftIcon=_leftIcon;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) JDImageView *logo; // @synthesize logo=_logo;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)bindData:(id)arg1;
- (void)clearContent;
- (void)setupViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

