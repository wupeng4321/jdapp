//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"

@class BJMarketCouponModel, BJMyAssignMentModel, CCCMarketListView, CCCouponMarketBuyView, NSMutableArray, NSString;

@interface CouponMarketViewController : JDViewController <JDBaseToastViewDelegate>
{
    _Bool tabBarFlag;
    _Bool _hasNextPage;
    _Bool _isPageFlag;
    _Bool _isFinishViewDidLoadPV;
    CCCMarketListView *_marketListView;
    BJMarketCouponModel *_marketCouponmodel;
    long long _currentPage;
    NSMutableArray *_marketCouponArray;
    BJMyAssignMentModel *_myAssignMentModel;
    CCCouponMarketBuyView *_buyView;
    long long _CCBeanJumpFlag;
    NSString *_realJumpUrl;
    NSString *_showIds;
}

@property(nonatomic) _Bool isFinishViewDidLoadPV; // @synthesize isFinishViewDidLoadPV=_isFinishViewDidLoadPV;
@property(nonatomic) _Bool isPageFlag; // @synthesize isPageFlag=_isPageFlag;
@property(copy, nonatomic) NSString *showIds; // @synthesize showIds=_showIds;
@property(copy, nonatomic) NSString *realJumpUrl; // @synthesize realJumpUrl=_realJumpUrl;
@property(nonatomic) long long CCBeanJumpFlag; // @synthesize CCBeanJumpFlag=_CCBeanJumpFlag;
@property(retain, nonatomic) CCCouponMarketBuyView *buyView; // @synthesize buyView=_buyView;
@property(retain, nonatomic) BJMyAssignMentModel *myAssignMentModel; // @synthesize myAssignMentModel=_myAssignMentModel;
@property(retain, nonatomic) NSMutableArray *marketCouponArray; // @synthesize marketCouponArray=_marketCouponArray;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) BJMarketCouponModel *marketCouponmodel; // @synthesize marketCouponmodel=_marketCouponmodel;
@property(retain, nonatomic) CCCMarketListView *marketListView; // @synthesize marketListView=_marketListView;
- (void).cxx_destruct;
- (void)reconnect;
- (void)screenCouponDepthExposure_JDmat;
- (void)userDidLogin;
- (void)showBuyView;
- (void)haveTabBar:(_Bool)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)oneKeyBuyCoupon:(id)arg1 withCell:(id)arg2 atIndexPath:(id)arg3;
- (void)jumpToBuyCouponAction:(id)arg1 withCell:(id)arg2 atIndexPath:(id)arg3;
- (void)receiveCouponAction:(id)arg1 withCell:(id)arg2 atIndexPath:(id)arg3;
- (void)reloadListView;
- (void)startRequestWithMyAssignMentList;
- (void)reloadMarketData;
- (void)combinationParams:(id)arg1 index:(long long)arg2 itemsCount:(long long)arg3;
- (void)startRequestWithCoupooMarketList;
- (void)pullReLoadFristPage;
- (void)setupContentViews;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

