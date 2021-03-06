//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "NewRefreshTableHeaderViewDelegate-Protocol.h"
#import "RecommendUITableViewDataSource-Protocol.h"
#import "RecommendUITableViewDelegate-Protocol.h"
#import "SCShopCartBasePopViewDelegate-Protocol.h"
#import "SCShopCartBubbleViewDelegate-Protocol.h"
#import "SCShopCartCardBeanCellDelegate-Protocol.h"
#import "SCShopCartCardBindGiftCellDelegate-Protocol.h"
#import "SCShopCartCardDeleteAddedValueCell-Protocol.h"
#import "SCShopCartCardPopAutoServiceCellDelegate-Protocol.h"
#import "SCShopCartCardPromotionCellDelegate-Protocol.h"
#import "SCShopCartCeilVendorCellDelegate-Protocol.h"
#import "SCShopCartChangeBestPromotionDelegate-Protocol.h"
#import "SCShopCartChangeLocationViewDelegate-Protocol.h"
#import "SCShopCartCheckoutViewDelegate-Protocol.h"
#import "SCShopCartClickEmptyBannerCellDelegate-Protocol.h"
#import "SCShopCartContextMenuCellDelegate-Protocol.h"
#import "SCShopCartGiftViewCellDelegate-Protocol.h"
#import "SCShopCartHomeServiceCardCellDelegate-Protocol.h"
#import "SCShopCartPackBarCardCellDelegate-Protocol.h"
#import "SCShopCartPackBottomCardCellDelegate-Protocol.h"
#import "SCShopCartRiskViewDelegate-Protocol.h"
#import "SCShopCartSKUCellDelegate-Protocol.h"
#import "SCShopCartSkuSelectStatusDelegate-Protocol.h"
#import "SCShopCartVendorCellDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class JDButton, JDCoreRedPacket, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NewRecommendUITableView, NewRefreshTableHeaderView, SCShopCartAddressViewHelper, SCShopCartBaseModel, SCShopCartBestPromotionView, SCShopCartChangeLocationView, SCShopCartCheckoutView, SCShopCartCouponView, SCShopCartHeaderManagerView, SCShopCartMainFlowDataAccess, SCShopCartMaskBubbleView, SCShopCartNoticeHeaderView, SCShopCartSettleOptionView, SCShopCartSkuModel, SCShopCartToastHeaderView, SCShopCartWarrantyView, UIButton, UIControl, UIImageView, UITextField, UIView;

