//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView;

@interface FSPromSuggestView : JDView <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    NSArray *_items;
    CDUnknownBlockType _suggestSelected;
    UITableView *_myTable;
}

@property(retain, nonatomic) UITableView *myTable; // @synthesize myTable=_myTable;
@property(copy, nonatomic) CDUnknownBlockType suggestSelected; // @synthesize suggestSelected=_suggestSelected;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)layoutSubviews;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
