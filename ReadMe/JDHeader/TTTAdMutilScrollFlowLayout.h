//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray, NSMutableDictionary;

@interface TTTAdMutilScrollFlowLayout : UICollectionViewFlowLayout
{
    long long _lineCount;
    long long _columnCount;
    double _xPadding;
    double _yPadding;
    NSMutableDictionary *_itemsNumInsecDic;
    NSMutableArray *_attributesArr;
}

@property(retain, nonatomic) NSMutableArray *attributesArr; // @synthesize attributesArr=_attributesArr;
@property(retain, nonatomic) NSMutableDictionary *itemsNumInsecDic; // @synthesize itemsNumInsecDic=_itemsNumInsecDic;
@property(nonatomic) double yPadding; // @synthesize yPadding=_yPadding;
@property(nonatomic) double xPadding; // @synthesize xPadding=_xPadding;
@property(nonatomic) long long columnCount; // @synthesize columnCount=_columnCount;
@property(nonatomic) long long lineCount; // @synthesize lineCount=_lineCount;
- (void).cxx_destruct;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end

