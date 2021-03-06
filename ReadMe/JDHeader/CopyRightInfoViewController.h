//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class JDStoreNetwork, MyJdHomeModel, NSMutableArray, NSString, UILabel, UITableView, UIView;

@interface CopyRightInfoViewController : JDViewController <UITableViewDataSource, UITableViewDelegate, UIWebViewDelegate>
{
    UITableView *_tableView;
    MyJdHomeModel *_twoBarCodesModel;
    MyJdHomeModel *_shareModel;
    UIView *_tableHeaderView;
    UIView *_tableFooterView;
    JDStoreNetwork *_network;
    NSMutableArray *_menuList;
    UILabel *_copyrightLabel;
}

@property(retain, nonatomic) UILabel *copyrightLabel; // @synthesize copyrightLabel=_copyrightLabel;
@property(retain, nonatomic) NSMutableArray *menuList; // @synthesize menuList=_menuList;
@property(retain, nonatomic) JDStoreNetwork *network; // @synthesize network=_network;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) MyJdHomeModel *shareModel; // @synthesize shareModel=_shareModel;
@property(retain, nonatomic) MyJdHomeModel *twoBarCodesModel; // @synthesize twoBarCodesModel=_twoBarCodesModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)share;
- (void)didFinishResponseWithRequestSetup:(id)arg1 components:(id)arg2 msg:(id)arg3;
- (_Bool)checkVersion:(_Bool)arg1;
- (void)requestParame;
- (void)popViewController;
- (void)forScore;
- (void)forHelp:(_Bool)arg1;
- (void)checkVersionTap;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupUI;
- (void)viewDidLoad;
- (id)menuListFromDefaultConfig;
- (id)modelWithArray:(id)arg1;
- (id)initWithMenus:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

