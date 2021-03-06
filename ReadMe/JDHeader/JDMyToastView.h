//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JDMyToastHeadListCellDelegate-Protocol.h"
#import "JDMyToastListCellClickDelegate-Protocol.h"
#import "JDShopDAOverlayViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDButton, JDMyToastCell, JDShopDAOverlayView, JDShopEmptyDataView, JDStoreNetwork, JDStowShopHeadView, JDStowShopModel, JDStowShopRecommendModel, NSMutableArray, NSString, NSTimer, UITableView;
@protocol MyStowScrollingDelegate;

@interface JDMyToastView : UIView <JDMyToastListCellClickDelegate, JDShopDAOverlayViewDelegate, JDMyToastHeadListCellDelegate, UITableViewDelegate, UITableViewDataSource>
{
    JDStoreNetwork *netWork;
    _Bool scrollViewWillBeginDragging;
    _Bool canScrolling;
    NSMutableArray *sectionNameArray;
    _Bool _listCustomEditing;
    _Bool _listCustomEditingAnimationInProgress;
    JDMyToastCell *listCell;
    JDShopDAOverlayView *overlayView;
    UIView *_guide;
    _Bool isOpenDetail;
    _Bool _bShowingGuideView;
    UITableView *tableView;
    NSMutableArray *tableArray;
    id <MyStowScrollingDelegate> stowDelegate;
    JDStowShopRecommendModel *recommendModel;
    JDStowShopHeadView *headView;
    JDStowShopModel *stowShopModel;
    JDButton *_backToTopButton;
    UIView *_topLine;
    NSTimer *_bubbleTimer;
    UIView *_bubbleGuideView;
    JDShopEmptyDataView *_emptyView;
}

@property(retain, nonatomic) JDShopEmptyDataView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIView *bubbleGuideView; // @synthesize bubbleGuideView=_bubbleGuideView;
@property(retain, nonatomic) NSTimer *bubbleTimer; // @synthesize bubbleTimer=_bubbleTimer;
@property(nonatomic) _Bool listCustomEditing; // @synthesize listCustomEditing=_listCustomEditing;
@property(nonatomic) _Bool listCustomEditingAnimationInProgress; // @synthesize listCustomEditingAnimationInProgress=_listCustomEditingAnimationInProgress;
@property(nonatomic) _Bool bShowingGuideView; // @synthesize bShowingGuideView=_bShowingGuideView;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) JDButton *backToTopButton; // @synthesize backToTopButton=_backToTopButton;
@property(retain, nonatomic) JDStowShopModel *stowShopModel; // @synthesize stowShopModel;
@property(retain, nonatomic) JDStowShopHeadView *headView; // @synthesize headView;
@property(nonatomic) _Bool isOpenDetail; // @synthesize isOpenDetail;
@property(retain, nonatomic) JDStowShopRecommendModel *recommendModel; // @synthesize recommendModel;
@property(nonatomic) id <MyStowScrollingDelegate> stowDelegate; // @synthesize stowDelegate;
@property(retain, nonatomic) NSMutableArray *tableArray; // @synthesize tableArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView;
- (void).cxx_destruct;
- (void)turnProductVCWithModel:(id)arg1;
- (void)turnCouponListVCWithModel:(id)arg1;
- (void)clickCouponwithModel:(id)arg1 shopModel:(id)arg2;
- (void)turnCouponVCWithModel:(id)arg1 shopModel:(id)arg2 securiteDic:(id)arg3;
- (void)turnActivityVCWithModel:(id)arg1;
- (void)turnSignShop:(id)arg1;
- (void)turnDynamicProductsVCWithModel:(id)arg1 shopModel:(id)arg2;
- (void)turnToMActivity:(id)arg1;
- (_Bool)listMenuCellShouldShowMenuOptionsViewInCell:(id)arg1;
- (void)listMenuWillShowInCell:(id)arg1;
- (void)listMenuWillHideInCell:(id)arg1;
- (void)listMenuCellDidShowInCell:(id)arg1;
- (void)listMenuCellDidHideInCell:(id)arg1;
- (_Bool)checkFollowResult:(id)arg1;
- (void)showCancelToast:(id)arg1;
- (void)listMenuCellDidSelecFollowingOption:(id)arg1;
- (id)overlayView:(id)arg1 didHitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (void)listHideMenuOptionsAnimated:(_Bool)arg1;
- (void)changefollowState:(id)arg1;
- (void)changeTableView:(_Bool)arg1;
- (void)reloadEmptyView;
- (void)reloadView;
- (void)scrollToTop;
- (void)scrollToIndexPath:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)reloadCellWithIndexPath:(id)arg1;
- (void)showToastResult:(id)arg1 flag:(int)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (double)getTableCellHeight:(id)arg1;
- (double)getTableSectionHeight:(long long)arg1;
- (void)removeGuideViewInternal;
- (void)removeGuideView;
- (_Bool)showGuideView;
- (_Bool)isShowingBubbleImage;
- (void)removeBubbleImage;
- (void)showBubbleImage;
- (void)removeEmptyView;
- (void)showEmptyDataView;
- (void)loadTableViewWithModel:(id)arg1;
- (void)backToTopButtonClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

