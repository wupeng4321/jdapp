//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "WanderShopBottomButtonsDelagete-Protocol.h"

@class JDStoreNetwork, NSString, UIViewController, WanderShopBottomButtonsView, WandershopTabBarView;

@interface WanderShopTabBarController : JDViewController <WanderShopBottomButtonsDelagete>
{
    WanderShopBottomButtonsView *_bottomButtons;
    JDStoreNetwork *_newActivityRedDotDao;
    JDStoreNetwork *_shareConfigDao;
    JDStoreNetwork *_myCircleDao;
    JDStoreNetwork *_recommendCirlceDao;
    WandershopTabBarView *_tabBarView;
    _Bool visible;
    _Bool _isFirstInto;
    long long _selectedIndex;
    UIViewController *_selectedViewController;
}

@property(nonatomic) __weak UIViewController *selectedViewController; // @synthesize selectedViewController=_selectedViewController;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)goDetailViewController:(id)arg1;
- (void)removeCheckNetwork;
- (void)showCheckNetwork;
- (void)hiddenBottomBar:(_Bool)arg1;
- (_Bool)selectPage:(long long)arg1;
- (void)selectPageAfterLogin;
- (void)shareConfigGet;
- (void)hideRedView;
- (void)reloadRedView;
- (void)fetchNewActivityRedDot;
- (_Bool)shouldSlidePopViewController;
- (void)refreshDragBackState;
- (void)dismiss;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStateselectPage:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

