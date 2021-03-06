//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UICollectionView, UIPageControl, ZDMProduct, ZDMProductImageCollectionViewFooterView;

@interface ZDMProductRcommentdationDetailsImageCellCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    CDUnknownBlockType _onPanProductImage;
    CDUnknownBlockType _onPressProductImage;
    UICollectionView *_productImageCollectionView;
    UIPageControl *_pageControl;
    NSLayoutConstraint *_imageTopSpace;
    NSLayoutConstraint *_pageControlTopSpace;
    ZDMProductImageCollectionViewFooterView *_productImageFooterView;
    ZDMProduct *_product;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) ZDMProduct *product; // @synthesize product=_product;
@property(retain, nonatomic) ZDMProductImageCollectionViewFooterView *productImageFooterView; // @synthesize productImageFooterView=_productImageFooterView;
@property(retain, nonatomic) NSLayoutConstraint *pageControlTopSpace; // @synthesize pageControlTopSpace=_pageControlTopSpace;
@property(retain, nonatomic) NSLayoutConstraint *imageTopSpace; // @synthesize imageTopSpace=_imageTopSpace;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UICollectionView *productImageCollectionView; // @synthesize productImageCollectionView=_productImageCollectionView;
@property(copy, nonatomic) CDUnknownBlockType onPressProductImage; // @synthesize onPressProductImage=_onPressProductImage;
@property(copy, nonatomic) CDUnknownBlockType onPanProductImage; // @synthesize onPanProductImage=_onPanProductImage;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)render:(id)arg1 andProductDetailsType:(unsigned long long)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

