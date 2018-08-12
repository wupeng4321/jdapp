//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "SCShopCartShareBottomDelegate-Protocol.h"
#import "SCShopCartShareCartCellDelegate-Protocol.h"
#import "SCShopCartShareCartHeaderCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, SCShopCartShareBottomView, UICollectionView;

@interface SCShopCartShareViewController : JDViewController <UICollectionViewDelegate, UICollectionViewDataSource, SCShopCartShareCartHeaderCellDelegate, SCShopCartShareCartCellDelegate, SCShopCartShareBottomDelegate>
{
    NSArray *_data;
    UICollectionView *_collectionView;
    SCShopCartShareBottomView *_bottomView;
}

+ (id)getSkuOfSubItems:(id)arg1;
+ (id)getShareData:(id)arg1;
@property(retain, nonatomic) SCShopCartShareBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)hexStringFromString:(id)arg1;
- (void)wakeUpShareActionWithItems:(id)arg1;
- (id)getSelectItems;
- (void)didShareWithSelectedItems;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)share;
- (void)shareBottomSelected:(id)arg1;
- (void)shareCellShow:(id)arg1;
- (void)shareCellSelected:(id)arg1;
- (void)shareCartHeaderCellSelected:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)willPopViewController;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

