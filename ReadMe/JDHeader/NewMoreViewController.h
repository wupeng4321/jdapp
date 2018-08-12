//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class JDButton, JDStoreNetwork, MyJdHomeModel, NSMutableArray, NSString, UITableView, UITapGestureRecognizer;

@interface NewMoreViewController : JDViewController <UIActionSheetDelegate, JDBaseToastViewDelegate>
{
    NSMutableArray *_menuList;
    JDStoreNetwork *_network;
    _Bool _shouldRereshView;
    JDButton *_switchView;
    JDButton *_autoPlaySwitch;
    NSString *isFrom_;
    UITableView *_list;
    UITapGestureRecognizer *_phoneTapRecognizer;
    MyJdHomeModel *_phoneModel;
}

@property(retain, nonatomic) MyJdHomeModel *phoneModel; // @synthesize phoneModel=_phoneModel;
@property(retain, nonatomic) UITapGestureRecognizer *phoneTapRecognizer; // @synthesize phoneTapRecognizer=_phoneTapRecognizer;
@property(retain, nonatomic) UITableView *list; // @synthesize list=_list;
@property(copy, nonatomic) NSString *isFrom; // @synthesize isFrom=isFrom_;
- (void).cxx_destruct;
- (void)statisticEventId:(id)arg1 eventName:(const char *)arg2;
- (id)modelListWithConfig:(id)arg1;
- (void)checkCellRedPoint:(id)arg1 withModel:(id)arg2;
- (void)didFinishInToastView:(id)arg1;
- (void)autoPlaySwitchAction:(id)arg1;
- (void)switchAction:(id)arg1;
- (void)reportGotoNextPageBuryPointWithModel:(id)arg1;
- (void)gotoNextPageWithModel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)emptyCell;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)modelWithArray:(id)arg1;
- (id)defaultMenuConfig;
- (void)loadData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

