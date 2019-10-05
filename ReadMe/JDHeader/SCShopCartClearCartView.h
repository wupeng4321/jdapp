//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDCoreSemiPopupView.h"

#import "SCShopCartClearCartBottomViewDelegate-Protocol.h"
#import "SCShopCartClearCartCellDelegate-Protocol.h"
#import "SCShopCartClearCartErrorViewDelegate-Protocol.h"
#import "SCShopCartClearCartHeaderCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class JDRefreshIndicator, JDStoreNetwork, NSDictionary, NSString, SCShopCartClearCartBottomView, SCShopCartClearCartErrorView, SCShopCartClearDataModel, SCShopCartMainFlowDataAccess, UICollectionView, UILabel;

@interface SCShopCartClearCartView : JDCoreSemiPopupView <UICollectionViewDelegate, UICollectionViewDataSource, SCShopCartClearCartHeaderCellDelegate, SCShopCartClearCartBottomViewDelegate, SCShopCartClearCartCellDelegate, SCShopCartClearCartErrorViewDelegate>
{
    NSDictionary *_paramDic;
    JDRefreshIndicator *_refreshIndicatorLoadingView;
    UICollectionView *_collectionView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    SCShopCartClearDataModel *_data;
    JDStoreNetwork *_network;
    SCShopCartClearCartErrorView *_errorView;
    SCShopCartClearCartBottomView *_clearCartBottomView;
    SCShopCartMainFlowDataAccess *_dataAccess;
}

@property(retain, nonatomic) SCShopCartMainFlowDataAccess *dataAccess; // @synthesize dataAccess=_dataAccess;
@property(retain, nonatomic) SCShopCartClearCartBottomView *clearCartBottomView; // @synthesize clearCartBottomView=_clearCartBottomView;
@property(retain, nonatomic) SCShopCartClearCartErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) JDStoreNetwork *network; // @synthesize network=_network;
@property(retain, nonatomic) SCShopCartClearDataModel *data; // @synthesize data=_data;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) JDRefreshIndicator *refreshIndicatorLoadingView; // @synthesize refreshIndicatorLoadingView=_refreshIndicatorLoadingView;
@property(retain, nonatomic) NSDictionary *paramDic; // @synthesize paramDic=_paramDic;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (id)getAttentionOrDeleteParam:(id)arg1 andFromPAge:(id)arg2;
- (id)getAttentionArray;
- (id)getCheckedArray;
- (void)cartClearRemoveWithParams:(id)arg1 andIsFromAttention:(_Bool)arg2;
- (void)didClearShopCartWithSelectedItems;
- (void)favoriteSkuDelete:(id)arg1 andConfirmAttention:(id)arg2 andCheckedArray:(id)arg3;
- (void)confirmAttention:(id)arg1 andCheckedArray:(id)arg2;
- (void)moveToAttentionWithSelectedItems;
- (void)shopCartErrorViewRefesh;
- (void)dataParse:(id)arg1;
- (void)request;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadData;
- (void)clearCartCellSelected:(id)arg1;
- (void)clearCartHeaderCellSelected:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
