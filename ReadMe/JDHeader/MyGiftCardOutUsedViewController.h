//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "MyGiftCardBasicCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class JDFooterLoadingView, JDStoreNetwork, MyGiftCardConsumeListView, NSMutableArray, NSString, UITableView;

@interface MyGiftCardOutUsedViewController : JDViewController <UITableViewDataSource, MyGiftCardBasicCellDelegate, JDBaseToastViewDelegate>
{
    _Bool _isLoadingData;
    _Bool _isHasMore;
    MyGiftCardConsumeListView *_consumeListView;
    long long _cardPage;
    JDStoreNetwork *_netWork;
    NSMutableArray *_dataSource;
    UITableView *_m_tableView;
    JDFooterLoadingView *_loadingFooterView;
}

@property(nonatomic) _Bool isHasMore; // @synthesize isHasMore=_isHasMore;
@property(retain, nonatomic) JDFooterLoadingView *loadingFooterView; // @synthesize loadingFooterView=_loadingFooterView;
@property(retain, nonatomic) UITableView *m_tableView; // @synthesize m_tableView=_m_tableView;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) JDStoreNetwork *netWork; // @synthesize netWork=_netWork;
@property(nonatomic) long long cardPage; // @synthesize cardPage=_cardPage;
@property(nonatomic) _Bool isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(retain, nonatomic) MyGiftCardConsumeListView *consumeListView; // @synthesize consumeListView=_consumeListView;
- (void).cxx_destruct;
- (void)JDMTAWithEventID:(id)arg1 EventName:(id)arg2 ParamValue:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)touchTopWithCardModel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)addCardDataRequest;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didCancelInToastView:(id)arg1;
- (void)beginRequesetConsumeDataWithCardModel:(id)arg1;
- (void)initConsume;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

