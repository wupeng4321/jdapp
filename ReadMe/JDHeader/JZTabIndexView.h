//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UICollectionView;

@interface JZTabIndexView : UIView
{
    struct CGSize itemSize;
    _Bool hasLeading;
    double _maxWidth;
    CDUnknownBlockType _selectedBlock;
    long long _selectedIndex;
    NSArray *_values;
    NSMutableArray *_reddots;
    UIView *_cursorView;
    UICollectionView *_collectionView;
    CDUnknownBlockType _updateBlock;
    NSArray *_models;
}

@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *cursorView; // @synthesize cursorView=_cursorView;
@property(retain, nonatomic) NSMutableArray *reddots; // @synthesize reddots=_reddots;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
- (void).cxx_destruct;
- (void)setWidth:(double)arg1;
- (double)itemSpacing;
- (double)specificItemWidthWithModel:(id)arg1;
- (void)itemWidth;
- (double)itemWidthForItem:(id)arg1;
@property(readonly, nonatomic) double realWidth;
@property(readonly, nonatomic) _Bool isOverFlow;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGRect)frameForItemAtIndex:(long long)arg1;
- (double)cursorWidthAtIndex:(long long)arg1;
- (double)cursorOffsetXAtIndex:(long long)arg1;
- (void)updateCusorView;
- (void)updateWithModels:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
