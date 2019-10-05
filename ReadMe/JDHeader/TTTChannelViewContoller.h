//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseViewController.h"

#import "NewRefreshTableHeaderViewDelegate-Protocol.h"

@class JDActivityIndicatorView, JDButton, JDLastPageView, JDNetErrorView, JDNextPageLoadingView, JDNextPageReloadView, JDNoDataView, JDSHXViewUtil, JDViewKitManager, NSMutableArray, NSMutableDictionary, NSString, TTTBaseToastView, TTTCategoryTwoListView, TTTDataProvider, TTTFloatView, TTTRefreshTableHeaderView, TTTSeckBannerView, TTTSeckNavigationView, TTTSlideCollectionViewCell, TTTTableView, UILabel, UIView;

@interface TTTChannelViewContoller : TTTBaseViewController <NewRefreshTableHeaderViewDelegate>
{
    struct CGRect _orginSeachBarHistoryFrame;
    double _floatViewWidth;
    _Bool _isTapScrolling;
    _Bool _isPreLoadedXViewSuccess;
    _Bool _isPulledXView;
    _Bool _isTopButtonTaped;
    TTTDataProvider *_dataProvider;
    NSMutableArray *_floatViewDatas;
    NSMutableArray *_floatViews;
    double _multiScrollBeginY;
    TTTRefreshTableHeaderView *_refreshHeaderView;
    TTTTableView *_tableView;
    UIView *_containerView;
    TTTFloatView *_floatIconView;
    TTTSeckBannerView *_seckBannerView;
    TTTSeckNavigationView *_seckNavView;
    TTTBaseToastView *_toastView;
    TTTCategoryTwoListView *_categoryView;
    JDButton *_toTopButton;
    NSMutableDictionary *_tableHeadCache;
    NSMutableDictionary *_expoAllSrvDict;
    JDSHXViewUtil *_xViewUti;
    JDViewKitManager *_viewKitManager;
    TTTSlideCollectionViewCell *_innerTableObject;
    JDActivityIndicatorView *_activityIndicatorView;
    JDNetErrorView *_netErrorView;
    JDNoDataView *_noDataView;
    JDLastPageView *_lastPageView;
    JDNextPageLoadingView *_nextPageLoadingView;
    JDNextPageReloadView *_nextPageReloadView;
    UILabel *_tipLabel;
}

