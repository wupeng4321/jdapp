//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SynCartCoudanEmptyCellDelegate-Protocol.h"
#import "SynCartEnrollPlusDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDAddOnItemModel, JDFooterLoadingView, JDStoreNetwork, NSMutableArray, NSString, ProductDao, SCShopCartAddOnDisplayView, SCShopCartFreshTagModel, SCShopCartMainFlowDataAccess, SCShopCartPriceTagModel, SCShopCartVendorModel, SynCartAddOnToastView, SynCartEnrollPlusView, SynCartGatherPriceRangeView, SynCartGatherSegmentView, UIButton, UILabel, UITableView;

@interface JDAddOnDisplayView : UIView <UITableViewDelegate, UITableViewDataSource, SynCartEnrollPlusDelegate, SynCartCoudanEmptyCellDelegate>
{
    ProductDao *productDao_;
    _Bool _firstLoad;
    long long _pageNum;
    _Bool hasNextPage;
    long long selectedIndex;
    JDStoreNetwork *_network;
    _Bool isFreshGather;
    _Bool popEmptyViewMariedPoint;
    _Bool isNeedFreshTags;
    _Bool didPlusBannerExposured;
    _Bool didDefaultPriceTagExposured;
    _Bool _hasShowToast;
    _Bool _showAddCartToast;
    _Bool _isLoading;
    CDUnknownBlockType _backToPreviewViewBlock;
    CDUnknownBlockType _popItemPVParamsBlock;
    CDUnknownBlockType _addCartItemBlock;
    SynCartAddOnToastView *_addOnToasView;
    CDUnknownBlockType _enrollVIPPlusBlock;
    SCShopCartVendorModel *_currentVendorModel;
    NSString *_freshCouDanMoenyInfo;
    NSString *_normalCouDanMoneyInfo;
    long long _wareListType;
    long long _networkType;
    double _bottomViewHeight;
    SCShopCartFreshTagModel *_selctedTagModel;
    SCShopCartPriceTagModel *_selectedPriceTagModel;
    JDAddOnItemModel *_addOnItem;
    long long _style;
    SynCartEnrollPlusView *_enrollPlusView;
    SynCartGatherSegmentView *_segmentView;
    SynCartGatherPriceRangeView *_rangeView;
    NSString *_cartSourceValue;
    double _popFreight;
    UITableView *_tableView;
    JDFooterLoadingView *_footerLoadingView;
    SCShopCartAddOnDisplayView *_bottomContentView;
    UILabel *_bottomMessageLabel;
    UIButton *_backToCartBtn;
    NSString *_freshPriceNeedStr;
    NSString *_normalPriceNeedStr;
    NSString *_priceRangeStr;
    NSMutableArray *_priceRangeWareItems;
    NSString *_addedWareId;
    NSString *_freshCoudanOriginWeight;
    NSString *_normalCoudanOriginWeight;
    NSMutableArray *_priceTags;
    NSMutableArray *_freshTags;
    CDUnknownBlockType _showRuleAction;
    SCShopCartMainFlowDataAccess *_dataAccess;
    long long _addOnType;
    long long _freshFareTypeCoudan;
    long long _normalFareTypeCoudan;
}

