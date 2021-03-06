//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDFooterLoadingView, JDStoreNetwork, NSDictionary, NSMutableArray, NSString, UITableView;

@interface PromotionListViewController : JDViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool isLoading;
    _Bool isGetMore;
    int currentPage;
    JDFooterLoadingView *footerView_;
    UITableView *_tableView;
    NSMutableArray *_items;
    JDStoreNetwork *_networkDao;
    int orderSourceType_;
    NSString *_promotionId;
    NSString *_promotionName;
    NSString *_functionId;
    NSDictionary *_inParams;
}

@property(nonatomic) int orderSourceType; // @synthesize orderSourceType=orderSourceType_;
@property(copy, nonatomic) NSDictionary *inParams; // @synthesize inParams=_inParams;
@property(copy, nonatomic) NSString *functionId; // @synthesize functionId=_functionId;
@property(copy, nonatomic) NSString *promotionName; // @synthesize promotionName=_promotionName;
@property(copy, nonatomic) NSString *promotionId; // @synthesize promotionId=_promotionId;
- (void)didFinishResponse:(id)arg1 requestSetup:(id)arg2 components:(id)arg3 msg:(id)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestPromotionList;
- (void)viewDidLoad;
- (id)init;
- (id)initWithPromotionId:(id)arg1 promotionName:(id)arg2;
- (id)initWithFunctionId:(id)arg1 params:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

