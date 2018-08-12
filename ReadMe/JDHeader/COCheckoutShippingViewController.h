//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutAbstractViewController.h"

#import "PayAndShipLayoutDelegate-Protocol.h"

@class COCheckoutGuideCardView, ChoosePaymentTypeView, ChooseShipmentTypeView, JDOrderPayAndShipmentEditModel, JDOrderPayAndShipmentParameterModel, JDStoreNetwork, NSString, UIButton, UITableView, pickShipmentModel;

@interface COCheckoutShippingViewController : COCheckoutAbstractViewController <PayAndShipLayoutDelegate>
{
    _Bool _isResetPickDate;
    _Bool _isDidCalledBackBlock;
    _Bool payNetworkRequesting_;
    _Bool shipNetworkRequesting_;
    _Bool pickNetworkRequesting_;
    long long scroll_;
    UIButton *_acceptButton;
    JDStoreNetwork *payMentNetwork_;
    JDStoreNetwork *shipMentNetwork_;
    JDStoreNetwork *pickSiteNetwork_;
    JDOrderPayAndShipmentEditModel *_payAndShipmentEditModel;
    pickShipmentModel *_pickSiteModel;
    ChoosePaymentTypeView *_paymentView;
    ChooseShipmentTypeView *_shippingView;
    _Bool _hadLoadUI;
    _Bool _isDegraded;
    _Bool _needRefresh;
    CDUnknownBlockType _saveBlock;
    CDUnknownBlockType _backBlock;
    JDOrderPayAndShipmentParameterModel *_parameterModel;
    UITableView *_contentTableView;
    COCheckoutGuideCardView *_picksiteGuideCardView;
}

+ (void)initialize;
@property(retain, nonatomic) COCheckoutGuideCardView *picksiteGuideCardView; // @synthesize picksiteGuideCardView=_picksiteGuideCardView;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(nonatomic) _Bool isDegraded; // @synthesize isDegraded=_isDegraded;
@property(retain, nonatomic) UITableView *contentTableView; // @synthesize contentTableView=_contentTableView;
@property(retain, nonatomic) JDOrderPayAndShipmentParameterModel *parameterModel; // @synthesize parameterModel=_parameterModel;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
@property(copy, nonatomic) CDUnknownBlockType saveBlock; // @synthesize saveBlock=_saveBlock;
- (void).cxx_destruct;
- (void)showNotifyViewWithNotifyData:(id)arg1;
- (void)subviewsLayout;
- (void)setSureBtnEnable;
- (void)setNaviTitleWithString:(id)arg1;
- (void)parserPickData:(id)arg1 error:(id)arg2;
- (void)loadPickDateSiteWithId:(long long)arg1;
- (void)handleJumpToVenderSiteNote:(id)arg1;
- (void)pushPickSiteVc:(id)arg1;
- (void)sortPickSites;
- (id)timeOrderParam;
- (long long)calcPostion:(id)arg1 pickSite:(id)arg2;
- (void)pickSiteChanged:(id)arg1;
- (void)paymentTypeChanged:(id)arg1;
- (void)parserShipMentData:(id)arg1 error:(id)arg2;
- (void)loadShipmentTypeWithPaymentId:(long long)arg1;
- (void)parserPayData:(id)arg1 error:(id)arg2;
- (void)getPayMentData;
- (void)setEnabledSwipeToParent:(_Bool)arg1;
- (void)jzdPickerViewAppearStatus:(id)arg1;
- (void)pickerViewWillDisapper:(id)arg1;
- (void)pickerViewWillApper:(id)arg1;
- (void)pressAcceptButton:(id)arg1;
- (void)blankPageAction:(id)arg1;
- (void)blankPageView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)getShipMentTableViewCell;
- (id)getPayMentTableViewCell;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadDeliveryServiceCell:(id)arg1;
- (void)handleSiteGuideCardViewTapGesture:(id)arg1;
- (void)showSiteGuideCardView;
- (void)backButtonClicked;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
