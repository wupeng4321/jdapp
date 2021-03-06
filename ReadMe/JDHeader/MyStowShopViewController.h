//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "JDNJCommonDelegate-Protocol.h"
#import "JDStowShopHeadViewDelegate-Protocol.h"
#import "MyStowScrollingDelegate-Protocol.h"

@class JDFooterLoadingView, JDMyToastView, JDShopEmptyDataView, JDStoreNetwork, JDStowDataManage, JDStowShopModel, MyStowEmptyDataView, MyStowFilterView, NSArray, NSMutableArray, NSMutableDictionary, NSMutableString, NSString, UIBarButtonItem, UIView;
@protocol MyStowShopDelegate;

@interface MyStowShopViewController : JDViewController <JDBaseToastViewDelegate, JDNJCommonDelegate, MyStowScrollingDelegate, JDStowShopHeadViewDelegate>
{
    long long _currentPage;
    long long kPageSize;
    JDStoreNetwork *m_netWork;
    NSMutableArray *_stowList;
    JDFooterLoadingView *footerView_;
    UIView *_footerView;
    double offsetY_;
    _Bool isShopFirst;
    JDMyToastView *_myToastView;
    _Bool _shopListRequestError;
    _Bool isShopFirstLoaded;
    int m_notifyConfig;
    MyStowEmptyDataView *m_noDataView;
    UIView *filterEmptyView;
    MyStowFilterView *m_filterView;
    struct CGRect m_windowBounds;
    NSMutableDictionary *m_shopParams;
    NSMutableArray *m_shopCategories;
    long long m_totalCount;
    long long totalShopCategoriesCount;
    NSMutableString *sortTypeString;
    _Bool canScrolling;
    _Bool enterNextView;
    _Bool isNavHidden;
    JDStowDataManage *dataManage;
    long long followedShopCount;
    JDShopEmptyDataView *m_emptyShopView;
    _Bool _isShopFirst;
    _Bool _isSelectedShop;
    id <MyStowShopDelegate> _delegate;
    NSArray *_rightBarBtnArr;
    UIBarButtonItem *_openBtnItem;
    JDStowShopModel *_stowModel;
    long long _m_operateState;
}

@property(nonatomic) long long m_operateState; // @synthesize m_operateState=_m_operateState;
@property(retain, nonatomic) JDStowShopModel *stowModel; // @synthesize stowModel=_stowModel;
@property(retain, nonatomic) UIBarButtonItem *openBtnItem; // @synthesize openBtnItem=_openBtnItem;
@property(retain, nonatomic) NSArray *rightBarBtnArr; // @synthesize rightBarBtnArr=_rightBarBtnArr;
@property(nonatomic) __weak id <MyStowShopDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isSelectedShop; // @synthesize isSelectedShop=_isSelectedShop;
- (void).cxx_destruct;
- (id)createRightBarButtonItems;
- (void)shopClick;
- (void)requestShopCategory;
- (void)doFilter;
- (void)filterProductList;
- (void)sortDidSelectSortInfo:(id)arg1;
- (void)openDetail;
- (void)emptyDataBtnClick:(id)arg1;
- (id)currentNavigationController;
- (void)safePush:(id)arg1;
- (void)jumpToSecKill;
- (void)statusBarHeightChanged:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)updateRightBarItemStateWithType:(long long)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelAttentionedShopWithModel:(id)arg1;
- (void)turnToShopHomeController:(id)arg1;
- (void)loadNextPage;
- (void)stowScrollingDown;
- (void)stowScrollingUp;
- (void)removeFilterView;
- (void)filterMyStowByCategory:(id)arg1;
- (void)reconnect;
- (void)loadMyToastListViewNextPage:(id)arg1;
- (void)loadMyToastListView:(id)arg1;
- (void)requestShopData;
- (void)getTotalShopCount;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealFindShopPageClick;
- (void)firstLoadShopData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupSubViews;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

