//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class JDShopInSearchFlowLayout;

@protocol JDShopInSearchFlowLayoutDelegate <UICollectionViewDelegateFlowLayout>
- (double)shopInSearchflowLayout:(JDShopInSearchFlowLayout *)arg1 heightForItemAtIndex:(unsigned long long)arg2 itemWidth:(double)arg3;

@optional
- (struct CGSize)footerViewSizeInShopInSearchflowLayout:(JDShopInSearchFlowLayout *)arg1;
- (struct UIEdgeInsets)edgeInsetsInShopInSearchflowLayout:(JDShopInSearchFlowLayout *)arg1;
- (double)rowMarginInShopInSearchflowLayout:(JDShopInSearchFlowLayout *)arg1;
- (double)columnMargInShopInSearchflowLayout:(JDShopInSearchFlowLayout *)arg1;
- (double)columnCountInShopInSearchflowLayout:(JDShopInSearchFlowLayout *)arg1;
@end

