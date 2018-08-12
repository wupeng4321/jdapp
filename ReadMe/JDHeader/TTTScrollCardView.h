//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, TTTScrollCardFlowLayout, UICollectionView;
@protocol TTTScrollCarViewDataSource, TTTScrollCardViewDelegate;

@interface TTTScrollCardView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate>
{
    long long currentPageIndex;
    _Bool _isShowMore;
    id <TTTScrollCarViewDataSource> _dataSource;
    id <TTTScrollCardViewDelegate> _delegate;
    long long _slideType;
    double _minimumLineSpacing;
    double _deviantCenterX;
    UICollectionView *_collectionView;
    TTTScrollCardFlowLayout *_flowLayout;
    double _beginDragX;
    double _endDragX;
    long long _currentArrIndex;
    long long _cardViewCount;
    struct CGSize _itemSize;
    struct CGPoint _contentOffset;
    CDStruct_8b3280d7 _scrollCardScale;
    struct CGSize _footerReferenceSize;
    struct UIEdgeInsets _sectionInset;
}

@property(nonatomic) long long cardViewCount; // @synthesize cardViewCount=_cardViewCount;
@property(nonatomic) long long currentArrIndex; // @synthesize currentArrIndex=_currentArrIndex;
@property(nonatomic) double endDragX; // @synthesize endDragX=_endDragX;
@property(nonatomic) double beginDragX; // @synthesize beginDragX=_beginDragX;
@property(retain, nonatomic) TTTScrollCardFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) struct CGSize footerReferenceSize; // @synthesize footerReferenceSize=_footerReferenceSize;
@property(nonatomic) CDStruct_c3b9c2ee scrollCardScale; // @synthesize scrollCardScale=_scrollCardScale;
@property(nonatomic) double deviantCenterX; // @synthesize deviantCenterX=_deviantCenterX;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_minimumLineSpacing;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) _Bool isShowMore; // @synthesize isShowMore=_isShowMore;
@property(nonatomic) long long slideType; // @synthesize slideType=_slideType;
@property(nonatomic) __weak id <TTTScrollCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TTTScrollCarViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)updateCurrentPageIndex;
@property(readonly, nonatomic) long long currentPageIndex;
- (void)reloadData;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

