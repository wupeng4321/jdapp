//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBPaymentPayBaseViewController.h"

#import "JDPFingerprintViewControllerDelegate-Protocol.h"
#import "JDPFreePasswordViewControllerDelegate-Protocol.h"
#import "JDPPaymentTypeSettingDataControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDPPaymentTypeSettingDataController, JDPPaymentTypeSettingViewModel, JDPPaymentTypeSetttingViewParamModel, NSArray, NSString, UITableView;

@interface JDPPaymentTypeSettingViewController : CBPaymentPayBaseViewController <UITableViewDataSource, UITableViewDelegate, JDPFreePasswordViewControllerDelegate, JDPPaymentTypeSettingDataControllerDelegate, JDPFingerprintViewControllerDelegate>
{
    _Bool _cellNibRegistered;
    _Bool _isRefresh;
    JDPPaymentTypeSettingViewModel *_viewModel;
    JDPPaymentTypeSetttingViewParamModel *_paramModel;
    UITableView *_fillTableView;
    NSArray *_soureArray;
    JDPPaymentTypeSettingDataController *_dataController;
}

@property(nonatomic) _Bool isRefresh; // @synthesize isRefresh=_isRefresh;
@property(retain, nonatomic) JDPPaymentTypeSettingDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) _Bool cellNibRegistered; // @synthesize cellNibRegistered=_cellNibRegistered;
@property(retain, nonatomic) NSArray *soureArray; // @synthesize soureArray=_soureArray;
@property(retain, nonatomic) UITableView *fillTableView; // @synthesize fillTableView=_fillTableView;
@property(retain, nonatomic) JDPPaymentTypeSetttingViewParamModel *paramModel; // @synthesize paramModel=_paramModel;
@property(retain, nonatomic) JDPPaymentTypeSettingViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)private_updateSetPrepay;
- (void)reloadCellForSectionAtIndexPaths:(id)arg1;
- (void)changeFingerprintStatus:(id)arg1;
- (void)changeSmallFreeStatus:(_Bool)arg1 freeLimit:(id)arg2;
- (void)startTDRiskServiceCompleted:(CDUnknownBlockType)arg1;
- (void)private_showFreePasswordViewWithParamModel:(id)arg1;
- (void)private_showFingerprintViewWithParamModel:(id)arg1;
- (void)private_startRequestWithTdSignedData:(id)arg1 paramModel:(id)arg2;
- (void)showAccountViewWithParamModel:(id)arg1;
- (void)private_showDigitalCertView;
- (void)private_showWebViewWithURL:(id)arg1;
- (void)private_showBraceletView;
- (void)private_showPayOrderView;
- (void)private_showSmallFreeView;
- (void)private_showFingerprintView;
- (id)private_cellModel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)private_setupTableView;
- (void)private_setupSelf;
- (id)initWithParamModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)navBarLeftButtonAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
