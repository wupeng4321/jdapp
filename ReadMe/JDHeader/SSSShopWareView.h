//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "JDFooterRefreshViewDelegate-Protocol.h"
#import "JDReloadViewDelegate-Protocol.h"
#import "NewRefreshTableHeaderViewDelegate-Protocol.h"
#import "SSSPositionHelperProtocol-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class JDActivityIndicatorView, JDFooterRefreshView, JDReloadView, NSString, NewRefreshTableHeaderView, SSSGroupShopViewModel, SSSScrollDepthManage, SSSShopNoDataView, UITableView;
@protocol SSSShopWareViewDelegate;

@interface SSSShopWareView : UICollectionViewCell <JDReloadViewDelegate, NewRefreshTableHeaderViewDelegate, JDFooterRefreshViewDelegate, SSSPositionHelperProtocol, UIScrollViewDelegate>
{
    NewRefreshTableHeaderView *_freshHeaderView;
    SSSGroupShopViewModel *_viewModel;
    id <SSSShopWareViewDelegate> _delegate;
    SSSScrollDepthManage *_SSSDepthTrack;
    NSString *_isFromGouShiHui;
    UITableView *_tableView;
    JDActivityIndicatorView *_activityIndicatorView;
    SSSShopNoDataView *_noDataView;
    JDReloadView *_reloadView;
    JDFooterRefreshView *_tableFooterView;
    long long _tabPos;
}

@property(nonatomic) long long tabPos; // @synthesize tabPos=_tabPos;
@property(retain, nonatomic) JDFooterRefreshView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) JDReloadView *reloadView; // @synthesize reloadView=_reloadView;
@property(retain, nonatomic) SSSShopNoDataView *noDataView; // @synthesize noDataView=_noDataView;
@property(retain, nonatomic) JDActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *isFromGouShiHui; // @synthesize isFromGouShiHui=_isFromGouShiHui;
@property(retain, nonatomic) SSSScrollDepthManage *SSSDepthTrack; // @synthesize SSSDepthTrack=_SSSDepthTrack;
@property(nonatomic) __weak id <SSSShopWareViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SSSGroupShopViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)finishLoadingFooterTableView;
- (void)loadNextData;
- (_Bool)footerRefreshViewDataSourceIsLoading:(id)arg1;
- (void)footerRefreshViewDidTriggerRefresh;
- (void)tapTabRefreshData;
- (void)updateFootView;
- (void)isHiddenFooterView:(_Bool)arg1;
- (void)addRefreshHeadView:(id)arg1;
- (void)refreshData;
- (void)showReloadView;
- (void)showNodateView;
- (void)reloadData;
- (void)requestingData;
- (void)updateTableViewOffset:(struct CGPoint)arg1;
- (struct CGPoint)fetchTableViewContentOffset;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)fetchModelAtIndexPath:(id)arg1;
- (void)reconnect;
- (void)turnOffScrollToTop;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

