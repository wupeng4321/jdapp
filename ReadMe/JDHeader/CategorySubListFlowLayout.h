//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray, UIView;

@interface CategorySubListFlowLayout : UICollectionViewFlowLayout
{
    NSMutableArray *_dateSourceArray;
    UIView *_collectionHeaderView;
    UIView *_collectionFooterView;
    NSMutableArray *_attributesArray;
    double _bottomHeight;
    double _decorationViewHeight;
}

@property(nonatomic) double decorationViewHeight; // @synthesize decorationViewHeight=_decorationViewHeight;
@property(nonatomic) double bottomHeight; // @synthesize bottomHeight=_bottomHeight;
@property(retain, nonatomic) NSMutableArray *attributesArray; // @synthesize attributesArray=_attributesArray;
@property(retain, nonatomic) UIView *collectionFooterView; // @synthesize collectionFooterView=_collectionFooterView;
@property(retain, nonatomic) UIView *collectionHeaderView; // @synthesize collectionHeaderView=_collectionHeaderView;
@property(retain, nonatomic) NSMutableArray *dateSourceArray; // @synthesize dateSourceArray=_dateSourceArray;
- (void).cxx_destruct;
- (void)layoutAddAttributesWithFrame:(struct CGRect)arg1 indexPath:(id)arg2;
- (void)layoutMultipleRowsCardCellWithThirdItem:(id)arg1 section:(long long)arg2;
- (void)layoutCurSeasonRecomCellsWithThirdItemArray:(id)arg1 section:(long long)arg2;
- (void)layoutSpecialIconCellsWithThirdItemArray:(id)arg1 section:(long long)arg2;
- (double)layoutMixedCellsWithThirdItemArray:(id)arg1 section:(long long)arg2 haveIconCount:(long long)arg3;
- (void)layoutNoIconCellsWithThirdItemArray:(id)arg1 section:(long long)arg2;
- (void)layoutHaveIconCellsWithThirdItemArray:(id)arg1 section:(long long)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (void)initData;
- (id)init;

@end
