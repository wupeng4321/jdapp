//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBPaymentBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDPFreePasswordInfoViewParamModel, NSString, UIButton, UITableView;

@interface JDPFreePasswordInfoViewController : CBPaymentBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    JDPFreePasswordInfoViewParamModel *_paramModel;
    CDUnknownBlockType _returnBlock;
    UITableView *_detailTableView;
    UIButton *_confirmButton;
    NSString *_tempOpenSmallFreeId;
}

@property(copy, nonatomic) NSString *tempOpenSmallFreeId; // @synthesize tempOpenSmallFreeId=_tempOpenSmallFreeId;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UITableView *detailTableView; // @synthesize detailTableView=_detailTableView;
@property(copy, nonatomic) CDUnknownBlockType returnBlock; // @synthesize returnBlock=_returnBlock;
@property(retain, nonatomic) JDPFreePasswordInfoViewParamModel *paramModel; // @synthesize paramModel=_paramModel;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)private_confirmButtonAction:(id)arg1;
- (void)private_createConfirmBotton;
- (void)private_createTableView;
- (void)private_setupView;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithParamModel:(id)arg1 returnBlock:(CDUnknownBlockType)arg2;
- (void)cb_leftButtonAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

