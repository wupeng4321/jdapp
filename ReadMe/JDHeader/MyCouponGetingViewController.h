//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "JDStatusViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDStoreNetwork, NSMutableArray, NSString, UITableView;

@interface MyCouponGetingViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, JDStatusViewDelegate, JDBaseToastViewDelegate>
{
    JDStoreNetwork *_couponListNet;
    NSMutableArray *_myGetingDataArr;
    long long _currGetPage;
    JDStoreNetwork *_couponNetwork;
    _Bool _isLoadingGetTable;
    _Bool _hasMoreGet;
    _Bool _isGettingCoupon;
    _Bool _beCurrentVC;
    UITableView *_getCouponTable;
}

@property(nonatomic) _Bool beCurrentVC; // @synthesize beCurrentVC=_beCurrentVC;
@property(nonatomic) _Bool isGettingCoupon; // @synthesize isGettingCoupon=_isGettingCoupon;
@property(nonatomic) _Bool hasMoreGet; // @synthesize hasMoreGet=_hasMoreGet;
@property(nonatomic) _Bool isLoadingGetTable; // @synthesize isLoadingGetTable=_isLoadingGetTable;
@property(retain, nonatomic) UITableView *getCouponTable; // @synthesize getCouponTable=_getCouponTable;
- (void).cxx_destruct;
- (void)goToChargeCenter:(long long)arg1;
- (void)goToWebViewController:(id)arg1;
- (void)useTableCellCMSConfigWithUseModel:(id)arg1;
- (void)loadGotCouponWithComponents:(id)arg1 WithCouponModel:(id)arg2;
- (void)reLoadDataDelay;
- (void)getCouponMsg:(id)arg1 type:(long long)arg2;
- (void)getCouponWithGetingModel:(id)arg1 onCell:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)currentNavigationController;
- (void)gotoLingquan;
- (void)JDStatusView:(id)arg1 didClickButton:(id)arg2;
- (void)removeAttentionView;
- (void)showAttentionView:(long long)arg1;
- (void)requestDataWithLogin;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

