//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDCoreSemiPopupView.h"

#import "SCShopCartCouponErrorViewDelegate-Protocol.h"
#import "SCShopCartCouponUnitCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class JDPOPCouponModel, JDRefreshIndicator, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, SCShopCartCouponErrorView, SCShopCartCouponRecieveNetwork, SCShopCartMainFlowDataAccess, SCShopCartVendorModel, UICollectionView, UILabel;
@protocol SCShopCartSkuSelectStatusDelegate;

@interface SCShopCartCouponView : JDCoreSemiPopupView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SCShopCartCouponUnitCellDelegate, SCShopCartCouponErrorViewDelegate>
{
    _Bool _isReceiveSuccess;
    _Bool _isShowStatus;
    _Bool _toReloadCartBool;
    _Bool _hasShowCheckToast;
    _Bool _cartIsFinishBool;
    UILabel *_focusElement;
    CDUnknownBlockType _redirectBlock;
    id <SCShopCartSkuSelectStatusDelegate> _delegate;
    UICollectionView *_collectionView;
    SCShopCartCouponErrorView *_noCouponView;
    NSArray *_usableCoupons;
    NSArray *_receiveCoupons;
    JDPOPCouponModel *_cellCouponModel;
    SCShopCartVendorModel *_vendorItem;
    NSIndexPath *_selectedIndexPath;
    NSMutableArray *_accessElements;
    CDUnknownBlockType _showAction;
    CDUnknownBlockType _closeAction;
    SCShopCartMainFlowDataAccess *_couponDataAccess;
    NSString *_tokenOfCheck;
    JDRefreshIndicator *_refreshIndicatorLoadingView;
    SCShopCartCouponRecieveNetwork *_couponRecieveNetwork;
    NSMutableDictionary *_shopcartZYCouponLeaveAutoDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *shopcartZYCouponLeaveAutoDictionary; // @synthesize shopcartZYCouponLeaveAutoDictionary=_shopcartZYCouponLeaveAutoDictionary;
@property(nonatomic) _Bool cartIsFinishBool; // @synthesize cartIsFinishBool=_cartIsFinishBool;
@property(nonatomic) _Bool hasShowCheckToast; // @synthesize hasShowCheckToast=_hasShowCheckToast;
@property(retain, nonatomic) SCShopCartCouponRecieveNetwork *couponRecieveNetwork; // @synthesize couponRecieveNetwork=_couponRecieveNetwork;
@property(retain, nonatomic) JDRefreshIndicator *refreshIndicatorLoadingView; // @synthesize refreshIndicatorLoadingView=_refreshIndicatorLoadingView;
@property(nonatomic) _Bool toReloadCartBool; // @synthesize toReloadCartBool=_toReloadCartBool;
@property(copy, nonatomic) NSString *tokenOfCheck; // @synthesize tokenOfCheck=_tokenOfCheck;
@property(retain, nonatomic) SCShopCartMainFlowDataAccess *couponDataAccess; // @synthesize couponDataAccess=_couponDataAccess;
@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
@property(copy, nonatomic) CDUnknownBlockType showAction; // @synthesize showAction=_showAction;
@property(retain, nonatomic) NSMutableArray *accessElements; // @synthesize accessElements=_accessElements;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) SCShopCartVendorModel *vendorItem; // @synthesize vendorItem=_vendorItem;
@property(retain, nonatomic) JDPOPCouponModel *cellCouponModel; // @synthesize cellCouponModel=_cellCouponModel;
@property(retain, nonatomic) NSArray *receiveCoupons; // @synthesize receiveCoupons=_receiveCoupons;
@property(retain, nonatomic) NSArray *usableCoupons; // @synthesize usableCoupons=_usableCoupons;
@property(retain, nonatomic) SCShopCartCouponErrorView *noCouponView; // @synthesize noCouponView=_noCouponView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool isShowStatus; // @synthesize isShowStatus=_isShowStatus;
@property(nonatomic) __weak id <SCShopCartSkuSelectStatusDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType redirectBlock; // @synthesize redirectBlock=_redirectBlock;
@property(nonatomic) _Bool isReceiveSuccess; // @synthesize isReceiveSuccess=_isReceiveSuccess;
@property(retain, nonatomic) UILabel *focusElement; // @synthesize focusElement=_focusElement;
- (void).cxx_destruct;
- (void)commitShopcart_ZYCoupon_LeaveAuto;
- (void)setShopcart_ZYCoupon_LeaveAuto;
- (void)fromBlockHideView;
- (void)hideWithBlock:(CDUnknownBlockType)arg1;
- (void)showWithBlock:(CDUnknownBlockType)arg1 hideBlock:(CDUnknownBlockType)arg2;
- (void)cellShowWithCoupon:(id)arg1;
- (void)changeCellNocice;
- (void)reloadCouponState;
- (void)handleReceiveCouponServiceCode:(id)arg1 message:(id)arg2;
- (void)oneKeyReceiveCoupon;
- (void)goToIdentifyingCodeTakeCoupon;
- (void)showOpenPayUI:(id)arg1;
- (void)buryPointOfGlobalZYReceiveCouponFail;
- (void)buryPointOfGlobalZYReceiveCouponSuccess;
- (void)handleVerifyCouponService:(id)arg1;
- (void)fetchCouponControlData;
- (void)userHasLogined;
- (void)jumpToSearchRecommendList;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)buryPointOfCanUseCoupon;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scShopCartCouponErrorViewRefesh;
- (void)reloadData;
- (void)getTicketWithAccess:(id)arg1 vendorItem:(id)arg2;
- (void)reloadWithVendorItem:(id)arg1 dataAccess:(id)arg2 closeCouponListViewAction:(CDUnknownBlockType)arg3;
- (void)cleanLastStatus;
- (void)cancelAllRequests;
- (void)toReloadCartInf;
- (void)reloadCartDataAndUI;
- (void)cleanDataSource;
- (void)closeButtonAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)getSkuModelWithSkuId:(id)arg1;
- (id)getPackModelWithPackId:(id)arg1;
- (id)getItemsModelCoupon:(id)arg1;
- (void)setUsableCoupons:(id)arg1 receiveCoupons:(id)arg2 vendorItem:(id)arg3;
- (void)startOperationWithItems:(id)arg1 withChecked:(_Bool)arg2;
- (void)couponPromoteItem:(id)arg1 status:(_Bool)arg2;
- (void)setCartIsFinishBoolWithToken:(id)arg1;
- (_Bool)checkIsLastCartWithToken:(id)arg1;
- (void)reloadViewWhenCheckWithTempToken:(id)arg1;
- (void)reloadViewWithDataAccess:(id)arg1;
- (id)getNowTimeStr;
- (_Bool)checkWillReloadCouponUI:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)showExceptionViewWithCode:(long long)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
