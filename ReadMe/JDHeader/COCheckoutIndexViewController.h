//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutAbstractViewController.h"

#import "COCheckoutMainApiProtocol-Protocol.h"
#import "COCheckoutMainUIBusProtocol-Protocol.h"
#import "COCheckoutNewOrderViewDelegate-Protocol.h"
#import "JDBaseToastItemsViewDelegate-Protocol.h"
#import "JDBaseToastListViewDataSource-Protocol.h"
#import "JDBaseToastListViewDelegate-Protocol.h"
#import "JDBaseToastPasswordViewDelegate-Protocol.h"
#import "JDBaseToastShortPasswordViewDelegate-Protocol.h"
#import "JDBaseToastTextListViewDataSource-Protocol.h"
#import "JDBaseToastViewDelegate-Protocol.h"
#import "JDInfoPickerViewDelegate-Protocol.h"
#import "JDInfoPickerViewSource-Protocol.h"

@class COCheckoutAdditionalOrderModel, COCheckoutMainViewController, COCheckoutNewOrderView, COCheckoutUseBalancePayApi, COCheckoutUseJdBeanPayApi, JDBaseToastView, JDInfoPickerView, NSArray, NSString, NSTimer, UIView;

@interface COCheckoutIndexViewController : COCheckoutAbstractViewController <COCheckoutMainApiProtocol, JDInfoPickerViewDelegate, JDInfoPickerViewSource, COCheckoutMainUIBusProtocol, JDBaseToastViewDelegate, JDBaseToastListViewDelegate, JDBaseToastListViewDataSource, JDBaseToastPasswordViewDelegate, JDBaseToastTextListViewDataSource, JDBaseToastShortPasswordViewDelegate, COCheckoutNewOrderViewDelegate, JDBaseToastItemsViewDelegate>
{
    _Bool _isActive;
    JDInfoPickerView *_beanInfoPickerView;
    long long _priceDoneTime;
    JDBaseToastView *_priceChangeToastView;
    NSTimer *_priceTimer;
    _Bool _ignoreSKUPriceIncrease;
    _Bool _newOrderParamAutoBool;
    long long oIToastTag;
    _Bool _isRefreshPage;
    _Bool _isPullCartParams;
    _Bool _changeAddress;
    _Bool _saveAddressing;
    _Bool _hadLoadUI;
    JDBaseToastView *_captchaView;
    JDBaseToastView *_inputPwdToastView;
    _Bool _enabledLocationService;
    _Bool _hasToastView;
    _Bool _isHasCouponPVBool;
    _Bool _isHasPVYunfeiPlus;
    _Bool _isHasPVPlusPirceABTest;
    _Bool _isHasShipmentTypeAndDateBool;
    COCheckoutMainViewController *_mainViewController;
    NSArray *_pvParamComponents;
    COCheckoutAdditionalOrderModel *_addtionalOrderModel;
    COCheckoutNewOrderView *_orderView;
    NSString *_wareListRemindPriceContent;
    long long _bigChangeTypeForJDMTA;
    NSString *_bigChangeWareModelID;
    NSTimer *_passwordTimer;
    long long _passwordWaitTime;
    UIView *_createAdddressView;
    CDUnknownBlockType _addressResult;
    long long _countOfPVRecord;
    COCheckoutUseBalancePayApi *_useBalancePayApi;
    COCheckoutUseJdBeanPayApi *_useJdBeanPayApi;
}

