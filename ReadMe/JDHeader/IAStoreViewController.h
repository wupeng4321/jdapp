//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "IAStoreCellDelegate-Protocol.h"
#import "JDBaseToastViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IABuyStoreResultModel, IAStoreItemModel, IAStoreModel, JDStoreNetwork, NSString, UICollectionView, UILabel, UIView;

@interface IAStoreViewController : JDViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, JDBaseToastViewDelegate, IAStoreCellDelegate>
{
    IAStoreItemModel *buyStoreItemModel;
    IABuyStoreResultModel *buyResultModel;
    UICollectionView *_iaStoreCollectionView;
    JDStoreNetwork *_storeNetWork;
    JDStoreNetwork *_buyStoreNetWork;
    IAStoreModel *_storeModel;
    UIView *_topView;
    UILabel *_titleLabel;
    UILabel *_customeLabel;
}

@property(retain, nonatomic) UILabel *customeLabel; // @synthesize customeLabel=_customeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) IAStoreModel *storeModel; // @synthesize storeModel=_storeModel;
@property(retain, nonatomic) JDStoreNetwork *buyStoreNetWork; // @synthesize buyStoreNetWork=_buyStoreNetWork;
@property(retain, nonatomic) JDStoreNetwork *storeNetWork; // @synthesize storeNetWork=_storeNetWork;
@property(retain, nonatomic) UICollectionView *iaStoreCollectionView; // @synthesize iaStoreCollectionView=_iaStoreCollectionView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)reconnect;
- (void)preAction:(id)arg1 withImgLocationView:(id)arg2;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (id)setToastTitleText:(id)arg1 subTitleText:(id)arg2;
- (void)refreshPage:(id)arg1;
- (void)registerNoti;
- (id)showToastWithTitle:(id)arg1 withSubTitle:(id)arg2 withCancelTitle:(id)arg3 withDoneTitle:(id)arg4 withBool:(_Bool)arg5;
- (void)showToast:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)rightBarButtonItemClick:(id)arg1;
- (void)handleData;
- (void)buyStoreRuquest;
- (void)requestStoreInfo:(_Bool)arg1;
- (void)initNavBar;
- (void)initUI;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

