//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

@class JDActivityIndicatorView, JDFooterLoadingView, JDSHUnplGenerator, NSIndexPath, NSMutableArray, NSString, SHVPNavigationBarView, SHVPSmallVideoCell, SHVPSmallVideoCommentView, SHVPSmallVideoDataProvider, SHVPSmallVideoItemModel, SHVPSmallVideoSkuView, UILabel, UITableView;

@interface SHVPSmallVideoMainViewController : JDViewController
{
    _Bool isfetching;
    _Bool isEndPage;
    _Bool _autoPlayNextCell;
    _Bool _autoScrolPageLastCell;
    struct CGPoint _velocity;
    _Bool _autoShowCommentView;
    _Bool _fromVBList;
    NSString *_roomId;
    NSString *_tagId;
    NSString *_subPosition;
    NSString *_source;
    NSString *_contentId;
    SHVPSmallVideoCell *_currentCell;
    NSMutableArray *_dataSource;
    UITableView *_tableView;
    SHVPSmallVideoDataProvider *_dataProvder;
    JDFooterLoadingView *_loadingView;
    UILabel *_footLabel;
    JDActivityIndicatorView *_activityIndicatorView;
    SHVPSmallVideoSkuView *_skuView;
    SHVPSmallVideoCommentView *_commentView;
    SHVPSmallVideoCell *_onPlayingCell;
    SHVPNavigationBarView *_navigationBarView;
    SHVPSmallVideoItemModel *_LoginActionModel;
    long long _LoginActionType;
    SHVPSmallVideoCell *_LoginActionCell;
    NSMutableArray *_PVBurArr;
    JDSHUnplGenerator *_unplGenerator;
    NSIndexPath *_pageLastIndexPath;
}

@property(nonatomic) _Bool fromVBList; // @synthesize fromVBList=_fromVBList;
@property(retain, nonatomic) NSIndexPath *pageLastIndexPath; // @synthesize pageLastIndexPath=_pageLastIndexPath;
@property(retain, nonatomic) JDSHUnplGenerator *unplGenerator; // @synthesize unplGenerator=_unplGenerator;
@property(retain, nonatomic) NSMutableArray *PVBurArr; // @synthesize PVBurArr=_PVBurArr;
@property(retain, nonatomic) SHVPSmallVideoCell *LoginActionCell; // @synthesize LoginActionCell=_LoginActionCell;
@property(nonatomic) long long LoginActionType; // @synthesize LoginActionType=_LoginActionType;
@property(retain, nonatomic) SHVPSmallVideoItemModel *LoginActionModel; // @synthesize LoginActionModel=_LoginActionModel;
@property(retain, nonatomic) SHVPNavigationBarView *navigationBarView; // @synthesize navigationBarView=_navigationBarView;
@property(retain, nonatomic) SHVPSmallVideoCell *onPlayingCell; // @synthesize onPlayingCell=_onPlayingCell;
@property(retain, nonatomic) SHVPSmallVideoCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) SHVPSmallVideoSkuView *skuView; // @synthesize skuView=_skuView;
@property(retain, nonatomic) JDActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UILabel *footLabel; // @synthesize footLabel=_footLabel;
@property(retain, nonatomic) JDFooterLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) SHVPSmallVideoDataProvider *dataProvder; // @synthesize dataProvder=_dataProvder;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SHVPSmallVideoCell *currentCell; // @synthesize currentCell=_currentCell;
@property(nonatomic) _Bool autoShowCommentView; // @synthesize autoShowCommentView=_autoShowCommentView;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *subPosition; // @synthesize subPosition=_subPosition;
@property(copy, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
- (id)PVString;
- (void)backToRoom;
- (void)touchToSmallView:(id)arg1;
- (void)willPopViewController;
- (void)willPushNewVC:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)SHVPShowReloadView;
- (void)reconnect;
- (void)removeDuplicateSmallVideoVC;
- (void)setNavigationBarTitle:(id)arg1;
- (void)resetNeedLoginParam;
- (void)userCancleLogin:(id)arg1;
- (void)userDidLogin:(id)arg1;
- (void)needLoginAction;
- (void)setStatusBarBackgroundColor:(id)arg1;
- (void)navigationBack;
- (void)autoSetCommentViewShow;
- (void)stopCurrentCellPlay;
- (void)startCurrentCellPlay;
- (void)autoPlayCurrentCell;
- (_Bool)isCurrentCellChange;
- (void)findCurrentCellToShow;
- (void)clickEnterCartVCWithSku:(id)arg1;
- (void)didClickPlayBtn;
- (void)fetchRepotWithModel:(id)arg1;
- (void)didClickedReportWithModel:(id)arg1;
- (void)FetchStoreWithModel:(id)arg1 store:(id)arg2;
- (void)store:(id)arg1 didClickedStoreViewWithModel:(id)arg2;
- (void)didClickedShareViewWithModel:(id)arg1;
- (void)didClickedCommentViewWithModel:(id)arg1;
- (void)didClickedCartViewWithModel:(id)arg1;
- (void)FetchLikeWithModel:(id)arg1 like:(id)arg2;
- (void)like:(id)arg1 didClickedLikeViewWithModel:(id)arg2;
- (void)fetchAttentionStatusWithModel:(id)arg1 attention:(id)arg2;
- (void)attention:(id)arg1 didAttentionViewClickedWithAttention:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollToLastCell;
- (void)scrollToPageLastCell;
- (void)scrollCurrentCellToNext;
- (void)scrollCurrentCellToTop;
- (void)closeSHVPSWindowNotification;
- (void)currentCellCommentNumChange:(id)arg1;
- (void)currentCellPlayEnd;
- (void)netwotkReachabilityChanged:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)addLoginNotification;
- (void)dealloc;
- (id)initWithParam:(id)arg1;
- (void)showCommentViewWithModel:(id)arg1;
- (void)fetchCommentDataWithModel:(id)arg1;
- (void)processListDataWithLoading:(_Bool)arg1 autoPlay:(_Bool)arg2;
- (void)fetchSmallVideoListWithRoomId:(id)arg1 tagId:(id)arg2 offset:(id)arg3 subPosition:(id)arg4 isLoading:(_Bool)arg5 autoplayNext:(_Bool)arg6;
- (_Bool)cartHasData;
- (void)showCartInfoError;
- (void)showSkuView;
- (void)showCartInfoViewWithModel:(id)arg1;
- (void)fetchSkuDataWithId:(id)arg1;

@end

