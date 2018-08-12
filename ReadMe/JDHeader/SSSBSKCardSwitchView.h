//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSMutableArray, NSString, UICollectionView;
@protocol SSSBSKCardSwitchViewDataSource, SSSBSKCardSwitchViewDelegate;

@interface SSSBSKCardSwitchView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    double _dragStartX;
    double _dragEndX;
    _Bool _isLoopShow;
    _Bool _isNeedRegisterCell;
    id <SSSBSKCardSwitchViewDelegate> _delegate;
    id <SSSBSKCardSwitchViewDataSource> _dataSource;
    UICollectionView *_collectionView;
    long long _selectedIndex;
    NSMutableArray *_datas;
    long long _showCardNumber;
}

@property(nonatomic) _Bool isNeedRegisterCell; // @synthesize isNeedRegisterCell=_isNeedRegisterCell;
@property(nonatomic) _Bool isLoopShow; // @synthesize isLoopShow=_isLoopShow;
@property(nonatomic) long long showCardNumber; // @synthesize showCardNumber=_showCardNumber;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) id <SSSBSKCardSwitchViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) id <SSSBSKCardSwitchViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)cellModelForIndex:(long long)arg1;
- (long long)numberOfCards;
- (_Bool)shouldLoop;
- (void)registerCellClassForIndexPath:(id)arg1;
- (void)didSelectedCardAtIndex:(long long)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)p_scrollToCenterAnimated:(_Bool)arg1;
- (void)p_fixCellToCenter;
- (double)p_collectionInset;
- (double)p_cellMargin;
- (double)p_cellHeight;
- (double)p_cellWidth;
- (id)visibleCells;
- (void)cardViewScrollEnabled:(_Bool)arg1;
- (id)cellAtIndexPath:(id)arg1;
- (void)reloadCardView;
- (void)switchToIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)congfigDatas;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

