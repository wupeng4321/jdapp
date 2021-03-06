//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

#import "JDReloadViewDelegate-Protocol.h"
#import "NewRefreshTableHeaderViewDelegate-Protocol.h"
#import "RecommendUITableViewDataSource-Protocol.h"
#import "RecommendUITableViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class JDFooterLoadingView, NSMutableArray, NSString, NewRecommendUITableView, NewRefreshTableHeaderView, OrderListNoOrderView, UIView;
@protocol OrderListTableViewDelegate><OrderListCellDelegate;

@interface OrderListTableView : JDView <RecommendUITableViewDataSource, RecommendUITableViewDelegate, JDReloadViewDelegate, NewRefreshTableHeaderViewDelegate, UIScrollViewDelegate>
{
    JDFooterLoadingView *footerView_;
    long long currentPage_;
    _Bool isLoading_;
    _Bool isGetMore_;
    NewRefreshTableHeaderView *refreshHeaderView_;
    OrderListNoOrderView *noOrderView;
    _Bool isFirstPageNill;
    float lastContentOffset;
    _Bool isRefreshing;
    _Bool _serverShowRecommand;
    int _listUIType;
    NewRecommendUITableView *tableView;
    NSMutableArray *_dataArr;
    UIView *_headerView;
    id <OrderListTableViewDelegate><OrderListCellDelegate> _masterDelegate;
    NSString *_passStr;
}

@property(nonatomic) _Bool serverShowRecommand; // @synthesize serverShowRecommand=_serverShowRecommand;
@property(retain, nonatomic) NSString *passStr; // @synthesize passStr=_passStr;
@property(nonatomic) int listUIType; // @synthesize listUIType=_listUIType;
@property(nonatomic) __weak id <OrderListTableViewDelegate><OrderListCellDelegate> masterDelegate; // @synthesize masterDelegate=_masterDelegate;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) NewRecommendUITableView *tableView; // @synthesize tableView;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)refreshData;
- (void)reconnect;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)backToTop:(_Bool)arg1;
- (void)reloadView;
- (void)refreshRecommandDataWithRecommendDataSourceType:(int)arg1;
- (CDUnknownBlockType)parseNewOneOrderblock:(id)arg1;
- (void)addNewOrderWithDeltedOrderID:(id)arg1;
- (void)refreshOrderlistFromDelete:(id)arg1;
- (void)refreshOrderlistFromDeleteWithOrderID:(id)arg1;
- (void)refreshOrderInfo:(id)arg1;
- (void)refreshOrderlist;
- (void)setMasterListFrame:(struct CGRect)arg1;
- (void)showReloadView;
- (void)autoRefreshOrderlist;
- (void)removeReloadView;
- (void)updateUIType;
- (CDUnknownBlockType)parseOrderListblock;
- (void)didMoveToSuperview;
- (void)disappearRecommandMTA;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

