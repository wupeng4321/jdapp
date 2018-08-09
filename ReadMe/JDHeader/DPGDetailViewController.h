//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

@class DPGDetailNavigationBar, DPGDetailTableHeaderView, DPGDetailViewModel, JDSHUnplGenerator, NSSet, NSString, UITableView, UIView;

@interface DPGDetailViewController : JDViewController
{
    _Bool _isShowShareBtn;
    NSString *_mId;
    NSString *_mChannel;
    UITableView *_mTableView;
    DPGDetailTableHeaderView *_mTableHeaderView;
    DPGDetailNavigationBar *_mNavigationBar;
    UIView *_followCoverView;
    DPGDetailViewModel *_detailViewModel;
    JDSHUnplGenerator *_unplGenerator;
    NSSet *_relatedOutfitExpoSet;
}

@property(copy, nonatomic) NSSet *relatedOutfitExpoSet; // @synthesize relatedOutfitExpoSet=_relatedOutfitExpoSet;
@property(retain, nonatomic) JDSHUnplGenerator *unplGenerator; // @synthesize unplGenerator=_unplGenerator;
@property(retain, nonatomic) DPGDetailViewModel *detailViewModel; // @synthesize detailViewModel=_detailViewModel;
@property(nonatomic) _Bool isShowShareBtn; // @synthesize isShowShareBtn=_isShowShareBtn;
@property(retain, nonatomic) UIView *followCoverView; // @synthesize followCoverView=_followCoverView;
@property(retain, nonatomic) DPGDetailNavigationBar *mNavigationBar; // @synthesize mNavigationBar=_mNavigationBar;
@property(retain, nonatomic) DPGDetailTableHeaderView *mTableHeaderView; // @synthesize mTableHeaderView=_mTableHeaderView;
@property(retain, nonatomic) UITableView *mTableView; // @synthesize mTableView=_mTableView;
@property(copy, nonatomic) NSString *mChannel; // @synthesize mChannel=_mChannel;
@property(copy, nonatomic) NSString *mId; // @synthesize mId=_mId;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)followCoverViewAdded:(_Bool)arg1;
- (void)reconnect;
- (void)followAuthorAfterLogin;
- (void)shareClickAction;
- (void)buryRelatedOutfitExpo;
- (void)fetchData;
- (_Bool)isHiddenCloseBtn;
- (void)closeClickAction;
- (void)backClickAction;
- (void)hiddenNavigationBar;
- (void)setUpNavigationItem;
- (void)setUpNavigationBar;
- (void)setUpViews;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setUpViewModel;
- (id)initWithParams:(id)arg1;

@end

