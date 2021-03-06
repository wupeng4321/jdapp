//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

@class FinderLastReadView, FinderRefreshTableHeaderView, JDActivityIndicatorView, JDButton, JDFooterLoadingView, JDStoreNetwork, JDUGCNewInterlocutionListBuryData, JDUGCNewInterlocutionListFooterView, NSMutableArray, NSString, UILabel, UITableView;

@interface JDUGCMainPageContentViewController : JDViewController
{
    unsigned long long _tempPageNum;
    NSString *_tempOffset;
    unsigned long long _pageNum;
    NSString *_offset;
    _Bool _isLoding;
    struct CGPoint _originalContentOffSet;
    unsigned long long _lastReadPosition;
    JDUGCNewInterlocutionListBuryData *_buryData;
    NSMutableArray *_allContentIdOfPvDataArray;
    NSString *_tabId;
    NSString *_tabTitle;
    CDUnknownBlockType _firstFetchedDataBlock;
    NSMutableArray *_dataArray;
    UITableView *_tableView;
    JDStoreNetwork *_network;
    JDButton *_returnTopButton;
    UILabel *_footReloadView;
    JDUGCNewInterlocutionListFooterView *_lastPagelistFooterView;
    JDFooterLoadingView *_loadingView;
    FinderRefreshTableHeaderView *_refreshHeaderView;
    JDActivityIndicatorView *_activityIndicatorView;
    FinderLastReadView *_lastRedView;
    NSString *_showIds;
}

@property(copy, nonatomic) NSString *showIds; // @synthesize showIds=_showIds;
@property(retain, nonatomic) FinderLastReadView *lastRedView; // @synthesize lastRedView=_lastRedView;
@property(retain, nonatomic) JDActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) FinderRefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) JDFooterLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) JDUGCNewInterlocutionListFooterView *lastPagelistFooterView; // @synthesize lastPagelistFooterView=_lastPagelistFooterView;
@property(retain, nonatomic) UILabel *footReloadView; // @synthesize footReloadView=_footReloadView;
@property(retain, nonatomic) JDButton *returnTopButton; // @synthesize returnTopButton=_returnTopButton;
@property(retain, nonatomic) JDStoreNetwork *network; // @synthesize network=_network;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(copy, nonatomic) CDUnknownBlockType firstFetchedDataBlock; // @synthesize firstFetchedDataBlock=_firstFetchedDataBlock;
@property(copy, nonatomic) NSString *tabTitle; // @synthesize tabTitle=_tabTitle;
@property(copy, nonatomic) NSString *tabId; // @synthesize tabId=_tabId;
@property(retain, nonatomic) NSMutableArray *allContentIdOfPvDataArray; // @synthesize allContentIdOfPvDataArray=_allContentIdOfPvDataArray;
@property(retain, nonatomic) JDUGCNewInterlocutionListBuryData *buryData; // @synthesize buryData=_buryData;
- (void).cxx_destruct;
- (void)returnTopButtonTapped:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)refreshData;
- (void)removeReloadView;
- (void)showReloadView;
- (void)reconnect;
- (id)rebulidUniqueDataArray:(id)arg1;
- (void)processData:(id)arg1 error:(id)arg2 refreshType:(int)arg3;
- (void)fetch:(int)arg1;
- (void)willFetch:(int)arg1 needDelay:(_Bool)arg2;
- (void)reset;
- (void)fetchIfNeeded;
- (void)setupRefreshHeaderView;
- (void)setupUI;
- (void)setupBuryData;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithParams:(id)arg1;
- (void)buryAllContentIdData;

@end

