//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FSFilterBrandSortViewModel, JDNavigationBar, NSString, UIButton, UILabel, UITableView;

@interface FSFilterBrandSortViewController : JDViewController <UITableViewDelegate, UITableViewDataSource>
{
    int _sortType;
    CDUnknownBlockType _confirmBtnClick;
    FSFilterBrandSortViewModel *_brandSortViewModel;
    UILabel *_filterTitle;
    JDNavigationBar *_navBar;
    UIButton *_confirmBtn;
    UITableView *_brandTable;
}

@property(nonatomic) int sortType; // @synthesize sortType=_sortType;
@property(retain, nonatomic) UITableView *brandTable; // @synthesize brandTable=_brandTable;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) JDNavigationBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) UILabel *filterTitle; // @synthesize filterTitle=_filterTitle;
@property(retain, nonatomic) FSFilterBrandSortViewModel *brandSortViewModel; // @synthesize brandSortViewModel=_brandSortViewModel;
@property(copy, nonatomic) CDUnknownBlockType confirmBtnClick; // @synthesize confirmBtnClick=_confirmBtnClick;
- (void).cxx_destruct;
- (void)popToFilterRootVC;
- (void)confirmeAction;
- (void)cleanOtherStyleSelectedData;
- (void)segmentClick:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithBrandSortViewModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

