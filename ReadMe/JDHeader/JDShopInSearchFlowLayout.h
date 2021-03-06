//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray;
@protocol JDShopInSearchFlowLayoutDelegate;

@interface JDShopInSearchFlowLayout : UICollectionViewFlowLayout
{
    double _footerHeight;
    id <JDShopInSearchFlowLayoutDelegate> _delegate;
    NSMutableArray *_attrsArray;
    NSMutableArray *_columnHeights;
    double _contentHeight;
    double _contentMaxY;
}

@property(nonatomic) double contentMaxY; // @synthesize contentMaxY=_contentMaxY;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) NSMutableArray *columnHeights; // @synthesize columnHeights=_columnHeights;
@property(retain, nonatomic) NSMutableArray *attrsArray; // @synthesize attrsArray=_attrsArray;
@property(nonatomic) __weak id <JDShopInSearchFlowLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
- (void).cxx_destruct;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (struct CGSize)footerViewSize;
- (struct UIEdgeInsets)edgeInsets;
- (long long)columnCount;
- (double)columnMargin;
- (double)rowMargin;

@end

