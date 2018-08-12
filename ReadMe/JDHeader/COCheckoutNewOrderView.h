//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

#import "COCheckoutIDInputViewDelegate-Protocol.h"
#import "COCheckoutOrderInfoCheckoutBarDelegate-Protocol.h"
#import "COCheckoutSumInfoViewDelegate-Protocol.h"
#import "JDContentViewDataSource-Protocol.h"
#import "PayAndShipInvoiceBaseViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "VirtualPropertyViewDelegate-Protocol.h"

@class COCheckoutAdditionalOrderModel, COCheckoutEditWareCountView, COCheckoutIDInputView, COCheckoutImmediatelyBuyView, COCheckoutOrderInfoCheckoutBar, COCheckoutOrderManagerModel, COCheckoutOrderSubmittingToast, COCheckoutShippingAddressView, COCheckoutWarelistView, CORegularBuyShipmentView, COShipmentOnlyDateView, JDContentView, JDViewController, NPayAndShipmentView, NSMutableArray, NSString, OrderPayView, OrderShipmentView, UIView;
@protocol COCheckoutNewOrderViewDelegate;

@interface COCheckoutNewOrderView : JDView <UIScrollViewDelegate, JDContentViewDataSource, COCheckoutOrderInfoCheckoutBarDelegate, VirtualPropertyViewDelegate, PayAndShipInvoiceBaseViewDelegate, COCheckoutSumInfoViewDelegate, COCheckoutIDInputViewDelegate>
{
    _Bool _hideKeyboardByScroll;
    _Bool _showKeyboardByCardView;
    NSMutableArray *_subviews;
    COCheckoutShippingAddressView *_shippingAddressView;
    COCheckoutWarelistView *_newWareListView;
    NPayAndShipmentView *_payshipmentView;
    OrderPayView *_payView;
    OrderShipmentView *_shipmentView;
    COCheckoutOrderInfoCheckoutBar *_checkoutBar;
    double _initialOffsetY;
    double _initialContentY;
    struct CGRect _priorFrame;
    struct CGPoint _priorOffset;
    COCheckoutIDInputView *_cardInputView;
    _Bool _isSupportPaymentType;
    _Bool _ignoreScroll;
    _Bool _savedIdentityNumber;
    _Bool _showsBottomShippingAddress;
    _Bool _isSplitTimeOfShipment;
    JDContentView *_contentView;
    double _offset;
    JDViewController *_controller;
    id <COCheckoutNewOrderViewDelegate> _orderDelegate;
    COCheckoutOrderManagerModel *_model;
    COCheckoutAdditionalOrderModel *_additionalOrderModel;
    CDUnknownBlockType _intelligentDeliveryBlock;
    CDUnknownBlockType _refreshCurrentOrderBlock;
    COCheckoutShippingAddressView *_bottomShippingAddressView;
    COCheckoutOrderSubmittingToast *_submittionToast;
    CORegularBuyShipmentView *_regularBuyShipmentView;
    COShipmentOnlyDateView *_shipmentOnlyDateView;
    COCheckoutImmediatelyBuyView *_immediatelyBuyView;
    COCheckoutEditWareCountView *_editWareCountView;
}

