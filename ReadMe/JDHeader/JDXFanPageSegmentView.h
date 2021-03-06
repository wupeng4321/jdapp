//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class JDXFanPageScrollingProgressModel, NSString, UICollectionView, UICollectionViewFlowLayout, UIColor, UIFont, UIImageView;
@protocol JDXFanPageSegmentViewProtocal;

@interface JDXFanPageSegmentView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <JDXFanPageSegmentViewProtocal> _delegate;
    long long _selectedIndex;
    JDXFanPageScrollingProgressModel *_scrollingProgress;
    UIColor *_selectedTitleColor;
    UIColor *_nomalTitleColor;
    UIFont *_selectedTitleFont;
    UIFont *_nomalTitleFont;
    double _hightlightBottomLineHeight;
    UICollectionViewFlowLayout *_flowLayout;
    UICollectionView *_collectionView;
    UIImageView *_highlightBottomLine;
    double _fixedItemWidth;
}

@property(nonatomic) double fixedItemWidth; // @synthesize fixedItemWidth=_fixedItemWidth;
@property(retain, nonatomic) UIImageView *highlightBottomLine; // @synthesize highlightBottomLine=_highlightBottomLine;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(nonatomic) double hightlightBottomLineHeight; // @synthesize hightlightBottomLineHeight=_hightlightBottomLineHeight;
@property(retain, nonatomic) UIFont *nomalTitleFont; // @synthesize nomalTitleFont=_nomalTitleFont;
@property(retain, nonatomic) UIFont *selectedTitleFont; // @synthesize selectedTitleFont=_selectedTitleFont;
@property(retain, nonatomic) UIColor *nomalTitleColor; // @synthesize nomalTitleColor=_nomalTitleColor;
@property(retain, nonatomic) UIColor *selectedTitleColor; // @synthesize selectedTitleColor=_selectedTitleColor;
@property(retain, nonatomic) JDXFanPageScrollingProgressModel *scrollingProgress; // @synthesize scrollingProgress=_scrollingProgress;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <JDXFanPageSegmentViewProtocal> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)widthForTitleTextAtIndex:(long long)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollToIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)reloadDataIfNeeded;
- (void)reloadData;
- (void)refreshHighlightBottomLineLocation;
- (struct CGRect)rectOfBottomLineWhenProgress:(id)arg1;
- (void)refreshVisibleCellsStyle;
- (void)refreshUI;
- (id)titleFontForIndex:(long long)arg1;
- (id)titleColorForIndex:(long long)arg1;
- (void)layoutSubviews;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeWithText:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

