//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, UICollectionView, UIImageView;
@protocol SSSNewTabViewDataSource, SSSNewTabViewDelegte;

@interface SSSNewBrandSeckillTabView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    CDStruct_8fac2e83 _dataSourceHas;
    CDStruct_bf7fe323 _delegateHas;
    long long _selectIndex;
    NSArray *_arrTabItems;
    id <SSSNewTabViewDataSource> _dataSource;
    id <SSSNewTabViewDelegte> _delegate;
    UICollectionView *_tabView;
    UIView *_moveLineView;
    UIImageView *_tabMask;
    double _tabSpacing;
}

@property(nonatomic) double tabSpacing; // @synthesize tabSpacing=_tabSpacing;
@property(retain, nonatomic) UIImageView *tabMask; // @synthesize tabMask=_tabMask;
@property(retain, nonatomic) UIView *moveLineView; // @synthesize moveLineView=_moveLineView;
@property(retain, nonatomic) UICollectionView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) __weak id <SSSNewTabViewDelegte> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SSSNewTabViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSArray *arrTabItems; // @synthesize arrTabItems=_arrTabItems;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
- (void).cxx_destruct;
- (void)animationMoveLineToX:(double)arg1;
- (void)moveToIndex:(long long)arg1;
- (void)refreshTabView;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)widthOfTabAtIndex:(long long)arg1;
- (void)didClickTabAtIndex:(long long)arg1;
- (id)cellForTabAtIndex:(long long)arg1;
- (long long)numberOfTabs;
- (void)getNewSpacing;
- (void)reloadData;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndex:(long long)arg2;
- (void)registerClass:(Class)arg1 forCellReuseIdentifier:(id)arg2;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
