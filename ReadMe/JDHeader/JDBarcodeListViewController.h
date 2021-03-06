//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "UIAlertViewDelegate-Protocol.h"

@class JDFooterLoadingView, JDNewBarCodeScanHistoryEmptyView, NSMutableArray, NSString, UIBarButtonItem, UITableView;

@interface JDBarcodeListViewController : JDViewController <UIAlertViewDelegate>
{
    NSMutableArray *_items;
    UITableView *_myTable;
    JDFooterLoadingView *_footerView;
    UIBarButtonItem *_leftButtonItem;
    UIBarButtonItem *_rightButtonItem;
    JDNewBarCodeScanHistoryEmptyView *emptyView;
    _Bool _isDeleting;
    int _page;
    _Bool _isGetMore;
}

- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)otherURL:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)deleteHistoryItemWithIndexPath:(id)arg1;
- (void)clearList;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)clearListAction;
- (void)returnBarScan;
- (void)loadDataPage:(int)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

