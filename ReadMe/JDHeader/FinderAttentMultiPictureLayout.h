//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableDictionary;

@interface FinderAttentMultiPictureLayout : UICollectionViewFlowLayout
{
    long long _itemCount;
    long long _numberOfLines;
    NSMutableDictionary *_layoutAttributes;
    long long _numberOfItemsPerLine;
    long long _countOfPerLine;
    struct CGSize _sizeOfItem;
    struct CGSize _collectionViewSize;
    struct CGSize _contentSize;
    struct UIEdgeInsets _pageInset;
}

@property(nonatomic) long long countOfPerLine; // @synthesize countOfPerLine=_countOfPerLine;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) long long numberOfItemsPerLine; // @synthesize numberOfItemsPerLine=_numberOfItemsPerLine;
@property(retain, nonatomic) NSMutableDictionary *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(nonatomic) struct CGSize collectionViewSize; // @synthesize collectionViewSize=_collectionViewSize;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) struct CGSize sizeOfItem; // @synthesize sizeOfItem=_sizeOfItem;
@property(nonatomic) struct UIEdgeInsets pageInset; // @synthesize pageInset=_pageInset;
@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
- (void).cxx_destruct;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)calculateCellProperty;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

