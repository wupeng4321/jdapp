//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

@class BrandKillViewController, JDImageView, JDStoreNetwork, NSDictionary, NSMutableDictionary, NSString, SSSBSKViewController, SSSCategoryMenuListView, SSSCrazySecKillViewController, SSSSGBViewController, SSSTabModel, SSSTotalTabModel, SecKillBaseViewController, SecKillTabBarView, SecKillTimerManger, SeckillTitleView, SingleKillViewController, UIImageView, UIView;

@interface SecKillTabViewController : JDViewController
{
    NSString *_tapUr;
    unsigned long long _tabIndex;
    _Bool _isTransViewController;
    _Bool _isFromLiangFanCell;
    JDStoreNetwork *_netRequest;
    SSSTotalTabModel *_totalTabModel;
    NSString *_seckillID;
    NSString *_jumpGid;
    NSString *_groupTime;
    unsigned long long _selectedTabType;
    SecKillTimerManger *_timerManager;
    SecKillTabBarView *_tabBarView;
    SingleKillViewController *_singleKillViewController;
    BrandKillViewController *_brandKillViewController;
    SSSBSKViewController *_bskViewController;
    SSSCrazySecKillViewController *_crazySecKillViewController;
    SSSSGBViewController *_superGroupShopingVC;
    SecKillBaseViewController *_currentViewController;
    SeckillTitleView *_titleImageView;
    SSSCategoryMenuListView *_cateMenuView;
    SSSTabModel *_tabModel;
    NSDictionary *_params;
    NSString *_brandId;
    NSString *_isFromGouShiHui;
    UIView *_skinImageBg;
    JDImageView *_skinImage;
    UIImageView *_naviImageView;
    UIView *_naviBackView;
    NSMutableDictionary *_iconColorDic;
    UIView *_viewOnSkinImageBg;
    UIImageView *_cskBGImageView;
}

