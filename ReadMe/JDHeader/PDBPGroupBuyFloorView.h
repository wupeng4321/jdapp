//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseView.h"

@class NSTimer, PDBPContainerDataModel, PDBPGroupBuyModel, UITableView;

@interface PDBPGroupBuyFloorView : PDFloorBaseView
{
    PDBPContainerDataModel *_containerData;
    UITableView *_tableView;
    PDBPGroupBuyModel *_groupBuymodel;
    NSTimer *_timer;
    long long _referenceInterval;
}

@property(nonatomic) long long referenceInterval; // @synthesize referenceInterval=_referenceInterval;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) PDBPGroupBuyModel *groupBuymodel; // @synthesize groupBuymodel=_groupBuymodel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) PDBPContainerDataModel *containerData; // @synthesize containerData=_containerData;
- (void).cxx_destruct;
- (id)tableViewHeadView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tick:(id)arg1;
- (void)stopTimer;
- (void)restartTimer;
- (void)renderWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

