//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SecKillBaseCell.h"

#import "SSSNewBrandSeckillListViewCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, SSSNewBrandSecKillModel, SSSNewBrandSeckillListViewCell, SSSTableViewPositionHelper, UICollectionView;
@protocol sssnewbrandSecKillListCellScrollDelegate;

@interface SSSNewBrandSecKillListCell : SecKillBaseCell <UICollectionViewDataSource, UICollectionViewDelegate, SSSNewBrandSeckillListViewCellDelegate>
{
    SSSNewBrandSecKillModel *_model;
    UICollectionView *_listView;
    id <sssnewbrandSecKillListCellScrollDelegate> _delegate;
    SSSNewBrandSeckillListViewCell *_listViewCell;
    SSSTableViewPositionHelper *_positionHelper;
}

@property(retain, nonatomic) SSSTableViewPositionHelper *positionHelper; // @synthesize positionHelper=_positionHelper;
@property(retain, nonatomic) SSSNewBrandSeckillListViewCell *listViewCell; // @synthesize listViewCell=_listViewCell;
@property(nonatomic) __weak id <sssnewbrandSecKillListCellScrollDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UICollectionView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) SSSNewBrandSecKillModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)isOffsetTableViewPosition:(_Bool)arg1;
- (void)listViewScrollEnabled:(_Bool)arg1;
- (void)listViewLoadNextData:(id)arg1;
- (void)listViewCell:(id)arg1 collectionViewScollEnabled:(_Bool)arg2;
- (void)listViewCell:(id)arg1 scollEnabled:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)JDScrollNavScreenDicCancleScroll:(id)arg1;
- (void)JDScrollNavScreenWillScroll:(id)arg1;
- (void)registerNotificationForCancleSwipeRight2Parent;
- (void)registerNotificationForSwipeRight2Parent;
- (void)prepare;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