@property(retain, nonatomic) UIImageView *cskBGImageView; // @synthesize cskBGImageView=_cskBGImageView;
@property(retain, nonatomic) UIView *viewOnSkinImageBg; // @synthesize viewOnSkinImageBg=_viewOnSkinImageBg;
@property(retain, nonatomic) NSMutableDictionary *iconColorDic; // @synthesize iconColorDic=_iconColorDic;
@property(retain, nonatomic) UIView *naviBackView; // @synthesize naviBackView=_naviBackView;
@property(retain, nonatomic) UIImageView *naviImageView; // @synthesize naviImageView=_naviImageView;
@property(retain, nonatomic) JDImageView *skinImage; // @synthesize skinImage=_skinImage;
@property(retain, nonatomic) UIView *skinImageBg; // @synthesize skinImageBg=_skinImageBg;
@property(retain, nonatomic) NSString *isFromGouShiHui; // @synthesize isFromGouShiHui=_isFromGouShiHui;
@property(copy, nonatomic) NSString *brandId; // @synthesize brandId=_brandId;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) _Bool isFromLiangFanCell; // @synthesize isFromLiangFanCell=_isFromLiangFanCell;
@property(retain, nonatomic) SSSTabModel *tabModel; // @synthesize tabModel=_tabModel;
@property(retain, nonatomic) SSSCategoryMenuListView *cateMenuView; // @synthesize cateMenuView=_cateMenuView;
@property(retain, nonatomic) SeckillTitleView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(nonatomic) _Bool isTransViewController; // @synthesize isTransViewController=_isTransViewController;
@property(nonatomic) __weak SecKillBaseViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) SSSSGBViewController *superGroupShopingVC; // @synthesize superGroupShopingVC=_superGroupShopingVC;
@property(retain, nonatomic) SSSCrazySecKillViewController *crazySecKillViewController; // @synthesize crazySecKillViewController=_crazySecKillViewController;
@property(retain, nonatomic) SSSBSKViewController *bskViewController; // @synthesize bskViewController=_bskViewController;
@property(retain, nonatomic) BrandKillViewController *brandKillViewController; // @synthesize brandKillViewController=_brandKillViewController;
@property(retain, nonatomic) SingleKillViewController *singleKillViewController; // @synthesize singleKillViewController=_singleKillViewController;
@property(retain, nonatomic) SecKillTabBarView *tabBarView; // @synthesize tabBarView=_tabBarView;
@property(retain, nonatomic) SecKillTimerManger *timerManager; // @synthesize timerManager=_timerManager;
@property(nonatomic) unsigned long long selectedTabType; // @synthesize selectedTabType=_selectedTabType;
@property(copy, nonatomic) NSString *groupTime; // @synthesize groupTime=_groupTime;
@property(copy, nonatomic) NSString *jumpGid; // @synthesize jumpGid=_jumpGid;
@property(copy, nonatomic) NSString *seckillID; // @synthesize seckillID=_seckillID;
@property(retain, nonatomic) SSSTotalTabModel *totalTabModel; // @synthesize totalTabModel=_totalTabModel;
@property(retain, nonatomic) JDStoreNetwork *netRequest; // @synthesize netRequest=_netRequest;
- (void).cxx_destruct;
- (struct CGRect)getViewFrame;
- (void)pvParams:(id)arg1;
- (struct CGRect)p_getTabbarViewFrame;
- (id)getTimerManger;
- (void)updateNaviIconColor;
- (void)updateTabView;
- (void)changeSingleKillTabToNewBrandKill:(_Bool)arg1;
- (void)changeSingleKillTabToBrandKill:(_Bool)arg1;
- (void)currentViewControllerViewScrollsToTop;
- (void)changeVCFrom:(id)arg1 toViewController:(id)arg2;
- (void)changedViewController:(unsigned long long)arg1 isFromLiangFanCell:(_Bool)arg2;
- (void)p_goToCateView:(id)arg1 select:(unsigned long long)arg2;
- (void)p_goToTabIndex:(unsigned long long)arg1 isFromLiangFanCell:(_Bool)arg2;
- (void)goToLiangTab;
- (void)viewWillLayoutSubviews;
- (void)goToTabIndex:(unsigned long long)arg1;
- (void)goToTabJumpIndex:(unsigned long long)arg1;
- (void)initViewController;
- (void)initTimer;
- (void)initView;
- (void)initData;
- (void)moreShop:(id)arg1;
- (void)moreDiscount:(id)arg1;
- (void)removeNotifaction;
- (void)addNotifaction;
- (void)singleSecKillShowCategoryView;
- (void)updateTitleViewWithIndex:(unsigned long long)arg1;
- (void)updateView;
- (void)backButtonClicked;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addObserverForNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)resetTabIndexWithDic:(id)arg1;
- (unsigned long long)tabIndexForJumpIndex:(unsigned long long)arg1;
- (void)resetTabIndex:(long long)arg1;
- (id)initWithTabIndex:(unsigned long long)arg1;
- (id)initWithGid:(id)arg1;
- (id)initWithPara:(id)arg1;
- (struct CGRect)itemFrame;
- (id)myReminder;
- (id)infoMenuItem;
- (id)shareMenuItem;
- (id)barItemWithImage:(id)arg1 handleBlock:(CDUnknownBlockType)arg2;
- (id)moreNavItemWithImage:(id)arg1;
- (id)categoryNavItemForSingleSecKill;
- (id)myGroupShoppingNavItemWithImage:(id)arg1;
- (id)reminderNavItemWithImage:(id)arg1;
- (id)backNavItemWithImage:(id)arg1;
- (void)forwardMyGroupShopping;
- (void)forwardInfoVC;
- (void)forwardMyReminderVC;
- (void)showCategory;
- (void)showShare;
- (void)setupCommonNavItem:(_Bool)arg1;
- (void)setupBlackCommonNavItem;
- (void)setupWhiteCommonNavItem;
- (void)setupSuperGroupBuyingNavItem;
- (void)setupSingleSecKillNavItem;
- (void)startTabRequest;

@end

