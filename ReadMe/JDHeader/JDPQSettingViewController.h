//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPQFullBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCSessionDelegate-Protocol.h"

@class JDPQSettingViewParamModel, NSArray, NSString, UIButton, UITableView, UITextView, UIView;

@interface JDPQSettingViewController : JDPQFullBaseViewController <UITableViewDelegate, UITableViewDataSource, WCSessionDelegate>
{
    _Bool _cellNibRegistered;
    UITableView *_settingTableView;
    JDPQSettingViewParamModel *_viewModel;
    NSArray *_titleArray;
    NSArray *_rightArray;
    UIButton *_logoutButton;
    UITextView *_bottomTextView;
    CDUnknownBlockType _callBlock;
    UIView *_sectionHeaderView;
}

@property(retain, nonatomic) UIView *sectionHeaderView; // @synthesize sectionHeaderView=_sectionHeaderView;
@property(copy, nonatomic) CDUnknownBlockType callBlock; // @synthesize callBlock=_callBlock;
@property(retain, nonatomic) UITextView *bottomTextView; // @synthesize bottomTextView=_bottomTextView;
@property(retain, nonatomic) UIButton *logoutButton; // @synthesize logoutButton=_logoutButton;
@property(retain, nonatomic) NSArray *rightArray; // @synthesize rightArray=_rightArray;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) JDPQSettingViewParamModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UITableView *settingTableView; // @synthesize settingTableView=_settingTableView;
- (void).cxx_destruct;
- (void)logoutAction:(id)arg1;
- (void)private_pushToWebViewWithUrlString:(id)arg1;
- (void)private_addPaymentPass;
- (void)private_cardInfo;
- (void)private_getPayWay;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)private_createBottomTextView;
- (void)private_createLogoutButton;
- (void)private_createSettingTableView;
- (void)private_setup;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)navBarLeftButtonAction:(id)arg1;
- (id)initWithViewModel:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
