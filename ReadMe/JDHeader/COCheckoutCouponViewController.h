//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutAbstractViewController.h"

#import "COCheckoutCouponGridCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class COCheckoutCouponAndGiftExceptionView, COCheckoutCouponController, COCheckoutCouponNoSupportGoodsView, COCheckoutCouponTipsView, COCheckoutCouponViewRequestModel, COCheckoutOrderInfoCouponsModel, COCheckoutOrderInfoModel, COCheckoutPlaceholderBlankView, COCheckoutRuleToastView, COCheckoutSlideView, NSArray, NSMutableArray, NSNumber, NSString, UIButton, UITableView, UIView;

@interface COCheckoutCouponViewController : COCheckoutAbstractViewController <UITableViewDelegate, UITableViewDataSource, COCheckoutCouponGridCellDelegate>
{
    long long tabSelectedIndex_;
    _Bool _firstShowNoSupGoods;
    COCheckoutPlaceholderBlankView *_errorView;
    _Bool _hadSwitchUnusageTab;
    _Bool _isOpenPaymentPassword;
    _Bool _hasJumpedOpenPassword;
    NSString *_isShowBestCouponsAtFirst;
    _Bool _isHasPV;
    int _disappearType;
    _Bool isResponseSwitchMap;
    _Bool _showCantUseTableAddItem;
    _Bool _showUseTableAddItem;
    COCheckoutCouponViewRequestModel *_requestModel;
    CDUnknownBlockType _useCouponsResponse;
    CDUnknownBlockType _cancelCouponsResponse;
    CDUnknownBlockType _refreshCurrentOrder;
    NSString *_cardTitle;
    COCheckoutOrderInfoModel *_orderInfoModel;
    NSNumber *_couponChangeFlag;
    NSArray *_allCanUseCoupons;
    NSArray *_lastCouponsStates;
    NSMutableArray *_allCanUseItems;
    NSMutableArray *_allNoCanUseItems;
    NSMutableArray *_allCanAddUseItems;
    NSMutableArray *_allNoCanUseArray;
    NSMutableArray *_allNoCanUseSectionTitleArray;
    double _currentOperateOldOffY;
    COCheckoutOrderInfoCouponsModel *_lastOperateCellCoupon;
    NSArray *_disallowedCounponGoods;
    COCheckoutSlideView *_segmentedView;
    UITableView *_canUsedTableView;
    UITableView *_noCanUsedTableView;
    COCheckoutCouponTipsView *_bestCouponsTipsView;
    COCheckoutCouponAndGiftExceptionView *_execptionTipsView;
    COCheckoutCouponNoSupportGoodsView *_noSupportGoodsView;
    COCheckoutCouponNoSupportGoodsView *_canUseNoSupportGoodsView;
    UIView *_allCanUseFootView;
    UIView *_allNoCanUseFootView;
    UIButton *_sureBtn;
    COCheckoutCouponController *_controller;
    UIView *_canUseTableHeaderView;
    COCheckoutRuleToastView *_ruleToastView;
}

