//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDCoreStorySearchMiddleDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WanderShopAlbumAssetCellDelegate-Protocol.h"

@class JDFooterLoadingView, JDStoreNetwork, JDStoryCoreStorySearchBarView, NSMutableArray, NSString, UITableView, WanderShopWarePallet;

@interface WanderShopAddProductToStoryViewController : JDViewController <WanderShopAlbumAssetCellDelegate, JDCoreStorySearchMiddleDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UITableView *tableView_;
    JDFooterLoadingView *footerView_;
    WanderShopWarePallet *productPallet_;
    JDStoreNetwork *networkDao_;
    NSMutableArray *items_;
    NSMutableArray *selectedItems_;
    JDStoryCoreStorySearchBarView *_searchBar;
    _Bool _isGetMore;
    _Bool _isLoading;
    int _currentPage;
    int _pageSize;
    NSString *currentKeyword_;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isGetMore; // @synthesize isGetMore=_isGetMore;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(copy, nonatomic) NSString *currentKeyword; // @synthesize currentKeyword=currentKeyword_;
- (void).cxx_destruct;
- (void)itemViewDelete:(id)arg1;
- (void)didConfirmPallet;
- (_Bool)checkProductSelected:(id)arg1;
- (void)networkError;
- (void)removeSelectedProduct:(id)arg1;
- (void)changeSelectedProductState:(id)arg1;
- (void)fetchData:(id)arg1;
- (void)loadDefualtData;
- (void)resetData;
- (void)reconnect;
- (void)reloadTable;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)startSearch:(id)arg1;
- (void)setupUI;
- (void)showSearchBar:(_Bool)arg1;
- (void)createBar;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

