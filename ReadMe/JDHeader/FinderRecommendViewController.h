//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

@class FinderArticleExpoMTA, FinderBannerFloorModel, FinderLastReadViewExpress, FinderRefreshTableHeaderView, JDActivityIndicatorView, JDFooterLoadingView, JDStoreNetwork, NSDate, NSDictionary, NSMutableArray, NSString, NewFinderVideoBuyNewCell, UILabel, UITableView;

@interface FinderRecommendViewController : JDViewController
{
    UITableView *_tableView;
    FinderRefreshTableHeaderView *_refreshHeaderView;
    JDStoreNetwork *_network;
    long long _pageNum;
    NSString *_offset;
    _Bool _isLoding;
    NSMutableArray *_dataArray;
    FinderBannerFloorModel *_bannerFloor;
    NSString *_functionId;
    NSDictionary *_params;
    _Bool _isFinderHome;
    NSDate *_lastTime;
    FinderArticleExpoMTA *_expoMta;
    NSString *_typeId;
    long long _upwardTime;
    long long _downwardNum;
    _Bool _usingFreshData;
    NSString *_clk;
    long long _lastReadPosition;
    long long _cacheSeconds;
    NewFinderVideoBuyNewCell *_currentPlayingCell;
    _Bool _videoListCanPlay;
    long long _autoPlayVideotype;
    _Bool _willEnterVideobuyDetail;
    _Bool _enterDetailControllerWhenClickVideoCell;
    _Bool _thisViewIsShow;
    _Bool _isPreFetching;
    _Bool _needCache;
    _Bool _buildByCache;
    NSString *_indexTitle;
    NSDictionary *_jumpParams;
    NSString *_action;
    JDFooterLoadingView *_loadingView;
    UILabel *_footReloadView;
    FinderLastReadViewExpress *_lastReadView;
    JDActivityIndicatorView *_activityIndicatorView;
}

@property(retain, nonatomic) JDActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) FinderLastReadViewExpress *lastReadView; // @synthesize lastReadView=_lastReadView;
@property(retain, nonatomic) UILabel *footReloadView; // @synthesize footReloadView=_footReloadView;
@property(retain, nonatomic) JDFooterLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSDictionary *jumpParams; // @synthesize jumpParams=_jumpParams;
@property(copy, nonatomic) NSString *indexTitle; // @synthesize indexTitle=_indexTitle;
@property(nonatomic) _Bool buildByCache; // @synthesize buildByCache=_buildByCache;
@property(nonatomic) _Bool needCache; // @synthesize needCache=_needCache;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)buryDataAboutCardDidClicked:(id)arg1 indexPath:(id)arg2;
- (void)buryDataWithEventId:(id)arg1 eventParam:(id)arg2 pageLevel:(int)arg3 pageId:(id)arg4 pageName:(id)arg5 pageParam:(id)arg6;
- (void)_videoMTA:(id)arg1 model:(id)arg2;
- (_Bool)isFirstVisableCompletedAndCanPlayCell:(id)arg1;
- (void)removeVideoViewFromSuperView;
- (void)stopPlayVideoIfNeed;
- (void)startPlayVideo:(id)arg1;
- (void)setNeedPlayVideoOnCell;
- (void)_loadVideoURLStringEvent:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_addNotificationAboutVideoPlay;
- (void)detailViewControllerDidUpdateCommentNumber:(id)arg1;
- (void)likedActionSuccess:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reportScrollDepthMta;
- (void)doPullRefresh:(_Bool)arg1;
- (void)removeReloadView;
- (void)showReloadView;
- (void)reconnect;
- (void)refreshData;
- (id)removeRepeatData:(id)arg1;
- (void)processData:(id)arg1 error:(id)arg2 refreshType:(int)arg3;
- (void)prefetch;
- (void)fetch:(int)arg1;
- (void)willFetch:(int)arg1 needDelay:(_Bool)arg2;
- (void)setFeedbackButtonState:(_Bool)arg1;
- (void)reset;
- (void)fetchIfNeeded;
- (void)loadCacheData;
- (void)setupViews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithFinctionId:(id)arg1 params:(id)arg2;
- (void)dealloc;

@end

