//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDCoreSemiPopupView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, PDBPIconModel, UIButton, UITableView;

@interface PDBPIconDisplayView : JDCoreSemiPopupView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_iconTableView;
    UIButton *_selectBtn;
    PDBPIconModel *_model;
    NSArray *_serviceArray;
}

@property(retain, nonatomic) NSArray *serviceArray; // @synthesize serviceArray=_serviceArray;
@property(retain, nonatomic) PDBPIconModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *selectBtn; // @synthesize selectBtn=_selectBtn;
@property(retain, nonatomic) UITableView *iconTableView; // @synthesize iconTableView=_iconTableView;
- (void).cxx_destruct;
- (void)jumpToUrl:(id)arg1;
- (void)purchaseMta;
- (void)renderWithData:(id)arg1;
- (void)resetState;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)purMta:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)safeAreaInsetsDidChange;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

