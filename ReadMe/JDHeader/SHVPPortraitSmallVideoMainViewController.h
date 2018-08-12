//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

@class JDActivityIndicatorView, NSMutableArray, NSString, SHAVToastView, SHVPPortraitNavigationBarView, SHVPPortraitSmallVideoBuryData, SHVPPortraitSmallVideoCell, SHVPPortraitSmallVideoCommentView, SHVPPortraitSmallVideoDataProvider, SHVPPortraitSmallVideoItemModel, SHVPSmallVideoBurredView, UITableView;

@interface SHVPPortraitSmallVideoMainViewController : JDViewController
{
    _Bool isfetching;
    _Bool _autoShowCommentView;
    NSString *_roomId;
    NSString *_playtype;
    NSString *_referpageid;
    NSString *_contentId;
    NSString *_projectid;
    NSString *_style;
    NSString *_adid;
    NSString *_currentpageParam;
    SHVPPortraitSmallVideoBuryData *_buryData;
    SHVPPortraitSmallVideoCell *_currentCell;
    NSMutableArray *_dataSource;
    SHVPPortraitSmallVideoItemModel *_LoginActionModel;
    long long _LoginActionType;
    SHVPPortraitSmallVideoCell *_LoginActionCell;
    SHAVToastView *_toastView;
    SHVPSmallVideoBurredView *_burredView;
    SHVPPortraitNavigationBarView *_navigationBarView;
    UITableView *_tableView;
    SHVPPortraitSmallVideoDataProvider *_dataProvder;
    JDActivityIndicatorView *_activityIndicatorView;
    SHVPPortraitSmallVideoCommentView *_commentView;
}

@property(retain, nonatomic) SHVPPortraitSmallVideoCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) JDActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) SHVPPortraitSmallVideoDataProvider *dataProvder; // @synthesize dataProvder=_dataProvder;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SHVPPortraitNavigationBarView *navigationBarView; // @synthesize navigationBarView=_navigationBarView;
@property(retain, nonatomic) SHVPSmallVideoBurredView *burredView; // @synthesize burredView=_burredView;
@property(retain, nonatomic) SHAVToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) SHVPPortraitSmallVideoCell *LoginActionCell; // @synthesize LoginActionCell=_LoginActionCell;
@property(nonatomic) long long LoginActionType; // @synthesize LoginActionType=_LoginActionType;
@property(retain, nonatomic) SHVPPortraitSmallVideoItemModel *LoginActionModel; // @synthesize LoginActionModel=_LoginActionModel;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SHVPPortraitSmallVideoCell *currentCell; // @synthesize currentCell=_currentCell;
@property(retain, nonatomic) SHVPPortraitSmallVideoBuryData *buryData; // @synthesize buryData=_buryData;
@property(nonatomic) _Bool autoShowCommentView; // @synthesize autoShowCommentView=_autoShowCommentView;
@property(copy, nonatomic) NSString *currentpageParam; // @synthesize currentpageParam=_currentpageParam;
@property(copy, nonatomic) NSString *adid; // @synthesize adid=_adid;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *projectid; // @synthesize projectid=_projectid;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(copy, nonatomic) NSString *referpageid; // @synthesize referpageid=_referpageid;
@property(copy, nonatomic) NSString *playtype; // @synthesize playtype=_playtype;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
- (id)replaceReferpageid:(id)arg1;
- (void)deviceOrientationChange:(id)arg1;
- (void)setThreePointStatus:(id)arg1;
- (void)backToRoom;
- (void)touchToSmallView:(id)arg1;
- (void)willPopViewController;
- (void)willPushNewVC:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)SHVPShowReloadView;
- (void)reconnect;
- (void)resetNeedLoginParam;
- (void)userCancleLogin:(id)arg1;
- (void)userDidLogin:(id)arg1;
- (void)autoSetCommentViewShow;
- (void)stopCurrentCellPlay;
- (void)startCurrentCellPlay;
- (void)autoPlayCurrentCell;
- (void)findCurrentCellToShow;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)closeSHVPSWindowNotification;
- (void)currentCellCommentNumChange:(id)arg1;
- (void)netwotkReachabilityChanged:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupUI;
- (void)setupBuryData;
- (void)removeDuplicateSmallVideoVC;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithParam:(id)arg1;
- (void)showCommentViewWithModel:(id)arg1 screenStateBeforeClick:(_Bool)arg2;
- (void)fetchCommentDataWithModel:(id)arg1;
- (void)processListDataWithLoading:(_Bool)arg1 autoPlay:(_Bool)arg2;
- (void)fetchSmallVideoListWithRoomId:(id)arg1 offset:(id)arg2 isLoading:(_Bool)arg3 autoplayNext:(_Bool)arg4 isPreviewLoad:(_Bool)arg5;
- (void)addLoginNotification;
- (void)fetchRepotWithModel:(id)arg1;
- (void)didClickedReportWithModel:(id)arg1;
- (void)didClickedShareViewWithModel:(id)arg1 screenStateBeforeClick:(_Bool)arg2;
- (void)didClickedCommentViewWithModel:(id)arg1 screenStateBeforeClick:(_Bool)arg2;
- (void)FetchLikeWithModel:(id)arg1 like:(id)arg2;
- (void)like:(id)arg1 didClickedLikeViewWithModel:(id)arg2;
- (void)fetchAttentionStatusWithModel:(id)arg1 attention:(id)arg2;
- (void)portraitSmallVideoUpdateAuthorStatusEvent:(id)arg1;
- (void)needLoginAction;
- (void)attention:(id)arg1 didAttentionViewClickedWithAttention:(id)arg2;
- (void)changeViewFullScrennOrVirtual:(id)arg1;
- (void)clickAuthor;
- (void)currentSkuClick:(id)arg1;
- (void)swipSkuList;
- (void)addSkuToCart:(id)arg1;
- (void)clickReport;
- (void)clickToMyCart;
- (void)sendComment:(id)arg1;
- (void)shareCancelBtnClick;

@end