@interface SCShopCartViewController : JDViewController <SCShopCartChangeBestPromotionDelegate, SCShopCartClickEmptyBannerCellDelegate, SCShopCartCardDeleteAddedValueCell, NewRefreshTableHeaderViewDelegate, RecommendUITableViewDelegate, RecommendUITableViewDataSource, SCShopCartRiskViewDelegate, SCShopCartSkuSelectStatusDelegate, SCShopCartChangeLocationViewDelegate, SCShopCartBasePopViewDelegate, JDBaseToastViewDelegate, SCShopCartCheckoutViewDelegate, SCShopCartSKUCellDelegate, SCShopCartVendorCellDelegate, SCShopCartCeilVendorCellDelegate, SCShopCartPackBottomCardCellDelegate, SCShopCartGiftViewCellDelegate, UIActionSheetDelegate, SCShopCartContextMenuCellDelegate, SCShopCartBubbleViewDelegate, SCShopCartPackBarCardCellDelegate, SCShopCartCardPromotionCellDelegate, SCShopCartCardPopAutoServiceCellDelegate, SCShopCartCardBindGiftCellDelegate, SCShopCartHomeServiceCardCellDelegate, SCShopCartCardBeanCellDelegate>
{
    SCShopCartSettleOptionView *_interSelectV;
    _Bool showCouponView;
    _Bool showWarrantyView;
    _Bool statusChanged;
    _Bool clickFromTabBar;
    _Bool displayExceptionView;
    UIButton *editButton;
    UIButton *shareButton;
    JDButton *m_toTopButton;
    double offsetY;
    int addCartRefreshTag;
    int addCartScllowTag;
    _Bool orderSubmitFinished;
    SCShopCartBaseModel *tempDeleteItem;
    SCShopCartBestPromotionView *bestPromotionView;
    double bestPromotionOffsetY;
    _Bool favoriteCommonSuit;
    _Bool shouldLoginAttention;
    _Bool isNextNoticeShowed;
    NewRefreshTableHeaderView *_refreshHeaderView;
    long long _foreSelectedIndex;
    _Bool _hideTopToastClickTab;
    float _noticeLimit;
    _Bool _isCurrentShopCartPage;
    _Bool _shouldLoadFistBuyRequest;
    _Bool _coudanEntranceBuriedPoint;
    _Bool _popCoudanEntranceBuriedPoint;
    _Bool _finishCheckouted;
    _Bool _jdCouponEntranceBuriedPoint;
    _Bool _popCouponEntranceBuriedPoint;
    _Bool _globalZYCouponEntranceBuriedPoint;
    _Bool _blankNoteABTestSkuBuriedPoint;
    _Bool _blankNoteAutoSkuBuriedPoint;
    _Bool _similarBtnAutoSkuBuriedPoint;
    _Bool _blankNoteExproBuriedPoint;
    _Bool _skuNumberEntranceBuriedPoint;
    _Bool _shopcartProductNoticeAutoPoint;
    _Bool _virtualShopBuriedPoint;
    _Bool _emptyCartBannerBuriedPoint;
    _Bool _emptyCartCouponBuriedPoint;
    _Bool _productOnSaleABtestAutoPoint;
    _Bool _uiABBuriedPoint;
    _Bool _bubbleBestPomotionPoint;
    _Bool _bestPomotionAutoPoint;
    _Bool _abTestBestPomotionPoint;
    _Bool _isMustToFetchRecommend;
    _Bool _promotionAddSuccess;
    _Bool _shareBubbleShow;
    _Bool _isLight;
    float _startOffset;
    float _startContentOffsetX;
    UIControl *_messageDoor;
    SCShopCartHeaderManagerView *_manageHeaderView;
    SCShopCartNoticeHeaderView *_nextNoticeHeaderView;
    SCShopCartToastHeaderView *_toastHeaderView;
    NewRecommendUITableView *_tableView;
    SCShopCartWarrantyView *_warrantyView;
    SCShopCartCouponView *_discountCouponView;
    NSString *_cartInfoJsonMd5;
    UITextField *_currentSelectedTextField;
    NSString *_currentSelectedTextFieldValue;
    NSMutableDictionary *_greetingKeyValues;
    SCShopCartMainFlowDataAccess *_dataAccess;
    SCShopCartCheckoutView *_settlementView;
    NSMutableSet *_editDeleteItems;
    NSMutableDictionary *_modifyCountItemParams;
    NSString *_anchorPointSkuId;
    NSString *_anchorPointPromotionId;
    NSMutableArray *_countDownArray;
    NSMutableDictionary *_noticeWareCount;
    SCShopCartMaskBubbleView *_bubbleView;
    NSIndexPath *_requestRecommendIndexPath;
    long long _cartRecommendFloor;
    JDCoreRedPacket *_redPacket;
    UIView *_customRightItem;
    NSIndexPath *_currentScrollIndexPath;
    SCShopCartSkuModel *_pushSaleSku;
    NSMutableArray *_editAttentionItems;
    NSMutableDictionary *_operateItemParams;
    NSMutableArray *_followArray;
    UIImageView *_statusBarBackgroundView;
    SCShopCartAddressViewHelper *_addressHelper;
    SCShopCartChangeLocationView *_locationView;
    long long _cartStatusWhenViewDidAppear;
    long long _clearCartBubbleStatus;
    NSString *_cartNavigationTitle;
}

