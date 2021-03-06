//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UISearchBar, UISegmentedControl, UITableView;

@interface JDReactNativeModuleListViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate>
{
    NSArray *_resArray;
    NSArray *_docArray;
    NSArray *_showArray;
    UITableView *_tableview;
    UISegmentedControl *_segmentedControl;
    UISearchBar *_searchBar;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)fiterArray;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)segmentedChange:(id)arg1;
- (void)reloadData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