+ (void)buryData:(id)arg1 totalModel:(id)arg2;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) JDNextPageReloadView *nextPageReloadView; // @synthesize nextPageReloadView=_nextPageReloadView;
@property(retain, nonatomic) JDNextPageLoadingView *nextPageLoadingView; // @synthesize nextPageLoadingView=_nextPageLoadingView;
@property(retain, nonatomic) JDLastPageView *lastPageView; // @synthesize lastPageView=_lastPageView;
@property(retain, nonatomic) JDNoDataView *noDataView; // @synthesize noDataView=_noDataView;
@property(retain, nonatomic) JDNetErrorView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(retain, nonatomic) JDActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) _Bool isTopButtonTaped; // @synthesize isTopButtonTaped=_isTopButtonTaped;
@property(nonatomic) __weak TTTSlideCollectionViewCell *innerTableObject; // @synthesize innerTableObject=_innerTableObject;
@property(retain, nonatomic) JDViewKitManager *viewKitManager; // @synthesize viewKitManager=_viewKitManager;
@property(retain, nonatomic) JDSHXViewUtil *xViewUti; // @synthesize xViewUti=_xViewUti;
@property(nonatomic) _Bool isPulledXView; // @synthesize isPulledXView=_isPulledXView;
@property(nonatomic) _Bool isPreLoadedXViewSuccess; // @synthesize isPreLoadedXViewSuccess=_isPreLoadedXViewSuccess;
@property(retain, nonatomic) NSMutableDictionary *expoAllSrvDict; // @synthesize expoAllSrvDict=_expoAllSrvDict;
@property(nonatomic) _Bool isTapScrolling; // @synthesize isTapScrolling=_isTapScrolling;
@property(retain, nonatomic) NSMutableDictionary *tableHeadCache; // @synthesize tableHeadCache=_tableHeadCache;
@property(retain, nonatomic) JDButton *toTopButton; // @synthesize toTopButton=_toTopButton;
@property(retain, nonatomic) TTTCategoryTwoListView *categoryView; // @synthesize categoryView=_categoryView;
@property(retain, nonatomic) TTTBaseToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) TTTSeckNavigationView *seckNavView; // @synthesize seckNavView=_seckNavView;
@property(retain, nonatomic) TTTSeckBannerView *seckBannerView; // @synthesize seckBannerView=_seckBannerView;
@property(retain, nonatomic) TTTFloatView *floatIconView; // @synthesize floatIconView=_floatIconView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TTTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TTTRefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(nonatomic) double multiScrollBeginY; // @synthesize multiScrollBeginY=_multiScrollBeginY;
@property(retain, nonatomic) NSMutableArray *floatViews; // @synthesize floatViews=_floatViews;
@property(retain, nonatomic) NSMutableArray *floatViewDatas; // @synthesize floatViewDatas=_floatViewDatas;
@property(retain, nonatomic) TTTDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (void)hiddenTips;
- (void)showTip:(id)arg1;
- (void)initViewKit;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeKVO;
- (void)addKVO;
- (void)toTop:(id)arg1;
- (id)p_createRefreshHeadView:(id)arg1;
- (id)p_createTableView:(struct CGRect)arg1;
- (void)p_creatTTTCategoryTwoListView;
- (void)p_changeToFloorView;
- (void)p_changeToCategoryView;
- (void)initView;
- (void)initData;
- (void)p_setViewKitMap;
- (void)p_downRnFloor;
- (void)p_adjustSeckNavFrame;
- (void)p_showSeckNav;
- (void)p_showSeckBanner;
- (void)p_showXview;
- (void)p_showFloatView;
- (void)p_afterLoadingChangeView;
- (void)isScrollToTop:(id)arg1;
- (void)addFootView:(unsigned long long)arg1 data:(id)arg2;
- (void)addFootView:(unsigned long long)arg1;
- (_Bool)isUserLogin;
- (_Bool)isMultiScrollList;
- (void)p_finishLoading;
- (void)p_updateHeaderView:(int)arg1 images:(id)arg2;
- (void)activityActived;
- (void)refreshTableHeaderRefreshData;
- (void)updatePullRefreshType;
- (void)p_loadNextPage;
- (void)p_loadFirstPage;
- (void)p_afterLogIn;
- (void)loadNextPageContent;
- (void)secondStepLoading;
- (void)reloadNetView;
- (void)p_afterMainInterfaceBack:(unsigned long long)arg1;
- (void)p_displayNavHeadInfo;
- (void)fetchFirstPageData;
- (void)debugId;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)reportVirtualClickBury;
- (void)clearAllData;
- (void)reportExpoData;
- (void)recordBuryData:(id)arg1;
- (void)reportPV;
- (double)p_xiDingMaskHeight;
- (void)p_isShowToTopButton;
- (void)p_cpuMultiScrollBeginY;
- (void)resetMulitScroll;
- (void)refreshNavBar;
- (void)changeNavColor:(id)arg1;
- (void)p_multiScrollFloorDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)p_multiSlideModelRequest:(id)arg1;
- (void)p_shopFollowGift:(id)arg1;
- (void)p_goMedal:(id)arg1 medalData:(id)arg2;
- (void)p_AnchorCoverJumpToAnchor:(id)arg1;
- (void)p_AnchorTabJumpToAnchor:(id)arg1;
- (void)p_hotZoneJumpToAnchor:(id)arg1;
- (void)p_loadNextFloor:(id)arg1 jumpType:(unsigned long long)arg2;
- (void)p_showReceiveJingDouView:(id)arg1 couponModel:(id)arg2;
- (void)p_goSearchView:(id)arg1;
- (void)p_LBInitXView:(id)arg1;
- (void)p_innerTableScroll:(id)arg1 floorData:(id)arg2;
- (double)p_safeOffset:(double)arg1;
- (long long)p_findAnchorSection;
- (id)p_findIndexPathWithModelId:(id)arg1;
- (void)p_popPromMessage:(id)arg1 floorData:(id)arg2;
- (void)goToJump:(id)arg1 floorData:(id)arg2;
- (void)updateTTTNavigationBar;
- (void)requestCheckInData:(id)arg1;
- (void)requestPersonalData;
- (void)requestDraw:(id)arg1 eventId:(id)arg2;
- (void)p_CouponStatusNeedIDGuide:(id)arg1;
- (void)p_CouponStatusNeedPlus:(id)arg1;
- (void)loadCouponData:(id)arg1 buryData:(id)arg2 eventId:(id)arg3;
- (void)loadCategoryData:(id)arg1;
- (void)loadFirstFeedsWithSecondTabModel:(id)arg1;
- (void)loadNextPageFeeds:(id)arg1;
- (void)forceLoadFirstPagesFeeds;
- (void)loadNextPageWares;
- (void)loadPagedWaresWithSecondTabModel:(id)arg1;
- (void)forceLoadFirstPagesWares;
- (void)loadLastEndingNextPagesFloors;
- (void)forceLastEndingFirstPagesFloors;
- (void)p_loadKBFloors:(_Bool)arg1;
- (void)p_loadNextPageFloors;
- (void)loadKBFloors:(_Bool)arg1;
- (void)loadNextPageFloorsCallBack:(CDUnknownBlockType)arg1;
- (void)loadNextPageFloors;
- (double)feedFloatHeaderViewWithFloorModel:(id)arg1;
- (id)p_getHeadViewAtIndex:(unsigned long long)arg1;
- (void)p_MoveAnchorRange:(id)arg1 offset:(double)arg2 anchor:(id)arg3 isNewCreate:(_Bool)arg4;
- (void)showTableHeadView:(double)arg1;
- (_Bool)shouldShowedHeadView:(double)arg1;
- (void)p_updateJumpBlockAndFloatViewsIfNeeded;
- (void)p_initFloatViewDatas;
- (void)reloadFloatSection:(id)arg1;
- (void)reCreatFloatViewData;
@property(nonatomic) _Bool cellFirstDisplay;
- (void)removeEnterbackgroundNotification;
- (void)addNotificationWhenApplicationEnterBackground;
- (void)viewDidEndDisplayWithVideoView:(id)arg1;
- (void)cellWillEndDisplay;
- (_Bool)isVideoFloorAndCanPlayindexPath:(id)arg1;
- (_Bool)needToJudgeCellToPlay;
- (id)getVideoViewFromCell:(id)arg1;
- (void)preloadViewDidAppear;
- (void)judgeVisibleVideoViewToPlay;
- (void)removeVideoViewInCache;
- (void)initVideoViewCache;
- (void)setPlayed;
- (_Bool)isGuiderPlayed;
- (void)removeMaskView;
- (void)backAnimation;
- (void)pullAnimation;
- (void)beiginGuideAnimation;
- (void)showXView;
- (void)initXView;
- (void)LBInitXView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
