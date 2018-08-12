//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "OrderRefundProgressCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDPHCStoreNetwork, NSString, OrderRefundProgressHeaderView, OrderRefundProgressModel, TTTAttributedLabel, UITableView, UIViewController;

@interface OrderRefundProgressViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, OrderRefundProgressCellDelegate, JDBaseToastViewDelegate>
{
    NSString *fromPage;
    OrderRefundProgressHeaderView *_headerView;
    UITableView *_tableView;
    JDPHCStoreNetwork *_network;
    OrderRefundProgressModel *_model;
    UIViewController *_popViewController;
    NSString *_orderId;
    TTTAttributedLabel *_adjustHeightLabel;
}

@property(retain, nonatomic) TTTAttributedLabel *adjustHeightLabel; // @synthesize adjustHeightLabel=_adjustHeightLabel;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) UIViewController *popViewController; // @synthesize popViewController=_popViewController;
@property(retain, nonatomic) OrderRefundProgressModel *model; // @synthesize model=_model;
@property(retain, nonatomic) JDPHCStoreNetwork *network; // @synthesize network=_network;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) OrderRefundProgressHeaderView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) NSString *fromPage; // @synthesize fromPage;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)addInitConstraints;
- (void)didFinishInToastView:(id)arg1;
- (void)cell:(id)arg1 didSelectUrl:(id)arg2 indexPath:(id)arg3;
- (void)reconnect;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)networkForGetMessage;
- (void)showToastWithMessage:(id)arg1;
- (double)getHeightWithString:(id)arg1 width:(double)arg2 fontSize:(double)arg3;
- (void)updateDataAndHeightWith:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOrderId:(id)arg1 returnViewController:(id)arg2 fromPage:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