@property(nonatomic) long long normalFareTypeCoudan; // @synthesize normalFareTypeCoudan=_normalFareTypeCoudan;
@property(nonatomic) long long freshFareTypeCoudan; // @synthesize freshFareTypeCoudan=_freshFareTypeCoudan;
@property(nonatomic) long long addOnType; // @synthesize addOnType=_addOnType;
@property(retain, nonatomic) SCShopCartMainFlowDataAccess *dataAccess; // @synthesize dataAccess=_dataAccess;
@property(copy, nonatomic) CDUnknownBlockType showRuleAction; // @synthesize showRuleAction=_showRuleAction;
@property(retain, nonatomic) NSMutableArray *freshTags; // @synthesize freshTags=_freshTags;
@property(retain, nonatomic) NSMutableArray *priceTags; // @synthesize priceTags=_priceTags;
@property(copy, nonatomic) NSString *normalCoudanOriginWeight; // @synthesize normalCoudanOriginWeight=_normalCoudanOriginWeight;
@property(copy, nonatomic) NSString *freshCoudanOriginWeight; // @synthesize freshCoudanOriginWeight=_freshCoudanOriginWeight;
@property(copy, nonatomic) NSString *addedWareId; // @synthesize addedWareId=_addedWareId;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSMutableArray *priceRangeWareItems; // @synthesize priceRangeWareItems=_priceRangeWareItems;
@property(copy, nonatomic) NSString *priceRangeStr; // @synthesize priceRangeStr=_priceRangeStr;
@property(copy, nonatomic) NSString *normalPriceNeedStr; // @synthesize normalPriceNeedStr=_normalPriceNeedStr;
@property(copy, nonatomic) NSString *freshPriceNeedStr; // @synthesize freshPriceNeedStr=_freshPriceNeedStr;
@property(retain, nonatomic) UIButton *backToCartBtn; // @synthesize backToCartBtn=_backToCartBtn;
@property(retain, nonatomic) UILabel *bottomMessageLabel; // @synthesize bottomMessageLabel=_bottomMessageLabel;
@property(retain, nonatomic) SCShopCartAddOnDisplayView *bottomContentView; // @synthesize bottomContentView=_bottomContentView;
@property(retain, nonatomic) JDFooterLoadingView *footerLoadingView; // @synthesize footerLoadingView=_footerLoadingView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) double popFreight; // @synthesize popFreight=_popFreight;
@property(copy, nonatomic) NSString *cartSourceValue; // @synthesize cartSourceValue=_cartSourceValue;
@property(retain, nonatomic) SynCartGatherPriceRangeView *rangeView; // @synthesize rangeView=_rangeView;
@property(retain, nonatomic) SynCartGatherSegmentView *segmentView; // @synthesize segmentView=_segmentView;
@property(retain, nonatomic) SynCartEnrollPlusView *enrollPlusView; // @synthesize enrollPlusView=_enrollPlusView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) JDAddOnItemModel *addOnItem; // @synthesize addOnItem=_addOnItem;
@property(retain, nonatomic) SCShopCartPriceTagModel *selectedPriceTagModel; // @synthesize selectedPriceTagModel=_selectedPriceTagModel;
@property(retain, nonatomic) SCShopCartFreshTagModel *selctedTagModel; // @synthesize selctedTagModel=_selctedTagModel;
@property(nonatomic) double bottomViewHeight; // @synthesize bottomViewHeight=_bottomViewHeight;
@property(nonatomic) long long networkType; // @synthesize networkType=_networkType;
@property(nonatomic) long long wareListType; // @synthesize wareListType=_wareListType;
@property(copy, nonatomic) NSString *normalCouDanMoneyInfo; // @synthesize normalCouDanMoneyInfo=_normalCouDanMoneyInfo;
@property(copy, nonatomic) NSString *freshCouDanMoenyInfo; // @synthesize freshCouDanMoenyInfo=_freshCouDanMoenyInfo;
@property(retain, nonatomic) SCShopCartVendorModel *currentVendorModel; // @synthesize currentVendorModel=_currentVendorModel;
@property(copy, nonatomic) CDUnknownBlockType enrollVIPPlusBlock; // @synthesize enrollVIPPlusBlock=_enrollVIPPlusBlock;
@property(retain, nonatomic) SynCartAddOnToastView *addOnToasView; // @synthesize addOnToasView=_addOnToasView;
@property(nonatomic) _Bool showAddCartToast; // @synthesize showAddCartToast=_showAddCartToast;
@property(nonatomic) _Bool hasShowToast; // @synthesize hasShowToast=_hasShowToast;
@property(copy, nonatomic) CDUnknownBlockType addCartItemBlock; // @synthesize addCartItemBlock=_addCartItemBlock;
@property(copy, nonatomic) CDUnknownBlockType popItemPVParamsBlock; // @synthesize popItemPVParamsBlock=_popItemPVParamsBlock;
@property(copy, nonatomic) CDUnknownBlockType backToPreviewViewBlock; // @synthesize backToPreviewViewBlock=_backToPreviewViewBlock;
- (void).cxx_destruct;
- (void)setCommonModelWithDic:(id)arg1;
- (void)setFreshModelWithDic:(id)arg1;
- (void)hanleResult:(id)arg1 withItem:(id)arg2;
- (void)handleResultError:(id)arg1 withItem:(id)arg2;
- (void)getCoudanAmount;
- (_Bool)isFromOrder;
- (long long)freshFareType;
- (long long)normalFareType;
- (void)hiddenAddOnToastView;
- (void)setViewsStatuWithoutData;
- (float)getEmptyCellHeight;
- (void)layoutSubviews;
- (id)getResultStringWithDic:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateBottomContenView;
- (void)updateAddOnToastView;
- (void)updateSegmentView;
- (void)updateBottomSegmentAddOnToastView;
- (void)updateCurrentSelectedVendorItemWithItems:(id)arg1;
- (void)showToastMessageWithResultCode:(long long)arg1 ResultMsg:(id)arg2;
- (void)couDanEmptyViewBuryPointMethod;
- (void)updatePriceRangeView;
- (void)dealServerData:(id)arg1;
- (void)fetchData;
- (id)switchResultMessageByResultCode:(long long)arg1;
- (void)addProductNeedCartInfo:(id)arg1;
- (void)addProductJDMTA:(id)arg1;
- (void)removeReloadView;
- (void)showReloadViewHasPriceTag;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)plusBannerExposureBuryMTA;
- (void)reloadGatherViewWithTag:(id)arg1;
- (void)syncVendorInfo;
- (void)reset;
- (void)clickBackBtn;
- (void)clickGoBackShoppingCart;
- (id)buildRequestParams;
- (id)vendorFreightMessage;
- (void)clickEnrollVipPlusAction:(id)arg1;
- (void)exposureNormalAndFreshWare:(id)arg1;
- (void)displayWithAddOnItem:(id)arg1 showFreightRule:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

