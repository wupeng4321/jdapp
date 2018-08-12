//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

@class FinderInventoryDetailCompleteModel, FinderTabBar, JDSHUnplGenerator, JDStoreNetwork, NSString, NewFinderNetworkProvider, UIBarButtonItem, UITableView, UIView;

@interface FinderInventoryDetailViewController : JDViewController
{
    _Bool _isInstation;
    _Bool _isHideFloor;
    NSString *_inventoryId;
    JDStoreNetwork *_inventoryRequest;
    NSString *_clickUrl;
    FinderInventoryDetailCompleteModel *_inventoryModel;
    NewFinderNetworkProvider *_networkProvider;
    UITableView *_mainTableView;
    UIBarButtonItem *_shareButton;
    UIBarButtonItem *_shopCartButton;
    JDSHUnplGenerator *_unplGenerator;
    UIView *_followCoverView;
    FinderTabBar *_finderTabBar;
    NSString *_testId;
    NSString *_inventoryChannel;
}

@property(nonatomic) _Bool isHideFloor; // @synthesize isHideFloor=_isHideFloor;
@property(nonatomic) _Bool isInstation; // @synthesize isInstation=_isInstation;
@property(copy, nonatomic) NSString *inventoryChannel; // @synthesize inventoryChannel=_inventoryChannel;
@property(copy, nonatomic) NSString *testId; // @synthesize testId=_testId;
@property(retain, nonatomic) FinderTabBar *finderTabBar; // @synthesize finderTabBar=_finderTabBar;
@property(retain, nonatomic) UIView *followCoverView; // @synthesize followCoverView=_followCoverView;
@property(retain, nonatomic) JDSHUnplGenerator *unplGenerator; // @synthesize unplGenerator=_unplGenerator;
@property(retain, nonatomic) UIBarButtonItem *shopCartButton; // @synthesize shopCartButton=_shopCartButton;
@property(retain, nonatomic) UIBarButtonItem *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) NewFinderNetworkProvider *networkProvider; // @synthesize networkProvider=_networkProvider;
@property(retain, nonatomic) FinderInventoryDetailCompleteModel *inventoryModel; // @synthesize inventoryModel=_inventoryModel;
@property(copy, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(retain, nonatomic) JDStoreNetwork *inventoryRequest; // @synthesize inventoryRequest=_inventoryRequest;
@property(copy, nonatomic) NSString *inventoryId; // @synthesize inventoryId=_inventoryId;
- (void).cxx_destruct;
- (void)invalidInventoryId;
- (void)inventoryShareButton;
- (void)clickMoreList;
- (void)refreshInventoryView;
- (void)initView;
- (void)finderTabBarNetWorkFinishModel:(id)arg1;
- (void)finderTabBarClickModel:(id)arg1;
- (void)followCoverViewAdded:(_Bool)arg1;
- (void)setFollowed:(_Bool)arg1 FollowNumStr:(id)arg2 IsFirst:(long long)arg3 Msg:(id)arg4;
- (void)followRequest;
- (void)startFollowRequest;
- (void)inventoryShopCartButton;
- (void)pushToMoreInventoryVC:(id)arg1;
- (void)clickTagWithId:(id)arg1 Name:(id)arg2;
- (void)clickRecommendInventoryCellWithId:(id)arg1;
- (void)clickRelevantChannelCell:(id)arg1;
- (void)clickBottomIconCell:(id)arg1;
- (void)clickDetailIconCell:(id)arg1;
- (void)clickAddToShopping:(id)arg1;
- (void)clickInventorySkuCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reconnect;
- (void)requestInventory;
- (void)initData;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithParams:(id)arg1;
- (id)initWithInventoryId:(id)arg1 TestId:(id)arg2;
- (id)initWithInventoryId:(id)arg1;
- (void)startInventoryRequest;
- (void)insertAppSearchData:(id)arg1;

@end
