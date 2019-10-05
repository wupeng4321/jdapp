//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JZHomeBaseCollectionViewCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class JDImageView, JZHomeCategoryFloorModel, JZHomeCategoryHeaderTitleView, JZHomeCategoryThemeView, NSString, UICollectionView, UIView;

@interface JZHomeCategoryFloorCell : JZHomeBaseCollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UIView *_header;
    JZHomeCategoryHeaderTitleView *_headerTitleView;
    JZHomeCategoryThemeView *_themeView;
    JDImageView *_bgImg;
    JZHomeCategoryFloorModel *_model;
    UICollectionView *_collectionView;
}

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) JZHomeCategoryFloorModel *model; // @synthesize model=_model;
@property(retain, nonatomic) JDImageView *bgImg; // @synthesize bgImg=_bgImg;
@property(retain, nonatomic) JZHomeCategoryThemeView *themeView; // @synthesize themeView=_themeView;
@property(retain, nonatomic) JZHomeCategoryHeaderTitleView *headerTitleView; // @synthesize headerTitleView=_headerTitleView;
@property(retain, nonatomic) UIView *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateCollectionView;
- (void)updateThemeView;
- (void)updateHeaderTitleView;
- (void)updateBgImg;
- (void)updateFloorContent;
- (void)bindData:(id)arg1;
- (void)p_themeTapped;
- (void)p_headerTapped;
- (void)setupViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
