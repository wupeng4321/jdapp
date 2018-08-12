//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CCCMarketAggregatCellDelegate-Protocol.h"
#import "CCCScenarioCellDelegate-Protocol.h"
#import "CCCouponSignInATypeCellDelegate-Protocol.h"
#import "CCFooterRefreshViewDelegate-Protocol.h"
#import "JDBaseToastViewDelegate-Protocol.h"
#import "NewRefreshTableHeaderViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BJCCCouponListModel, BJCategoryCouponModel, BJChoiceCouponModel, CCCouponCToastView, CCCouponCenterListViewModel, CCCouponCenterSignInToastView, CCCouponCenterSignRecCouponView, CCCouponEmptyView, CCFooterRefreshView, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, NewRefreshTableHeaderView, UITableView;
@protocol CCCouponListViewDelegate;

@interface CCCouponListView : UIView <UITableViewDelegate, UITableViewDataSource, JDBaseToastViewDelegate, CCFooterRefreshViewDelegate, NewRefreshTableHeaderViewDelegate, CCCMarketAggregatCellDelegate, CCCScenarioCellDelegate, CCCouponSignInATypeCellDelegate>
{
    _Bool startLoadMore;
    _Bool _shouldLoading;
    _Bool _lastTabFlag;
    _Bool _reFreshSign;
    _Bool _isCouponCenterVCAppear;
    NSString *_signShowStyle;
    id <CCCouponListViewDelegate> _delegate;
    CDUnknownBlockType _refreshHeaderViewBlock;
    NewRefreshTableHeaderView *_refreshHeaderView;
    BJCategoryCouponModel *_categoryModel;
    NSArray *_deepestIndexPathsForVisibleRows;
    NSArray *_mta_showedItems;
    UITableView *_tableView;
    NSArray *_showedBannerMarketAggreatModels;
    BJChoiceCouponModel *_sceneAccessExpoModel;
    NSString *_remainMinutes;
    CCFooterRefreshView *_refreshFooterView;
    CDUnknownBlockType _selection;
    CDUnknownBlockType _CCPagingHandler;
    NSMutableDictionary *_jumpInBatchidDict;
    CCCouponCenterSignInToastView *_signInToastView;
    CCCouponCenterSignRecCouponView *_signRecCouponView;
    NSIndexPath *_deepestIndexPath;
    CCCouponEmptyView *_emptyView;
    NSMutableArray *_bannerAccessExposModels;
    CCCouponCenterListViewModel *_couponCenterListViewModel;
    BJCCCouponListModel *_couponListModel;
    CCCouponCToastView *_toastView;
}

