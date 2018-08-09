//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class AMThemeCollectionViewCell, NSArray, NSDictionary, NSString, UICollectionView;
@protocol AMThemeCollectionViewDelegate;

@interface AMThemeCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    AMThemeCollectionViewCell *selectedCell;
    long long selectedIndex;
    float historyX;
    id <AMThemeCollectionViewDelegate> _selectedThemeDelegate;
    NSArray *_mDataArray;
    UICollectionView *_mCollectionView;
    NSDictionary *_cellSelectedDic;
}

@property(copy, nonatomic) NSDictionary *cellSelectedDic; // @synthesize cellSelectedDic=_cellSelectedDic;
@property(retain, nonatomic) UICollectionView *mCollectionView; // @synthesize mCollectionView=_mCollectionView;
@property(copy, nonatomic) NSArray *mDataArray; // @synthesize mDataArray=_mDataArray;
@property(nonatomic) __weak id <AMThemeCollectionViewDelegate> selectedThemeDelegate; // @synthesize selectedThemeDelegate=_selectedThemeDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)judgeCellIsSelectedWithType:(id)arg1;
- (void)updateCellSelectedDicByDictionary:(id)arg1;
- (void)refershCollectionview;
- (void)updateDataArray:(id)arg1;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

