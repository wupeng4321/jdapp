//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDImageViewDelegate-Protocol.h"

@class JDFooterLoadingView, JDImageView, JDLabel, JDStoreNetwork, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIButton, UITableView;

@interface NewPromotionListViewController : JDViewController <JDImageViewDelegate>
{
    _Bool isLoading;
    _Bool isGetMore;
    int currentPage;
    NSMutableArray *_items;
    UITableView *_tableView;
    JDStoreNetwork *_networkDao;
    JDStoreNetwork *_networkMDao;
    JDFooterLoadingView *_footerView;
    double _originY;
    JDImageView *_topBgView;
    JDLabel *_detailTitle;
    UIButton *_btnExit;
    UIButton *_btnShare;
    NSMutableDictionary *_shareDic;
    NSString *_bgColorStr;
    int sourceType;
    NSString *activityId_;
    NSString *_functionId;
    NSDictionary *_inParams;
    NSString *sourceValue;
    NSString *bgColorStr;
    NSString *_bIsValue;
}

@property(copy, nonatomic) NSString *bIsValue; // @synthesize bIsValue=_bIsValue;
@property(copy, nonatomic) NSString *bgColorStr; // @synthesize bgColorStr;
@property(copy, nonatomic) NSString *sourceValue; // @synthesize sourceValue;
@property(nonatomic) int sourceType; // @synthesize sourceType;
@property(copy, nonatomic) NSDictionary *inParams; // @synthesize inParams=_inParams;
@property(copy, nonatomic) NSString *functionId; // @synthesize functionId=_functionId;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=activityId_;
- (void)goShare;
- (void)tapButtonFinishDownloadImage:(id)arg1;
- (void)didFinishResponse:(id)arg1 requestSetup:(id)arg2 components:(id)arg3 msg:(id)arg4;
- (void)reloadWithData:(id)arg1 key:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)cell:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reconnect;
- (void)requestPromotionWareList;
- (void)goBack;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithActivityId:(id)arg1;
- (id)initWithFunctionId:(id)arg1 params:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

