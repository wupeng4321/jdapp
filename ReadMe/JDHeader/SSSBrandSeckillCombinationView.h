//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SSSBrandSeckillContenViewDelegate-Protocol.h"
#import "SSSTabViewDataSource-Protocol.h"
#import "SSSTabViewDelegte-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class BrandKillBrandModel, NSString, SSSBrandSeckillTabView, SSSTableViewPositionHelper, UICollectionView;
@protocol SSSBrandSeckillCombinationViewDelegate;

@interface SSSBrandSeckillCombinationView : UIView <SSSTabViewDataSource, SSSTabViewDelegte, SSSBrandSeckillContenViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    id <SSSBrandSeckillCombinationViewDelegate> _delegate;
    SSSBrandSeckillTabView *_tabView;
    UICollectionView *_contentView;
    CDUnknownBlockType _selectHandler;
    CDUnknownBlockType _scrollHandler;
    BrandKillBrandModel *_brandModel;
    NSString *_currentTabPos;
    CDUnknownBlockType _tabPosblock;
    SSSTableViewPositionHelper *_positionHelper;
}

+ (id)setUpModel:(id)arg1 didselectHandler:(CDUnknownBlockType)arg2 scrollHandler:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) SSSTableViewPositionHelper *positionHelper; // @synthesize positionHelper=_positionHelper;
@property(copy, nonatomic) CDUnknownBlockType tabPosblock; // @synthesize tabPosblock=_tabPosblock;
@property(retain, nonatomic) NSString *currentTabPos; // @synthesize currentTabPos=_currentTabPos;
@property(retain, nonatomic) BrandKillBrandModel *brandModel; // @synthesize brandModel=_brandModel;
@property(copy, nonatomic) CDUnknownBlockType scrollHandler; // @synthesize scrollHandler=_scrollHandler;
@property(copy, nonatomic) CDUnknownBlockType selectHandler; // @synthesize selectHandler=_selectHandler;
@property(retain, nonatomic) UICollectionView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SSSBrandSeckillTabView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) __weak id <SSSBrandSeckillCombinationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)initDeprecord;
- (void)setUpContentViewFrame:(CDUnknownBlockType)arg1;
- (void)contentViewCell:(id)arg1 contentOffset_newY:(double)arg2 contentOffset_oldY:(double)arg3;
- (void)contentViewLoadNextData:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)singleTabDepthMTA;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)getTabPos:(CDUnknownBlockType)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)tabView:(id)arg1 widthOfTabAtIndex:(long long)arg2;
- (void)tabView:(id)arg1 didClickTabAtIndex:(long long)arg2;
- (id)tabView:(id)arg1 cellForTabAtIndex:(long long)arg2;
- (long long)numberOfTabsInTabView:(id)arg1;
- (void)adjustTabHeight;
- (void)refreshToFirstTab;
- (void)reloadData:(id)arg1;
- (void)setupUI;
- (void)JDScrollNavScreenDicCancleScroll:(id)arg1;
- (void)JDScrollNavScreenWillScroll:(id)arg1;
- (void)registerNotificationForCancleSwipeRight2Parent;
- (void)registerNotificationForSwipeRight2Parent;
- (void)setUpModel:(id)arg1 didselectHandler:(CDUnknownBlockType)arg2 scrollHandler:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
