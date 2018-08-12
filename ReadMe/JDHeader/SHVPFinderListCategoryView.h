//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SHVPListTabTotalModel, UICollectionView;
@protocol FinderLiveCategoryViewDelegate;

@interface SHVPFinderListCategoryView : UIView
{
    _Bool _isFisrtTime;
    UICollectionView *_collectionView;
    id <FinderLiveCategoryViewDelegate> _delegate;
    long long _selectIndex;
    UIView *_scrollIndicator;
    SHVPListTabTotalModel *_tabModel;
    double _cellWidth;
}

@property(nonatomic) _Bool isFisrtTime; // @synthesize isFisrtTime=_isFisrtTime;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) SHVPListTabTotalModel *tabModel; // @synthesize tabModel=_tabModel;
@property(retain, nonatomic) UIView *scrollIndicator; // @synthesize scrollIndicator=_scrollIndicator;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(nonatomic) __weak id <FinderLiveCategoryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)moveIndicator:(double)arg1 width:(double)arg2;
- (void)moveToIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithTabModel:(id)arg1 frame:(struct CGRect)arg2;

@end

