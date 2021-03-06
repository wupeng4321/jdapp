//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JZHomeBaseCollectionViewCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class JZHomeCouponFloorModel, NSString, UICollectionView;
@protocol JZHomePageCouponFLoorDelegate;

@interface JZHomeCouponFloorCell : JZHomeBaseCollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <JZHomePageCouponFLoorDelegate> _couponFloorDelegate;
    UICollectionView *_collectionView;
    JZHomeCouponFloorModel *_model;
}

@property(retain, nonatomic) JZHomeCouponFloorModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <JZHomePageCouponFLoorDelegate> couponFloorDelegate; // @synthesize couponFloorDelegate=_couponFloorDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isUserLogin;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
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
- (void)updateFloorContent;
- (void)bindData:(id)arg1;
- (void)setupViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

