//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDStoreNetwork, NSMutableArray, NSString, OrderAddressModel, UITableView;
@protocol OrderSelfPickListViewControllerDelegate;

@interface OrderSelfPickListViewController : JDViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <OrderSelfPickListViewControllerDelegate> _delegate;
    NSString *_orderID;
    OrderAddressModel *_provinceModel;
    OrderAddressModel *_cityModel;
    OrderAddressModel *_countyModel;
    OrderAddressModel *_townModel;
    OrderAddressModel *_defaultModel;
    UITableView *_m_tableView;
    NSMutableArray *_dataSource;
    JDStoreNetwork *_netWork;
}

@property(retain, nonatomic) JDStoreNetwork *netWork; // @synthesize netWork=_netWork;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *m_tableView; // @synthesize m_tableView=_m_tableView;
@property(retain, nonatomic) OrderAddressModel *defaultModel; // @synthesize defaultModel=_defaultModel;
@property(retain, nonatomic) OrderAddressModel *townModel; // @synthesize townModel=_townModel;
@property(retain, nonatomic) OrderAddressModel *countyModel; // @synthesize countyModel=_countyModel;
@property(retain, nonatomic) OrderAddressModel *cityModel; // @synthesize cityModel=_cityModel;
@property(retain, nonatomic) OrderAddressModel *provinceModel; // @synthesize provinceModel=_provinceModel;
@property(copy, nonatomic) NSString *orderID; // @synthesize orderID=_orderID;
@property(nonatomic) __weak id <OrderSelfPickListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)requesetData;
- (void)createUI;
- (void)initData;
- (void)viewDidLoad;
- (id)initWithOrderID:(id)arg1 provinceModel:(id)arg2 cityModel:(id)arg3 countyModel:(id)arg4 townModel:(id)arg5 defaultSiteModel:(id)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
