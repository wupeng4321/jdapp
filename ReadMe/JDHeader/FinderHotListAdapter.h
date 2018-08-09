//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView;
@protocol FinderHotListAdapterDataSource, FinderHotListAdapterDelegate, UIScrollViewDelegate, UITableViewDelegate;

@interface FinderHotListAdapter : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    id <FinderHotListAdapterDataSource> _dataSource;
    id <FinderHotListAdapterDelegate> _delegate;
    id <UIScrollViewDelegate> _scrollViewDelegate;
    id <UITableViewDelegate> _tableViewDelegate;
    UITableView *_tableView;
    NSArray *_list;
    NSString *_clk;
}

@property(copy, nonatomic) NSString *clk; // @synthesize clk=_clk;
@property(copy, nonatomic) NSArray *list; // @synthesize list=_list;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <UITableViewDelegate> tableViewDelegate; // @synthesize tableViewDelegate=_tableViewDelegate;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(nonatomic) __weak id <FinderHotListAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FinderHotListAdapterDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadDataSourceAnDelegate;
- (void)reloadData;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

