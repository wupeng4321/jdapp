//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "CAAnimationDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BJGiftWealCouponModel, CCCouponEmptyView, CCCouponGiftPackageReceiveView, CCCouponNavBar, CouponCenterTabViewModel, NSString, UIButton, UIImageView, UITableView;

@interface CouponWelfareViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, CAAnimationDelegate>
{
    long long statusBarStyle;
    BJGiftWealCouponModel *_welfareItem;
    CDUnknownBlockType _selectionBlock;
    CDUnknownBlockType _entranceBlock;
    CDUnknownBlockType _updateBlock;
    UITableView *_listTableView;
    CCCouponEmptyView *_emptyView;
    UIImageView *_animationImageView;
    CCCouponNavBar *_navBar;
    CCCouponGiftPackageReceiveView *_giftReceiveView;
    UIButton *_myCouponButton;
    CouponCenterTabViewModel *_tabViewModel;
}

@property(retain, nonatomic) CouponCenterTabViewModel *tabViewModel; // @synthesize tabViewModel=_tabViewModel;
@property(retain, nonatomic) UIButton *myCouponButton; // @synthesize myCouponButton=_myCouponButton;
@property(retain, nonatomic) CCCouponGiftPackageReceiveView *giftReceiveView; // @synthesize giftReceiveView=_giftReceiveView;
@property(retain, nonatomic) CCCouponNavBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) UIImageView *animationImageView; // @synthesize animationImageView=_animationImageView;
@property(retain, nonatomic) CCCouponEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UITableView *listTableView; // @synthesize listTableView=_listTableView;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(copy, nonatomic) CDUnknownBlockType entranceBlock; // @synthesize entranceBlock=_entranceBlock;
@property(copy, nonatomic) CDUnknownBlockType selectionBlock; // @synthesize selectionBlock=_selectionBlock;
@property(retain, nonatomic) BJGiftWealCouponModel *welfareItem; // @synthesize welfareItem=_welfareItem;
- (void).cxx_destruct;
- (id)getCouponIdString:(id)arg1;
- (id)getBatchIdString:(id)arg1;
- (id)imageFromView:(id)arg1;
- (void)shakingMyCouponIcon;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationWithViewAtIndexPath:(id)arg1;
- (void)revceiveWelfareCouponWithAnimationWithIndexPath:(id)arg1;
- (void)receiveWelfareCouponSuccessWithIndexPath:(id)arg1;
- (void)receiveCouponWithIndexPath:(id)arg1;
- (void)receiveGiftCouponSuccess:(id)arg1;
- (void)receiveGiftPackageAction;
- (void)selectionAction:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)refreshListView;
- (void)setupContentViews;
- (void)didReceiveMemoryWarning;
- (void)needLoginAction;
- (void)jumpToMyWallet;
- (void)jumpToShareAction;
- (void)setupRightButtons;
- (void)reloadListView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showCheckNetwork;
- (void)viewDidLoad;
- (void)recordPV;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

