//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "OrderSuccessModelBaseCellDelegate-Protocol.h"
#import "RecommendUITableViewDataSource-Protocol.h"
#import "RecommendUITableViewDelegate-Protocol.h"

@class JDStoreNetwork, NSString, NewRecommendUITableView, OrderSuccessModel, OrderSuccessNetwork, OrderSuccessView;

@interface OrderSuccessViewController : JDViewController <RecommendUITableViewDataSource, RecommendUITableViewDelegate, OrderSuccessModelBaseCellDelegate, JDBaseToastViewDelegate>
{
    OrderSuccessNetwork *_network;
    OrderSuccessModel *_model;
    OrderSuccessView *_OrderSuccessView;
    _Bool isOperatingBtn;
    NSString *phoneNumCheckUrl;
    NewRecommendUITableView *_tableView;
    NSString *_orderId;
    JDStoreNetwork *_checkNetWork;
}

@property(retain, nonatomic) JDStoreNetwork *checkNetWork; // @synthesize checkNetWork=_checkNetWork;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) NewRecommendUITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *phoneNumCheckUrl; // @synthesize phoneNumCheckUrl;
@property(nonatomic) _Bool isOperatingBtn; // @synthesize isOperatingBtn;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)setModel:(id)arg1;
- (void)createOrderSuccessView;
- (void)createTableView;
- (void)addInitConstraints;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)commentSuccess:(id)arg1;
- (void)pushShareOrder:(id)arg1;
- (void)clickEvaluationBtn:(id)arg1;
- (void)clickWare:(id)arg1;
- (void)_requestRecommendWithSkus:(id)arg1;
- (void)_requestData;
- (void)reconnect;
- (void)removeReloadView;
- (void)showReloadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)mta_wareClick:(id)arg1 orderId:(id)arg2 allModels:(id)arg3;
- (void)mta_btnClick:(id)arg1 orderId:(id)arg2 allModels:(id)arg3;
- (void)mta_checkToastExpo;
- (void)mta_checkAlertCancel;
- (void)mta_checkAlertFinish;
- (void)mta_checkAlertExpo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

