//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDActivityIndicatorView, JDFooterLoadingView, NSMutableArray, NSString, NewRefreshTableHeaderView, SHVPListDataProvider, UILabel, UITableView;

@interface SHVPCommingGroupViewController : JDViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isLoading;
    _Bool _canLoadMore;
    _Bool _aTest;
    SHVPListDataProvider *_dataProvider;
    UITableView *_tableView;
    NSMutableArray *_listArr;
    NSString *_requestOffset;
    NewRefreshTableHeaderView *_refreshHeaderView;
    JDFooterLoadingView *_loadingView;
    UILabel *_footReloadView;
    UILabel *_footNoMoreItemView;
    JDActivityIndicatorView *_activityIndicatorView;
}

@property(nonatomic, getter=isATest) _Bool aTest; // @synthesize aTest=_aTest;
@property(retain, nonatomic) JDActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UILabel *footNoMoreItemView; // @synthesize footNoMoreItemView=_footNoMoreItemView;
@property(retain, nonatomic) UILabel *footReloadView; // @synthesize footReloadView=_footReloadView;
@property(retain, nonatomic) JDFooterLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NewRefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(copy, nonatomic) NSString *requestOffset; // @synthesize requestOffset=_requestOffset;
@property(nonatomic) _Bool canLoadMore; // @synthesize canLoadMore=_canLoadMore;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSMutableArray *listArr; // @synthesize listArr=_listArr;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SHVPListDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (void)retryLoadMore;
- (void)refreshData;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)itemRemindTapped:(id)arg1;
- (_Bool)isLiveItemBeenRemind:(id)arg1;
- (void)validateDataList;
- (void)fetchDataScrollUp;
- (void)fetchDataPullDown;
- (void)fetchData:(long long)arg1;
- (void)refreshList;
- (void)stopLoadingAnimateCircle;
- (void)startLoadingAnimateCircle;
- (void)loadDataFirstTime;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setUpRefreshHeader;
- (void)initViews;
- (void)initData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