+ (id)hexStringFromString:(id)arg1;
@property(nonatomic) _Bool isLight; // @synthesize isLight=_isLight;
@property(copy, nonatomic) NSString *cartNavigationTitle; // @synthesize cartNavigationTitle=_cartNavigationTitle;
@property(nonatomic) float startContentOffsetX; // @synthesize startContentOffsetX=_startContentOffsetX;
@property(nonatomic) _Bool shareBubbleShow; // @synthesize shareBubbleShow=_shareBubbleShow;
@property(nonatomic) long long clearCartBubbleStatus; // @synthesize clearCartBubbleStatus=_clearCartBubbleStatus;
@property(nonatomic) long long cartStatusWhenViewDidAppear; // @synthesize cartStatusWhenViewDidAppear=_cartStatusWhenViewDidAppear;
@property(retain, nonatomic) SCShopCartChangeLocationView *locationView; // @synthesize locationView=_locationView;
@property(retain, nonatomic) SCShopCartAddressViewHelper *addressHelper; // @synthesize addressHelper=_addressHelper;
@property(retain, nonatomic) UIImageView *statusBarBackgroundView; // @synthesize statusBarBackgroundView=_statusBarBackgroundView;
@property(retain, nonatomic) NSMutableArray *followArray; // @synthesize followArray=_followArray;
@property(retain, nonatomic) NSMutableDictionary *operateItemParams; // @synthesize operateItemParams=_operateItemParams;
@property(retain, nonatomic) NSMutableArray *editAttentionItems; // @synthesize editAttentionItems=_editAttentionItems;
@property(retain, nonatomic) SCShopCartSkuModel *pushSaleSku; // @synthesize pushSaleSku=_pushSaleSku;
@property(retain, nonatomic) NSIndexPath *currentScrollIndexPath; // @synthesize currentScrollIndexPath=_currentScrollIndexPath;
@property(nonatomic) _Bool promotionAddSuccess; // @synthesize promotionAddSuccess=_promotionAddSuccess;
@property(nonatomic) float startOffset; // @synthesize startOffset=_startOffset;
@property(retain, nonatomic) UIView *customRightItem; // @synthesize customRightItem=_customRightItem;
@property(retain, nonatomic) JDCoreRedPacket *redPacket; // @synthesize redPacket=_redPacket;
@property(nonatomic) long long cartRecommendFloor; // @synthesize cartRecommendFloor=_cartRecommendFloor;
@property(retain, nonatomic) NSIndexPath *requestRecommendIndexPath; // @synthesize requestRecommendIndexPath=_requestRecommendIndexPath;
@property(retain, nonatomic) SCShopCartMaskBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) NSMutableDictionary *noticeWareCount; // @synthesize noticeWareCount=_noticeWareCount;
@property(retain, nonatomic) NSMutableArray *countDownArray; // @synthesize countDownArray=_countDownArray;
@property(copy, nonatomic) NSString *anchorPointPromotionId; // @synthesize anchorPointPromotionId=_anchorPointPromotionId;
@property(copy, nonatomic) NSString *anchorPointSkuId; // @synthesize anchorPointSkuId=_anchorPointSkuId;
@property(retain, nonatomic) NSMutableDictionary *modifyCountItemParams; // @synthesize modifyCountItemParams=_modifyCountItemParams;
@property(retain, nonatomic) NSMutableSet *editDeleteItems; // @synthesize editDeleteItems=_editDeleteItems;
@property(retain, nonatomic) SCShopCartCheckoutView *settlementView; // @synthesize settlementView=_settlementView;
@property(retain, nonatomic) SCShopCartMainFlowDataAccess *dataAccess; // @synthesize dataAccess=_dataAccess;
@property(retain, nonatomic) NSMutableDictionary *greetingKeyValues; // @synthesize greetingKeyValues=_greetingKeyValues;
@property(copy, nonatomic) NSString *currentSelectedTextFieldValue; // @synthesize currentSelectedTextFieldValue=_currentSelectedTextFieldValue;
@property(retain, nonatomic) UITextField *currentSelectedTextField; // @synthesize currentSelectedTextField=_currentSelectedTextField;
@property(copy, nonatomic) NSString *cartInfoJsonMd5; // @synthesize cartInfoJsonMd5=_cartInfoJsonMd5;
@property(nonatomic) _Bool isMustToFetchRecommend; // @synthesize isMustToFetchRecommend=_isMustToFetchRecommend;
@property(nonatomic) _Bool abTestBestPomotionPoint; // @synthesize abTestBestPomotionPoint=_abTestBestPomotionPoint;
@property(nonatomic) _Bool bestPomotionAutoPoint; // @synthesize bestPomotionAutoPoint=_bestPomotionAutoPoint;
@property(nonatomic) _Bool bubbleBestPomotionPoint; // @synthesize bubbleBestPomotionPoint=_bubbleBestPomotionPoint;
@property(nonatomic) _Bool uiABBuriedPoint; // @synthesize uiABBuriedPoint=_uiABBuriedPoint;
@property(nonatomic) _Bool productOnSaleABtestAutoPoint; // @synthesize productOnSaleABtestAutoPoint=_productOnSaleABtestAutoPoint;
@property(nonatomic) _Bool emptyCartCouponBuriedPoint; // @synthesize emptyCartCouponBuriedPoint=_emptyCartCouponBuriedPoint;
@property(nonatomic) _Bool emptyCartBannerBuriedPoint; // @synthesize emptyCartBannerBuriedPoint=_emptyCartBannerBuriedPoint;
@property(nonatomic) _Bool virtualShopBuriedPoint; // @synthesize virtualShopBuriedPoint=_virtualShopBuriedPoint;
@property(nonatomic) _Bool shopcartProductNoticeAutoPoint; // @synthesize shopcartProductNoticeAutoPoint=_shopcartProductNoticeAutoPoint;
@property(nonatomic) _Bool skuNumberEntranceBuriedPoint; // @synthesize skuNumberEntranceBuriedPoint=_skuNumberEntranceBuriedPoint;
@property(nonatomic) _Bool blankNoteExproBuriedPoint; // @synthesize blankNoteExproBuriedPoint=_blankNoteExproBuriedPoint;
@property(nonatomic) _Bool similarBtnAutoSkuBuriedPoint; // @synthesize similarBtnAutoSkuBuriedPoint=_similarBtnAutoSkuBuriedPoint;
@property(nonatomic) _Bool blankNoteAutoSkuBuriedPoint; // @synthesize blankNoteAutoSkuBuriedPoint=_blankNoteAutoSkuBuriedPoint;
@property(nonatomic) _Bool blankNoteABTestSkuBuriedPoint; // @synthesize blankNoteABTestSkuBuriedPoint=_blankNoteABTestSkuBuriedPoint;
@property(nonatomic) _Bool globalZYCouponEntranceBuriedPoint; // @synthesize globalZYCouponEntranceBuriedPoint=_globalZYCouponEntranceBuriedPoint;
@property(nonatomic) _Bool popCouponEntranceBuriedPoint; // @synthesize popCouponEntranceBuriedPoint=_popCouponEntranceBuriedPoint;
@property(nonatomic) _Bool jdCouponEntranceBuriedPoint; // @synthesize jdCouponEntranceBuriedPoint=_jdCouponEntranceBuriedPoint;
@property(retain, nonatomic) SCShopCartCouponView *discountCouponView; // @synthesize discountCouponView=_discountCouponView;
@property(retain, nonatomic) SCShopCartWarrantyView *warrantyView; // @synthesize warrantyView=_warrantyView;
@property(nonatomic) _Bool finishCheckouted; // @synthesize finishCheckouted=_finishCheckouted;
@property(nonatomic) _Bool popCoudanEntranceBuriedPoint; // @synthesize popCoudanEntranceBuriedPoint=_popCoudanEntranceBuriedPoint;
@property(nonatomic) _Bool coudanEntranceBuriedPoint; // @synthesize coudanEntranceBuriedPoint=_coudanEntranceBuriedPoint;
@property(retain, nonatomic) NewRecommendUITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SCShopCartToastHeaderView *toastHeaderView; // @synthesize toastHeaderView=_toastHeaderView;
@property(retain, nonatomic) SCShopCartNoticeHeaderView *nextNoticeHeaderView; // @synthesize nextNoticeHeaderView=_nextNoticeHeaderView;
@property(retain, nonatomic) SCShopCartHeaderManagerView *manageHeaderView; // @synthesize manageHeaderView=_manageHeaderView;
@property(retain, nonatomic) UIControl *messageDoor; // @synthesize messageDoor=_messageDoor;
@property(nonatomic) _Bool shouldLoadFistBuyRequest; // @synthesize shouldLoadFistBuyRequest=_shouldLoadFistBuyRequest;
@property(nonatomic) _Bool isCurrentShopCartPage; // @synthesize isCurrentShopCartPage=_isCurrentShopCartPage;
- (void).cxx_destruct;
- (void)tapExceptPopViewIdentifer:(id)arg1;
- (void)tapPopViewIdentifer:(id)arg1;
- (void)addGuideBubbleView:(id)arg1 actionRect:(struct CGRect)arg2 identifer:(id)arg3;
- (void)addGuideBubbleClearButton;
- (void)addGuideBubbleEditButton;
- (void)recordClearCartGuideDate;
- (_Bool)checkDateClearCartGuide;
- (void)cartClearGuideStatus;
- (void)setPlusTitle;
- (void)Shopcart_EdittoDelete_Sucess_Point:(id)arg1;
- (void)autoPoint;
- (void)showResultMessageAndOrderBlock;
- (void)showExceptionViewWithCode:(long long)arg1 error:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)showTopNotice;
- (void)indexPathForCell:(id)arg1;
- (void)jumpToWare;
- (void)favoriteDelete:(id)arg1;
- (void)confirmAttention;
- (void)deleteProducts;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)didAttentionWithSelectedItems;
- (void)openSCShopCartClearCartView:(id)arg1;
- (void)didDeleteWithSelectedItems;
- (void)reloadCartDataAndUIFromCouponView;
- (void)startRequestRecommendAPIInterface;
- (_Bool)checkoutFetchRecommend;
- (void)startRequestCartYBAPIInterface;
- (void)requestYBAndRecommendAfterSync;
- (id)composeSkusParams;
- (void)firstTimePurchase;
- (void)startRequestCartAPIInterface;
- (id)currentNavigationController;
- (void)salePushWithModel:(id)arg1;
- (void)refreshLoading;
- (void)reloadData;
- (void)refreshCartInfo;
- (void)removeReloadView;
- (void)showRiskControlViewWithMessage:(id)arg1 andSolve:(id)arg2 refresh:(_Bool)arg3;
- (void)showReloadView;
- (void)reconnect;
- (id)generateIndexPathByTargetId:(id)arg1;
- (void)tableViewScrollToIndex:(id)arg1;
- (void)refreshCartUI;
- (void)reloadCouponListIfCouponViewShow;
- (void)reloadUIAfterDataSourceChanged;
- (void)jumpToCartWithPromotionId:(id)arg1 addCartSuccess:(_Bool)arg2;
- (void)emptyCartBannerExposeBuryPoint:(id)arg1;
- (void)emptyCartCouponViewExposeBuryPoint;
- (void)buryPointForVirtualShopProduct:(id)arg1;
- (void)buryPointForCouponShow:(id)arg1;
- (float)getTopOffset;
- (void)buryCoudanAutoExpose:(id)arg1;
- (void)refreshData;
- (_Bool)containTempItem:(id)arg1;
- (id)checkContainModifyCountItem;
- (void)syncModifyCountWithServer;
- (void)shareAction;
- (void)editAction;
- (void)ccBackToTop;
- (void)onSaleViewSKUModel:(id)arg1;
- (void)tapChangeLocation;
- (void)initializeTitleView:(id)arg1 isPlus:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (void)addGuideBubbleShareButton;
- (void)beginInitialization;
- (void)initializeProperties;
- (void)initializeHeaderView;
- (void)initializeSettleView;
- (void)initializeTableView;
- (void)setStatusBarBackgroundView;
- (void)initEditBtn;
- (void)setHeadStyle;
- (void)initRightEditBtn;
- (void)initRightEditMessageBtns;
- (void)initRightItem;
- (void)dealloc;
- (void)tapTabBar:(id)arg1;
- (void)syncartNotification:(id)arg1;
- (void)didFinishLogin:(id)arg1;
- (id)init;
- (void)addWareFromCollectWarePage:(id)arg1;
- (void)productAddtoCartWithDict:(id)arg1;
- (void)didGoToActivity:(id)arg1 promotionType:(long long)arg2 promotionState:(long long)arg3;
- (void)didSelectPromotionWithModel:(id)arg1;
- (void)didBeanBuyAction:(id)arg1 checked:(_Bool)arg2;
- (long long)getCurrentBeanBuyItemTotalCount;
- (void)didBeanPurchaseWithItem:(id)arg1 beanChecked:(_Bool)arg2;
- (id)addOnItemByVendorItem:(id)arg1;
- (void)ceilVendorCellShowFrightToastView:(id)arg1;
- (void)ceilVendorCellDidChecked:(_Bool)arg1 WithVendorModel:(id)arg2;
- (void)ceilVendorCellRedirectToCoudanPage:(id)arg1;
- (void)ceilVendorCellRedirectToCouponPage:(id)arg1;
- (void)ceilVendorCellRedirectToShopHome:(id)arg1;
- (void)vendorCellShowFrightToastView:(id)arg1;
- (void)vendorCellRedirectToCoudanPage:(id)arg1;
- (void)vendorCellRedirectToCouponPage:(id)arg1;
- (void)vendorCellRedirectToShopHome:(id)arg1;
- (void)vendorCellDidChecked:(_Bool)arg1 WithVendorModel:(id)arg2;
- (void)didAllSkusOfCartChecked:(_Bool)arg1;
- (void)didCheckedPackBarPackModel:(id)arg1;
- (void)startOperationWithItems:(id)arg1 withChecked:(_Bool)arg2;
- (void)buildEditSelectedItemsWithSku:(id)arg1 pack:(id)arg2 checked:(_Bool)arg3;
- (void)checkedSkuOrPack:(id)arg1;
- (void)didDeleteHomeservice:(id)arg1;
- (void)didDeleteSkuGiftWithItem:(id)arg1;
- (void)didPushSkuToWareViewWithItem:(id)arg1;
- (void)didModifyBind3CGiftsWithItem:(id)arg1;
- (void)didChangePlusPriceWithItem:(id)arg1;
- (void)didDeleteBindGiftWithItem:(id)arg1;
- (void)didPushGiftToWareInfoViewWithItem:(id)arg1;
- (void)dealSelectedGiftPack:(id)arg1 currentSku:(id)arg2;
- (void)didDeleteSkuPopAutoServiceWithCurrentSku:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)selectdServiceArray:(id)arg1 serviceType:(int)arg2 deleteArray:(id)arg3 withCurrentSku:(id)arg4 withCurrentSkuPackModel:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)selectdYanbaoArray:(id)arg1 withCurrentSku:(id)arg2 giftInfo:(id)arg3 packModel:(id)arg4;
- (void)didModifySkuPropertiesWithItem:(id)arg1;
- (void)addServiceItems:(id)arg1 gift:(id)arg2 sku:(id)arg3 pack:(id)arg4;
- (void)addServiceItems:(id)arg1 warranty:(id)arg2 gift:(id)arg3 sku:(id)arg4 pack:(id)arg5;
- (void)didSelectWarrantyListWithItem:(id)arg1;
- (void)didDeleteCommPack:(id)arg1;
- (void)didChangeWareInfo:(id)arg1 withSkuCount:(long long)arg2;
- (void)deleteSku:(id)arg1 afterFavorite:(id)arg2;
- (void)didFavoriteSkuFromCartWithItem:(id)arg1;
- (void)didRemoveSkuFromCartWithItem:(id)arg1;
- (void)didPushSkuToSimilarViewWithItem:(id)arg1 fromType:(id)arg2;
- (void)didPushSkuToWareInfoViewWithItem:(id)arg1;
- (void)didCheckCellWithState:(_Bool)arg1 parameters:(id)arg2;
- (void)toastShowSkuNumMaxLimit;
- (void)InternationalAuthFinish:(_Bool)arg1;
- (void)didClickBackgroundInToastView:(id)arg1;
- (void)doCheckoutLogic;
- (void)userDoCheckOutAction;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)doCheckoutMaiDian;
- (void)separateSettlementOtherSkus;
- (void)separateSettlementOTCDrug;
- (void)separateSettlementGlobalBuy;
- (void)didCheckOutWithSelectedItems;
- (_Bool)toCheckIsMixOrder;
- (void)viewWillLayoutSubviews;
- (void)reLayoutTableView;
- (double)fontSize;
- (void)clearCartAndReloadView;
- (void)reachabilityChanged:(id)arg1;
- (void)cancelRequestByQueue:(id)arg1;
- (void)calculateKeyBoardHeight:(id)arg1;
- (void)updateCheckoutBar;
- (void)appDidBecomeActive;
- (void)appWillResignActive:(id)arg1;
- (void)appDidEnterBack:(id)arg1;
- (void)appDidEnterFore:(id)arg1;
- (void)stopCountDownWithSku:(id)arg1;
- (void)favoriteItemWithVoiceOver:(id)arg1;
- (void)deleteItemWithVoiceOver:(id)arg1;
- (void)coudanAutoExpose:(id)arg1;
- (void)doCancelOrderFinishedRefresh:(id)arg1;
- (void)didSelectOptionView:(id)arg1;
- (void)showJDFreightMessage:(id)arg1;
- (void)deallocStartClearNotificationObserver;
- (void)viewDidLoadStartNotificationObserver;
- (void)viewWillDisappearStopNotificationObserver;
- (void)viewWillAppearStartNotificationObserver;
- (void)captionStatusDelegate;
- (void)bubbleStatusDelegate;
- (void)changeBestPromotionDelegate;
- (void)promotionDetailDelegate;
- (void)bestPromotionBubblePoint;
- (void)bestPromotionCaptionPoint;
- (void)bestPromotionRecordWithId:(id)arg1 status:(id)arg2;
- (void)changeBestPromotionSource:(id)arg1;
- (void)setBestPromotionViewYWithTopButtonY:(double)arg1;
- (void)setBestPromotionStatus;
- (id)getPackBottomIndexPathWithPackId:(id)arg1;
- (id)getPackIndexPathWithPackId:(id)arg1;
- (id)getSkuIndexPathWithSkuId:(id)arg1;
- (void)removeBubbleViewAndClean;
- (void)removeBubbleView;
- (struct CGSize)sizeWithText:(id)arg1 fontSize:(double)arg2;
- (void)addBubbleViewWithPoint:(struct CGPoint)arg1 message:(id)arg2;
- (void)checkNeedShowCountNotice:(id)arg1 type:(long long)arg2 model:(id)arg3;
- (void)updateNoticeId:(id)arg1 needUpdate:(unsigned long long)arg2;
- (id)getCurrentEditWare;
- (void)checkRestrictPurchase;
- (void)tempNumberWithItemModel:(id)arg1;
- (id)createRightButtons:(int)arg1;
- (id)createRightButtonsWithItem:(id)arg1;
- (void)swipCell:(id)arg1 didShowAfterAnimation:(_Bool)arg2;
- (_Bool)swipeCell:(id)arg1 tappedButtonAtIndex:(long long)arg2 direction:(long long)arg3;
- (id)swipeCell:(id)arg1 swipeButtonsForDirection:(long long)arg2 swipeSettings:(id)arg3;
- (_Bool)swipeCell:(id)arg1 canSwipe:(long long)arg2 fromPoint:(struct CGPoint)arg3;
- (void)skuEndAndCountDown;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)showRecommendCartTip;
- (void)didDetailFetchWithModelNoJump:(id)arg1;
- (void)didShoppingCartFetchWithModelAfterNoJump:(id)arg1;
- (void)jumpGetCouponPage;
- (void)jumpSuperAlbumPage;
- (void)jumpDiscoverGoodsPage;
- (void)jumpOptimizationSelectedAccountPage;
- (void)jumpRankingListPage;
- (void)jumpToSecKillPage;
- (void)jumpToAttentionPage;
- (void)jumpToActivityPage:(id)arg1;
- (void)clickEmptyBtnCellAction:(long long)arg1 jumpWebUrl:(id)arg2 jumpAppType:(long long)arg3;
- (void)clickEmptyBannerCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)deleteAddedValue:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

