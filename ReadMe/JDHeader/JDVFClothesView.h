//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UICollectionView, UILabel;
@protocol JDVFClothesViewDelegate;

@interface JDVFClothesView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *categorayCollectionView;
    UICollectionView *goodsCollectionView;
    int categoraySelectIndex;
    NSMutableArray *categorayArray;
    NSMutableArray *goodsArray;
    NSMutableArray *clothFolderPath;
    NSMutableArray *clothBaseFolderPath;
    UIButton *unfoldButton;
    NSMutableArray *dressArray;
    UIButton *cartButton;
    UILabel *numberLabel;
    int _genderType;
    id <JDVFClothesViewDelegate> _delegate;
}

@property(nonatomic) int genderType; // @synthesize genderType=_genderType;
@property(nonatomic) __weak id <JDVFClothesViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setNumber:(id)arg1;
- (void)setDressArray:(id)arg1;
- (void)hideUnfoldButton:(_Bool)arg1;
- (void)setGoods:(id)arg1 andClothesPath:(id)arg2 andClothesBasePath:(id)arg3;
- (void)setCategoray:(id)arg1 andActivityCate:(int)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onClickCartButton:(id)arg1;
- (void)onClickAddCartButton:(id)arg1;
- (void)onClickUnfoldButton:(id)arg1;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1 andGender:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