+ (void)initialize;
@property(retain, nonatomic) COCheckoutUseJdBeanPayApi *useJdBeanPayApi; // @synthesize useJdBeanPayApi=_useJdBeanPayApi;
@property(retain, nonatomic) COCheckoutUseBalancePayApi *useBalancePayApi; // @synthesize useBalancePayApi=_useBalancePayApi;
@property(nonatomic) long long countOfPVRecord; // @synthesize countOfPVRecord=_countOfPVRecord;
@property(nonatomic) _Bool isHasShipmentTypeAndDateBool; // @synthesize isHasShipmentTypeAndDateBool=_isHasShipmentTypeAndDateBool;
@property(nonatomic) _Bool isHasPVPlusPirceABTest; // @synthesize isHasPVPlusPirceABTest=_isHasPVPlusPirceABTest;
@property(nonatomic) _Bool isHasPVYunfeiPlus; // @synthesize isHasPVYunfeiPlus=_isHasPVYunfeiPlus;
@property(nonatomic) _Bool isHasCouponPVBool; // @synthesize isHasCouponPVBool=_isHasCouponPVBool;
@property(copy, nonatomic) CDUnknownBlockType addressResult; // @synthesize addressResult=_addressResult;
@property(retain, nonatomic) UIView *createAdddressView; // @synthesize createAdddressView=_createAdddressView;
@property(nonatomic) long long passwordWaitTime; // @synthesize passwordWaitTime=_passwordWaitTime;
@property(retain, nonatomic) NSTimer *passwordTimer; // @synthesize passwordTimer=_passwordTimer;
@property(retain, nonatomic) NSString *bigChangeWareModelID; // @synthesize bigChangeWareModelID=_bigChangeWareModelID;
@property(nonatomic) long long bigChangeTypeForJDMTA; // @synthesize bigChangeTypeForJDMTA=_bigChangeTypeForJDMTA;
@property(retain, nonatomic) NSString *wareListRemindPriceContent; // @synthesize wareListRemindPriceContent=_wareListRemindPriceContent;
@property(nonatomic) _Bool hasToastView; // @synthesize hasToastView=_hasToastView;
@property(retain, nonatomic) COCheckoutNewOrderView *orderView; // @synthesize orderView=_orderView;
@property(retain, nonatomic) COCheckoutAdditionalOrderModel *addtionalOrderModel; // @synthesize addtionalOrderModel=_addtionalOrderModel;
@property(readonly, nonatomic, getter=isEnabledLocationService) _Bool enabledLocationService; // @synthesize enabledLocationService=_enabledLocationService;
- (void).cxx_destruct;
- (void)presentDateViewWithHeadTitle:(id)arg1 otherDic:(id)arg2;
- (void)mta_defaultShiptypeAuto;
- (void)mta_neworderDeliverTypeAuto;
- (void)mta_addressQuantityWithArray:(id)arg1;
- (id)mta_getSourceWhenAllGoodsSoldOut;
- (void)mta_shipmentAndDateStatus;
- (void)mta_couponAddItemSplit;
- (void)mta_CouponPV;
- (void)mta_pvEvent;
- (void)mta_notifyWillDisappear;
- (void)pushToPayAndShipmentViewcontrollerWithType:(long long)arg1;
- (void)goAddressVc;
- (void)changeVerifyCodeImage;
- (void)updateVerifyToastTip:(_Bool)arg1;
- (void)didClosePwdInputPwdToastView:(id)arg1;
- (void)didFindPwdInputPwdToastView:(id)arg1;
- (void)showEditBeanInfoPickerView;
- (void)didSureInputPwdToastView:(id)arg1 pwd:(id)arg2;
- (void)didFinishEditIdentityCardNumber:(id)arg1 statusCode:(id)arg2;
- (void)BeanBalanceOpenPassWord:(id)arg1 methodName:(id)arg2;
- (void)virtualPropertyEditBeanInPutNumBeanCount;
- (void)didPresaleAgreeChange:(id)arg1 agreeDidChanged:(_Bool)arg2;
- (void)didBalanceBeanChange:(id)arg1 paySwitchDidChanged:(_Bool)arg2;
- (void)didTapAtItemView:(id)arg1 withSubVCType:(long long)arg2;
- (void)handleSubmitError:(id)arg1;
- (void)submitActionError:(id)arg1;
- (void)submitAction:(id)arg1 captch:(id)arg2;
- (void)removeSoldoutCartItemsInGiftBuy;
- (void)removeSoldoutCartItems;
- (void)requestPageData;
- (void)showPriceChangeTipView:(id)arg1;
- (void)submitPresaleError:(id)arg1;
- (void)completeAddress:(id)arg1;
- (void)downLoadVerificaImage:(id)arg1;
- (void)popInputVerification:(id)arg1;
- (void)passwordTimerAction;
- (void)invalidPasWord:(id)arg1;
- (void)popInputPassWord;
- (void)submitActionWithVerifyData:(id)arg1;
- (void)callJdPaySdk;
- (void)submitNormalError:(id)arg1;
- (void)reShowNewRuleBeans;
- (void)showVirtualPropertyAndRemarkView;
- (void)saveAddressWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)saveAddress;
- (void)getAddtionalInfo;
- (void)changeBigItem;
- (void)presentNotifyViewWithRM:(id)arg1 andType:(unsigned long long)arg2;
- (void)handlePurchaseLimit;
- (void)handleGoodsSoldOutWithType:(long long)arg1;
- (void)handleSams;
- (void)handleJDBeanBuy;
- (void)handleMajorAppliance;
- (void)handleWrongAddress;
- (void)handleSaveAddressFlowWithManagerModel:(id)arg1;
- (void)handleMainBussinesFlow:(_Bool)arg1;
- (void)handleAddressCacheWithMode:(long long)arg1 andCallBack:(CDUnknownBlockType)arg2;
- (void)handleCurrentOrderAPIResult:(id)arg1 withAddressCacheMode:(long long)arg2 andError:(id)arg3;
- (void)handleGetAddressByPinAPIResult:(id)arg1 andError:(id)arg2;
- (void)fetchCurrentOrderAPIResult:(CDUnknownBlockType)arg1 withAddressCacheMode:(long long)arg2 addressModel:(id)arg3;
- (void)fetchGetAddressByPinAPIResult;
- (void)showAreaChangeToastWithType:(long long)arg1 title:(id)arg2 andItems:(id)arg3;
- (id)getAreaChangeCommoditiesDisplayedInToastWithRaw:(id)arg1;
- (void)setEnabledSwipeToParent:(_Bool)arg1;
- (void)jzdPickerViewAppearStatus:(id)arg1;
- (long long)countdownTime;
- (id)flushSoldOutGoods:(id)arg1;
- (void)findSoldOutGoods:(id)arg1 inArray:(id)arg2 withSoldOutGoodsID:(id)arg3;
- (id)findSoldOutGoods;
- (void)initAddressResultBlock;
- (void)getOrderInfo;
- (void)handleDoneButtonEventInMajorApplianceToast;
- (void)handleCancelButtonEventInMajorApplianceToast;
- (void)handleDoneButtonEventWithMode:(long long)arg1 eventParam:(id)arg2;
- (void)handleCancelButtonEventWithMode:(long long)arg1 eventParam:(id)arg2;
- (void)hideKeyBoard;
- (void)pressNewContactButton:(id)arg1;
- (void)refreshOrderInfo;
- (void)freshUIWithModel:(id)arg1;
- (void)backButtonClicked;
- (void)keyboardShowToolBar:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)cancelSubmitOrderQueueAction:(id)arg1;
- (void)cancelCurrentOrderQueueAction:(id)arg1;
- (void)onStartPay:(id)arg1;
- (void)orderSubmitSuccess:(id)arg1;
- (void)resetRefreshFlagByRefreshWhitelist;
- (void)updateSubmitOrderButtonStatus:(_Bool)arg1;
- (void)updateNetworkStatus:(_Bool)arg1;
- (void)loadTheNewUI;
- (void)loadTheOldUI;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)addPlusPircePVABTest;
- (void)backFromPlusPage:(id)arg1;
- (void)shouldRefreshPageAfterSubmitOrder;
- (void)showPromotionLimitPinToastWithTitle:(id)arg1 skus:(id)arg2;
- (void)showPurchaseLimitToastWithModel:(id)arg1;
- (void)showGoodsSoldOutToastWithMode:(long long)arg1 andGoods:(id)arg2;
- (id)findBackTitleOfGoodsSoldOutToast;
- (id)promptCreateAdddressView;
- (void)addRefreshView;
- (void)reloadSubviews;
@property(readonly, nonatomic) NSArray *pvParamComponents; // @synthesize pvParamComponents=_pvParamComponents;
@property(readonly, nonatomic) COCheckoutMainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
- (id)init;
- (void)dealloc;
- (void)saveVenderPackaging:(id)arg1;
- (id)getErrorMessageFromUpdateAddressResponse:(id)arg1 withError:(id)arg2;
- (void)submitOrder;
- (void)useBalance;
- (void)useJDBean;
- (void)resetUserSelectedCoupons:(id)arg1;
- (void)resetUserSelectedCards:(id)arg1 withReqType:(unsigned long long)arg2;
- (void)ruleCheckByParams:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)saveInvoiceWithModel:(id)arg1;
- (void)updateFreightRiskWithArray:(id)arg1;
- (void)updatePresaleStepAction;
- (void)savePayAndShipmentWithModel:(id)arg1;
- (void)updateAddressWithUserCardIdNumber:(id)arg1;
- (void)saveConsigneeAddressWithGiverAddress:(id)arg1;
- (void)saveConsigneeAddress:(id)arg1;
- (void)refreshCurrentOrder;
- (void)fetchDataFromCurrentOrderApi;
- (id)saveVenderPackagingApi;
- (id)storeNetwork;
- (id)resetAllCouponsApi;
- (_Bool)checkSubmitParams;
- (_Bool)isChineseCharacterOrLettersOrNumbers:(id)arg1 type:(unsigned long long)arg2;
- (void)handleDeliveryInfoChangeCompletion:(CDUnknownBlockType)arg1;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)dismiss;
- (void)__showGlobalAddressMatchFailed;
- (void)__showGlobalAddressMatchSuccess;
- (void)toastBuildNewAddress;
- (void)showNewBuiltAddress;
- (void)showTransitionAddress;
- (_Bool)__processAddressMatchWithProviceID:(id)arg1 cityID:(id)arg2;
- (_Bool)processAddressCacheMatchWithAddressID:(id)arg1;
- (id)__getGlobalAddressShippingAddress;
- (void)backFromGlobalAddressWithProgressResult:(_Bool)arg1;
- (void)backFromGlobalAddressCacheWithProgressResult:(_Bool)arg1;
- (void)handleGlobalAddressCompletion:(CDUnknownBlockType)arg1;
- (void)handleAddressCacheCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSArray *matchedShippingAddressModelArray; // @dynamic matchedShippingAddressModelArray;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)pickerViewDidSelectedFinish:(id)arg1;
- (void)pickerViewUnSelected;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)disuseBeanInfoPickerView;
- (void)showBeanInfoPickerView;
@property(retain, nonatomic) NSArray *canUseBeanCountsArray; // @dynamic canUseBeanCountsArray;
@property(nonatomic) long long beanEditInfoPickerViewLastSelectedIndex; // @dynamic beanEditInfoPickerViewLastSelectedIndex;
@property(nonatomic) long long beanEditInfoPickerViewSelectedIndex; // @dynamic beanEditInfoPickerViewSelectedIndex;
- (CDUnknownBlockType)selectAddressEventHandler;
- (void)dismissTheController;
- (void)presentNextViewController:(id)arg1;
- (void)pushToCardViewControllerWithReqType:(unsigned long long)arg1;
- (void)pushToConsignmentCodeViewController;
- (void)pushToGiftCardViewController;
- (void)pushToCouponViewController;
- (void)pushToInvoiceViewController;
- (void)presentChooseViewWithParams:(id)arg1;
- (void)pushToShippingViewControllerWithParams:(id)arg1;
- (void)pushToPaymentViewController;
- (void)pushToCartItemsViewControllerWithVenderId:(id)arg1;
- (void)gotoEditAddressModuleWithModel:(id)arg1 showRightBarButtonItem:(_Bool)arg2 fromCompleteAddress:(_Bool)arg3;
- (void)pushToGiverAddressViewController;
- (void)pushToAddressViewController;
- (id)chooseDateController;
- (void)setChooseDateController:(id)arg1;
- (void)handleShippmentCompletion:(CDUnknownBlockType)arg1;
- (void)toastView:(id)arg1 beginLoadingWithPassword:(id)arg2;
- (void)clickedForgetPasswordInToastView:(id)arg1;
- (void)toastView:(id)arg1 didFinishWithPassword:(id)arg2;
- (void)clickedForgetPasswordButton;
- (void)orderNewNostockViewWitchRemove;
- (void)orderNewNostockViewWithBack;
- (void)changeVerifyCodeImageInToastView;
- (void)verifyWithInputCode:(id)arg1;
- (void)inputViewHasCharacter:(_Bool)arg1;
- (void)toastView:(id)arg1 didSelectRow:(long long)arg2;
- (id)getToastViewAddressWithModel:(id)arg1;
- (id)toastView:(id)arg1 titleForRow:(long long)arg2;
- (long long)maxnumOfEachCellTextLineInToastView:(id)arg1;
- (long long)numberOfRowsInToastView:(id)arg1;
- (id)toastView:(id)arg1 DetailForSection:(long long)arg2;
- (id)toastView:(id)arg1 titleForSection:(long long)arg2;
- (long long)numberOfSectionsInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)didClickBackgroundInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (id)__flushAddressModel:(id)arg1 inModelArray:(id)arg2;
- (_Bool)__checkToastView;
- (void)priceTimerFire:(id)arg1;
- (void)showSubmitCreateAddress;
- (void)showSubmitChoseAddress;
- (void)showLimitBuyVenderWithTitle:(id)arg1;
- (void)showToastViewFromBottomWithIconType:(long long)arg1 message:(id)arg2;
- (void)showToastListViewWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 doneButtonTitle:(id)arg3 tag:(long long)arg4;
- (void)showToastViewWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 doneButtonTitle:(id)arg3 tag:(long long)arg4;
- (void)showToastViewOptionWithTitle:(id)arg1 subTitle:(id)arg2 doneButtonTitle:(id)arg3 tag:(long long)arg4;
- (void)showToastViewOptionWithTitle:(id)arg1 doneButtonTitle:(id)arg2 tag:(long long)arg3;
@property(nonatomic) long long toastListViewSelectedIndex; // @dynamic toastListViewSelectedIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

