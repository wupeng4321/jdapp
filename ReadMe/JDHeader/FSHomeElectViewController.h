//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FSDepthSkuModel, FSHomeElectRequest, FinalSearchListFooterView, JDButton, NSMutableArray, NSString, UITableView;
@protocol FSHomeElectViewControllerDelegate;

@interface FSHomeElectViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    _Bool _isGetMore;
    _Bool _isLoading;
    _Bool _hasNextPage;
    _Bool _isClearMemoryEnabled;
    _Bool _isFirstLoad;
    id <FSHomeElectViewControllerDelegate> _delegate;
    NSString *_hcCid3;
    NSString *_logid;
    UITableView *_tableView;
    FinalSearchListFooterView *_footerView;
    NSMutableArray *_dataArray;
    FSHomeElectRequest *_homeElectDao;
    long long _currentPage;
    JDButton *_returnTopButton;
    NSString *_keywordAlias;
    long long _recycleNumber;
    long long _mta_userProductCount;
    long long _mta_userClickIndex;
    NSString *_mta_userLastKeyword;
    long long _mta_inventoryCount;
    FSDepthSkuModel *_mta_skuInfoModel;
    NSString *_mtest;
}

@property(copy, nonatomic) NSString *mtest; // @synthesize mtest=_mtest;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(retain, nonatomic) FSDepthSkuModel *mta_skuInfoModel; // @synthesize mta_skuInfoModel=_mta_skuInfoModel;
@property(nonatomic) long long mta_inventoryCount; // @synthesize mta_inventoryCount=_mta_inventoryCount;
@property(copy, nonatomic) NSString *mta_userLastKeyword; // @synthesize mta_userLastKeyword=_mta_userLastKeyword;
@property(nonatomic) long long mta_userClickIndex; // @synthesize mta_userClickIndex=_mta_userClickIndex;
@property(nonatomic) long long mta_userProductCount; // @synthesize mta_userProductCount=_mta_userProductCount;
@property(nonatomic) long long recycleNumber; // @synthesize recycleNumber=_recycleNumber;
@property(nonatomic) _Bool isClearMemoryEnabled; // @synthesize isClearMemoryEnabled=_isClearMemoryEnabled;
@property(copy, nonatomic) NSString *keywordAlias; // @synthesize keywordAlias=_keywordAlias;
@property(retain, nonatomic) JDButton *returnTopButton; // @synthesize returnTopButton=_returnTopButton;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isGetMore; // @synthesize isGetMore=_isGetMore;
@property(retain, nonatomic) FSHomeElectRequest *homeElectDao; // @synthesize homeElectDao=_homeElectDao;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) FinalSearchListFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *logid; // @synthesize logid=_logid;
@property(copy, nonatomic) NSString *hcCid3; // @synthesize hcCid3=_hcCid3;
@property(nonatomic) __weak id <FSHomeElectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mta_browsingDepth;
- (void)clearMemoryWithIndexPath:(id)arg1;
- (void)clearAllImageFromMemory;
- (void)removeImageFromMemoryWithKey:(id)arg1;
- (void)getFinalSearchConfig;
- (void)showDataCountTip;
- (void)pageReset;
- (void)reconnect;
- (void)resetSubViewFrame:(struct CGRect)arg1;
- (void)fetchData;
- (void)refreshWithKeyword:(id)arg1;
- (void)retrunToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)recordPV;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