@property(retain, nonatomic) CCCouponCToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) BJCCCouponListModel *couponListModel; // @synthesize couponListModel=_couponListModel;
@property(retain, nonatomic) CCCouponCenterListViewModel *couponCenterListViewModel; // @synthesize couponCenterListViewModel=_couponCenterListViewModel;
@property(retain, nonatomic) NSMutableArray *bannerAccessExposModels; // @synthesize bannerAccessExposModels=_bannerAccessExposModels;
@property(retain, nonatomic) CCCouponEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) NSIndexPath *deepestIndexPath; // @synthesize deepestIndexPath=_deepestIndexPath;
@property(nonatomic) _Bool isCouponCenterVCAppear; // @synthesize isCouponCenterVCAppear=_isCouponCenterVCAppear;
@property(nonatomic) _Bool reFreshSign; // @synthesize reFreshSign=_reFreshSign;
@property(retain, nonatomic) CCCouponCenterSignRecCouponView *signRecCouponView; // @synthesize signRecCouponView=_signRecCouponView;
@property(retain, nonatomic) CCCouponCenterSignInToastView *signInToastView; // @synthesize signInToastView=_signInToastView;
@property(nonatomic) _Bool lastTabFlag; // @synthesize lastTabFlag=_lastTabFlag;
@property(retain, nonatomic) NSMutableDictionary *jumpInBatchidDict; // @synthesize jumpInBatchidDict=_jumpInBatchidDict;
@property(nonatomic) _Bool shouldLoading; // @synthesize shouldLoading=_shouldLoading;
@property(copy, nonatomic) CDUnknownBlockType CCPagingHandler; // @synthesize CCPagingHandler=_CCPagingHandler;
@property(copy, nonatomic) CDUnknownBlockType selection; // @synthesize selection=_selection;
@property(retain, nonatomic) CCFooterRefreshView *refreshFooterView; // @synthesize refreshFooterView=_refreshFooterView;
@property(retain, nonatomic) NSString *remainMinutes; // @synthesize remainMinutes=_remainMinutes;
@property(retain, nonatomic) BJChoiceCouponModel *sceneAccessExpoModel; // @synthesize sceneAccessExpoModel=_sceneAccessExpoModel;
@property(retain, nonatomic) NSArray *showedBannerMarketAggreatModels; // @synthesize showedBannerMarketAggreatModels=_showedBannerMarketAggreatModels;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *mta_showedItems; // @synthesize mta_showedItems=_mta_showedItems;
@property(retain, nonatomic) NSArray *deepestIndexPathsForVisibleRows; // @synthesize deepestIndexPathsForVisibleRows=_deepestIndexPathsForVisibleRows;
@property(retain, nonatomic) BJCategoryCouponModel *categoryModel; // @synthesize categoryModel=_categoryModel;
@property(retain, nonatomic) NewRefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(copy, nonatomic) CDUnknownBlockType refreshHeaderViewBlock; // @synthesize refreshHeaderViewBlock=_refreshHeaderViewBlock;
@property(nonatomic) __weak id <CCCouponListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *signShowStyle; // @synthesize signShowStyle=_signShowStyle;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *handleItems;
- (void)show_toast_view_after_jump_url;
- (void)showWelfareViewWithItem:(id)arg1;
- (void)resetDeepestIndexPath;
- (void)setHeaderViewIsLoaded;
- (_Bool)hasHandleItems;
- (void)setFooterViewHidden:(_Bool)arg1;
- (void)refreshTrailerView:(id)arg1 isSetFlag:(_Bool)arg2;
- (void)setRemindWithViewUseCRM:(id)arg1 item:(id)arg2 isSetFlag:(_Bool)arg3;
- (void)updateReceivedCoupon:(id)arg1 currentIndex:(long long)arg2 cell:(id)arg3;
- (void)requestNetwork;
- (void)reloadNextPage;
- (void)reLoadFristPage;
- (void)resetRefreshFooterViewFrame;
- (void)showGuideView;
- (void)reloadListView;
- (void)getXviewOriginOffset;
- (void)startNetworkCouponsRequest;
- (void)mta_expose_packs_exclucoupons;
- (void)loadNextCategory;
- (void)sceneAccessWordTapJDMtaWithScenarioModel:(id)arg1 tagModel:(id)arg2;
- (void)selectedScenarioModel:(id)arg1 tagModel:(id)arg2;
- (_Bool)footerRefreshViewDataSourceIsLoading:(id)arg1;
- (void)footerRefreshViewDidTriggerRefresh:(id)arg1;
- (void)receiveSignCouponWithDict:(id)arg1;
- (void)signInCouponFinishWithDict:(id)arg1;
- (void)countDownTimeFinished;
- (void)cardSignInAction:(id)arg1;
- (void)loopSignInAction:(id)arg1;
- (void)giftReceiveAction:(id)arg1;
- (void)signInOrGetCouponesWithModel:(id)arg1;
- (void)resetWelfareWithBannerViewHight;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)marketAggregatOperateCoupon:(id)arg1 andPracticalModel:(id)arg2;
- (void)toMoreCouponesWithMarketAggregatModel:(id)arg1;
- (void)bannerAccessExposModelsAddModel:(id)arg1;
- (void)refreshHistoryView;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resetCouponsTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)resetCouponsTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 normalCell:(id)arg3;
- (void)updateSignHeaderView;
- (void)createRefreshFooterView;
- (void)sendBatchId:(id)arg1 integrateId:(id)arg2;
- (void)reloadTableViewWithCategoryItem:(id)arg1 selectionHandler:(CDUnknownBlockType)arg2;
- (void)updateTableViewByMarketAggregatDetailModel:(id)arg1 marketAggregatModelCouponesList:(id)arg2 cellRow:(long long)arg3;
- (void)refreshData;
- (void)clearAboutSignToastMaskAndBgView;
- (void)layoutSubviews;
- (void)initData;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
