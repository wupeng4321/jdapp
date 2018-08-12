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
@protocol SSSBSKSegmentViewDelegate;

@interface SSSBSKSegmentView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _isFirstTime;
    id <SSSBSKSegmentViewDelegate> _delegate;
    NSArray *_dataSource;
    UICollectionView *_collectionView;
    UIView *_scrollIndicator;
    long long _selectIndex;
    UIImageView *_shadowView;
}

@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) _Bool isFirstTime; // @synthesize isFirstTime=_isFirstTime;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) UIView *scrollIndicator; // @synthesize scrollIndicator=_scrollIndicator;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) id <SSSBSKSegmentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)endChangeSegmentTab:(id)arg1;
- (void)moveIndicatorFromIndex:(unsigned long long)arg1 rightTurn:(_Bool)arg2 offsetScale:(double)arg3;
- (void)transitChangeSegmentTab:(id)arg1;
- (void)moveIndicatorToIndex:(unsigned long long)arg1;
- (double)indicatorOffsetXAtIndex:(unsigned long long)arg1;
- (double)indicatorHeight;
- (double)indicatorWidthAtIndex:(unsigned long long)arg1;
- (double)contentSizeAtIndex:(unsigned long long)arg1;
- (double)cellHeight;
- (double)cellWidthAtIndex:(unsigned long long)arg1;
- (double)segmentViewHeight;
- (double)segmentViewWidth;
- (void)selectIndex:(unsigned long long)arg1;
- (void)updateDataSource:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 dataSource:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

