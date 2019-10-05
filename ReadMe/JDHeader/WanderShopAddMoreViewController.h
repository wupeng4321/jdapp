//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "JDCoreStorySearchMiddleDelegate-Protocol.h"
#import "ShowTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WanderShopAlbumAssetCellDelegate-Protocol.h"

@class JDStoreNetwork, JDStoryCoreStorySearchBarView, NSMutableArray, NSString, UITableView, UIView, WanderShopProductType, WanderShopSelTabView, WanderShopWarePallet;

@interface WanderShopAddMoreViewController : JDViewController <UITableViewDataSource, UITableViewDelegate, ShowTableViewCellDelegate, JDBaseToastViewDelegate, WanderShopAlbumAssetCellDelegate, JDCoreStorySearchMiddleDelegate>
{
    WanderShopWarePallet *_productPallet;
    JDStoryCoreStorySearchBarView *_searchBar;
    _Bool _isloading;
    _Bool _isloadingMore;
    _Bool _hasMoreData;
    CDUnknownBlockType _waresProductChange;
    NSMutableArray *_productList;
    WanderShopProductType *_type;
    JDStoreNetwork *_network;
    UITableView *_tableView;
    UIView *_noDataView;
    NSString *_refreshDate;
    WanderShopSelTabView *_tabView;
}

@property(retain, nonatomic) WanderShopSelTabView *tabView; // @synthesize tabView=_tabView;
@property(copy, nonatomic) NSString *refreshDate; // @synthesize refreshDate=_refreshDate;
@property(retain, nonatomic) UIView *noDataView; // @synthesize noDataView=_noDataView;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(nonatomic) _Bool isloadingMore; // @synthesize isloadingMore=_isloadingMore;
@property(nonatomic) _Bool isloading; // @synthesize isloading=_isloading;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) JDStoreNetwork *network; // @synthesize network=_network;
@property(retain, nonatomic) WanderShopProductType *type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *productList; // @synthesize productList=_productList;
@property(copy, nonatomic) CDUnknownBlockType waresProductChange; // @synthesize waresProductChange=_waresProductChange;
- (void).cxx_destruct;
- (void)createBar;
- (void)showSearchBar:(_Bool)arg1;
- (void)getWareListNetworkFinish:(id)arg1 msg:(id)arg2;
- (id)getHistrory:(long long)arg1 Page:(long long)arg2;
- (void)requestProductList:(long long)arg1;
- (void)backButtonClicked;
- (void)didConfirmPallet;
- (void)itemViewDelete:(id)arg1;
- (void)singleProductViewDidSelected:(id)arg1;
- (void)reconentNetwork;
- (void)noDataViewNoSouce;
- (void)noDataViewNoNetWork;
- (void)didNeedRequestType:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reloadData;
- (void)reloadTable;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)startSearch:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
