//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, TTTElementModel, UICollectionView, UICollectionViewFlowLayout;

@interface TTTElementVideoScrollView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    TTTElementModel *_elementModel;
    double _ratio;
}

@property(nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(nonatomic) __weak TTTElementModel *elementModel; // @synthesize elementModel=_elementModel;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadCollectionView;
- (void)setFrame:(struct CGRect)arg1 data:(id)arg2 ratio:(double)arg3;
- (void)endVideo;
- (void)videoScrollDidEndDisplaying;
- (void)videoScrollWillDisplay;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

