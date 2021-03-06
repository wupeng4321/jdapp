//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "JDReloadViewDelegate-Protocol.h"
#import "RecommendMenuCellDelegate-Protocol.h"
#import "RecommendNegativeDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CustomActivityIndicatorView, JDFooterLoadingView, JDStoreNetwork, NSMutableArray, NSMutableDictionary, NSMutableString, NSString, NewRecommendItem, UIView;
@protocol RecommendTabScrollTableViewDelegate, RecommendUITableViewDataSource, RecommendUITableViewDelegate;

@interface RecommendTabScrollTableView : UITableView <RecommendNegativeDelegate, JDReloadViewDelegate, UITableViewDataSource, UITableViewDelegate, RecommendMenuCellDelegate>
{
    int recommendSourceType;
    JDStoreNetwork *feedBackNetwork;
    JDStoreNetwork *passAndCaptchaNetwork;
    JDStoreNetwork *receiveCouponNetwork;
    JDStoreNetwork *netWork;
    NewRecommendItem *cellDisplayingMenuOptions;
    NewRecommendItem *cellShowBG;
    _Bool customEditing;
    _Bool selectedFlag;
    NSMutableDictionary *heightDic;
    NSMutableString *tipsString;
    _Bool isShowRecommendCell;
    _Bool isJumpFromRecommend;
    _Bool isJumping;
    _Bool isDispeared;
    _Bool publicTest;
    NSString *publicTestBottomUrl;
    UIView *geneFootView;
    UIView *footView;
    UIView *publicTestFootView;
    _Bool isShowPublicTestFootView;
    UIView *endView;
    JDFooterLoadingView *loadingView;
    _Bool isDragging;
    _Bool hideRecommend;
    _Bool _hasNextPage;
    _Bool _canScroll;
    id <RecommendUITableViewDataSource> recommendDataSource;
    id <RecommendUITableViewDelegate> recommendDelegate;
    NSMutableArray *recommendArray;
    id <RecommendTabScrollTableViewDelegate> _tabScrollDelegate;
    CDUnknownBlockType _tFinishBlock;
    CDUnknownBlockType _tCancelBlock;
    CustomActivityIndicatorView *_spinner;
    JDStoreNetwork *_negFeedDelNetWork;
}

+ (void)sendPublicTestExportEvent:(int)arg1;
@property(retain, nonatomic) JDStoreNetwork *negFeedDelNetWork; // @synthesize negFeedDelNetWork=_negFeedDelNetWork;
@property(retain, nonatomic) CustomActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(copy, nonatomic) CDUnknownBlockType tCancelBlock; // @synthesize tCancelBlock=_tCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType tFinishBlock; // @synthesize tFinishBlock=_tFinishBlock;
@property(nonatomic) __weak id <RecommendTabScrollTableViewDelegate> tabScrollDelegate; // @synthesize tabScrollDelegate=_tabScrollDelegate;
@property(nonatomic) _Bool canScroll; // @synthesize canScroll=_canScroll;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(retain, nonatomic) JDStoreNetwork *netWork; // @synthesize netWork;
@property(nonatomic) _Bool hideRecommend; // @synthesize hideRecommend;
@property(retain, nonatomic) NSMutableArray *recommendArray; // @synthesize recommendArray;
@property(nonatomic) __weak id <RecommendUITableViewDelegate> recommendDelegate; // @synthesize recommendDelegate;
@property(nonatomic) __weak id <RecommendUITableViewDataSource> recommendDataSource; // @synthesize recommendDataSource;
- (void).cxx_destruct;
- (void)applicationWillResignActiveNotification:(id)arg1;
- (void)onNegativeDelete:(long long)arg1;
- (void)innerScrollViewDidScroll:(id)arg1;
- (void)setScrollViewCanScroll:(_Bool)arg1;
- (id)viewController;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)contextClickOmitAndLongPress:(id)arg1 andRect:(struct CGRect)arg2 andIndex:(long long)arg3 andType:(long long)arg4;
- (void)contextSetBlackView:(id)arg1;
- (_Bool)shouldShowMenuOptionsViewInCell:(id)arg1;
- (void)contextMenuDidShowInCell:(id)arg1;
- (void)contextMenuDidHideInCell:(id)arg1;
- (void)contextMenuWillHideInCell:(id)arg1;
- (void)checkScrollViewPosition;
- (void)gotoShoppingCartFetchWithModel:(id)arg1;
- (void)gotoSimilarWithModel:(id)arg1;
- (void)deleteItemWithModel:(id)arg1 andIndex:(int)arg2;
- (void)gotoDetailWithModel:(id)arg1 andIndex:(int)arg2;
- (_Bool)isShowRecommendCell;
- (void)resetRecommendCell;
- (void)setTipsInfo:(id)arg1;
- (void)disappearTableView;
- (void)setFooterHeight:(float)arg1;
- (void)hideMenuOptionsAnimated:(_Bool)arg1;
- (void)cancelNetwork;
- (void)receiveCouponNetwork:(id)arg1 andIndex:(int)arg2;
- (void)requestPassAndCaptcha:(id)arg1 andIndex:(int)arg2;
- (void)takeCouponVC:(id)arg1 andIndex:(int)arg2;
- (void)setupFootView;
- (void)setupPublicTestFootView;
- (void)setupGeneNodataFootview;
- (void)onClickPublicTestFootButton:(id)arg1;
- (void)hideNegativeWizard;
- (void)showNegativeWizard:(id)arg1;
- (void)reconnect;
- (void)removeReloadView;
- (void)showReloadView;
- (void)showSuccess;
- (void)showFailed;
- (void)showFooterView;
- (void)refreshTableview;
- (void)setData:(id)arg1 publicTest:(_Bool)arg2 publicTestUrl:(id)arg3 canScroll:(_Bool)arg4;
- (void)setAnchorOffset:(double)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)dismissNegativePopup;
- (void)contextMenuCellDeleteRecommend:(id)arg1 andIndex:(long long)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