+ (void)initialize;
@property(retain, nonatomic) COCheckoutRuleToastView *ruleToastView; // @synthesize ruleToastView=_ruleToastView;
@property(nonatomic) _Bool showUseTableAddItem; // @synthesize showUseTableAddItem=_showUseTableAddItem;
@property(nonatomic) _Bool showCantUseTableAddItem; // @synthesize showCantUseTableAddItem=_showCantUseTableAddItem;
@property(retain, nonatomic) UIView *canUseTableHeaderView; // @synthesize canUseTableHeaderView=_canUseTableHeaderView;
@property(retain, nonatomic) COCheckoutCouponController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) UIButton *sureBtn; // @synthesize sureBtn=_sureBtn;
@property(retain, nonatomic) UIView *allNoCanUseFootView; // @synthesize allNoCanUseFootView=_allNoCanUseFootView;
@property(retain, nonatomic) UIView *allCanUseFootView; // @synthesize allCanUseFootView=_allCanUseFootView;
@property(retain, nonatomic) COCheckoutCouponNoSupportGoodsView *canUseNoSupportGoodsView; // @synthesize canUseNoSupportGoodsView=_canUseNoSupportGoodsView;
@property(retain, nonatomic) COCheckoutCouponNoSupportGoodsView *noSupportGoodsView; // @synthesize noSupportGoodsView=_noSupportGoodsView;
@property(retain, nonatomic) COCheckoutCouponAndGiftExceptionView *execptionTipsView; // @synthesize execptionTipsView=_execptionTipsView;
@property(retain, nonatomic) COCheckoutCouponTipsView *bestCouponsTipsView; // @synthesize bestCouponsTipsView=_bestCouponsTipsView;
@property(retain, nonatomic) UITableView *noCanUsedTableView; // @synthesize noCanUsedTableView=_noCanUsedTableView;
@property(retain, nonatomic) UITableView *canUsedTableView; // @synthesize canUsedTableView=_canUsedTableView;
@property(retain, nonatomic) COCheckoutSlideView *segmentedView; // @synthesize segmentedView=_segmentedView;
@property(retain, nonatomic) NSArray *disallowedCounponGoods; // @synthesize disallowedCounponGoods=_disallowedCounponGoods;
@property(retain, nonatomic) COCheckoutOrderInfoCouponsModel *lastOperateCellCoupon; // @synthesize lastOperateCellCoupon=_lastOperateCellCoupon;
@property(nonatomic) double currentOperateOldOffY; // @synthesize currentOperateOldOffY=_currentOperateOldOffY;
@property(retain, nonatomic) NSMutableArray *allNoCanUseSectionTitleArray; // @synthesize allNoCanUseSectionTitleArray=_allNoCanUseSectionTitleArray;
@property(retain, nonatomic) NSMutableArray *allNoCanUseArray; // @synthesize allNoCanUseArray=_allNoCanUseArray;
@property(retain, nonatomic) NSMutableArray *allCanAddUseItems; // @synthesize allCanAddUseItems=_allCanAddUseItems;
@property(retain, nonatomic) NSMutableArray *allNoCanUseItems; // @synthesize allNoCanUseItems=_allNoCanUseItems;
@property(retain, nonatomic) NSMutableArray *allCanUseItems; // @synthesize allCanUseItems=_allCanUseItems;
@property(retain, nonatomic) NSArray *lastCouponsStates; // @synthesize lastCouponsStates=_lastCouponsStates;
@property(retain, nonatomic) NSArray *allCanUseCoupons; // @synthesize allCanUseCoupons=_allCanUseCoupons;
@property(retain, nonatomic) NSNumber *couponChangeFlag; // @synthesize couponChangeFlag=_couponChangeFlag;
@property(retain, nonatomic) COCheckoutOrderInfoModel *orderInfoModel; // @synthesize orderInfoModel=_orderInfoModel;
@property(retain, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
@property(copy, nonatomic) CDUnknownBlockType refreshCurrentOrder; // @synthesize refreshCurrentOrder=_refreshCurrentOrder;
@property(copy, nonatomic) CDUnknownBlockType cancelCouponsResponse; // @synthesize cancelCouponsResponse=_cancelCouponsResponse;
@property(copy, nonatomic) CDUnknownBlockType useCouponsResponse; // @synthesize useCouponsResponse=_useCouponsResponse;
@property(retain, nonatomic) COCheckoutCouponViewRequestModel *requestModel; // @synthesize requestModel=_requestModel;
- (void).cxx_destruct;
- (void)mta_showAddItemExpose;
- (void)mta_bestCouponsSelectCode;
- (void)mta_CouponEmptyPageWith:(long long)arg1;
- (void)mta_couponBackWithEventID:(id)arg1;
- (void)showPassWordToastView;
- (void)couponsUnusableUnusableCouponsNumberMta;
- (id)getTableViewWithFrame:(struct CGRect)arg1;
- (void)exceptionBackToTryAgainLaterFunction;
- (void)execptionBackToUseFuction;
- (void)sureFuction;
- (void)backFuction;
- (void)exceptionBackToTryAgainLater;
- (void)execptionBackToUseAction;
- (void)sureButtonAction;
- (void)backButtonClicked;
- (id)orderInfoCouponsDictWithCoupons:(id)arg1;
- (id)couponInArrar:(id)arg1 withIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getLastOperateCellWithCellCoupon:(id)arg1;
- (void)resetUsingCellOffSet;
- (void)useCoupon:(id)arg1;
- (void)didTapAtCell:(id)arg1;
- (void)didTapUnFoldBtnAtCell:(id)arg1;
- (void)explainBtnTapedWithStringIds:(id)arg1;
- (void)didTapCoudanBtnAtCell:(id)arg1 withCoupon:(id)arg2;
- (void)selectMenuAtIndex:(long long)arg1;
- (void)handleBlankViewEvent:(id)arg1;
- (void)alert:(id)arg1;
- (void)setTableFooterViews;
- (void)showExecptionViewWith:(long long)arg1;
- (void)fetchCoupons;
- (void)refreshBestCouponsUsedCode;
- (void)fetchLastCouponsStates;
- (void)mta_usableCouponsNumber;
- (void)fetchCouponsAndRecordLastCouponsStates;
- (void)popupRulePrompt;
- (void)showContentView;
- (void)addErrorView;
- (void)showCouponView;
- (void)configBestCouponsTipsViewWithText:(id)arg1 discountFee:(id)arg2;
- (void)jumpOpenPassword:(id)arg1;
- (void)fetchRecordCouponsStatusWithModel:(id)arg1;
- (void)refreshSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)addNoMoreTipLabelWithFootView:(id)arg1;
- (void)setCouponNoSupportGoodsView;
- (id)initWithModel:(id)arg1 useCoupons:(CDUnknownBlockType)arg2 cancelCoupons:(CDUnknownBlockType)arg3 refreshOrder:(CDUnknownBlockType)arg4;
- (id)initWithModel:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
