//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "FinderHotListAdapterDataSource-Protocol.h"
#import "FinderHotListAdapterDelegate-Protocol.h"
#import "NewRefreshTableHeaderViewDelegate-Protocol.h"

@class FinderHotBigVideoCell, FinderHotListAdapter, FinderHotViewModel, FinderRefreshTableHeaderView, JDActivityIndicatorView, JDFooterLoadingView, NSMutableSet, NSString, SHAVPlayerCoordinate, UILabel, UITableView;

@interface FinderHotViewController : JDViewController <FinderHotListAdapterDataSource, FinderHotListAdapterDelegate, NewRefreshTableHeaderViewDelegate>
{
    _Bool _isLoading;
    _Bool _isLastItemRefresh;
    UITableView *_mTableView;
    FinderRefreshTableHeaderView *_refreshHeaderView;
    JDFooterLoadingView *_footerLoadingView;
    JDActivityIndicatorView *_activityIndicatorView;
    UILabel *_footReloadView;
    FinderHotViewModel *_viewModel;
    FinderHotListAdapter *_adapter;
    SHAVPlayerCoordinate *_playerManager;
    FinderHotBigVideoCell *_currentPlayingCell;
    NSMutableSet *_mCardExpoSet;
    long long _scrollDepthIndex;
}

@property(nonatomic) long long scrollDepthIndex; // @synthesize scrollDepthIndex=_scrollDepthIndex;
@property(retain, nonatomic) NSMutableSet *mCardExpoSet; // @synthesize mCardExpoSet=_mCardExpoSet;
@property(retain, nonatomic) FinderHotBigVideoCell *currentPlayingCell; // @synthesize currentPlayingCell=_currentPlayingCell;
@property(retain, nonatomic) SHAVPlayerCoordinate *playerManager; // @synthesize playerManager=_playerManager;
@property(nonatomic) _Bool isLastItemRefresh; // @synthesize isLastItemRefresh=_isLastItemRefresh;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) FinderHotListAdapter *adapter; // @synthesize adapter=_adapter;
@property(retain, nonatomic) FinderHotViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *footReloadView; // @synthesize footReloadView=_footReloadView;
@property(retain, nonatomic) JDActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) JDFooterLoadingView *footerLoadingView; // @synthesize footerLoadingView=_footerLoadingView;
@property(retain, nonatomic) FinderRefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) UITableView *mTableView; // @synthesize mTableView=_mTableView;
- (void).cxx_destruct;
- (void)stopVideoPlayIfNeeded;
- (void)startPlayVideoAtIndexPath:(id)arg1;
- (_Bool)isFirstVisableVideoCompletedAndCanPlayCell:(id)arg1;
- (void)autoPlayVideoIfNeeded;
- (void)retryLoadMore;
- (void)refreshData;
- (void)clickLastItemRefresh;
- (id)clkForListAdapter:(id)arg1;
- (id)objectForListAdapter:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)networkStatusDidChanged:(id)arg1;
- (void)reconnect;
- (id)getArticleExpoString;
- (void)doPullRefresh:(_Bool)arg1;
- (void)removeReloadView;
- (void)showReloadView;
- (void)endRequest;
- (void)fetchRequestWithRefreshType:(unsigned long long)arg1;
- (void)setUpConfigs;
- (void)setUpViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