@property(retain, nonatomic) COCheckoutEditWareCountView *editWareCountView; // @synthesize editWareCountView=_editWareCountView;
@property(retain, nonatomic) COCheckoutImmediatelyBuyView *immediatelyBuyView; // @synthesize immediatelyBuyView=_immediatelyBuyView;
@property(retain, nonatomic) COShipmentOnlyDateView *shipmentOnlyDateView; // @synthesize shipmentOnlyDateView=_shipmentOnlyDateView;
@property(nonatomic) _Bool isSplitTimeOfShipment; // @synthesize isSplitTimeOfShipment=_isSplitTimeOfShipment;
@property(retain, nonatomic) CORegularBuyShipmentView *regularBuyShipmentView; // @synthesize regularBuyShipmentView=_regularBuyShipmentView;
@property(retain, nonatomic) COCheckoutOrderSubmittingToast *submittionToast; // @synthesize submittionToast=_submittionToast;
@property(retain, nonatomic) COCheckoutShippingAddressView *bottomShippingAddressView; // @synthesize bottomShippingAddressView=_bottomShippingAddressView;
@property(nonatomic) _Bool showsBottomShippingAddress; // @synthesize showsBottomShippingAddress=_showsBottomShippingAddress;
@property(copy, nonatomic) CDUnknownBlockType refreshCurrentOrderBlock; // @synthesize refreshCurrentOrderBlock=_refreshCurrentOrderBlock;
@property(copy, nonatomic) CDUnknownBlockType intelligentDeliveryBlock; // @synthesize intelligentDeliveryBlock=_intelligentDeliveryBlock;
@property(readonly, nonatomic, getter=isSavedIdentityNumber) _Bool savedIdentityNumber; // @synthesize savedIdentityNumber=_savedIdentityNumber;
@property(nonatomic) _Bool ignoreScroll; // @synthesize ignoreScroll=_ignoreScroll;
@property(retain, nonatomic) COCheckoutAdditionalOrderModel *additionalOrderModel; // @synthesize additionalOrderModel=_additionalOrderModel;
@property(retain, nonatomic) COCheckoutOrderManagerModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <COCheckoutNewOrderViewDelegate> orderDelegate; // @synthesize orderDelegate=_orderDelegate;
@property(nonatomic) __weak JDViewController *controller; // @synthesize controller=_controller;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(retain, nonatomic) JDContentView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIView *shippingAddressView; // @synthesize shippingAddressView=_shippingAddressView;
- (void).cxx_destruct;
- (void)presentDateViewWithHeadTitle:(id)arg1 otherDic:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)viewForIdentifier:(id)arg1;
- (void)preSalePayAdnShipmentAciton:(id)arg1;
- (void)virtualPropertyShowEditBeanInfoPickerView;
- (void)virtualPropertyIOS6ScrollToTop;
- (void)virtualPropertyIOS6NoScrollToTop;
- (void)virtualPropertyPopOpenPayMentViewWithFormeVcName:(id)arg1 methodName:(id)arg2;
- (void)virtualPropertyEditBeanTextFieldInPutRightNum;
- (void)virtualPropertyItemView:(id)arg1 paySwitchDidChanged:(_Bool)arg2;
- (void)orderViewHandleKeyboardHide:(id)arg1;
- (void)contentViewHideKeyBoard;
- (void)orderViewHandleKeyboardShowToolBar:(id)arg1;
- (void)orderViewHandleKeyboardShow:(id)arg1;
- (void)switchDidUpdate:(id)arg1;
- (void)singleReturnExchangeSwitchIsOpen:(_Bool)arg1;
- (void)checkoutBar:(id)arg1 didTapCheckoutButton:(id)arg2;
- (id)getEntryDictionaryWithKey:(id)arg1;
- (id)getFristBuyView:(long long)arg1;
- (void)checkAlertOfOnlyShipmentTime:(id)arg1 alertDic:(id)arg2;
- (void)checkAlertOfFreightRisk:(id)arg1 alertDic:(id)arg2;
- (void)checkAlertOfInvoice:(id)arg1 alertDic:(id)arg2;
- (void)checkAlertOfPayAndShipment:(id)arg1 alertDic:(id)arg2;
- (void)checkAlertOfWareList:(id)arg1 alertDic:(id)arg2;
- (id)getAlertDictionary:(id)arg1;
- (id)checkAlertOfViews:(id)arg1;
- (id)getSectionViewWithSection:(long long)arg1;
- (id)getAlertViewWithSection:(long long)arg1 withDic:(id)arg2;
- (id)checkoutAlertViewWithSection:(long long)arg1;
- (double)getPayAndShipSeparator;
- (double)heigtForSeparatorViewOfSection:(long long)arg1;
- (id)separatorViewOfSection:(long long)arg1;
- (long long)numberOfSectionsInConentView:(id)arg1;
- (id)contentView:(id)arg1 sectionAtIndex:(long long)arg2;
- (void)sumInfoView:(id)arg1 switchStateChanged:(_Bool)arg2;
- (void)didTapAtItemView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)mta_CheckoutAlertViewWithDic:(id)arg1;
- (void)loadOrderPromptView;
- (void)loadCalcView;
- (void)loadPresaleBookView;
- (_Bool)hasBookMobileView;
- (void)loadRemarkView;
- (void)showReturnAndExchangeView;
- (void)showInvoiceView;
- (void)showPayAndShipmentView;
- (void)setRecordOfTapDidPrePayShipment;
- (void)setRecordOfPrePayShipment;
- (void)__generatePayshipmentPresaleView;
- (void)__regularBuyShipmentView;
- (long long)__getPayAndShipmentSytle;
- (void)signWeekendArray:(id)arg1 Label:(id)arg2;
- (id)getWeekendAttributedString:(id)arg1;
- (_Bool)weekendListContainAnyOneOfArray:(id)arg1;
- (void)__generateShipmentOnlyDateView;
- (void)__generatePayAndShipmentView;
- (void)orderShipmentView;
- (void)orderPayView;
- (id)getMainWareModelList;
- (void)generateCOWareListView;
- (void)inputViewShouldEndEditing:(id)arg1 withError:(id)arg2;
- (void)inputView:(id)arg1 changeContentWithError:(id)arg2;
- (void)inputViewDidBeginEditing:(id)arg1;
- (void)__generateIdentityCardView;
- (void)__generateShippingAddressView;
- (void)__generateEditWareCountView;
- (void)__generateImmediatelyBuyView;
- (void)buildFreeShippingEntranceUI;
- (void)loadBuyPlus;
- (void)loadAllViewWithOrderData;
- (_Bool)needAddVirtualPropertyView;
- (void)jdmtaAi:(id)arg1;
- (void)showVirtualPropertyAndRemarkView;
- (void)setOrderSubmiting:(_Bool)arg1;
- (void)dismissSubmittionToast:(_Bool)arg1;
- (void)showOrderSubmitingToast:(_Bool)arg1 withAnimate:(_Bool)arg2;
- (void)changeSubmittinToastTextJumpPay;
- (void)setNetWorkIsBusy:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setupUi;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
