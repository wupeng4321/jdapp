//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "CommentCenterBulletinBoardDelegate-Protocol.h"
#import "CommentCenterSegmentViewDelegate-Protocol.h"
#import "CommentServiceCommentCellDelegate-Protocol.h"
#import "CommentcenterTableViewCellDelegate-Protocol.h"
#import "NewRefreshTableHeaderViewDelegate-Protocol.h"

@class CommentCenterAdBanner, CommentCenterBulletinBoard, CommentCenterSegmentView, JDStoreNetwork, NSMutableArray, NSString, NewRefreshTableHeaderView, ShareOrderUserAuth, UITableView, UIView;

@interface CommentCenterViewController : JDViewController <CommentCenterSegmentViewDelegate, CommentcenterTableViewCellDelegate, NewRefreshTableHeaderViewDelegate, CommentServiceCommentCellDelegate, CommentCenterBulletinBoardDelegate>
{
    CommentCenterSegmentView *segmentView;
    int wait4CommentCount;
    int wait4ShaidanCount;
    int commentFinishedCount;
    int serviceCount;
    NewRefreshTableHeaderView *refreshHeaderView;
    NSString *commentRuleUrl;
    CommentCenterAdBanner *_adBanner;
    _Bool isHideStory;
    _Bool needReloadData;
    NSMutableArray *_mtaArray;
    UIView *_headerView;
    CommentCenterBulletinBoard *_bulletinBoard;
    _Bool _needExpoBulletinBoard;
    UIView *cornLineView;
    _Bool isFirstIn;
    _Bool isLoading;
    _Bool _showDoubleJD;
    _Bool _isLoadingForService;
    _Bool _isNeedShowGuide;
    int _commentType;
    int _totalPageforComment;
    int _totalPageforShaidan;
    int _totalPageforFinish;
    int _totalPageforOrder;
    int _commentPage;
    int _shaidanPage;
    int _finishPage;
    int _orderPage;
    NSMutableArray *waitCommentItems;
    NSMutableArray *waitShaidanItems;
    NSMutableArray *finishItems;
    NSMutableArray *orderItems;
    JDStoreNetwork *netWork;
    UITableView *commentWareListtableView;
    NSMutableArray *_mta_WaitCommentItems;
    NSMutableArray *_mta_WaitShaidanItems;
    ShareOrderUserAuth *_shareorderUserAuth;
}

@property(nonatomic) _Bool isNeedShowGuide; // @synthesize isNeedShowGuide=_isNeedShowGuide;
@property(retain, nonatomic) ShareOrderUserAuth *shareorderUserAuth; // @synthesize shareorderUserAuth=_shareorderUserAuth;
@property(retain, nonatomic) NSMutableArray *mta_WaitShaidanItems; // @synthesize mta_WaitShaidanItems=_mta_WaitShaidanItems;
@property(retain, nonatomic) NSMutableArray *mta_WaitCommentItems; // @synthesize mta_WaitCommentItems=_mta_WaitCommentItems;
@property(nonatomic) int orderPage; // @synthesize orderPage=_orderPage;
@property(nonatomic) int finishPage; // @synthesize finishPage=_finishPage;
@property(nonatomic) int shaidanPage; // @synthesize shaidanPage=_shaidanPage;
@property(nonatomic) int commentPage; // @synthesize commentPage=_commentPage;
@property(nonatomic) _Bool isLoadingForService; // @synthesize isLoadingForService=_isLoadingForService;
@property(nonatomic) int totalPageforOrder; // @synthesize totalPageforOrder=_totalPageforOrder;
@property(nonatomic) int totalPageforFinish; // @synthesize totalPageforFinish=_totalPageforFinish;
@property(nonatomic) int totalPageforShaidan; // @synthesize totalPageforShaidan=_totalPageforShaidan;
@property(nonatomic) int totalPageforComment; // @synthesize totalPageforComment=_totalPageforComment;
@property(nonatomic) _Bool showDoubleJD; // @synthesize showDoubleJD=_showDoubleJD;
@property(nonatomic) int commentType; // @synthesize commentType=_commentType;
@property(retain, nonatomic) UITableView *commentWareListtableView; // @synthesize commentWareListtableView;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading;
@property(nonatomic) _Bool isFirstIn; // @synthesize isFirstIn;
@property(retain, nonatomic) JDStoreNetwork *netWork; // @synthesize netWork;
@property(retain, nonatomic) NSMutableArray *orderItems; // @synthesize orderItems;
@property(retain, nonatomic) NSMutableArray *finishItems; // @synthesize finishItems;
@property(retain, nonatomic) NSMutableArray *waitShaidanItems; // @synthesize waitShaidanItems;
@property(retain, nonatomic) NSMutableArray *waitCommentItems; // @synthesize waitCommentItems;
- (void).cxx_destruct;
- (void)applicationBackgroud:(id)arg1;
- (void)applicationActive:(id)arg1;
- (void)expoBulletinBoard;
- (_Bool)hasMta:(id)arg1;
- (void)reportMta:(int)arg1;
- (void)goToStoryView;
- (void)commentSuccess:(id)arg1;
- (void)reloadNoDataView;
- (void)removeReloadView;
- (void)showMyReloadView;
- (void)jumpToView:(id)arg1;
- (void)openWebforRule;
- (void)showNoDataView;
- (void)closeBulletionBoard:(id)arg1;
- (void)jumpToBulletionView:(id)arg1;
- (void)issueCommentWithModel:(id)arg1 isAddition:(_Bool)arg2;
- (void)finishLoading;
- (void)refreshData;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)segmentView:(id)arg1 didSelectedIndex:(long long)arg2;
- (void)setSegmentTitle:(id)arg1;
- (void)addRightButton:(id)arg1;
- (void)addPictureAdBanner:(id)arg1 addBulletinBoard:(id)arg2;
- (void)guideViewTapped:(id)arg1;
- (void)showGuide;
- (void)requestForService:(id)arg1;
- (void)getOrderData;
- (void)getDataByType;
- (void)getDataWithType:(int)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

