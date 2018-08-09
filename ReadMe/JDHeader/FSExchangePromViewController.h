//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FSExchangePromCateView, FSExchangePromRequest, FSExchangePromService, FSExchangePromTotalView, FSExchangePromViewModel, FSFilterPresenter, FSSPromTotalRequest, FinalSearchListFooterView, NSMutableArray, NSString, UILabel, UITableView;

@interface FSExchangePromViewController : JDViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    UILabel *_pagePrompt;
    FSSPromTotalRequest *_promTotalDao;
    FinalSearchListFooterView *_footerView;
    FSExchangePromTotalView *_totalView;
    FSExchangePromRequest *_promDao;
    FSExchangePromService *_service;
    FSExchangePromViewModel *_mainProductTmp;
    NSMutableArray *_productArray;
    NSMutableArray *_dataArray;
    NSMutableArray *_cateArray;
    FSFilterPresenter *_filterPresenter;
    FSExchangePromCateView *_cateView;
    double _headerHeight;
}

+ (id)pageWithParam:(id)arg1;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(retain, nonatomic) FSExchangePromCateView *cateView; // @synthesize cateView=_cateView;
@property(retain, nonatomic) FSFilterPresenter *filterPresenter; // @synthesize filterPresenter=_filterPresenter;
@property(retain, nonatomic) NSMutableArray *cateArray; // @synthesize cateArray=_cateArray;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSMutableArray *productArray; // @synthesize productArray=_productArray;
@property(retain, nonatomic) FSExchangePromViewModel *mainProductTmp; // @synthesize mainProductTmp=_mainProductTmp;
@property(retain, nonatomic) FSExchangePromService *service; // @synthesize service=_service;
@property(retain, nonatomic) FSExchangePromRequest *promDao; // @synthesize promDao=_promDao;
@property(retain, nonatomic) FSExchangePromTotalView *totalView; // @synthesize totalView=_totalView;
@property(retain, nonatomic) FinalSearchListFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) FSSPromTotalRequest *promTotalDao; // @synthesize promTotalDao=_promTotalDao;
@property(retain, nonatomic) UILabel *pagePrompt; // @synthesize pagePrompt=_pagePrompt;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)showDataCountTip;
- (void)pageReset;
- (void)reconnect;
- (void)removeObjectInSelectedArray:(id)arg1;
- (void)addObjectInSelectedArray:(id)arg1;
- (void)addOrRemoveGiftToCart;
- (void)addProductToCart;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)parseFilterInfoWithComponents:(id)arg1;
- (void)searchApiParseWithComponents:(id)arg1 setupInfo:(id)arg2;
- (void)fetchDataWithOriginSearch:(int)arg1;
- (void)promTotalApiParse:(id)arg1 reloadTableView:(_Bool)arg2;
- (void)requestSearchPromotionTotalWithReloadTableView:(_Bool)arg1;
- (void)refreshProductSelectState;
- (void)changeStatusBarFrame;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

