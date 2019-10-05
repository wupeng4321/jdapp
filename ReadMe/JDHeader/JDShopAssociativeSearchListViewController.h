//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDShopAssociativeSearchHotWordDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDShopAssociativeSearchHotWordView, JDStoreNetwork, NSArray, NSMutableArray, NSString, UITableView;
@protocol JDShopDelegate;

@interface JDShopAssociativeSearchListViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, JDShopAssociativeSearchHotWordDelegate>
{
    UITableView *m_tableView;
    JDStoreNetwork *netWork;
    NSMutableArray *dataArray;
    NSString *lastKeyword;
    NSString *_shopId;
    NSString *_fromSource;
    NSString *_pageId;
    NSArray *_hotWordArray;
    NSString *_suggestWord;
    NSString *_suggestFromDetail;
    NSString *_hotWordAbTest;
    id <JDShopDelegate> _delegate;
    CDUnknownBlockType _scrollBlock;
    NSString *_dataVersion;
    JDShopAssociativeSearchHotWordView *_hotView;
}

@property(retain, nonatomic) JDShopAssociativeSearchHotWordView *hotView; // @synthesize hotView=_hotView;
@property(retain, nonatomic) NSString *dataVersion; // @synthesize dataVersion=_dataVersion;
@property(copy, nonatomic) CDUnknownBlockType scrollBlock; // @synthesize scrollBlock=_scrollBlock;
@property(nonatomic) __weak id <JDShopDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *hotWordAbTest; // @synthesize hotWordAbTest=_hotWordAbTest;
@property(retain, nonatomic) NSString *suggestFromDetail; // @synthesize suggestFromDetail=_suggestFromDetail;
@property(retain, nonatomic) NSString *suggestWord; // @synthesize suggestWord=_suggestWord;
@property(retain, nonatomic) NSArray *hotWordArray; // @synthesize hotWordArray=_hotWordArray;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) NSString *fromSource; // @synthesize fromSource=_fromSource;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (void)removeFromeSuperController;
- (void)searchBarClick;
- (void)searchBarSearch;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)requestAssociativeSearchListWithWord:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)pvParamsLocal;
- (void)hotWordClock:(id)arg1;
- (void)setUpUI;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
