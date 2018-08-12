//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBPaymentBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDPPaymentPlanDataController, JDPPaymentPlanViewModel, JDPPaymentPlanViewParamModel, NSString, UITableView;
@protocol JDPPaymentPlanViewControllerDelegate;

@interface JDPPaymentPlanViewController : CBPaymentBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _cellNibRegistered;
    _Bool _isDidSelected;
    JDPPaymentPlanViewModel *_viewModel;
    JDPPaymentPlanViewParamModel *_paramModel;
    id <JDPPaymentPlanViewControllerDelegate> _delegate;
    JDPPaymentPlanDataController *_dataController;
    UITableView *_detailTableView;
}

@property(nonatomic) _Bool isDidSelected; // @synthesize isDidSelected=_isDidSelected;
@property(nonatomic) _Bool cellNibRegistered; // @synthesize cellNibRegistered=_cellNibRegistered;
@property(retain, nonatomic) UITableView *detailTableView; // @synthesize detailTableView=_detailTableView;
@property(retain, nonatomic) JDPPaymentPlanDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) __weak id <JDPPaymentPlanViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) JDPPaymentPlanViewParamModel *paramModel; // @synthesize paramModel=_paramModel;
@property(retain, nonatomic) JDPPaymentPlanViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)private_back;
- (void)cb_leftButtonAction:(id)arg1;
- (void)updateViewWithViewModel;
- (void)private_createTableView;
- (void)private_setupSelf;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithParamModel:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

