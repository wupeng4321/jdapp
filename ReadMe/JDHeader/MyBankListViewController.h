//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

@class JDStoreNetwork, MyBankListEmptyView, NSMutableArray, NSString, UIButton, UITableView;

@interface MyBankListViewController : JDViewController
{
    UITableView *_bankListtableview;
    JDStoreNetwork *_network;
    NSMutableArray *_bankList;
    MyBankListEmptyView *_emptyView;
    UIButton *_whiteCardBtn;
    UIButton *_addCardBtn;
    NSString *_whiteCardUrl;
}

@property(copy, nonatomic) NSString *whiteCardUrl; // @synthesize whiteCardUrl=_whiteCardUrl;
@property(retain, nonatomic) UIButton *addCardBtn; // @synthesize addCardBtn=_addCardBtn;
@property(retain, nonatomic) UIButton *whiteCardBtn; // @synthesize whiteCardBtn=_whiteCardBtn;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestBankListFinish:(id)arg1;
- (void)requestBankList;
- (void)needShowWhiteCard:(_Bool)arg1;
- (void)showEmptyView:(_Bool)arg1;
- (void)whiteCardAction:(id)arg1;
- (void)addCardAction:(id)arg1;
- (void)setupSubViews;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;

@end

